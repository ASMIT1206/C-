#include <stdio.h>

int min(int a, int b) {
     int chota=a;
     if(b<a)chota=b;
     else chota=a;
     return chota;
}

int gcd(int a, int b) {
    int m1 = 1;
    for (int i = 1; i <= min(a, b); i++) { 
        if (a % i == 0 && b % i == 0) {
            m1 = i;
        }
    }
    return m1;
}

int main() {
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    int x = gcd(a, b);
    printf("GCD: %d\n", x);
    return 0;
}
