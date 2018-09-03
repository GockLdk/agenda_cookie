//Prebe 15 Mario Alberto Vásquez Cancino

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

 

struct agenda { //Declaro mi estructura con nombre,telefono,direccion y edad en un arreglo llamado control.

	char nom[15];

	int t;

	char dir[30], edad[3];

} control[40];

int cont=0; //Declaro mi contador

 
//Declaracion de funciones para administrar la agenda
void agregar(); 

void buscar();

void contactos();

void modifica();
 

int main(){

	int opc;//variable para guardar mis opciones del menu

 

	do{

		system("clear");

 
		printf("****AGENDA****\n");

		printf("MENU\n");

		printf("1.Agregar contacto\n");

		printf("2.Consultar contacto\n");

		printf("3.Ver todos los contactos\n");

		printf("4.Modificar contacto \n");

		printf("5.Salir\n");

 

		scanf("%d", &opc);

 			//Menu de opciones

		switch(opc){

		case 1:

			agregar();
			getchar();
			break;

		case 2:

			buscar();
			getchar();
			break;

		case 3:

			system("clear");
			contactos();
			getchar();
			break;

		case 4:
			system("clear");
			modifica();
			getchar();
			break;

		case 5:
		opc=5;
		break;

		default:
		system("clear");
		printf("Opcion invalida\n**Intente de nuevo**\n");
		printf("\nPresione Enter para continuar...\n");
		getchar();
		getchar();
		break;
		}

	}while(opc!=5);
//Se ejecuta mientras no se teclee el numero 5
 

	return 0;

}

 

void agregar(){

	system("clear");

 

	fflush(stdin);

	printf("\n%d.Nombre de contacto: ", (cont+1));

	scanf("%s",control[cont].nom); //Almacena el nombre del contacto en control posicion del contador en la casilla nom
 

	fflush(stdin);

	printf("\nTelefono: ");

	scanf("%d", &control[cont].t);//Almacena el telefono del contacto en control posicion del contador en la casilla t



	fflush(stdin);

	printf("\n**Calle y numero**\nDireccion: ");

	scanf(" %[^\n]s",control[cont].dir); //Almacena la direccion del contacto en control posicion del contador en la casilla dir

 

	fflush(stdin);

	printf("\nEdad: ");

	scanf("%s",control[cont].edad); //Almacena la edad del contacto en control posicion del contador en la casilla edad

	cont++; //aumento mi contador para en un futuro guardar otro contacto perro en la posicion que sigue de control

 

}

 

void buscar(){

	char busca[15]; //variable que almacenara el nombre del contacto a buscar

	int i;

 

	system("clear");

 

	fflush(stdin);

	printf("***Consultar contacto**\nIngrese el nombre del contacto:");

	scanf("%s",busca); //Se alamcena el nombre a buscar

 
	system("clear");
	for(i=0;i<cont;i++){ //Para recorrer control (Agenda)

		if(strcmp(busca,control[i].nom)==0){ //Compara para que cuando encuentre la palabra imprima los datos del contacto

			printf("\nNombre: %s\n", control[i].nom);

			printf("Telefono: %d\n", control[i].t);

			printf("Direccion: %s\n", control[i].dir);

			printf("Edad: %s\n", control[i].edad);

		}
	}

printf("\nPresione Enter para continuar...\n");
getchar();
}

 

void contactos(){ //imprime la agenda con todos los contactos ingresados al momento
 	int i;

	printf("\nAgenda.\n");

 

	for(i=0;i<cont;i++){

		printf("\n%d.Nombre: %s\n",(i+1), control[i].nom);

		printf("Telefono: %d\n", control[i].t);

		printf("Direccion: %s\n", control[i].dir);

		printf("Edad: %s\n", control[i].edad);

	}
printf("\nPresione Enter para continuar...\n");
getchar();

}

void modifica()
{
	char busca[15];

	int i,mod;


	system("clear");


	fflush(stdin);

	printf("**Buscar contacto a modificar**\nIngrese el nombre del contacto:");

	scanf("%s",busca); //Guarda el nombre del contacto a buscar

 
	system("clear");
	for(i=0;i<cont;i++){ //Recorre la agenda control

		if(strcmp(busca,control[i].nom)==0) //cuando encuentra el contacto le da el valor de la localizacion en la agenda del contacto a mod
		{
			mod=i;
		}
	}

	fflush(stdin);

	printf("\n%d.Nombre de contacto: ", (mod+1)); 

	scanf("%s",control[mod].nom);//modifica el nombre del contacto en la posicion antes encontrada

 

	fflush(stdin);

	printf("\nTelefono: ");

	scanf("%d", &control[mod].t);//modifica el telefono del contacto en la posicion antes encontrada



	fflush(stdin);

	printf("\nDireccion: "); 

	scanf(" %[^\n]s",control[mod].dir); //modifica la direccion del contacto en la posicion antes encontrada

 

	fflush(stdin);

	printf("\nEdad: ");

	scanf("%s",control[mod].edad);//modifica la edad del contacto en la posicion antes encontrada

printf("\nPresione Enter para continuar...\n");
getchar();	

}