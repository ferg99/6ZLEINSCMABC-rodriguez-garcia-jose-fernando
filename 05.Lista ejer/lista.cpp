/* 
Vamos a crear un ejemplo  de una lista que puede
contener un dato y manejo de apuntadores
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<iostream.h>

/*
comio  es una libreria  que da una extension 
a studio, como libreria standar, para el 
manejo de consola  usando comando como 
getc(), clrscr(), gotoxy(),textcolor();
y otras 

*/

using namepace std;
//definimos la lista acorde  de un nodo,el a
//
struct dato{
	int i
	dato *s;
} *a,*i,*p,*e;

//meter los metodos de acceso a la lista 

int buscar(int d);
void insertar(int dat);
void mostrar (void);
void borrar (void);
void menu (void);

//
//

main(){
	menu();
}

//
void menu(void){
	//vamos a ser un menu de 6 opciones 
	
	int opc, da;
	
	do{
		//imprimir el menu 
		
		cout<<"";
		cout<<"\n 1.- Buscar Datos :";
		cout<<"\n 2.- Insertar Datos :";
		cout<<"\n 3.- Mostrar Datos :";
		cout<<"\n 4.- Borrar Datos :";
		cout<<"\n 5.- Guardar Datos en Archivos :";
		cout<<"\n 6.- Cargar  Datos en Archivos :";
		cout<<"\n 7.- Salir:";
		cout<<"\n  Seleccione la opcion deseada :";
        cin>>opc;
		//menu
       switch(opc){
			case 1:
				//buscar
				cout<<"\n\n Ingresa el dato a buscar";
				cin>>da;
				if(buscar(da)){
					cout<<"Dato si existe wiii";
				}else{
					cout<<"Dato no existe, solo juguito";
					getch();
				}
			break;
		case 2:
		 cout<<"ingresa el dato";
		 cin>>da;
		 insertar(da);
		 break;
		
		case 3:
		  mostrar();
		  break;
		case 4:
		borrar();
		break;
		case 5
		  //guardar();
		  break;
		case 6
		  //cargar();
		  break;
		case 7
		  cout<<"\n\n ayos uwu ";
		  getch();
		  //borrar todos los dtos de la lista 
		  p=i;
		  while(p){
		  	a=p;
		  	p=p->s;
		  	delate(a);//metodo de la lista (recorrido)
		  }     		
		exit(0);// se cierra 
		
		
		}	
		
	
	
	}
}
