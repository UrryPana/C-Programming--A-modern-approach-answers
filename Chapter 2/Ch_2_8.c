     /*******************************************
    /* C Prog. A Modern Approach               /
   /* Chapter 2: Programming Projects 8       /
  /* By Urry John Paña                       /
 /* 10/26/2024                              /
*******************************************/

#include <stdio.h>

int main(void){
    float loanAmount,interest,monthlyPayment,balance;
    printf("Enter amount of loan: ");
    scanf("%f",&loanAmount);
    printf("Enter Interest rate: ");
    scanf("%f",&interest);
    printf("Enter monthly payment: ");
    scanf("%f",&monthlyPayment);
    balance = loanAmount-monthlyPayment;

    printf("Balance Remaining after 1st Payment: %.2f",(balance + (balance * ((interest*0.1)/12))));

    return 0;
}
