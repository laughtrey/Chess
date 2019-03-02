#include<iostream>
#include "board.h"
#include "square.h"
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
