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
    

    // changes a color to a particular hue
    ext.color = function(hue) {
      $.ajax({
        type: 'PUT', 
        url: url+'lights/9/state', 
        data: '{"on":true, "hue":' + hue + ', "sat":255, "transitiontime":0}',
      });
    }

    // Block and block menu descriptions
    var descriptor = {
        blocks: [
            [' ', 'Set Color %s', 'color', '25500'],
        ]
    };

    // Register the extension
    ScratchExtensions.register('Colors Extension', descriptor, ext);
})();