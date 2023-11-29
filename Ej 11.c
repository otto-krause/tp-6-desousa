#include <stdio.h>
#include <string.h>

int main() {
	int i, j, l, k=0, p=0, m, t;
	char cadena[10];
	printf("Ingrese una cadena de caracteres: ");
	gets(cadena);
	l=strlen(cadena);
	printf("l=%d \n", l);
	for(i=1;i<=l;i++){
		for(j=1;j<=l;j++){
			if(j>k){
				if(cadena[j]>=p){
					p=cadena[j];
					m=j;
				}
			}
		}
		t=cadena[i];
		cadena[i]=cadena[m];
		cadena[m]=t;
		p=0;
		k++;
	}
	printf("El vector invertido es: %s", cadena);
	return 0;
}
