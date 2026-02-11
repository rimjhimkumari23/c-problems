#include <stdio.h>
int main() {
    int n,r;
    int rev=0;
    scanf("%d",&n);
    for (;n!=0;n/=10) {
        r=n%10;
        rev=rev*10+r;

    }
    printf("%d\n",rev);
    return 0;
}