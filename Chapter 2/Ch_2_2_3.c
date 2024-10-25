     /*******************************************
    /* C Prog. A Modern Approach               /
   /* Chapter 2: Programming Projects 2 & 3   /
  /* By Urry John Paña                       /
 /* 10/26/2024                              /
*******************************************/

#include <stdio.h>
#define PI 3.14f
#define FRACTION (4.0/3.0)

int main(void){
    //Number 2:
    printf("The Variable 10 is given.\n");
    float constRadius = 10;
    printf("The Area is %.2f\n",FRACTION * PI * ((constRadius * constRadius * constRadius));

    //Number 3:
    printf("Input number for radius.\n");
    float inputRadius;
    printf("Radius: ");
    scanf("%f",&inputRadius);
    printf("The Area is %.2f\n",FRACTION * PI *((inputRadius * inputRadius * inputRadius));
    return 0;
}
