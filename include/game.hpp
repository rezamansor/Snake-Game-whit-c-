#ifndef GAME
#define GAME

#include <input.hpp>
#include <food.hpp>
#include <snake.hpp>
#include <print.hpp>

class Game : public Input//run game
{
private:
  Food food;
  Snake snake;
  int f_count = 0;

public:
  Game();
  void start();//run function
};

#endif