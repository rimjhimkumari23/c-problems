#include <stdio.h>
int main() {
    int unit;
    int connection_type;
    int bill;
    scanf("%d%d",&unit,&connection_type);
    switch (connection_type) {
        case 1:
            if (unit<=100) {
                bill=unit*3;
                printf("%d",bill);
            }
            else if (unit>100) {
                bill=100*3+(unit-100)*5;
                bill=bill-80;
                printf("%d",bill);
            }
            break;
        case 2:
            if (unit<100) {
                bill=unit*7;
                printf("%d",bill);
            }
            else if (unit>100) {
                bill=100*7+(unit-100)*10;
                printf("%d",bill);
            }
            break;
    }
    return 0;
}

