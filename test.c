#include <stdio.h>
#include <math.h>

int main(){
    char operator;
    double num1;
    double num2;
    double y;


    printf("enter number a:" );
    scanf ("%lf", &num1 );

    printf( "enter number b: ");
    scanf( "%lf", &num2 );

    printf( "enter operator (+,-,*,/,^): ");
    scanf( " %c", &operator );

        switch ( operator ){
        case '+': 
            y = num1 + num2;
            printf( " %lf ", y );
            break;

        case '-' : 
            y = num1 - num2;
            printf( " %lf ", y );
            break;

        case '*':
            y = num1 * num2;
            printf( " %lf ", y );
            break;

        case '/' : 
            y = num1 / num2;
            printf( " %lf " , y );
            break;

        case '^' :
            y = pow( num1 , num2 );
            printf( " %lf " , y );
    }

    return 0;
}