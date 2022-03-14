#include<stdio.h>

#include<conio.h>

#include<malloc.h>
 
struct student
 
{
   
  char name[30];
  
   int roll;
 

 };
 
void main()
 
{
     struct student *p;

     int i,n;
 
    printf("Enter total no of student\n");
 
    scanf("%d",&n);

    p=(struct student *)malloc (n*sizeof(struct student));
 
    for(i=0;i<n;i++)
 
    {
    
     printf("enter roll \n");

         scanf("%d",&p[i].roll);

         printf("enter name \n");

         scanf("%s",p[i].name);

         
     }
  
   for(i=0;i<n;i++)
   
  {
       
  printf("roll=%d\n",p[i].roll);
  
      printf("Name=%s\n",p[i].name);
  
   }

 return 0; 
   
 }
 
 
 
 
 
 