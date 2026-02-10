#include <stdio.h>
int main() {
    int attempt,marks;
    scanf("%d%d",&attempt,&marks);
    switch (attempt) {
        case 1:
            if (marks>=80) {
                printf("excellent");
            }
            else {
                printf("not qualified");
            }
            break;
        case 2:
            if (marks>=60) {
                printf("good");
            }
            else {
                printf("not qualified");
            }
            break;
        case 3:
            printf("need improvement");
            break;
    }
    return 0;
}