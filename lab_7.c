#include <stdio.h>

int main() {
    // --- Пункт 2. Аналіз індивідуального виразу ---
    int c = '5', b = 0123, a = b + c - '0';
    printf("c=%-2c=%3d \ndyz=%#0.8X\n", c, c, a ^ ~b);

    // --- Пункт 2.1. Оголошення змінних з індивідуального завдання ---
    double u = 0.58797e5;   // 5879.7
    long s = 0xb12;         // 2834

    printf("\n--- Змінні з індивідуального завдання ---\n");
    printf("u = %f  |  s = %ld\n", u, s);

    printf("\n--- Специфікації для s (long) ---\n");
    printf("%%d = %d\n", (int)s);
    printf("%%i = %i\n", (int)s);
    printf("%%x = %x\n", (int)s);
    printf("%%X = %X\n", (int)s);
    printf("%%#X = %#X\n", (int)s);
    printf("%%o = %o\n", (int)s);
    printf("%%c = %c\n", (int)s);

    printf("\n--- Специфікації для u (double) ---\n");
    printf("%%f = %f\n", u);
    printf("%%.2f = %.2f\n", u);
    printf("%%e = %e\n", u);
    printf("%%E = %E\n", u);
    printf("%%g = %g\n", u);
    printf("%%G = %G\n", u);

    // --- Пункт 3. Приклади специфікацій для інших типів ---
    printf("\n\n--- Різні специфікації для цілого типу ---\n");
    int n = 83;
    printf("%%d = %d\n", n);
    printf("%%i = %i\n", n);
    printf("%%x = %x\n", n);
    printf("%%X = %X\n", n);
    printf("%%o = %o\n", n);
    printf("%%c = %c\n", n);

    printf("\n--- Специфікації для дійсного типу ---\n");
    double x = 123.456;
    printf("%%f = %f\n", x);
    printf("%%.2f = %.2f\n", x);
    printf("%%e = %e\n", x);
    printf("%%E = %E\n", x);
    printf("%%g = %g\n", x);
    printf("%%G = %G\n", x);

    // --- Пункт 4. Перевірка логічних і побітових виразів ---
    printf("\n--- Перевірка логічних виразів ---\n");
    int a1 = 5, b1 = 3;
    printf("a=%d, b=%d\n", a1, b1);
    printf("a > b: %d (0x%X)\n", a1 > b1, a1 > b1);
    printf("a & b = %d (0x%X)\n", a1 & b1, a1 & b1);
    printf("a || b = %d\n", a1 || b1);
    printf("!(a > b) = %d\n", !(a1 > b1));

    // --- Пункт 5. Введення користувачем і перевірка виразу ---
    printf("\n--- Введення двох дійсних чисел ---\n");
    double fst, scnd;
    printf("Введіть два дійсних числа: ");
    scanf("%lf %lf", &fst, &scnd);
    printf("З двох чисел %.2f і %.2f менше — %s\n",
           fst, scnd, fst < scnd ? "перше" : "друге");

    getchar();
    return 0;
}
