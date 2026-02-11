#include<stdio.h>
int main(){
    int b;
    int n;
    scanf("%d%d",&b,&n);
    for (int i=1;i<=n;i++){
        int p;
        scanf("%d",&p);
        p=p+0;
        b=b-p;
    }
    printf("%d",b);
    return 0;
}