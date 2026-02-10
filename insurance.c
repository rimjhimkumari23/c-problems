#include <stdio.h>
int main() {
    int age,category;
    scanf("%d%d",&category,&age);
    switch (category) {
        case 1:
            if (age<=5) {
                printf("rs.%d",1500);
            }
            else if (age>5) {
                printf("rs.%d",2500);
            }
            break;
        case 2:
            if (age<=5) {
                printf("rs.%d",4000);
            }
            else if (age>5) {
                printf("rs.%d",6000);
            }
            break;
    }
    return 0;
}