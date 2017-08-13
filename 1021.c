#include <stdio.h>

int main() {

    int reais, n100, n50, n20, n10, n5, n2, m100, m50, m25, m10, m5, m1;
    double original;

    scanf("%lf", &original);

	original = original * 100;

    reais = original;

    n100 = reais/10000;
    reais = reais%10000;

    n50 = reais/5000;
    reais = reais%5000;

    n20 = reais/2000;
    reais = reais%2000;

    n10 = reais/1000;
    reais = reais%1000;

    n5 = reais/500;
    reais = reais%500;

    n2 = reais/200;
    reais = reais%200;

    m100 = reais/100;
	reais = reais%100;

	m50 = reais/50;
	reais = reais%50;

	m25 = reais/25;
	reais = reais%25;

	m10 = reais/10;
	reais = reais%10;

	m5 = reais/5;
	reais = reais%5;
	m1 = reais;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m100);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);

    return 0;
}