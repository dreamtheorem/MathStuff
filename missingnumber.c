#include<stdio.h>

int main()
{
    int i;
    int n;

    printf("enter n: ");
    scanf("%d", &n);

    int A[n-1];
   
    for(i = 0; i<n-1; i++)
    {
        printf("\n choose number %d : ", i+1);
        scanf("%d", &A[i]);
    }
    int y = n*(n+1)/2;

    int z = 0;
    int j;

    for(j=0;j<n-1;j++)
    {
        z += A[j];
    }

    int K = y - z;

    printf("%d", K);

    return 0;
}
