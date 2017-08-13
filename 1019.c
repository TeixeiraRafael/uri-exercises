#include <stdio.h>
#include <math.h>
 
int main(){

    int entrada, horas, minutos, segundos, resto, i;
    
    entrada = 0;
    horas = 0;
    minutos = 0;
    segundos = 0;

   	scanf("%d", &entrada);
   	
   	for(i = 0; i < entrada; i++){
   		segundos++;
   		if(segundos >= 60){
   			segundos = 0;
   			minutos++;
   		}
   		if(minutos >= 60){
   			minutos = 0;
   			horas++;
   		}
   	}
   	printf("%d:%d:%d\n", horas, minutos, segundos);
   	
	
    return 0;
}