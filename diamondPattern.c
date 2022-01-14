/*
Enter number of rows: 5
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/

#include <stdio.h>

int main(){
    int num = 5;

    for (int i = 0; i < num; i++){
        for (int j = num - i - 1; j > 0; j--){
            printf(" ");
        }
        for(int k = 0; k <= i; k++){
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < num - 1; i++){
        for (int j = 0; j <= i; j++){
            printf(" ");
        }
        for(int k = num - i - 1; k > 0; k--){
            printf("* ");
        }
        printf("\n");
    } 
}