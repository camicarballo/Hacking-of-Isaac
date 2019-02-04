#include <Arduboy2.h>

#ifndef ROOM_H
#define ROOM_H

typedef struct Room {
  //Enemy enemies[];
  //Obstacle obstacles[];
  int doors[4];
  bool cleared;
} Room;


typedef struct Map {
  bool cleared;
  Room rooms[9];
} Map;

void draw_room(Arduboy2 arduboy, Room r);
void create_rooms(Map *m, int level[]);

#endif
