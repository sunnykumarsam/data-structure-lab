 #include<stdio.h>
#include<conio.h>
 int main(){
     int a[3][3],b[3][3],c[3][3],i,j;
     printf("Enter first matrix:- ");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&a[i][j]);
             
         }
     }
      printf("Enter second matrix:- ");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&b[i][j]);
             
         }
     }
      printf(" sum of  matrix:-\n" );
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             c[i][j]= a[i][j]+b[i][j];
             printf("%d ",c[i][j]);
             
         }
         printf("\n");
     }
 }