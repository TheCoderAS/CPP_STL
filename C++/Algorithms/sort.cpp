#include"includes.h"
using namespace std;
int arr[]={22, 34, 21, 76, 54, 12, 78, 98};
int main(){
  sort(arr,arr+8);
  for(int i=0;i<8;i++){
    cout<<arr[i]<<endl;
  }
  return 0;
}