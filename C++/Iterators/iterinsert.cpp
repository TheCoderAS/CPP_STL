#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

int main(){
  int arr1[]={1,2,3,4,5};
  int arr2[]={6,7,8,9,10};

  deque<int>d1;
  deque<int>d2;

  for(int i=0;i<5;i++)
  {
    d1.push_back(arr1[i]);
    d2.push_back(arr2[i]);
  }

  /*copy(d1.begin(),d1.end(),d2.begin());
  for(int i=0;i<d2.size();i++)
    cout<<d2[i]<<" ";*/

    //The output of this program is: 1 2 3 4 5

  //Usually this behavior is what you want.
  //Sometimes, however, you’d rather that copy() inserted new elements into a container along
  //with the old ones, instead of overwriting the old ones. You can cause this behavior by using an
  //insert iterator. There are three flavors of this iterator:
  //• back_inserter -inserts new items at the end
  //• front_inserter-inserts new items at the beginning
  //• inserter-inserts new items at a specified location
  
  //copy(d1.begin(),d1.end(),back_inserter(d2));
  //copy(d1.begin(),d1.end(),front_inserter(d2));
  copy(d1.begin(),d1.end(),inserter(d2,d2.begin()+3));
  for(int i=0;i<d2.size();i++)
    cout<<d2[i]<<" ";

  cout<<endl;
  return 0;
}