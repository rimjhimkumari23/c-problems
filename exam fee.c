#include <stdio.h>
int main() {
    int category;
    scanf("%d",&category);
    switch (category) {
        case 1:
            printf("rs.%d",1200);
            break;
        case 2:
            printf("rs.%d",800);
            break;
        case 3:
            printf("rs.%d",500);
            break;
    }
    return 0;
}