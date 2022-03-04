#include<stdio.h>
int main(){
    int t[3];
    t[2]= 0;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j< 5; j++){
      printf("Enter %d row %d column element\n", i+1,j+1);
       scanf("%d", &arr[i][j]);
      }
      }
for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j< 5; j++){
   if(arr[i][j]>t[2]){
       t[0]= i+1;
       t[1]= j+1;
       t[2] = arr[i][j];
   }}
      }
      printf("Largest number in matrix is in row %d and column %d and it is %d", t[0],t[1],t[2]);
 return 0;
}