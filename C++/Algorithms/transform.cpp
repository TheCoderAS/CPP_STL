#include"includes.h"

int main(){
  double inches[]={3.5, 6.2, 1.0, 12.75, 4.33};
  double in_to_cm(double);
  void print(double);
  double centi[5];

  transform(inches,inches+5,centi,in_to_cm);
  for_each(centi,centi+5,print);
  cout<<endl;
  return 0;
}

double in_to_cm(double in){
  return (in*2.54);
}
void print(double centi){
  cout<<centi<<" ";
}
//The transform() algorithm does something to every item in a container, and places the result-ing values in a different container (or the same one). Again, a user-written function determines what will be done to each item.