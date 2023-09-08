#include<stdio.h>

int main(){
    int a = 0;
    int n;

    for (n = 0; n <= 100; n++){
        a += n * n;

    }
    printf("\nSummen er %d", a);
    return 0;
}
