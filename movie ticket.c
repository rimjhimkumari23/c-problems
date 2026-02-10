#include <stdio.h>
int main() {
    int seat,time;
    scanf("%d%d",&seat,&time);
    switch (seat) {
        case 1:
            if (time<18) {
                printf("ticket price %d",150);
            }
            else if (time>=18) {
                time=150+50;
                printf("ticket price %d",time);
            }
            break;
        case 2:
            printf("ticket price %d",250);
            break;
    }
    return 0;
}