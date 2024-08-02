# include <stdio.h>

int main() {

    float dados[4];
    printf ("Altura da parede (em cm): ");
    scanf ("%f", &dados[0]);
    printf ("Largura da parede (em cm): ");
    scanf ("%f", &dados[1]);
    printf ("Altura do azulejo (em cm): ");
    scanf ("%f", &dados[2]);
    printf ("Largura do azulejo (em cm): ");
    scanf ("%f", &dados[3]);
    printf ("Vossa senhoria precisará de %.2f azulejos\n", (dados[0] * dados[1]) / (dados[2] * dados[3]));

    return 0;
}