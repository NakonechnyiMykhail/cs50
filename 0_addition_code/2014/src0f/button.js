new (function() {
    var ext = this;

    var url;

    $.ajax({
      url: 'https://www.meethue.com/api/nupnp',
      success: function (text) {
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
    
    // turns a light off
    function lightoff() {
      $.ajax({
        type: 'PUT', 
        url: url+'lights/9/state', 
        data: '{"on":false, "transitiontime":0}',      
      });
    }

    // turns a light on
    function lighton() {
      $.ajax({
        type: 'PUT', 
        url: url+'lights/9/state', 
        data: '{"on":true, "bri":255, "hue":12000, "sat":100, "transitiontime":0}',      
      });
    }

    // toggles the light
    ext.toggle = function() {
      $.ajax({
        type: 'GET', 
        url: url+'lights/9', 
        success: function(text) {
            return check(text);
        },
      });
    }

    function check(text) {
        if (text['state']['on'] == true) {
            lightoff();
        }
        else {
            lighton();
        }
    }

    // Block and block menu descriptions
    var descriptor = {
        blocks: [
            [' ', 'Toggle', 'toggle'],
        ]
    };

    // Register the extension
    ScratchExtensions.register('Binary Bulbs Extension', descriptor, ext);
})();