//pilas
/*vamos a crear un ejempñl de una pila simple , por que quiero que hagan torres 
de hanoi
*/

#include <iostream>
#inclide <stdlib.h>

using namespace std;

//ejemplo de una pila

struct Nodo{
	int valor;
	Nodo *siguiente ;
}

//metodos

void insertarPila(Nodo *&, int);
void mostrarPila(Nodo *&);
void eleminarPila(Nodo *&, int &);

int main(){
	//el primero en entrar es el primero en salir , el ultimo que entra es el primero que sale 
	
	int cantidad, i=0, op=1,v;
	
	//declaro la pila
	
	Nodo *pila=NULL;
	
	//MENU
	while(op!=4){
		cout<<"Selecciona la opcion deseada:";
		cout<<"1.-Insertar Valor:\n";
		cout<<"2.-Mostrar Valores:\n";
		cout<<"3.-Eleminar Valor:\n";
		cout<<"4.-Salir:\n";
		cin>>op;
		
		switch(op){
			case 1:
			cout<<"ingresa la cantidad  de valores a insertar en la pila:\n";
			cin>>cantidad;
			
		while(i<cantidad){
			cout<<"Ingresar el valor: \n";
			cin>>v;
			insertarPila(pila,v);
			i++;
		}
		break;
		
		    case 2:
		    	mostrarPila(pila);
		    	break;
		    case 3:
			//saber si eta vacia 
			if(pila == NULL){
				cout<<"No se puede eliminar, pila vacia :\n";
				
			}	else{
				cout<<"Se elinina el valor\n";
				while(pila!=NULL){
					//hay valores
					elinimarPila(pila,v);
					if(pila!=NULL){
						cout<<v<<"|"<<endl;
					}else{
						cout<<"*"<<endl;
					}
				}
			}
			break;
			default:
				cout<<"La opcion no es valida";
		}
	}
	return 0;
	//push
	void insetarPila(Nodo *&pila,int v){
		//crear el nodo 
		Nodo *pushpila = new Nodo();
		pushpila->valor = v;
		pushpila->siguiente = pila;
		pila=pushpila;
	}
	//mostrar
	void mostrarPila(Nodo *&pila){
		
		Nodo *aux;
		if(pila==NULL){
			cout<<"No hay datos en la pila,esta vacia ";
		}else{
			aux 0 pila;
			while(aux!=NULL){
				cout<<"valor:"<<aux->valor<<endl;
				aux=aux->siguiente;
			}
			
		}
	}
}
