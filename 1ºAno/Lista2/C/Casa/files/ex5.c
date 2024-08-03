#include <stdio.h>
#include <stdbool.h>

int main() {

    float h, sal, total;

    while (true) {

        printf ("Salário bruto = ");
        scanf ("%f", &sal);
        if (sal == 0) {
            printf ("Salário total = %.2f\n", total);
            break;
        }
        printf ("Horas trabalhadas = ");
        scanf ("%f", &h);
        int ant = sal;
        if (sal >= 800 && sal <= 1600) {
            sal -= 0.08 * sal + 0.05 * sal;
        }
        else if (sal > 1600) {
            sal -= 0.15 * sal + 0.07 * sal;
        }
        if (h > 160) {
            sal += (ant / 160) * 0.5 * (h - 160);
        }
        printf ("Salário líquido = R$ %.2f\n\n", sal);
        total += sal;
    }

    return 0;
}