#include "input.hpp"
#include <iostream>
using namespace std;

Input::Input()
{

}

void Input::set_input()//for get input button
{
  char n;
  cout << endl << "Enter(w:up, a:left, d:right, s:down) z:break >>> ";
  system("stty raw");//This line help us not to press the enter button anymore
  cin >> n;
  system("stty cooked");//This line help us not to press the enter button anymore

  switch (n)
  {
  case 'w'://up
    input_user = 1;
    break;
  case 's'://down
    input_user = 2;
    break;
  case 'd'://right
      input_user = 3;
    break;
  case 'a'://left
      input_user = 4;
      break;
    case 'z'://break
    throw("EXIT");
    break;
  
  default:
    cout << "invalid input" << endl;
    input_user = 0;
    break;
  }
}

int Input::get_input()
{
  return input_user;
}