#include <stdio.h>

#define IN 1
#define OUT 0


int main(){

  int c;
  int state = OUT;
  int x = '\0';
  int wc = 0;
  int S[100000];
  int cc = 0;
  int lwc = 0;
  int i = 0;

  while((c = getchar()) != EOF){
    ++cc;
    ++lwc;

    if(c == ' ' || c == '\t' || c == '\n'){
      state = OUT;
    }

    else if (state == OUT){
      state = IN;
      ++wc;
    }

    if((state == OUT) && (x != ' ' && x != '\t' && x != '\n')){
      S[i] = lwc - 1;
      lwc = 0;
      i++;
    }

    x = c;

  }

  for (int y = 0; y<wc; ++y){
    for(int z = 0; z<S[y]; ++z){
      printf(" * ");
    }
    printf("\n");
  }
  return 0;
}
