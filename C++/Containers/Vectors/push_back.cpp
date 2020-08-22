#include"includes.h"
int main(){
  vector<int> vect;
  for(int i=0;i<5;i++)
  vect.push_back(i+1);

  for(int i=0;i<vect.size();i++)
  cout<<vect[i]<<' ';
  cout<<endl;

  vect[1]=6;
  vect[3]=9;

  for(int i=0;i<vect.size();i++)
  cout<<vect[i]<<' ';
  cout<<endl;

  return 0;
}