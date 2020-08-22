#include"includes.h"
int arr[]={11,22,33,44,55,66,77,88};
int main(){
  int* ptr;
  ptr=find(arr,arr+8,33);
  cout<<"33 is found at: "<<(ptr-arr)<<endl;
  cout<<ptr<<endl;
  cout<<arr<<endl;
  cout<<ptr-arr<<endl;
  return 0;
}