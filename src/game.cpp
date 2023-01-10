#include <game.hpp>
#include <input.hpp>
#include <snake.hpp>
#include <food.hpp>
#include <iostream>
#include "../src/writefile.cpp"
using namespace std; 
//color for print
string nameUser()//save name and score and write them in file
{
  string name;
  cout << "pls enter your name >>> ";
  cin >> name;
  return name;
}

void Game::start()
{
  bool ingame = true;
  food.new_food();
  string name = nameUser();

  while (ingame)
  { 
    if (input_user == 1)//north
    {
      for (size_t i = 1; i < snake.get_lenght(); i++)//for body
      {
        snake.set_x(i);//for shift body
        snake.set_y(i);//for shift body
      }

      snake.set_location_x(0, -1);//for haed
    }

    if (input_user == 2)//south
    {
      for (size_t i = 1; i < snake.get_lenght(); i++)//for body
      {
        snake.set_x(i);//for shift body
        snake.set_y(i);//for shift body
      }

      snake.set_location_x(0, 1);//for head
    }

    if (input_user == 3)//east
    {
      for (size_t i = 1; i < snake.get_lenght(); i++)//for body
      {
        snake.set_x(i);//for shift body
        snake.set_y(i);//for shift body
      }

      snake.set_location_y(0, 1);//for haed
    }

    if (input_user == 4)//west
    {
      for (size_t i = 1; i < snake.get_lenght(); i++)//for body
      {
        snake.set_x(i);//for shift body
        snake.set_y(i);//for shift body
      }

      snake.set_location_y(0, -1);//for haed
    }

    if(snake.get_location_x(0) < 0 or snake.get_location_x(0) > 20 or snake.get_location_y(0) > 20 or snake.get_location_y(0) < 0)//if head snake go to body or head go to wall.chech 20
    {
      ingame = false;
    }

    if (snake.get_location_x(0) == food.get_foodlocx() && snake.get_location_y(0) == food.get_foodlocy())//if location of snake head and food equaled(snake eat apple)
    {
      f_count++;//apple count += 1
      food.new_food();//new food random
      snake.set_length(snake.get_lenght() + 1);//snake length += 1
      vector<Snakeloc>* v = snake.get_vector();////////////////////////////////
      Snakeloc next {v->front().x, v->front().y};//////////////////////////////
      v->insert(v->begin() + 1, next);////////////////////////////////////////
      //v->push_back(Snakeloc &);
    }
    system("clear");
    Print p(food.get_foodlocx(), food.get_foodlocy(), snake.get_vector(), snake.get_lenght(), f_count);//call print function

    set_input();//get new input from user
  }

  writefile(name, f_count);//call write function
}

Game::Game()
{

}