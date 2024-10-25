     /*******************************************
    /* C Prog. A Modern Approach               /
   /* Chapter 2: Programming Projects 7       /
  /* By Urry John Paña                       /
 /* 10/26/2024                              /
*******************************************/
#include <stdio.h>

int main(void){
    int amount;
    printf("Enter Amount: ");
    scanf("%d",&amount);
    int twenty = amount / 20;
    amount = amount - (twenty * 20);
    int ten = amount / 10;
    amount = amount - ten * 10;

    printf("$20: %d\n",twenty);
    printf("$10: %d\n", ten);
    printf("$05: %d\n",amount/5);
    printf("$01: %d\n",amount%5);
    return 0;
}
