#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("how many number would you like to write: \n");
    scanf("%d", &n);
    int *A;
    A = (int *) malloc(n * sizeof(int));
    printf("%d write you number of integers:\n", n);
    for(int m = 0; m < n; m++){
        scanf("%d", A + m);
    }
    printf("reverse number: \n",n);
    for(int m = n-1; m >=0; m--){
        printf("%d ", *(A + m));

    }

    free(A);
    return 0;
}
