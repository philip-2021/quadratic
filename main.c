/*
Project:Quadratic equation solution
Author:philip ondieki
Date:26th oct, 2021
Compiler:GCC
Language:C99
License:MTI

INPUTS:->a, b, c
OUTPUTS:->x1, x2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2;

    printf("\tquadratic equation solver!\n");
    printf("enter the values a, b, c: ");
    scanf("%d%d%d",&a,&b,&c);

    //processing/computation
    if((b*b-4*a*c) == 0){
            x1=x2=(-b+sqrt(b*b-4*a*c))/(2*a);
    }

    if((b*b-4*a*c) >0){
            x1=x2=(-b+sqrt(b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c) <0){
            x1=x2=(-b+sqrt(b*b-4*a*c))/(2*a);
            printf("The equation has no roots\n");
            exit(1);



}
// output
printf("The value of x are %f and %f\n", x1, x2);
    return 0;
}
