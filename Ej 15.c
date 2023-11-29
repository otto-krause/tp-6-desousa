#include <stdio.h>
#include <string.h>

void vocales(int l, char*cadena){
	int a=0, e=0, i=0, o=0, u=0;
	for(int j=0;j<l;j++){
		if(cadena[j]=='a' || cadena[j]=='A'){
			a++;
		}
		if(cadena[j]=='e' || cadena[j]=='E'){
			e++;
		}
		if(cadena[j]=='i' || cadena[j]=='I'){
			i++;
		}
		if(cadena[j]=='o' || cadena[j]=='O'){
			o++;
		}
		if(cadena[j]=='u' || cadena[j]=='U'){
			u++;
		}
	}
	printf("La vocal 'a' se repite %d veces \n", a);
	printf("La vocal 'e' se repite %d veces \n", e);
	printf("La vocal 'i' se repite %d veces \n", i);
	printf("La vocal 'o' se repite %d veces \n", o);
	printf("La vocal 'u' se repite %d veces \n", u);
}

int main(int argc, char *argv[]) {
	char cadena[10];
	int l;
	printf("Ingrese una cadena de caracteres: ");
	gets(cadena);
	l=strlen(cadena);
	vocales(l, cadena);
	
	return 0;
}

