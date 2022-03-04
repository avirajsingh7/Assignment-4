#include<stdio.h>
//QUESTION 3
int main(){
    int n, i, t=0, w=0, a;
    printf("Enter a number of number you are entering\n");
    scanf("%d", &n);
    printf("Enter a numbers which sum is needed\n");
    int arr[n];
    for (i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
     { if(arr[i]%2==0){
         while(arr[i]>=10)
         {
           a = arr[i]%10;
           arr[i]=(arr[i]-a)/10;
           w= w+a;}
         w=w+arr[i];
         }
         }
       printf("Sum of digit of even number in given set is %d", w);
    return 0;}