#include<stdio.h>
int main(){
    int n, i, j, t;
    printf("Enter a number of number you are entering\n");
    scanf("%d", &n);
    printf("Enter a numbers\n");
    int arr[n];
    for (i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
     for ( j = i; j<n; j++)
     {
        if (arr[i]>arr[j])
        {
           t =arr[i];
           arr[i]=arr[j];
           arr[j]=t;
        }      
     }
    }
    for (i = 0; i <n; i++)
    {
        printf("%d<", arr[i]);
    }
    return 0;

}