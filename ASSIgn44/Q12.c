#include<stdio.h>
int main(){
    int n,a,b,t,w,x,y;
 printf("Select 1 for additon of matrix\n2 for subtraction\n3 for multiplication\n");
 scanf("%d", &n);
 printf("Enter a number of row then column in matrix 1\n");//GETTING A MATRIX 1
    scanf("%d %d", &a, &b);
    int arr1[a][b];
    for (int i = 0; i < a; i++)
    {
      for (int j = 0; j< b; j++){
      printf("Enter %d row %d column element\n", i+1,j+1);
       scanf("%d", &arr1[i][j]);
      }
      }

printf("Enter a number of row then column in matrix 2\n");//GETTING A MATRIX 2
    scanf("%d %d", &t, &w);
    int arr2[t][w];
    for (int i = 0; i < t; i++)
    {
      for (int j = 0; j< w; j++){
      printf("Enter %d row %d column element\n", i+1,j+1);
       scanf("%d", &arr2[i][j]);
      }
      }//BOTH MATRIX HAS BEEN INPUT

      int opr[a][w];
     switch(n)
     {
     case 1://CODE FOR ADDITION OF MATRIX
        if(a==t && b==w){
            printf("Addition of matrix is\n");
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    opr[i][j]= arr1[i][j]+arr2[i][j];
                    printf("%d ", opr[i][j]);
                }
                printf("\n");
            }
        
        }
        else{printf("Given matrix cant be add due to matrix property\n");}
         break;
     
     case 2://CODE FOR SUBTRACTION
     if(a==t && b==w){
            printf("Subtraction of matrix is\n");
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    opr[i][j]= arr1[i][j]-arr2[i][j];
                    printf("%d ", opr[i][j]);
                }
                printf("\n");
            }
        
        }
        else{printf("Given matrix cant be subtract due to matrix property\n");}
         break;
    case 3:// CODE FOR MULTIPLICATION
    if(b==t){
        for (int i = 0; i < a; i++)
        {
            for (int j= 0; j < w; j++)
            { opr[i][j] = 0;
                for (int k = 0; k <t; k++)
                {
                    opr[i][j] = (opr[i][j]) + (arr1[i][k]*arr2[k][j]);
                }
                printf("%d ", opr[i][j]);
                }
                printf("\n");
              }

        }
        else{printf("Matrix cant be multiply due to matrix multiplication property");}
        break ;
     }
     return 0;
}