#include <stdio.h>

void mostrar_nums(int nums[6]){
	int i;
	for(i=0;i<=5;i++){
		printf("-%d \n", nums[i]);
	}
}

int main() {
	int nums[6], i;
	for(i=0;i<=5;i++){
		printf("Ingrese un numero entero: ");
		scanf("%d", &nums[i]);
	}
	mostrar_nums(nums);
	
	return 0;
}

