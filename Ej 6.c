#include <stdio.h>

void labura(int*vector, int mayor, int menor){
	int i, CG=0, cm=0;
	for(i=0;i<=9;i++){
		if(mayor==vector[i]){
			CG++;
		}
		if(menor==vector[i]){
			cm++;
		}
	}
	printf("El numero mayor es: %d \n", mayor);
	printf("El numero menor es: %d \n", menor);
	printf("El numero mayor se repite %d veces \n", CG);
	printf("El numero menor se repite %d veces \n", cm);
}

int main() {
	int Filiberto[10], i, j, mayor, menor;
	for(i=0;i<=9;i++){
		printf("Ingrese numero: ");
		scanf("%d", &Filiberto[i]);
		if(i>=1){
			for(j=0;j<=9;j++){
				if(Filiberto[i]>=mayor){
					mayor=Filiberto[i];
				}
				if(Filiberto[i]<=menor){
					menor=Filiberto[i];
				}
			}
		}
		else{
			mayor=Filiberto[i];
			menor=Filiberto[i];
		}
	}
	labura(Filiberto, mayor, menor);
	
	return 0;
}

