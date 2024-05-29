#include <stdio.h>

int main()
{
    int h;
    int num1, num2, num3, num4, num5;
    int m = 0;
    do
    {
        printf("\n1. Ввести числа");
        printf("\n2. Знайти середнє арифметичне");
        printf("\n0. Вихід з програми\n");
        printf("\nВведіть номер (0-2): ");
        scanf("%d", &h);
        switch (h)
        {
        case 1:
            m = 1;
            printf("Введіть 1-ше число = ");
            scanf("%d", &num1);
            printf("Введіть 2-ге число = ");
            scanf("%d", &num2);
            printf("Введіть 3-те число = ");
            scanf("%d", &num3);
            printf("Введіть 4-те число = ");
            scanf("%d", &num4);
            printf("Введіть 5-те число = ");
            scanf("%d", &num5);
            if (num1 <= 0 || num2 <= 0 || num3 <= 0 || num4 <= 0 || num5 <= 0)
            {
                printf("Задайте лише додатні числа");
                m = 0;
                break;
            }

            break;
        case 2:
            if (m == 0)
            {
                printf("Спочатку треба задати числа");
                break;
            }
            double res = (num1 + num2 + num3 + num4 + num5) / 5.0;
            printf("Середнє арифметичне 5 цілих додатніх чисел = %.2f", res);
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