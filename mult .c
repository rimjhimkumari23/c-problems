#include <stdio.h>
int main() {
    int a,b,num;
    scanf("%d%d%d",&a,&b,&num);
    if (num%a==0&&num%b==0) {
        printf("multiple of both 3 and 7");
    }

return 0;
}