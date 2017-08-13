#include <stdio.h>
#include <math.h>
 
int main(){

    int t, vm;
    double result;

   	scanf("%d", &t);
   	scanf("%d", &vm);

	result = (t*vm)/12.0;
   	
    printf("%.3lf\n", result);
	
    return 0;
}