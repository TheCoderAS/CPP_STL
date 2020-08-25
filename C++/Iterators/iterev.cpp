#include<iostream>
#include<list>

using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  list<int> iList;
  for(int i=0;i<10;i++)
    iList.push_back(arr[i]);

  list<int>::reverse_iterator revit;
  revit=iList.rbegin();//You must use the member functions rbegin() and rend() when you use a reverse iterator.

  while(revit!=iList.rend()){
    cout<<*revit++<<" ";
  }
  cout<<endl;
  return 0;
}