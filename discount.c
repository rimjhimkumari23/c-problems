#include <stdio.h>
int main() {
    int type,bill,amt;
    scanf("%d%d",&type,&amt);
    switch (type) {
        case 1:
            bill=amt-(amt*0.05);
            printf("rs.%d",bill);
            break;
        case 2:
            bill=amt-(amt*0.15);
            printf("rs.%d",bill);
            break;
    }
    return 0;
}


