#include <stdio.h>
#include <math.h>

/**
 * @brief Обчислює значення кусково-заданої функції y від x.
 *
 * @param x Аргумент функції (вхідне значення).
 * @return Обчислене значення y або NAN, якщо x потрапляє в область невизначеності (-3.1, -1.37].
 */
double calculate_y(double x) {
    double y;
    if (x <= -3.1) {
        y = 9.74 * pow(x, 2) + cos(6.4 * x);
    } else if (x > -1.37) {
        double numerator = 4.3 * pow(x, 2) + 2;
        double ln_term = log(pow(x, 2) + 0.3);
        double denominator = 1 + pow(ln_term, 2);
        y = sqrt(numerator / denominator);
    } else {
        printf("Помилка: x = %.2f знаходиться в невизначеній області (-3.1, -1.37]\n", x);
        return NAN;
    }
    return y;
}

int main() {
    double a, b, h, x_start, x_end, x;
    int n, i;

    printf("\n--- Завдання 1. Варіант 10 ---\n");
    printf("Обчислення таблиці значень кусково-заданої функції.\n\n");

    printf("Функція:\n");
    printf("         / 9.74x^2 + cos(6.4x),           якщо x <= -3.1\n");
    printf("  y(x) = <\n");
    printf("         \\ sqrt((4.3x^2 + 2) / (1 + ln^2(x^2 + 0.3))), якщо x > -1.37\n\n");

    printf("Введіть межі інтервалу:\n");
    printf("  Початок інтервалу a -> ");
    scanf("%lf", &x_start);
    printf("  Кінець інтервалу b -> ");
    scanf("%lf", &x_end);
    printf("  Крок h -> ");
    scanf("%lf", &h);

    if (h <= 0) {
        printf("\nПомилка: крок h повинен бути додатнім!\n");
        return 1;
    }
    if (x_start > x_end) {
        printf("\nПомилка: початок інтервалу повинен бути менше кінця!\n");
        return 1;
    }

    n = (int)((x_end - x_start) / h) + 1;

    printf("\n+-----------+--------------+----------------+\n");
    printf("| № точки   | x            | y(x)           |\n");
    printf("+-----------+--------------+----------------+\n");

    x = x_start;
    for (i = 0; i < n; i++) {
        double y = calculate_y(x);
        if (!isnan(y)) {
            printf("| %-9d | %12.4f | %14.6f |\n", i + 1, x, y);
        } else {
            printf("| %-9d | %12.4f | Не визначено   |\n", i + 1, x);
        }
        x += h;
    }
    printf("+-----------+--------------+----------------+\n");

    printf("\nДодатковий розрахунок:\n");
    a = 1.6;
    b = 4.9;
    x = 5.3 * sin(b / (cos(a) + 2));
    printf("Параметри: a = %.1f, b = %.1f\n", a, b);
    printf("x = 5.3 * sin(b / (cos(a) + 2)) = %.6f\n", x);

    double y = calculate_y(x);
    if (!isnan(y)) {
        printf("y(%.6f) = %.6f\n", x, y);
    } else {
        printf("y(%.6f) = Не визначено\n", x);
    }

    return 0;
}
