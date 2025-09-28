#include <stdio.h>

int main(){
    int c;
    int lc = '\0';

    while((c = getchar()) != EOF){
        if (c == ' ' && lc == ' '){
            ;
        }
        else{
            putchar(c);
        }
        lc = c;
    }

    return 0;
}
