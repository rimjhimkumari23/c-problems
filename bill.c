#include <stdio.h>
int main() {
    int fine,days;
    scanf("%d%d",&fine,&days);
    switch (fine) {
        case 1:
            if (days<=5) {
                days=days*50;
                printf("rs.%d",days);
            }

            else if (days<=10&&days>5) {
                days=days*100;
                printf("rs.%d",days);
            }
            else if (days>10) {
                days=days*200;
                printf("rs.%d",days);
            }
            break;
    }
    return 0;
}
