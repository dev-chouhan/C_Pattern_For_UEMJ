/*
Enter number of rows: 5
     1
    121
   12321
  1234321
 123454321

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
       if(k<r) printf("%d",k);
       else if(k==r)
       {
         printf("%d",k);
         a=k;
       }
       else printf("%d",--a);
     }

     printf("\n");
   }

   return 0;
}