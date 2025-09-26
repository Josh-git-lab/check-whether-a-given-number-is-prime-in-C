#include <stdio.h>
//RA2511003012176 JOSH JIBY
int main(){
    int num, i;
    printf("Enter a number to check: ");
    scanf("%d",&num);

    if (num <= 1) {
        printf("%d is not prime\n", num);
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                printf("%d is not prime\n", num);
                return 0;
            }
        }
        printf("%d is prime\n", num);
    }
    return 0;
}

