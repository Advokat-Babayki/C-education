#include <stdio.h>
int main(void) {
    
    int n;
    int y;
    int z = 0;

    printf("введите количество чисел для сложения и нахождения среднего значения:");
        scanf("%d", &n);

        if (n <= 0) {
        return 1;
        }        

    for (int i = 0; i < n; i++) {
        printf("введите число для которого нужно выполнить сложения и нахождения среднего значения:");
            scanf("%d", &y);
            z += y;
        }

    double avarage = (double)z / n;

    printf("Сумма: %d\n", z);
    printf("Среднее: %.2f", avarage);
    
    return 0;
}
