#include <stdio.h>

int main(){

    int m;
    printf("enter number m: ");
    scanf("%d", &m);

    int n;
    printf("enter number n: ");
    scanf("%d", &n);

    int A[m][n];

    int i,j;

    for (i=0;i<m;i++){
        
        for (j=0;j<n;j++){

            printf("\n entry a_%d%d: ", i+1,j+1);
            scanf("%d", &A[i][j]);

        }
    }

    return 0;
}
