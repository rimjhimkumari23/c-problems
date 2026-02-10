#include <stdio.h>
int main() {
    int order,speed;
    scanf("%d%d",&order,&speed);
    switch (speed) {
        case 1:
            if (order<1000) {
                printf("delivery rs.%d",100);
            }
            else {
                printf("delivery free");
            }
            break;
        default:
            printf("invalid");
    }
    return 0;
}


