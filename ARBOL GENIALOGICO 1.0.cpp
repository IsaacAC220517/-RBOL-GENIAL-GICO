//ARBOL GENIALOGICO
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main(){

	setlocale(LC_ALL,"Spanish");
	
	int i,op;
	printf("1.Bisabuelos Paternos\n2.Bisabuelos maternos\n3.Abuelos Paternos\n4.Abuelos Maternos\n5.Padres\n6.Hijos\n7.Nietos\n8.Salir del menú\n\n");
	printf("Ingrese el número de familiar que desee consultar:");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			printf("\n*El papá de tu abuelo paterno es:Jorge Avendaño\n");
			printf("*La mamá de tu abuelo paterno es:Magdalena García\n");
			printf("*El papá de tu abuela paterna es:Carlos Juarez\n");
			printf("*La mamá de tu abuela paterna es:Isabel Perdomo\n");
			printf("\n\n\t\t---Gracias por consultar los datos con NeuralSystem, Buen día---");
			break;
	}
	switch(op){
		case 2:
			printf("\n*El papá de tu abuelo materno es:Javier Cervantes\n");
			printf("*La mamá de tu abuelo materno es:Cristal Vazquez\n");
			printf("*El papá de tu abuela materna es:Antonio Castillo\n");
			printf("*La mamá de tu abuela materna es:Elvira Vera\n");
			printf("\n\n\t\t---Gracias por consultar los datos con NeuralSystem, Buen día---");
			break;
	}
	switch(op){
		case 3:
			printf("\n*Tu abuelo paterno es:José Avendaño García\n");
			printf("*Tu abuela materna es:Natalia Juarez Perdomo\n");
			printf("\n\n\t\t---Gracias por consultar los datos con NeuralSystem, Buen día---");
			break;
	}
	switch(op){
		case 4:
			printf("\n*Tu abuelo materno es:Aristeo Cervantes Vazquez\n");
			printf("*Tu abuela materna es:Lorena Castillo Vera\n");
			printf("\n\n\t\t---Gracias por consultar los datos con NeuralSystem, Buen día---");
			break;
	}
	switch(op){
		case 5:
			printf("\n*El nombre de tu papá es:Emilio Avendaño Juarez\n");
			printf("*El nombre de tu mamá es:Nayeli Cervantes Castillo\n");
			printf("\n\n\t\t---Gracias por consultar los datos con NeuralSystem, Buen día---");
			break;
	}
	switch(op){
		case 6:
			printf("\n*El nombre de tu primer hija es:Cristal Avendaño\n");
			printf("*El nombre de tu segundo hijo es:Armando Avendaño\n");
			printf("\n\n\t\t---Gracias por consultar tus datos con NeuralSystem, Buen día---");
			break;
	}
	switch(op){
		case 7:
			printf("\n*El nombre de tu primer nieto es:Dilan\n");
			printf("*El nombre de tu segunda nieta es:Fernanda\n");
			printf("*El nombre de tu tercera nieta es:Aisha\n");
			printf("*El nombre de tu cuarta nieta es:Angelica\n");
			printf("\n\n\t\t---Gracias por consultar tus datos con NeuralSystem, Buen día---");
			break;
	}
	switch(op){
		case 8:
			printf("\n\n\t\t\t\t---Gracias por visitar NeuralSystem, Buen día---");
			break;
	}
		printf("\n\n\n\n");
	return 0;
}
