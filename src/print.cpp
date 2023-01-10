#include <print.hpp>
#include <vector>
#include <iostream>
#include "food.hpp"
#include "snake.hpp"
using namespace std;

#define RST  "\x1B[0m"//for reset print
#define KRED  "\x1B[31m"//for change print color 
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

#define FRED(x) KRED x RST
#define FGRN(x) KGRN x RST
#define FYEL(x) KYEL x RST
#define FBLU(x) KBLU x RST
#define FMAG(x) KMAG x RST
#define FCYN(x) KCYN x RST
#define FWHT(x) KWHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST

Print::Print(int foodx, int foody, std::vector<Snakeloc> *v, int vectorlen, int food_count)
{
  char array[20][20];//board array
  
  for (size_t i = 0; i < 20; i++)//for clean array
  {
    for (size_t j = 0; j < 20; j++)
    {
      array[i][j] = ' ';//space
    }
  }

  array[foodx][foody] = '*';//for print food

  for (auto &&i : *v)
  {
    array[i.x][i.y] = '#';
  }
  
  array[v->front().x][v->front().y] = '$';//for print snake head

  cout << KBLU;
  cout << endl << " ________________________________________" << endl;
  for (size_t i = 0; i < 20; i++)//for result of print and show to user
  {
    cout << KBLU;
    cout << "|";
    for (size_t j = 0; j < 20; j++)
    {
      if (array[i][j] == '*' or array[i][j] == '$' or array[i][j] == '#')
      {
        if (array[i][j] == '*')
          cout << KRED << array[i][j] << KBLU << " ";
        else
          cout << KGRN << array[i][j] << KBLU << " ";
      }
      else
        cout << array[i][j] << " ";
    }
    cout << "|" << endl;
  }
  cout << " ________________________________________" << endl;
  cout << RST;

  cout << KYEL << "your score is >>> " << food_count * 10 << RST << endl;
}