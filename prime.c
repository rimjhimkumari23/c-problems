#include <stdio.h>
int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    for (int i=2;i<=n;i++) {
        if (i==2||i==3||i==5||i==7)
            count++;
    }
        printf("%d",count);

    return 0;
}