#include<iostream>
#include "board.h"
#include "square.h"
#include "chesspiece.cpp"
Board()
{

}
/**
 * There must be a better way to generate the initial playing field. I realized than an array is like
 * an array of objects, so it should actually be an array of chesspieces, including a 'blank' piece
 * that acts as an empty square? so the Square class would actually be derived under Chesspiece class.
 */
void create_board() {
  chesspiece playing_field[8][8];
  playing_field[0][0] = new wR(7,false,true,true);
  playing_field[0][1] = new wN(3,false,true,true);
  playing_field[0][2] = new wB(7,true,false,false);
  playing_field[0][3] = new wK(1,true,true,true);
  playing_field[0][4] = new wQ(7,true,true,true);
  playing_field[0][5] = new wB(7,true,false,false);
  playing_field[0][6] = new wN(3,true,false,false);
  playing_field[0][7] = new wR(7,false,true,true);
  playing_field[1][0] = new wP(2,false,true,false);
  playing_field[1][1] = new wP(2,false,true,false);
  playing_field[1][2] = new wP(2,false,true,false);
  playing_field[1][3] = new wP(2,false,true,false);
  playing_field[1][4] = new wP(2,false,true,false);
  playing_field[1][5] = new wP(2,false,true,false);
  playing_field[1][6] = new wP(2,false,true,false);
  playing_field[1][7] = new wP(2,false,true,false);




}
