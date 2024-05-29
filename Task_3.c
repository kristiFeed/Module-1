#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d;
    int h, m = 0;

    do
    {
        printf("\n1. Ввести гіпотенузу і один з катетів");
        printf("\n2. Обчислити");
        printf("\n0. Вихід з програми\n");
        printf("\nВведіть номер (0-2): ");
        scanf("%d", &h);
        switch (h)
        {
        case 1:
            m = 1;
            printf("Введіть гіпотенузу: ");
            scanf("%lf", &a);
            printf("Введіть один катет: ");
            scanf("%lf", &b);

            if (a <= 0 || b <= 0 || a <= b)
            {
                printf("Неправильні вхідні дані.\n");
                m = 0;
            }
            break;
        case 2:
            if (m == 0)
            {
                printf("Спочатку треба задати гіпотенузу і один з катетів");
                break;
            }

            c = sqrt(pow(a, 2) - pow(b, 2));

            d = 0.5 * b * c;

            printf("Другий катет: %.2lf\n", c);
            printf("Площа трикутника: %.2lf\n", d);

            break;

        case 0:
            printf("Вихід з програми");
            break;
        default:
            printf("Неправильна цифра");
            break;
        }
    } while (h != 0);

    return 0;
}
