#include <stdio.h>
int main() {
    int account,bal,wd;
    scanf("%d%d%d",&account,&bal,&wd);
    switch (account) {
        case 1:
            if (5000<wd) {
                printf("exceeds limit");
            }
            else {
                printf("transaction sucessful");
            }
            break;
        default:
            printf("invalid");

    }
    return 0;
}