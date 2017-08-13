#include <stdio.h>
 
int main() {
    int numero, valor;
    double total, horas;
    
    scanf("%d", &numero);
    scanf("%d", &valor);
    scanf("%lf", &horas);
    
    total = (horas * valor);
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numero, total);
    
    return 0;
}