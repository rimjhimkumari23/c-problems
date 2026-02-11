#include <stdio.h>
int main() {
    int s,a;
    scanf("%d%d",&s,&a);
    for (int i=1;i<=a;i++) {
        s=s-100;

    }
    printf("final salary:%d",s);
    return 0;
}