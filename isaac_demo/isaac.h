#include <Arduboy2.h>


#ifndef ISAAC_H
#define ISAAC_H

const uint8_t PROGMEM isaac_bmp[] = {
  0x07, 0xE0, 0x0D, 0xB0, 0x1B, 0xD8, 0x39, 0x9C, 
  0x79, 0x9E, 0x7F, 0xFE, 0x7E, 0x7E, 0x3C, 0x3C, 
  0x1C, 0x38, 0x0F, 0xF0, 0x03, 0xC0, 0x1F, 0xF8, 
  0x1F, 0xF8, 0x07, 0xE0, 0x07, 0xE0, 0x06, 0x60};

typedef struct Isaac {
  int xpos;
  int ypos;
  int height; 
  int width;
  int speedx;
  int speedy;
  uint8_t bmp;
  int life;
} Isaac;

void move_isaac(Arduboy2, Isaac*);
void draw_isaac(Arduboy2, Isaac);

#endif