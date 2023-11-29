#include <stdio.h>

void noc(int nums[8]){
	int  j, aux, cant=0, i;
	for(i=0;i<=1;i++){
		printf("Ingrese un numero a comparar: ");
		scanf("%d", &aux);
		printf("Secuencia %d: \n", i+1);
		for(j=0;j<=8;j++){
			if(aux==nums[j]){
				cant++;
				printf("Posicion donde se repite %d \n", j+1);
			}
		}
		printf("El numero de la secuencia se repite %d veces \n", cant);
		cant=0;
	}
}

int main() {
	int i, nums[8];
	for(i=0;i<=7;i++){
		printf("Ingrese un numero para la secuencia inicial: ");
		scanf("%d", &nums[i]);
	}
	noc(nums);
	
	return 0;
}

