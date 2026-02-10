#include <stdio.h>
int main() {
    int code,experience,bonus;
    scanf("%d%d",&code,&experience);
    switch (code) {
        case 1:
            if (experience>=3) {
                bonus=50000+(experience*5000);
                printf("%d\n",bonus);
            }
            else {
                printf("no bonus");
            }
            break;
        case 2:
            if (experience>=3) {
                bonus=35000+(experience*5000);
                printf("%d\n",bonus);
            }
            else {
                printf("no bonus");
            }
            break;
    }
    return 0;
}
