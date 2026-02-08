#include <stdio.h>
int main() {
    int attendance;
    scanf("%d",&attendance);
    if (attendance>=75) {
        printf("eligible for the exam");
    }
    else {
        printf("not eligible");
    }
    return 0;
}