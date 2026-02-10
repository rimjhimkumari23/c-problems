#include <stdio.h>
int main() {
    int room;
    char season;
    scanf("%d",&room);
    scanf("%c",&season);
    switch (room) {
        case 1:
            if (season='A') {
                printf("rs.%d",2500);
            }
            else if (season='B') {
                printf("rs.%d",2000);
            }
            break;
        case 2:
            if (season='C') {
                printf("rs.%d",4000);
            }
            else if (season='D') {
                printf("rs.%d",3000);
            }
            break;
    }
    return 0;
}