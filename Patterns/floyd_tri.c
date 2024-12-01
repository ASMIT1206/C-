#include<stdio.h>

int main() {
    int n;
    int x = 1;
    int y = 1;
    int sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", x);
        } else if (i == 2) {
            printf("%d ", y);
        } else {
            sum = x + y;
            printf("%d ", sum);
            x=y;
           y=sum;

        }
    }

    return 0;
}
