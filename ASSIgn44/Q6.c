#include<stdio.h>
#include<string.h>
int main(){
 char name[20], vow[40], cons[40];
 int n, t=0, w=0;
 scanf("%s", name);
 char spc[3]= ", ";
 n = strlen(name);
 for (int i = 0; i <n; i++)
 {
  if(name[i] == 'a'||name[i] == 'e'||name[i] == 'i'||name[i] == 'o'||name[i] == 'u'){
   vow[t]=name[i];
   t++;
  }
  else if(name[i]== ' '|| name[i]=='\0'){
     continue;
 }
 else{
     cons[w]= name[i];
     w++;
 }
 }
 printf("%s\n", vow);
 printf("%s", cons);

 return 0;
}