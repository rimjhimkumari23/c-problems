#include <stdio.h>
int main() {
    int type,min;
    scanf("%d%d",&type,&min);
    switch (type) {
        case 1:
            min=min*1;
            printf("rs.%d",min);
            break;
        case 2:
            min=min*3;
            printf("rs.%d",min);
            break;
        case 3:
            min=min*10;
            printf("rs.%d",min);
    break;
    }
    return 0;
}