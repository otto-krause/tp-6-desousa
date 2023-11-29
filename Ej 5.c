#include <stdio.h>

void vectores(int*par, int*impar, int i, int l){
	int j, k;
	for(j=0;j<=i-1;j++){
		printf("Todos los numeros pares son: \n");
		if(par[j]>0){
			printf("%d \n", par[j]);
		}
	}
	for(k=0;k<=l-1;k++){
		printf("Todos los numeros impares son: \n");
		if(impar[k]>0){
			printf("%d \n", impar[k]);
		}
	}
}

int main() {
	int num, par[20], impar[20], i=0, l=0;
	float rest;
	do{
		printf("Ingrese un numero: ");
		scanf("%d", &num);
		if(num==0){
			break;
		}
		rest=num%2;
		if(rest==0){
			par[i]=num;                             
			i++;
		}
		else{
			impar[l]=num;
			l++;
		}
		
	} while(num<=19);
	
	vectores(par, impar, i, l);
	
	return 0;
}

