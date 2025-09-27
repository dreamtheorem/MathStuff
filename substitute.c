#include <stdio.h>

int main(){
    int c,x,y,z;

    x = '\\';
    y = 'b';
    z = 't';

    while((c = getchar()) != EOF){
        if(c == ' '){
            putchar(x);
            putchar(y);
        }
        else if(c == '\t'){
            putchar(x );
            putchar(z);
        }
        else if(c == '\\'){
            putchar(x);
            putchar(x);
        }
        else {
            putchar(c);
        }
    }

    return 0;
}
