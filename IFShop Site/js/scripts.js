// Efeito de Mudança de Background Modo Noturno //
const dark = document.getElementById('check-dark')

dark.addEventListener('change', () => {
  document.body.classList.toggle('dark')
})

// Menu Mobile //
const btnMobile = document.getElementById('menu-btn');

function toggleMenu() {
  const menu = document.getElementById('menu');
  menu.classList.toggle('open')
}

btnMobile.addEventListener('click' , toggleMenu);

// Adição do Efeito Slider (Automático+Botões) Marcas //
let count = 1;
document.getElementById("radio1").checked = true;

setInterval(function() {
    nextImage();
}, 5000)

function nextImage() {
    count++;
    if(count > 5){
        count = 1;
    }
    document.getElementById("radio"+count).checked = true;
}

// Adição do Efeito Slider (Botões) Destaques //
const slider = document.querySelectorAll('.dest-img');
const btnPrev = document.getElementById('voltar');
const btnNext = document.getElementById('avancar');

let currentSlide = 0;

function hideSlider() {
  slider.forEach(item => item.classList.remove('on'))
}

function showSlider() {
  slider[currentSlide].classList.add('on')
}

function nextSlider() {
  hideSlider()
  if(currentSlide === slider.length -1) {
    currentSlide = 0
  } 
  else {
    currentSlide++
  }
  showSlider()
}

function prevSlider() {
  hideSlider()
  if(currentSlide === 0) {
    currentSlide = slider.length -1
  } 
  else {
    currentSlide--
  }
  showSlider()
}

btnNext.addEventListener('click', nextSlider)
btnPrev.addEventListener('click', prevSlider)

console.log(slider)

// Adição do Efeito Mostrar Senha //
function mostrarSenha() {
  var inputPass = document.getElementById('senha')
  var btnShowPass = document.getElementById('btn-senha')

  if(inputPass.type === 'password') {
    inputPass.setAttribute('type', 'text')
    btnShowPass.classList.replace('bi-eye-fill', 'bi-eye-slash-fill')
  } 
  else {
    inputPass.setAttribute('type', 'password')
    btnShowPass.classList.replace('bi-eye-slash-fill', 'bi-eye-fill')
  }
}

// Leitura de Confirmação de Cookies //
var Cookies = document.getElementById('cookies')

function concordo() {
    localStorage.memoria = "sim"
    Cookies.classList.remove('mostrar')
}

if(localStorage.memoria == 'sim') {
    Cookies.classList.remove('mostrar')
}
else {
    Cookies.classList.add('mostrar')
}

// Evento de Remoção do Placehodlder //
function cleanText() {
  document.getElementById('first-name').placeholder = ''
}

// Evento de Onchange //
function SelecionouElemento() {
  console.log('Selecionou')
}