#include <stdio.h>
int main() {
    int class,weight,total;
    scanf("%d%d",&class,&weight);
    switch (class) {
        case 1:
            total=weight*300;
            printf("extra baggage charge rs.%d",total);
            break;
        case 2:
            if (weight<=3) {
                printf("free");
            }
            else {
                total=(weight-3)*300;
                printf("extra baggage charge rs.%d",total);
            }
            break;
    }
    return 0;
}