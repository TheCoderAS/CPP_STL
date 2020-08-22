#include <iostream>
#include<fstream>
#include <string>
using namespace std;
int main(){
  ofstream file("infile.txt");
  int a=5;char ch='A';string str="Aalok";
  file<<a
      <<ch
      <<str;
  cout<<"File Written!\n";
  return 0;
}