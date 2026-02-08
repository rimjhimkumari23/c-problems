#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a==1) {
        printf("admin");
    }
    else if (a==2) {
        printf("user");
    }
    else if (a==3) {
        printf("guest");
    }
    return 0;
}