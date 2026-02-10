#include <stdio.h>
int main() {
    int attendance,marks;
    scanf("%d%d,&attendance",&marks);
    if (attendance<75&&marks<50) {
        printf("fail");
    }
    else if (attendance>=75&&marks>=75) {
        printf("distinction");
    }
    else{
        printf("pass");
    }
    return 0;
}