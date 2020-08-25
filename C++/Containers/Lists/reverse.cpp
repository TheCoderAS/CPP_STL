#include"includes.h"

int main(){
  list<int>list1,list2;

  int arr1[]={40,30,20,10};
  int arr2[]={15,20,25,30,35};

  for(int i=0;i<4;i++)
  list1.push_back(arr1[i]);

  for(int i=0;i<4;i++)
  list1.push_back(arr1[i]);

  list1.reverse();

  list1.merge(list2);

  list1.unique();//remove duplicates

  int size=list1.size();

  while (!list1.empty())
  {
    cout<<list1.front()<<' ';
    list1.pop_front();
  }
  cout<<endl;
  return 0;
  
}