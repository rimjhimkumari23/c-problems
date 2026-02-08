#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if (marks>90&&marks<=100) {
        printf("grade A");
    }
    else if (marks>75&&marks<=90) {
        printf("grade B");
    }
    else if (marks>50&&marks<=75) {
        printf("grade C");
    }
    else {
        printf("fail");
    }
    return 0;

}