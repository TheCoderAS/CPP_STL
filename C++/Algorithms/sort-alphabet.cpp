#include"includes.h"

char* names[]={"Aalok", "Shobha","Supriya","Abhi"};

bool alpha_comp(char*, char*);
int strcmp(char* , char*);
int main(){
  sort(names,names+4,alpha_comp);
  for(int i=0;i<4;i++)
  cout<<names[i]<<endl;
  return 0;
}
bool alpha_comp(char* name1, char* name2){
return (strcmp(name1, name2)<0) ? true : false;
}
int strcmp(char* name1,char*name2){
  const unsigned char *s1 = (const unsigned char *) name1;
  const unsigned char *s2 = (const unsigned char *) name2;
  unsigned char c1, c2;
  do
    {
      c1 = (unsigned char) *s1++;
      c2 = (unsigned char) *s2++;
      if (c1 == '\0')
        return c1 - c2;
    }
  while (c1 == c2);
  return c1 - c2;
}