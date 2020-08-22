#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream ofile("embeddedblanks.txt");
  ofile<<"I am a good boy.\n";
  ofile<<"I study to program.\n";
  ofile<<"This is test for strings with embedded  blanks\n";
  return 0;
}