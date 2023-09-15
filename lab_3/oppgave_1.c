#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int palindrom(char *s1){
    int len = strlen(s1);
    char *s2 = malloc(len + 1);

    s2[len] = '\0';


    for(int i = 0; i < len; i++){
       s2[len -i -1] = s1[i];
    }

    int sammenligning = strcmp(s1, s2) == 0;

    free(s2);
    return sammenligning;
}

int main(){
    char s1[] = "kari i irak";
    char s3[] = "majed";
    int sammenligning = palindrom(s1);
    int sammenligning2 = palindrom(s3);
    printf("%d\n", sammenligning);
    printf("%d", sammenligning2);
    return 0;


}
