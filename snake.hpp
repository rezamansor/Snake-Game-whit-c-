#ifndef SNAKE
#define SNAKE

#include <vector>
using namespace std;
#include "snake.hpp"
#include "food.hpp"

struct Snakeloc//struct for head and body of snake location
{
  int x;
  int y;
};

class Snake//location and length of snake
{
private:
  int length = 2;//default and base snake length
  vector<Snakeloc> location;//vector for partition of snake
  
public:
  Snake();
  int get_location_x(int);
  int get_location_y(int);
  void set_location_x(int, int);
  void set_location_y(int, int);
  void set_x(int);
  void set_y(int);
  void set_length(int);
  int get_lenght();
  vector<Snakeloc>* get_vector();
};

#endif