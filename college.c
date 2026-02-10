#include <stdio.h>
int main() {
    int type;
    scanf("%d",&type);
    switch (type) {
        case 1:
            printf("rs.%d",80000);
            break;
        case 2:
            printf("rs.%d",60000);
            break;
        case 3:
            printf("rs.%d",45000);
            break;
    }
    return 0;
}