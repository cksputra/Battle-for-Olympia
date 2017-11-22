//Movement.c

#include "init.h"
#include "Map.h"



char determineDirection(TypeUnit unit, int x, int y);
//Untuk menentukan arah gerak dari si unit
//Belum dibuat untuk yang diagonal




boolean isMovePossible (Map * M, TypeUnit unit, char direction, int x, int y);

boolean Move(Map * M, TypeUnit * unit, int x, int y);

void InsertDummyUnit(Map * M, TypeUnit currUnit);

void MoveCommand(Map * M, TypeUnit currUnit, int * PrevX, int * PrevY);
