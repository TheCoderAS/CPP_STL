#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;

int main(){
  int arr[]={10,20,30,40,50};
  list<int>iList;

  for(int j=0;j<5;j++)
    iList.push_back(arr[j]);
  
  ostream_iterator<int>ositer(cout,",");

  cout<<"\nContents are: ";
  copy(iList.begin(),iList.end(),ositer);
  cout<<endl;
  return 0;
}