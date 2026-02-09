#include <stdio.h>
int main() {
    int count=0;
    int n;
    scanf("%d",&n);
    for (;n!=0;n/=10) {
        count++;
    }
    printf("%d\n",count);

return 0;
}


