#include <stdio.h>
int main() {
    int account,years;
    scanf("%d%d",&account,&years);
    switch (account) {
        case 1:
            printf("interest 4%%");
            break;
        case 2:
            if (years<=3) {
                printf("interest 5%%");
            }
            else {
                printf("interest 7%%");
            }
            break;
    }
    return 0;
}