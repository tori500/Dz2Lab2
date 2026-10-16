#include <stdio.h>
#include <locale.h>

void task1();

int main()
{
    setlocale(LC_ALL, "Russian");

    task1();

    return 0;
}

void task1()
{
    float Vg, Vv, S = 5.0f, t;

    printf("Введите скорость Гали (км/ч): ");
    scanf("%f", &Vg);
    printf("Введите скорость Вали (км/ч): ");
    scanf("%f", &Vv);

    t = S / (Vg + Vv);

    printf("\nСкорость Гали: %f км/ч\n", Vg);
    printf("Скорость Вали: %f км/ч\n", Vv);
    printf("Расстояние между ними: %f км\n", S);
    printf("Время до встречи: %f ч\n", t);
}