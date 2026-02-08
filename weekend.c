#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    if (days<6) {
        printf("weekdays");
    }
    if (days>=6&&days<=7){
        printf("weekend");
    }
    return 0;
}