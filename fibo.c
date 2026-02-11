#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int f=0;
    int s=1;
    if (1<=n) {
        printf("%d",f);
    }
    if (2<=n) {
        printf("%d",s);
    }
    for (int i=2;i<n;i++) {
        int temp=f+s;
        f=s;
        s=temp;
        printf("%d",temp);
    }
    return 0;

}