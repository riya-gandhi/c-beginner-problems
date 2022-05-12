#include <stdio.h>
int main() {
    float n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 >= n2) {
        if (n1 >= n3)
            printf("%f is the largest number.", n1);
        else
            printf("%f is the largest number.", n3);
    } else {
        if (n2 >= n3)
            printf("%f is the largest number.", n2);
        else
            printf("%f is the largest number.", n3);
    }

    return 0;
}
