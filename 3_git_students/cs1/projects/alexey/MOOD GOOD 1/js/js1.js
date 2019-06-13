/*Animation for background
Анимация для заднего фона*/
{
	var a = 0;
        window.onload = asd ;
            function asd (){
                setInterval(e, 1);
                setInterval(f, 100);
            }
            function e () {
                document.body.style.backgroundImage = "linear-gradient(" + a + "deg ,#8E78FF , #FC7D7B)"

            }
          
            function f(){
     a=a+2;
   };
setInterval(f, 100);
}

