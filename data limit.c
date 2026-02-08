#include <stdio.h>
int main() {
    float data;
    scanf("%f",&data);
    if (data<=2) {
        printf("data within the limit");
    }
    else {
        printf("data exceeds the limit");
    }
    return 0;
}