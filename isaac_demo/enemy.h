#include <Arduboy2.h>

#ifndef ENEMY_H
#define ENEMY_H

const uint8_t PROGMEM fly_bmp[] = {
  0xE1, 0xC0, 0x92, 0x40, 0x9E, 0x40, 0x7F, 0x80,
  0x1E, 0x00, 0x1E, 0x00};

const uint8_t PROGMEM pooter_bmp[] = {
  0x0E, 0x00, 0xF2, 0x00, 0x92, 0x00, 0x9F, 0x00, 
  0x75, 0x00, 0x15, 0x00, 0x3F, 0x80, 0x3F, 0x80, 
  0x3F, 0x80, 0x1F, 0x00, 0x0E, 0x00, 0x00, 0x00};

typedef enum enemy_type {F, P} enemy_type;

typedef struct Enemy {
  int xpos;
  int ypos;
  int height;
  int width;
  int speedx;
  int speedy;
  enemy_type type; 
  const uint8_t * bmp;
  int life;
} Enemy;

void draw_enemy(Arduboy2 * arduboy, Enemy * e);
void move_enemy(Enemy*);
void delete_enemy(Enemy * e, int * num_enemies, const int enemy_index);

#endif
