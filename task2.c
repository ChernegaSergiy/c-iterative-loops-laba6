#include <stdio.h>

int main() {
    int n;
    long long sum = 0;
    int counter = 1;

    printf("\n--- Завдання 2. Варіант 10 ---\n");
    printf("Обчислення суми додатніх чисел. (1+2+3+...+N)\n");
    printf("Введіть кількість сумованих чисел -> ");

    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Некоректне введення. Потрібне додатнє ціле число.\n");
        return 1;
    }

    while (counter <= n) {
        sum += counter;
        counter++;
    }

    printf("Сума перших %d додатніх чисел дорівнює %lld\n", n, sum);

    return 0;
}
