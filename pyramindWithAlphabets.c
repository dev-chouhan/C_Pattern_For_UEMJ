/*
Enter rows: 5;
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

#include<stdio.h>
int main()
{
   int n, r, c, k, a;

   printf("Enter number of rows: ");
   scanf("%d",&n);

   for(r=1;r<=n;r++)
   {
     for(c=1;c<=n-r;c++) printf(" ");

     for(k=1;k<=(2*r-1);k++)
     {
       if(k<r) printf("%c",k+64);
       else if(k==r)
       {
         printf("%c",k+64);
         a=k;
       }
       else printf("%c",--a+64);
     }

     printf("\n");
   }

   return 0;
}