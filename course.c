#include <stdio.h>
int main() {
    int mode;
    char R,S,ch;
    scanf("%d",&mode);
    scanf("%c%c",&R,&S);
    switch (mode) {
        case 1:
            if (R=='R') {
                printf("%d",5000);
            }
            else if (S=='S') {
                printf("%d",3000);
            }
            break;
        case 2:
            if (R=='R') {
                printf("%d",9000);
            }
            else if (S =='S') {
                printf("%d",7000);
            }
            break;
    }
    return 0;
}