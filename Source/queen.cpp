class Queen : public Chesspiece
{
private:

public:
  void change_space();
  Queen();
};

void Queen::change_space()
{
  left++
  right++
  up++
  down++
  //Diagonal moves are combo, IE: left(4); up(3);
}
