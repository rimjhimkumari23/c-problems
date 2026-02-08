#include <stdio.h>
int main() {
    int tem;
    scanf("%d",&tem);
    if (tem<=20) {
        printf("heating mode");
    }
    else if (tem>20&&tem<=30){
        printf("normal mode");
    }
    else if (tem>30) {
        printf("cooling mode");
    }
    return 0;
}