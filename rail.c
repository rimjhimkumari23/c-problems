#include <stdio.h>
int main() {
int age;
    char class;
    scanf("%d",&age);
    scanf("%c",class);
    switch (class){
        case 'A':
            if (age<12) {
                p=(age/50)*100;
                printf("fare Rs.%d",p);
            }
            else if ()