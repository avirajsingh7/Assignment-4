#include<stdio.h>
int main(){ 
    int a,b,w=0,t=0;
    printf("Enter a number of row\n");
    scanf("%d", &a);
    int arr[a][a];
    for (int i = 0; i < a; i++)//USING TO TAKE A INPUT OF MATRIX
    {
      for (int j = 0; j< a; j++){
      printf("Enter %d row %d column element\n", i+1,j+1);
       scanf("%d", &arr[i][j]);
      }}
     for (int i = 0; i < a; i++)//displaying the enter a matrix
    {
      for (int j = 0; j< a; j++){
      printf("%d ", arr[i][j]);
      }
      printf("\n");
      }
    //RIGHT DIAGONAL SUM IS HERE
    for (int i = 0;  i<a; i++)
    {for (int j = 0; j < a; j++)
    {if(i==j){
       w=w+arr[i][j];
    }}}
       //LEFT DIAGONAL SUM IS HERE
      for(int i = 0;  i<a; i++)
    {for (int j = 0; j < a; j++)
    {if(i+j==a-1){
       t=t+arr[i][j];
    }}}
    printf("Left diagonal sum is %d\n", t);
     printf("Right diagonal sum is %d\n", w);
      return 0;
      }