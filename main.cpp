#include <iostream>
#include "snake.hpp"
#include "game.hpp"
#include "food.hpp"
#include "input.hpp"
#include "src/readfile.cpp"
using namespace std;

void menu();

void wellcome()//first function and show wellcome to user
{
  system("clear");
  cout << "Hi, wellcome to Snake game\nwe hope you enjoy the game" << endl << endl;
}

void help()//help function
{
  system("clear");
  cout << "HELP:" << endl << "You should to eat apples with your snake, Move in different directions with W A S D keys" << endl;
  cout << "Try not to hit the wall or hit the snake's body " << endl << endl;
}

void menu(Game &g)//menu game
{
  int n;
  
  while (n != 3)
  {
    cout << "menu:\n1.if you want to start a new game \n2.if you want to check score \n3.EXIT \n4.Help" << endl << ">>> ";
    cin >> n;

    switch (n)
    {
    case 1://new game
      g.start();
      return;
      break;

    case 2://check score
      readfile();
      break;
    
    case 3://EXIT
      return;
    
    case 4://help
      help();
      break;
    
    default:
      cout << "invalid input!!!" << endl;
      break;
    }
  }
}

int main()
{
  Game g;
  wellcome();
  menu(g);

  return 0;
}