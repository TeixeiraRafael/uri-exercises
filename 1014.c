#include <stdio.h>
 
int main(){

    double km, l, result;
   
    scanf("%lf", &km);
    scanf("%lf", &l);
	result = km/l;
	
	printf("%.3lf km/l\n", result);
	
    return 0;
}