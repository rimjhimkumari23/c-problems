#include <stdio.h>
int main() {
    int mode;
    scanf("%d",&mode);
    switch (mode) {
        case 1:
            printf("rs.%d",40);
            break;
        case 2:
            printf("rs.%d",120);
            break;
        case 3:
            printf("rs.%d",0);
            break;
    }
    return 0;
}
