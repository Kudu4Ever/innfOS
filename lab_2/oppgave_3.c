#include<stdio.h>

long fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fib(n - 1) + fib(n -2);
}

int main()
{
    int n;
    printf("skriv verdien av 'n': ");
    scanf("%d", &n);

    FILE *file;
    file = fopen("fibonacci.txt","w");

    for(int x = 0; x <= n; x++){
        long r = fib(x);
        fprintf(file,"%d\n",r);
    }
    fclose(file);

}
