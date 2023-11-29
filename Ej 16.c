#include <stdio.h>
#include <string.h>

void funcion(char*nombre, float sueldo){
	printf("el empleado mas antiguo es: %s \n", nombre);
	printf("Su sueldo es %.2f \n", sueldo);
}

int main() {
	int i, D, M, A, AMA, MMA, DMA;
	float sueldo, sa;
	char buff[4];
	char nombre[10];
	char Antiguo[10];
	for(i=0;i<3;i++){
		printf("Ingrese Nombre del empleado %d: ", i+1);
		gets(nombre);
		printf("Ingrese sueldo del empleado: ");
		scanf("%f", &sueldo);
		printf("Ingrese la fecha de ingreso del empleado (D, M, A): ");
		scanf("%3s", buff);
		sscanf(buff, "%1d%1d%1d", &D, &M, &A);
		if(i==0){
			strcpy(Antiguo, nombre);
			sa=sueldo;
			AMA=A;
			MMA=M;
			DMA=D;
		}
		else{
			if(A<=AMA){
				if(A==AMA){
					if(M<=MMA){
						if(M==MMA){
							if(D<=DMA){
								strcpy(Antiguo, nombre);
								sa=sueldo;
								AMA=A;
								MMA=M;
								DMA=D;
							}
						}else{
							strcpy(Antiguo, nombre);
							sa=sueldo;
							AMA=A;
							MMA=M;
							DMA=D;
						}
					}
				}else{
					strcpy(Antiguo, nombre);
					sa=sueldo;
					AMA=A;
					MMA=M;
					DMA=D;
				}
			}else{
				printf("Este no es el mas antiguo");
			}
		}
	}
	funcion(Antiguo, sa);
	
	return 0;
}

