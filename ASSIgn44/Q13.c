#include<stdio.h>
int main(){
    int a, b,t=0;
    printf("Enter a number of row then column in matrix 1\n");//GETTING A MATRIX
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
      for (int j = 0; j< b; j++){
      printf("Enter %d row %d column element\n", i+1,j+1);
       scanf("%d", &arr[i][j]);
      }
      }
     if(a==b)
     {
        for (int i = 0; i < a; i++)
        {
          for (int j = 0; j <b; j++)
          {
             if (arr[i][j]==arr[j][i])
             {
               t++;
             } } } }
          
       if(t==(a*a)){
           printf("Matrix is Symmetric\n");
       } 
       else{
           printf("Matrix is not Symmetric\n");
       }
     
      return 0;
}