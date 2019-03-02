#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <vector>
#include "square.h"
#include "chesspiece.h"
class Board {
private:
  std::vector<Chesspiece*> v;

public:
  Board();
  void create_board();
};
#endif
