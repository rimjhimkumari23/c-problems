#include <stdio.h>
int main() {
    int type,distance;
    scanf("%d%d",&type,&distance);
    switch (type) {
        case 1:
            distance=distance*10;
            printf("%d",distance);
            break;
        case 2:
            distance=distance*15;
            printf("%d",distance);
            break;
        case 3:
            distance=distance*20;
            printf ("%d",distance);
            break;
    }
    return 0;
}