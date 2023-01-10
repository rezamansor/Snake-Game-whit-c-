#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void writefile(string name, int score)//functon for write file and write name and score in score.txt
{
  ofstream MyFile;
  MyFile.open("../score.txt", ios_base::app);//open whit append mod(+)

  if (MyFile.is_open())
  {
    MyFile << left << setw(10) << name << "\t| " << left << setw(10) << score * 10 << endl;
  }
  else
    cerr << " can not open the file" << endl;

  MyFile.close();
}