#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

struct player {
  int character;  // the Stranger Things character representing player
  int choice;     // rock (0), paper (1), or scissors (2)??
  int currentRow; 
  int currentCol;
  int previousRow;  // stores row placement of last position (for collision handling)
  int previousCol;  // stores col placement of last position (for collision handling)
} player, opponent;

struct selector {
  int currentRow;
  int currentCol;
};

// Additional Functions
const unsigned short int* pickCharacter(int input);
const unsigned short int* pickChoice(int input);
int decideWinner(int one, int two);

#endif
