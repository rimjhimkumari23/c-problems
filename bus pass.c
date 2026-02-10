#include <stdio.h>
int main() {
    int bus_pass,distance;
    scanf("%d%d",&bus_pass,&distance);
    switch (bus_pass) {
        case 1:
            if (distance<=30) {
                printf("eligible");
            }
            else if (distance>30) {
                printf("eligible with extra fee");
            }
            break;
        case 2:
            if (distance<=30) {
                printf("eligible");
            }
            else if (distance>30) {
                printf("not eligible");
            }
            break;

    }
    return 0;
}
