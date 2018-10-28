
new (function() {
    var ext = this;

    var url;

    $.ajax({
      url: 'https://www.meethue.com/api/nupnp',
      success: function(text){
        for (var i = 0; i < text.length; i++){
          if(text[i].name == 'Binary Bulbs') {
            // bridge ip
            bridge = text[i].internalipaddress;
            // api url 
            url = 'http://' + bridge + '/api/newdeveloper/';
          }
        }
      }
    });

    // Cleanup function when the extension is unloaded
    ext._shutdown = function() {};

    // Status reporting code
    // Use this to report missing hardware, plugin or unsupported browser
    ext._getStatus = function() {
        return {status: 2, msg: 'Ready'};
    };

    // turns on all the lights
    ext.allon = function() {
      $.ajax({
        type: 'PUT', 
        url: url + 'groups/1/action', 
        data: '{"on":true,"transitiontime":0, "hue":12000, "sat":100, "bri":255}',
      });
    }

    //turns off all the lights
    ext.alloff = function() {
      $.ajax({
        type: 'PUT', 
        url: url + 'groups/1/action', 
        data: '{"hue":12000, "sat":100, "on":false, "transitiontime":0}'
      });
    }
    
    //turns a light off
    ext.lightoff = function(num) {
      $.ajax({
        type: 'PUT', 
        url: url+'lights/'+num+'/state', 
        data: '{"on":false, "transitiontime":0}',      
      });
    }

    //turns a light on
    ext.lighton = function(num) {
      $.ajax({
        type: 'PUT', 
        url: url+'lights/'+num+'/state', 
        data: '{"on":true, "bri":255, "transitiontime":0}',
      });
    }

    // builds a function to flash lights with
    function winflash(id, num) {
      if (num > 0) {
        return function (text) {
          $.ajax({
              type: 'PUT', 
              url: url+'lights/' + id + '/state', 
              data: '{"hue":25500, "alert":"select", "sat":255, "transitiontime":0}',
              success: winflash(id, num-1)
          });
        }
      }
      else {
        return function () {};
      }
    }

    //starts the lightshow
    ext.win =  function(i) {
      $.ajax({
        type: 'PUT', 
        url: url+'lights/' + i + '/state', 
        data: '{"hue":25500, "alert":"select", "sat":255, "transitiontime":0}',
        success: winflash(i, 5)
      });
    }

    // Block and block menu descriptions
    var descriptor = {
        blocks: [
            [' ', 'All lights on', 'allon'],
            [' ', 'All lights off', 'alloff'],
            [' ', 'Light on %s', 'lighton', '1'],
            [' ', 'Light off %s', 'lightoff', '1'],
            [' ', 'Winflash %s', 'win', '1'],
        ]
    };

    // Register the extension
    ScratchExtensions.register('Binary Bulbs Extension', descriptor, ext);
})();
