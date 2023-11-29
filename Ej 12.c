#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void comp(char*sus, char*cadena){
	if (strcmp(sus,cadena)==0){
		printf("Es un Palíndromo\n");
	}
	else {
		printf("No es un Palíndromo\n");
	}
}
	
int main(){
	char i,j,longi;
	char longitud;
	char cadena[50];
	char sus[50];
	char temporal;
	system("cls");
	printf("Introduce un texto (menos de 50 caracteres): ");
	gets(cadena);
	strcpy(sus,cadena);
	longitud=strlen(cadena);
	j=longitud-1;
	for (i=0; i<longitud/2; i++){
		temporal=cadena[i];
		cadena[i]=cadena[j];
		cadena[j]=temporal;
		j--;
	}
	comp(sus, cadena);
}
