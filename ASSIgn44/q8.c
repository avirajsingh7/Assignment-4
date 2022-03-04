#include<stdio.h>
int main(){
 int giv[50] = {31,32,33,32,35,36,34,37,34,35,39,30,40,32};
int arr[11];
for (int i = 0; i <11; i++)
{   int t=0;
for (int j = 0; j<15; j++)
{    
    if(giv[j] == 30+i ){
        t++;
      arr[i]= t;
    }
}
}
for (int i = 0; i < 11; i++)
{
  printf("Number %d occur %d time in given set\n", 30+i, arr[i]);

}


return 0;
}