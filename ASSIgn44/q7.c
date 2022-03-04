#include<stdio.h>
int main(){
  int n, m,t,w;
  printf("Enter a length of bigger array then of smaller array\n");
  scanf("%d %d", &n, &m);
 int arr1[n], arr2[n];
 printf("Enter element of first array\n");//TAKING INPUTS OF ARRAYS
for (int i = 0; i < n; i++)
{
  scanf("%d", &arr1[i]);
}
printf("Enter element of second array\n");
for (int i = 0; i < m; i++)
{
  scanf("%d", &arr2[i]);
}
for (int i = 0; i < n; i++)//SWAPPING BOTH ARRAY
{
  t = arr1[i];
  arr1[i]=arr2[i];
  arr2[i]=t;
}
printf("After swapping element of array 1\n");//DISPLAYING ARRAY AFTER A SWAP
for (int i = 0; i < m; i++)
{
 printf("Element %d of array1 is %d\n", i, arr1[i]);
}
printf("After swapping element of array 2\n");
for (int i = 0; i < n; i++)
{
 printf("Element %d of array1 is %d\n", i, arr2[i]);
}
 return 0;
}