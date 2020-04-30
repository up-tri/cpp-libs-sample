#include <iostream>
#include "yakishake/DateTime.hpp"
#include "hokanohito/DateTime.hpp"

int main(int argc, char const *argv[])
{
  std::string now = yakishake::DateTime::getToday();
  std::cout << now << std::endl;
  std::string nowFormatted = hokanohito::DateTime::getToday("%Y年%m月%d日 %H時%M分%S秒");
  std::cout << nowFormatted << std::endl;
  return 0;
}