#include<stdio.h>
#include<stdlib.h>

struct proccess{
    int nummer;
    char status;
    float start_tid;
    float CPU_tid;
};

struct proccess *copy(struct proccess p){
    struct proccess *nyproccess = (struct proccess*) malloc(sizeof(struct proccess));
    *nyproccess = p;
    return nyproccess;
}

int main(){
    struct proccess orginal = {2, 'D', 1.5, 2.1};
    struct proccess *kopi = copy(orginal);
    printf("nummer: %d\n", kopi->nummer);
    printf("status: %c\n", kopi->status);
    free(kopi);
    return 0;
}



