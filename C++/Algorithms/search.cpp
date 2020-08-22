#include"includes.h"
int source[]={11,22,33,44,55,66,77,88,99};
int pattern[]={44,55,66};
int main(){
  int* ptr;
  ptr=search(source,source+9,pattern,pattern+3);
  if(ptr==source+9){
    cout<<"No match found!!"<<endl;
  }
  else{
    cout<<"Matched at: "<<ptr-source<<endl;
  }
  return 0;
}