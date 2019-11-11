#include<iostream>
#include"chesspiece.cpp"
class Queen: public Chesspiece
{
private:

public:
  Queen();
  Queen(int max_spaces,bool move_diag,bool move_vert,bool move_horiz);
  void change_space();
};
Queen::Queen(){

}

Queen::Queen(int max_spaces,bool move_diag,bool move_vert,bool move_horiz){
    
}

void Queen::change_space()
{
/*  left++
  right++
  up++
  down++
  */
  //Diagonal moves are combo, IE: left(4); up(3);
}
