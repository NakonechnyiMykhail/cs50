var slides = document.querySelectorAll('#slides .slide');
var currentSlide = 0;


function nextSlide() {
    slides[currentSlide].className = 'slide';
    currentSlide = (currentSlide+1)%slides.length;
    slides[currentSlide].className = 'slide showing';
}

var slideInterval = setInterval(nextSlide,2000);
var playing = true;
var pauseButton = document.getElementById('pause');

function pauseSlideShow(){
    pauseButton.innerHTML = 'Play';
    playing = false;
    clearInterval(slideInterval);
}

function playSlideShow(){
    pauseButton.innerHTML = 'Pause';
    playing = true;
    slideInterval = setInterval(nextSlide, 2000);
}
pauseButton.onclick = function(){
    if(playing){pauseSlideShow();}
    else{playSlideShow();}
};