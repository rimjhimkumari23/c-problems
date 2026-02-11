#include <stdio.h>
int main() {
    int n;
    int t=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        int amt;
        scanf("%d",&amt);
        amt=0+amt;
        if (amt>10000) {
            t=1;
        }
    }
        if (t==1){
            printf("approved");
        }
        else {
            printf("limit exceed");
        }

return 0;
}