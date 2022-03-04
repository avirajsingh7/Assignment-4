#include<stdio.h>
#include<string.h>
int main(){
 char name[100];
 scanf("%s", name);
 int a = strlen(name);
for (int i = 0; i <a; i++)
{
if(name[i] == 'a'||name[i] == 'e'||name[i] == 'i'||name[i] == 'o'||name[i] == 'u'){
  for(int j = i; j<a; j++){
   name[j]= name[j+1];
  }
  i--;
  a--;
  }
}

printf("%s", name);
return 0;
}