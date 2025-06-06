#include <stdio.h>

int main(){

    int n1;
    int n2;
    char operator;
    float z;

    scanf(" %d", &n1);
    scanf(" %c", &operator);
    scanf(" %d", &n2);

    switch(operator){
        case '+':
            z = n1 + n2;
            printf("%f", z);
            break;
        case '-':
        z = n1 - n2;
            printf("%f", z);
            break;
        case '*':
            z = n1 * n2;
            printf("%f", z);
            break;
        case '/':
            z = n1 / n2;
            printf("%f", z);
            break;
        case '%':
            z = n1 % n2;
            printf("%f", z);
            break;
        case '^':

            z=1;

            for(int i=0; i< n2 ; i++){
                z *= n1;
            }
            printf("%f", z);
 
            break;
    }

    
    return 0;
}
