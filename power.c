#include<stdio.h>
int main() {
    int n,p;
    int r=1;
    scanf("%d%d",&n,&p);
    for (int i=1;i<=p;i++) {
        r=n*r;

    }
    printf("%d",r);
    return 0;
}









