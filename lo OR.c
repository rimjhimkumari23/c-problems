#include <stdio.h>
int main() {
    int b;
    scanf("%d",&b);
    if (b<10||b>100) {
        printf("YES");
    }
    else {
        printf("NO");
    }
        return 0;
}