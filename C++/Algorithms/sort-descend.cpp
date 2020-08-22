#include"includes.h"
int arr[]={5, 6, 11, 3, 7,  8, 9, 0, 1};
int main(){
  sort(arr,arr+9,greater<int>());
  cout<<"Sorted Array is: \n";
  for(int i=0;i<9;i++)
  cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}