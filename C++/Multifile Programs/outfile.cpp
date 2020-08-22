#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
  ifstream file("infile.txt");
  int a;char ch;string str;
  file>>a>>ch>>str;
  cout<<a<<"\n"<<ch<<"\n"<<str<<"\n";
  return 0;
}