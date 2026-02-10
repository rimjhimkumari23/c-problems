#include <stdio.h>
int main() {
    int loan,score;
    scanf("%d%d",&loan,&score);
    switch (loan) {
        case 1:
            if (score>=700) {
                printf("approved");
            }
            else if (score>=650&&score<=699) {
                printf("manual review");
            }
            break;
        case 2:
            if (score>=700) {
                printf("approved");

            }
            else if (score<700) {
                printf("rejected");
            }
            break;
    }
    return 0;
}