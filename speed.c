#include <stdio.h>
int main() {
    int speed;
    scanf("%d",&speed);
    if (speed>80) {
        printf("speed limit excceeds");
    }
    else {
        printf("speed within the limit");
    }
    return 0;
}