//ARBOL GENIALOGICO
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main(){

	setlocale(LC_ALL,"Spanish");
	
	int i,op;
	printf("1.Bisabuelos Paternos\n2.Bisabuelos maternos\n3.Abuelos Paternos\n4.Abuelos Maternos\n5.Padres\n6.Hijos\n7.Nietos\n8.Salir del men�\n\n");
	printf("Ingrese el n�mero de familiar que desee consultar:");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			printf("\n*El pap� de tu abuelo paterno es:Jorge Avenda�o\n");
			printf("*La mam� de tu abuelo paterno es:Magdalena Garc�a\n");
			printf("*El pap� de tu abuela paterna es:Carlos Juarez\n");
			printf("*La mam� de tu abuela paterna es:Isabel Perdomo\n");
			printf("\n\n\t\t---Gracias por consultar los datos con NeuralSystem, Buen d�a---");
			break;
	}
	switch(op){
		case 2:
			printf("\n*El pap� de tu abuelo materno es:Javier Cervantes\n");
			printf("*La mam� de tu abuelo materno es:Cristal Vazquez\n");
			printf("*El pap� de tu abuela materna es:Antonio Castillo\n");
			printf("*La mam� de tu abuela materna es:Elvira Vera\n");
			printf("\n\n\t\t---Gracias por consultar los datos con NeuralSystem, Buen d�a---");
			break;
	}
	switch(op){
		case 3:
			printf("\n*Tu abuelo paterno es:Jos� Avenda�o Garc�a\n");
			printf("*Tu abuela materna es:Natalia Juarez Perdomo\n");
			printf("\n\n\t\t---Gracias por consultar los datos con NeuralSystem, Buen d�a---");
			break;
	}
	switch(op){
		case 4:
			printf("\n*Tu abuelo materno es:Aristeo Cervantes Vazquez\n");
			printf("*Tu abuela materna es:Lorena Castillo Vera\n");
			printf("\n\n\t\t---Gracias por consultar los datos con NeuralSystem, Buen d�a---");
			break;
	}
	switch(op){
		case 5:
			printf("\n*El nombre de tu pap� es:Emilio Avenda�o Juarez\n");
			printf("*El nombre de tu mam� es:Nayeli Cervantes Castillo\n");
			printf("\n\n\t\t---Gracias por consultar los datos con NeuralSystem, Buen d�a---");
			break;
	}
	switch(op){
		case 6:
			printf("\n*El nombre de tu primer hija es:Cristal Avenda�o\n");
			printf("*El nombre de tu segundo hijo es:Armando Avenda�o\n");
			printf("\n\n\t\t---Gracias por consultar tus datos con NeuralSystem, Buen d�a---");
			break;
	}
	switch(op){
		case 7:
			printf("\n*El nombre de tu primer nieto es:Dilan\n");
			printf("*El nombre de tu segunda nieta es:Fernanda\n");
			printf("*El nombre de tu tercera nieta es:Aisha\n");
			printf("*El nombre de tu cuarta nieta es:Angelica\n");
			printf("\n\n\t\t---Gracias por consultar tus datos con NeuralSystem, Buen d�a---");
			break;
	}
	switch(op){
		case 8:
			printf("\n\n\t\t\t\t---Gracias por visitar NeuralSystem, Buen d�a---");
			break;
	}
		printf("\n\n\n\n");
	return 0;
}
