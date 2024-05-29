#include <stdio.h>
#include <math.h>

int main()
{
    int h, m = 0;
    double x;
    do
    {
        printf("\n1. Ввести x");
        printf("\n2. Обчислити");
        printf("\n0. Вихід з програми\n");
        printf("\nВведіть номер (0-2): ");
        scanf("%d", &h);
        switch (h)
        {
        case 1:
            m = 1;
            printf("Введіть x: ");
            scanf("%lf", &x);
           
            if (x <= 0)
            {
                printf("Задайте лише натуральне число");
                m = 0;
                break;
            }

            break;
        case 2:
            if (m == 0)
            {
                printf("Спочатку треба задати число");
                break;
            }
            double res = (pow(x, 4)) / (sqrt(fabs(x-10)) - pow(x, 2));
            printf("res = %.2lf", res);
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
