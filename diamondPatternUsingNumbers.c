/*
Enter number of rows: 5
     1
    121
   12321
  1234321
 123454321
  1234321
   12321
    121
     1
    
*/

#include<stdio.h>
int main()
{
    int num = 5, a;

    // printf("Enter number of rows: ");
    // scanf("%d",&n);

    for(int i = 1;  i <= num; i++){
        for(int j = 1; j <= num - i; j++){
            printf(" ");
        }
        for(int k = 1; k <= (2*i-1); k++){
            if(k < i) printf("%d",k);
            else if(k == i){
                printf("%d",k);
                a=k;
            }
            else printf("%d",--a);
        }
        printf("\n");
    }
    
    for(int i = 1;  i < num; i++){
        for(int j = 1; j <= i; j++){
            printf(" ");
        }
        int num1 = num - 1;
        for(int k = (2*(num - i)-1), l = 1; k > 0 ; k--, l++){
            if (l <= (k+1)/2) printf("%d", l);
            else printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
/*
  1234321
   12321
    121
     1
*/