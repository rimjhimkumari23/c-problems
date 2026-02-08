#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if (marks<40) {
        printf("fail");
    }
    else if (marks>=40&&marks<60) {
        printf("pass");
    }
    else if (marks>=60) {
        printf("distinction");
    }
    return 0;
}