// listfill.cpp
// uses iterator to fill list with data

#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){
  list<int> ilist(5);
  list<int>::iterator iter;
  int data=0;

  for(iter=ilist.begin();iter!=ilist.end();iter++)
    *iter=data+=2;

  for(iter=ilist.begin();iter!=ilist.end();iter++)
    cout<<*iter<<" ";
  cout<<endl;
  return 0;
}