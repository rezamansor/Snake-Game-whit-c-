#include "food.hpp"
#include <snake.hpp>
#include <random>
#include <ctime>
#include <iostream>
using namespace std;

Food::Food()
{

}

Food::~Food()
{
  
}

void Food::set_foodlocx(int x)
{
  food_location_x = x;
}

int Food::get_foodlocx()
{
  return food_location_x;
}

void Food::set_foodlocy(int y)
{
  food_location_y = y;
}

int Food::get_foodlocy()
{
  return food_location_y;
}

void Food::new_food()
{
  int new_x;
  int new_y;
  int random_number;
  int check = 0;

  srand(time(NULL));//for random apple 
  random_number = rand();
  random_number %= 20;
  new_x = random_number;
  random_number = rand();
  random_number %= 20;
  new_y = random_number;
 
  food_location_x = new_x;//for asigend food location to class member
  food_location_y = new_y;//for asigend food location to class member
}