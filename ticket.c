#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a!=0) {
        printf("confirmed");
    }
    else {
        printf("waiting list");
    }
    return 0;
}