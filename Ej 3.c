#include <stdio.h>

void Mostrar_Num_Mayor(float Mayor, float acu){
	printf("El mayor gasto fue de: %.2f \n", Mayor);
	printf("El coste total fue de: %.2f \n", acu);
}

int main() {
	int i;
	float acu=0,compras[10], Mayor=0;
	for(i=0;i<=10;i++){
		printf("Ingrese su compra: ");
		scanf("%f", &compras[i]);
		if(i==0){
			Mayor=compras[0];
		}
		else{
			if(compras[i]>Mayor){
				Mayor=compras[i];
			}
		}
		acu=acu+compras[i];
	}
	Mostrar_Num_Mayor(Mayor, acu);
	
	return 0;
}

