#include <stdio.h>
int *func(int arrf[], int a){
     int t=arrf[0], b;
    for(int i=1; i<a; i++){
     if(arrf[i]<t){
     t=arrf[i];
     b=i;
    }}
    for(int i=b; i<a-1;i++){
     arrf[i]=arrf[i+1];
    }
    int* ptrc = arrf;
    func(arrf, a-1);
    int arrg[a];
    arrg[a] = *(ptrc+a);
     return arrg;
    }
int main()
{
    int n;
    printf("Enter number of number you want to arrange");
    scanf("%d", &n);
    printf("Enter a %d numbers u wanted to arrange", n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }
    int* ptr = func(arr, n);
     for(int i = 0; i < n; i++)
    {
        printf("%d>", *(ptr+i));
    }
    return 0;
}//This is not write code Donot copy it
