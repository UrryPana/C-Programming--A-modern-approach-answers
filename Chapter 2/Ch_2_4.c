     /*******************************************
    /* C Prog. A Modern Approach               /
   /* Chapter 2: Programming Projects 4       /
  /* By Urry John Paña                       /
 /* 10/26/2024                              /
*******************************************/
#include <stdio.h>

int main(void){
    float amount;
    printf("Enter an amount: ");
    scanf("%f",&amount);
    printf("With Tax added: $%.2f",amount + ((amount * 5.0) / 100));
    return 0;
}
