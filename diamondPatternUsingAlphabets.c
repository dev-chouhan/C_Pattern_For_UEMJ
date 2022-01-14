/*
Enter number of rows: 5;
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
 ABCDCBA
  ABCBA
   ABA
    A
*/


#include<stdio.h>
int main()
{
    int num, a;

    printf("Enter number of rows: ");
    scanf("%d",&num);

    for(int i = 1;  i <= num; i++){
        for(int j = 1; j <= num - i; j++){
            printf(" ");
        }
        for(int k = 1; k <= (2*i-1); k++){
            if(k < i) printf("%c",k+64);
            else if(k == i){
                printf("%c",k+64);
                a=k;
            }
            else printf("%c",--a+64);
        }
        printf("\n");
    }
    
    for(int i = 1;  i < num; i++){
        for(int j = 1; j <= i; j++){
            printf(" ");
        }
        int num1 = num - 1;
        for(int k = (2*(num - i)-1), l = 1; k > 0 ; k--, l++){
            if (l <= (k+1)/2) printf("%c", l+64);
            else printf("%c",k+64);
        }
        printf("\n");
    }

    return 0;
}