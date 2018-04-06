#include <Arduboy2.h>

// Make an instance of arduboy used for many functions
Arduboy2 arduboy;

// This function runs once in your game.
// use it for anything that needs to be set only once in your game.
void setup() {
  //initiate arduboy instance
  arduboy.begin();

  // here we set the framerate to 30, we do not need to run at default 60 and
  // it saves us battery life.
  arduboy.setFrameRate(30);
}


// our main game loop, this runs once every cycle/frame.
// this is where our game logic goes.
void loop() {
  // pause render until it's time for the next frame
  if (!(arduboy.nextFrame()))
    return;

  arduboy.clear();
  // we set our cursor x pixels to the right and y down from the top
  arduboy.setCursor(4, 9);

  if(arduboy.pressed(RIGHT_BUTTON)) {
    arduboy.print("Pressed RIGHT button");
  }

  if(arduboy.pressed(LEFT_BUTTON)) {
    arduboy.print("Pressed LEFT button");
  }

  if(arduboy.pressed(UP_BUTTON)) {
    arduboy.print("Pressed UP button");
  }

  if(arduboy.pressed(DOWN_BUTTON)) {
    arduboy.print("Pressed DOWN button");
  }

  if(arduboy.pressed(A_BUTTON)) {
    arduboy.print("Pressed A button");
  }

  if(arduboy.pressed(B_BUTTON)) {
    arduboy.print("Pressed B button");
  }
  
  // then we finaly we tell the arduboy to display what we just wrote to the display.
  arduboy.display();
}

