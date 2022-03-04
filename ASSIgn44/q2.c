#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of number u wanted to enter\n");
    scanf("%d", &n);
    printf("Enter a numbers\n");
    int arr[n], even[n], odd[n], prime[n], t=0, w=0;
    for (int i = 0; i < n; i++)
    {
     scanf("%d", &arr[i]);
    }
    printf("Even Number in given set are\n");
   for (int i = 0; i < n; i++){       if(arr[i]%2==0){
        printf("%d, ", arr[i]);
         even[t]=arr[i];
         t++;
        }
        else{
            odd[w]=arr[i];
            w++;
        }}
    printf("\nOdd number in given set are\n");
    for (int i = 0; i < w; i++)
    {
      printf("%d, ", arr[i]);
    }
    w=0;
    printf("\nPrime number in given set\n");
    for (int i = 0; i < n; i++)
    {
        t=0;
        for (int j = 2; j< n; j++)
    {
     if(arr[i]%j==0){
         t++;
         break;};
    }
     if (t==0)
     {
         prime[w]=arr[i];
         printf("%d, ", arr[i]);
     }} return 0;
}