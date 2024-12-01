#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    int b;
    printf("Enter the value of b: ");
    scanf("%d", &b);

    void swap();
    swap(a, b);

    return 0;
}

void swap(int a, int b)
{
    int false;
    false = a;
    a = b;
    b = false;
    printf("The new value of a is %d", a);
    printf("\nThe new value of b is %d", b);
}