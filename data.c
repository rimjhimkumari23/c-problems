#include <stdio.h>
int main() {
    int plan;
    float data;
    scanf("%d",&plan);
    scanf("%f",&data);
    switch (plan) {
        case 1:
            if (data<=1) {
                printf("normal speed");
            }
            else if (data>1){
                printf("speed reduced");
            }
            break;
        case 2:
            if (data<=2) {
                printf("normal speed");
            }
            else if (data>2) {
                printf("extra charges applied");
            }
            break;
        ;
    }
    return 0;
}