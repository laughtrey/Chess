#include<iostream>
#include<string>
class Square {
private:
  std::string m_space = "[__]";

public:
  Square ();
  std::string insert_space();
};
std::string Square::insert_space()
{
  return m_space;
}
