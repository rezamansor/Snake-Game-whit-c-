#ifndef PRINT
#define PRINT
#include "snake.hpp"
#include <vector>

class Print//show in terminal
{
private:
  int head_x;
  int head_y;
  int length;
  int food_x;
  int food_y;  

public:
  Print(int, int, std::vector<Snakeloc> *, int, int);
  
};

#endif