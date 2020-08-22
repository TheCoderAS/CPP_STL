#include<iostream>
#include<fstream>
using namespace std;
int main(){
  const int maxBufferSize=100;
  char buffer[maxBufferSize];
  ifstream infile("embeddedblanks.txt");
  while(!infile.eof()){
    infile.getline(buffer,maxBufferSize);
    cout<<buffer<<endl;
  }
  return 0;
}