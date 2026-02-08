#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("pre:%d",++a);
    printf("\npost:%d",a++);
    return 0;
}