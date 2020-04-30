#include <iostream>
#include "yakishake/DateTime.hpp"

int main(int argc, char const *argv[])
{
  std::string now = yakishake::DateTime::getToday();
  std::cout << now << std::endl;
  return 0;
}