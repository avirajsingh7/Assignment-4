#include<stdio.h>
int main(){
     int a,b,w;
    printf("Enter a number of row then column\n");
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)//USING TO TAKE A INPUT OF MATRIX
    {
      for (int j = 0; j< b; j++){
      printf("Enter %d row %d column element\n", i+1,j+1);
       scanf("%d", &arr[i][j]);
      }
      }
    for (int i = 0; i < a; i++)
    {  printf("Elemet of Row %d of a matrix is\n", i);
      for (int j = 0; j< b; j++){
      printf("%d ", arr[i][j]);
      }
      printf("\n"); }
      for (int i = 0; i < b; i++)
    {  printf("Elemet of colum %d of a matrix is\n", i);
      for (int j = 0; j< a; j++){
      printf("%d ", arr[j][i]);
      }
      printf("\n"); }
      return 0;
      }