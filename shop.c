#include <stdio.h>
int main() {
    int amount;
    scanf("%d",&amount);
    if (amount>=499) {
        printf("free delivery");
    }
    else {
        printf("delivery charges apply");
    }
    return 0;
}