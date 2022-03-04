#include<stdio.h>
int main(){ int a,b,w;
    printf("Enter a number of row then column\n");
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)//USING TO TAKE A INPUT OF MATRIX
    {
      for (int j = 0; j< b; j++){
      printf("Enter %d row %d column element\n", i+1,j+1);
       scanf("%d", &arr[i][j]);
      }
      }//INPUT TAKENefore its transpose is\n ");//DISPLAYING INPUT MATRIX
    for (int i = 0; i < a; i++)
    {
      for (int j = 0; j< b; j++){
      printf("%d ", arr[i][j]);
      }
      printf("\n");
      }
   for (int i = 0; i < a; i++)//DOING TRANSPOSING OPERATION
    {
     for (int j = 0; j < b/2; j++)
     {
      w = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = w;
     }
     }
     printf("Matrix after its transpose is\n ");//DISPLAYING TRANSPOSE MATRIX
    for (int i = 0; i < a; i++)
    {
      for (int j = 0; j< b; j++){
      printf("%d ", arr[i][j]);
      }
      printf("\n");
      }
    return 0;
}