#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void readfile()//function for read file and show name and score in score.txt
{
  string name;
  int n;
  ifstream MyFile("../score.txt", ios_base::in);//open whit read mod(in)
  system("clear");
  
  cout << "**************************" << endl;
  if (MyFile.is_open())
  {
    while (!MyFile.eof())
    {
      getline(MyFile, name, '|');//scan in file while |
      cout << name;
    }
    cout << endl;
    cout << "**************************" << endl;
  }
  else
  {
    cerr << "can not open the file" << endl;
  }

    MyFile.close();
}