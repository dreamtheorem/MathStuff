#include <stdio.h>

int main (){
    int nl, b, t;
    nl = 0;
    b = 0;
    t= 0;

    int c;

    while((c = getchar()) != EOF){
        if(c == ' '){
            ++b;
        }
        else if(c == '\n'){
            ++nl;
        }
        else if(c == (char)9){
            ++t;
        }
        
        
    }
    printf("new lines = %d blanks = %d tabs %d\n", nl,b,t);
    return 0;
}
