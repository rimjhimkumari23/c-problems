#include <stdio.h>
int main() {
    int power,hour;
    scanf("%d%d",&power,&hour);
    switch (power) {
        case 1:
            if (hour<=1) {
                printf("short interruption");
            }
            else if (hour<=4&&hour>1) {
                printf("medium interruption");
            }
            else if (hour>4) {
                printf("long interruption");
            }
            break;
    }
    return 0;
}
