#include <stdio.h>
int main() {
    int type,unit;
    scanf("%d%d",&type,&unit);
    switch (type) {
        case 1:
            if (unit<=30) {
                unit*=5;
                printf("rs.%d",unit);
            }
            else if (unit>30) {
                unit=(unit*8)-100;
                printf("rs.%d",unit);
            }
            break;
        case 2:
            unit=unit*10;
            printf("rs.%d",unit);
            break;
    }
    return 0;
}
