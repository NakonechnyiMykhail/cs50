particlesJS('particles-js',
  
  {
    "particles": {
      "number": {
        "value": 80,
        "density": {
          "enable": true,
          "value_area": 800
        }
      },
      /*Цвет кружков*/
      "color": {
        "value": "#333333"
      },
      "shape": {
        "type": "circle",
        /*Ширина и цвет бордера круга*/
        "stroke": {
          "width": 1,
          "color": "#ffffff"
        },
        "polygon": {
          "nb_sides": 1
        },
        "image": {
          "src": "img/github.svg",
          "width": 100,
          "height": 100
        }
      },
      "opacity": {
        "value": 0.5,
        "random": false,
        "anim": {
          "enable": false,
          "speed": 1,
          "opacity_min": 0.1,
          "sync": false
        }
      },
      "size": {
        /*Размер внутреннего круга*/
        "value": 4,
        /*Генерация/спавн маленьких и средних кружков*/
        "random": true,
        "anim": {
          /*Уменьшение и рост кружков*/
          "enable": true,
          /*Скорость роста кружков*/
          "speed": 10,
          /*Минимальный размер круга(максимальный размер это value)*/
          "size_min": 1,
          "sync": false
        }
      },
      "line_linked": {
        "enable": true,
        /*Количество, дистанция между ними*/
        "distance": 170,
        /*Цвет партиклов*/
        "color": "#0d0d0d",
        /*Плотность*/
        "opacity": 1,
        /*Ширина*/
        "width": 1
      },
      "move": {
        "enable": true,
        /*Ихняя скорость*/
        "speed": 3,
        "direction": "none",
        "random": false,
        /*Ихнее движение*/
        "straight": false,
        "out_mode": "out",
        "attract": {
          "enable": false,
          "rotateX": 600,
          "rotateY": 1200
        }
      }
    },
    "interactivity": {
      "detect_on": "canvas",
      "events": {
        "onhover": {
          "enable": true,
          "mode": "repulse"
        },
        /*Спавн при нажатии*/
        "onclick": {
          "enable": true,
          "mode": "push"
        },
        "resize": true
      },
      "modes": {
        "grab": {
          "distance": 400,
          "line_linked": {
            "opacity": 1
          }
        },
        "bubble": {
          "distance": 400,
          "size": 40,
          "duration": 2,
          "opacity": 8,
          "speed": 3
        },
        "repulse": {
          /*Зона отделения от партиклов*/
          "distance": 1
        },
        "push": {
          "particles_nb": 4
        },
        "remove": {
          "particles_nb": 2
        }
      }
    },
    "retina_detect": true,
    "config_demo": {
      "hide_card": false,
      "background_color": "#b61924",
      "background_image": "",
      "background_position": "50% 50%",
      "background_repeat": "no-repeat",
      "background_size": "cover"
    }
  }

);

