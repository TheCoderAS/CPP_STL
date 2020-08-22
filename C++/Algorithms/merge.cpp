#include"includes.h"
int src1[]={1,2,3,4,5};
int src2[]={6,7,8};
int dest[8];
int main(){
  merge(src1,src1+5,src2,src2+3,dest);
  cout<<"Merged array is: \n";
  for(int i=0;i<8;i++)
  cout<<dest[i]<<" ";
  cout<<endl;
  return 0;
}