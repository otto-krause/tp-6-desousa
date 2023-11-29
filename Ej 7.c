#include <stdio.h>

void labura(int mayor, int menor, int s, int p){
	float promedio=0;
	promedio=p/10;
	printf("El primero termino en %d segundos \n", menor);
	printf("El segundo termino en %d segundos \n", s);
	printf("El ultimo termino en %d segundos \n", mayor);
	printf("El tiempo promedio de la carrera fue de: %.2f", promedio);
}

int main() {
	int tiempos[10], i, j, mayor, menor, s=10000000, promedio=0;
	for(i=0;i<=9;i++){
		printf("Ingrese un tiempo: ");
		scanf("%d", &tiempos[i]);
		if(i!=0){
			if(tiempos[i]>=mayor){
				mayor=tiempos[i];
			}
			if(tiempos[i]<=menor)
				menor=tiempos[i];
		}
		else{
			mayor=tiempos[i];
			menor=tiempos[i];
		}
	}
	for(j=0;j<=9;j++){
		if(tiempos[j]>menor){
			if(tiempos[j]<=s){
				s=tiempos[j];
			}
		}
		promedio=promedio+tiempos[j];
	}
	labura(mayor, menor, s, promedio);
	
	return 0;
}
