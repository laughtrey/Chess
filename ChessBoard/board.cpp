#include<iostream>
#include "board.h"
#include "square.h"
Board()
{

}
void create_board() {
  chesspiece playing_field[8][8];
  playing_field[0][0] = new wR();
  playing_field[0][1] = new wN();
  playing_field[0][2] = new wB();
  playing_field[0][3] = new wK();
  playing_field[0][4] = new wQ();
  playing_field[0][5] = new wB();
  playing_field[0][6] = new wN();
  playing_field[0][7] = new wR();
  playing_field[1][0] = new wP();
  playing_field[1][1] = new wP();
  playing_field[1][2] = new wP();
  playing_field[1][3] = new wP();
  playing_field[1][4] = new wP();
  playing_field[1][5] = new wP();
  playing_field[1][6] = new wP();
  playing_field[1][7] = new wP();




}
