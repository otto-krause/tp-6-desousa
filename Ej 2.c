#include <stdio.h>

void mostrar_nums(int nums[6], int mayor, int Asc, int Des){
	int i;
	printf("El numero mayor es: %d \n", mayor);
	for(i=0;i<=6;i++){
		printf("-N%d: %d \n", i+1, nums[i]);
	}
	if((Asc>0) && (Des<=1)){
		printf("La Lista es Ascendente \n");
	}
	else{
		if((Asc<=1) && (Des>0)){
			printf("La lista es Descendente \n");
		}
		else{
			if((Asc>0) && (Des>0)){
				printf("la lista esta Desordenada \n");
			}
		}
	}
}
	
	int main() {
		int nums[7], i, Mayor=0, Ascendente=0, Descendente=0;
		for(i=0;i<=6;i++){
			printf("Ingrese un numero entero Positivo: ");
			scanf("%d", &nums[i]);
			if(i==0){
				Mayor=nums[0];
			}
			else{
				if(nums[i]>Mayor){
					Mayor=nums[i];
				}
			}
			if(nums[i]>nums[i-1]){
				Ascendente++;
				
			}
			else{
				if(nums[i]<nums[i-1]){
					Descendente++;
				}
			}
		}
		printf("Asc:%d \n Desc:%d \n", Ascendente, Descendente);
		mostrar_nums(nums, Mayor, Ascendente, Descendente);
		
		return 0;
	}
	
