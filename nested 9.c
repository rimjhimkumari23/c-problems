#include <stdio.h>
int main() {
    for (int i=0;i<=5;i++) {
        for (int k=0;k<5-i;k++) {
            printf(" ");

        }
        for (int j=0;j<2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int n=5;n>=0;n--){
        for (int l=0;l<5-n;l++) {
            printf(" ");
        }
        for (int m=0;m<2*n+1;m++){
            printf("*");
        }

        printf("\n");
    }
    return 0;
}