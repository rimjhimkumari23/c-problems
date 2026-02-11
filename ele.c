#include <stdio.h>
int main() {
    int n;
    int t=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        int unit;
        scanf("%d",&unit);
        t+=unit;

    }
    printf("total units:%d",t);
    return 0;
}