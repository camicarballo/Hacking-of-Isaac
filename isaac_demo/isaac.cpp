#include "isaac.h"

#include "status.h"

void move_isaac(Arduboy2 * arduboy, Isaac * isaac){

  if (arduboy->pressed(RIGHT_BUTTON) && isaac->xpos < WIDTH - (isaac->width + 1)) {
    isaac->xpos += isaac->speedx;
  }else if (arduboy->pressed(LEFT_BUTTON) && isaac->xpos > 1) {
    isaac->xpos -= isaac->speedx;
  }else if (arduboy->pressed(DOWN_BUTTON) && isaac->ypos < HEIGHT - (isaac->height + 1)) {
    isaac->ypos += isaac->speedy;
  }else if (arduboy->pressed(UP_BUTTON) && isaac->ypos > STATUS_BAR_HEIGHT) {
    isaac->ypos -= isaac->speedy;
  }

}

void draw_isaac(Arduboy2 * arduboy, Isaac * isaac){

  arduboy->drawSlowXYBitmap(isaac->xpos, isaac->ypos, isaac->bmp, isaac->width, isaac->height, WHITE);

}

// Changes the coordinates of Isaac.
void update_isaac_position(Isaac * i, int x_pos, int y_pos) {
  i->xpos = x_pos;
  i->ypos = y_pos;
}
