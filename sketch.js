var socket = io.connect('http://localhost:3000/index.html');
var state = false;
var leftPressed = false;

function mouseClicked() {
    if(mouseButton === LEFT) {
        leftPressed = true;
    }
}

function setup() {
}

function draw() {
    if (leftPressed) {
        leftPressed = false
        state = !state
    }
    if (state) {
        socket.emit('message', '1');
        } else {
        socket.emit('message', '0');
        }
  
    
}
    
