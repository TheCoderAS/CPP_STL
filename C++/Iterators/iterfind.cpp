#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main(){
  list<int>theList(5);
  list<int>::iterator iter;
  int data=0;

  for(iter=theList.begin();iter!=theList.end();iter++)
    *iter=data+=2;

  iter=find(theList.begin(),theList.end(),8);
  if(iter!=theList.end()){
    //The code cout<<"Found 8 at: "<<iter-theList.begin()<<endl; is wrong!
    cout<<"Found!";
  }
  else
    cout<<"Not Found!";

  cout<<endl;
  return 0;
}