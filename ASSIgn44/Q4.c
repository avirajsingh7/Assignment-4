#include<stdio.h>
#include<string.h>
int main(){
    int n, i ,j;
    printf("Enter a number of names you wanted to enter");
    scanf("%d", &n);
    char name[n][1000], na[1000];
     for (i = 0; i <n; i++)
     {
       scanf("%s", name[i]);
     }
    for(i=0;i<n;i++){
        for ( j = i+1; j<n; j++)
        {
          if(strcmp(name[i],name[j])>0){
             strcpy(na,name[i]);
             strcpy(name[i], name[j]);
             strcpy(name[j],na);
          }
        }
  } 
  for ( i = 0; i < n; i++)
  {
    printf("%s\n", name[i]);
  }
    return 0;
}