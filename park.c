#include <stdio.h>
int main() {
    int vehicle,hour;
    scanf("%d%d",&vehicle,&hour);
    switch (vehicle) {
        case 1:
            hour=10*hour;
            printf("parking fee %d",hour);
            break;
        case 2:
            hour=20*hour;
            printf("parking fee %d",hour);
            break;
        case 3:
            hour=20*hour;
            printf("parking fee %d",hour);
    }
    return 0;
}