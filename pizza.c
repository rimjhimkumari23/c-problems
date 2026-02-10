#include <stdio.h>
int main() {
    int vehicle,trip;
    scanf("%d%d",&vehicle,&trip);
    switch (vehicle) {
        case 1:
            if (trip==1) {
                printf("rs.%d",100);
            }
            else if (trip>=2&&trip<=10) {
                printf("rs.%d",800);
            }
            else if (trip>10) {
                printf("rs.%d",800);
            }
            break;
        case 2:
            if (trip>=1) {
                trip=trip*240;
                printf("rs.%d",trip);
            }
            else {
                printf("no discount or pass available");
            }
            break;
    }
    return 0;
}