#include <stdio.h>
int main() {
    int a=0;
    scanf("%d",&a);
    for (int i=1;i<1000;i++) {
        a+=i;

    }
    printf("%d",a);
    return 0;
}