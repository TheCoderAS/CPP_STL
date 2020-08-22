//The find_if() algorithm is supplied with a user-written isDon() function to find the first string in an array of string objects that has the value “Don”.

//Various other algorithms, such as count() , replace() , and remove() , have _if versions.

#include"includes.h"
bool isDon(string name){
  return name=="Don";
}
string names[]={"Aalok","Shobha","Dog"};
int main(){
  string* ptr;
  ptr=find_if(names,names+3,isDon);
  if(ptr==names+3)
  cout<<"Don is not in the list!";
  else{
    cout<<"Don is found at: "<<ptr-names<<" in the list!";
  }
  return 0;
}