#include<iostream>
#include<string>
using namespace std;
template <class Type>
class Exception{
  private:
    Type var1,var2;
  public:
    class Range{

    };
    Exception();
    Type add(string,Type,Type);
    void Show(Type);
};
template <class Type>
Exception<Type>::Exception(){
  cout<<"Enter two elements\n";
}
template <class Type>
Type Exception<Type>::add(string type, Type a,Type b){
  if(type=="int"){
    var1=a;var2=b;
    return var1+var2;
  }
  else{
    throw Range();
  }
}
template <class Type>
void Exception<Type>::Show(Type c){
  cout<<c<<endl;
}
int main(){
  try
  {  
    string type;
    cin>>type;
    Exception<int> exception;
    cout<<exception.add(type,5,6);
  }catch(Exception<int>::Range){
    cout<<"Type must be int\n";
  }
  cout<<"trial successful\n";
}
