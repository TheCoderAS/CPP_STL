#include"includes.h"
int main(){
  list<int> ilist;

  cout<<"Size of initial list is: "<<ilist.size()<<endl;

  ilist.push_back(30);
  ilist.push_back(40);
  
  ilist.push_front(20);
  ilist.push_front(10);

  cout<<"Size of current list is: "<<ilist.size()<<endl;

  int size=ilist.size();
  for(int i=0;i<size;i++){
    cout<<ilist.front()<<' ';
    ilist.pop_front();
  }
  cout<<endl;
//same will be back function!

  return 0;
}