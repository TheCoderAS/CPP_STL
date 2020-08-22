#include"includes.h"

int main(){
  double arr[]={1.1,2.2,3.3,4.4};

  vector<double>v1(arr,arr+4);//initialize a vector to array
  vector<double>v2(4);//empty vector of size 4
  v1.swap(v2);//swap content of v1 to v2
  while ((!v2.empty())){
    cout<<v2.back()<<" ";//display the last element
    v2.pop_back();//removes the last element
  }
  cout<<"\n";
  return 0;
}