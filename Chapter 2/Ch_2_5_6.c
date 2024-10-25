     /*******************************************
    /* C Prog. A Modern Approach               /
   /* Chapter 2: Programming Projects 5 & 6   /
  /* By Urry John Paña                       /
 /* 10/26/2024                              /
*******************************************/

#include <stdio.h>

int main(void){
    //Number 5
    int x;
    printf("Input x: ");
    scanf("%d",&x);
    printf("The answer is: %d\n",((3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x))-(x * x) + (7 * x) - 6));

    //Number 6:
    printf("The answer using Horner's Rule is: %d",((((3 * x + 2) * x - 5) * x - 1) * x + 7 ) * x - 6);

    return 0;
}
