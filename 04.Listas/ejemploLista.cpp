#include<iostream>

using namespace std;

//definir la estructura de la lista 

//estructura 
struct Nodo{
	//datos de la lista 
	int valor;
	Nodo *siguiente;
};

//metodo para insertar 

void insertarLista(Nodo *&, int);
void mostrarLista (Nodo *);

int main(){
	//declarar mi variables de la lista 
	Nodo *Lista = NULL;
	
	
	//VARIABLES
	int op = 1, c, i = 0,valores ;
	cout<<"trabajando con lista (simples,doblemente enlazadas , circulares y circulares dobles"<<endl;
	while(op!=3){
		cout<<"ejemplo de lista simple"<<endl;
		cout<<"1.- Insertar nuevo valor en la lista"<<endl;
		cout<<"2.- Ver  la lista"<<endl;
		cout<<"3.- Salir"<<endl;
		cin>>op;
		
		switch (op){
			case 1:
				cout<<"Indica el numero de valores a introducir \n";
				cin>>valores;
				while (i<valores){
					cout<<"Valor["<<i<<"]\n";
					cin>>c;
					
				//mando a llamar al metodo para insertar lista 
				insertarLista(Lista, c);
				i++;
				
			}
			break;
		case 2 :
		    cout<<"Ver elementos de la lista\n";
			cout<<"Pendiente";
			break;
    default:
		    cout<<"Gracias por estar aqui <3";		
		}
		
	}
	return 0;
	
	void  insertLista(Nodo *Lista, int c){
		Nodo *inslista = new Nodo ();
		insLista->valor = c
		
		//Necesito un auxiliar para encadenar 
		Nodo *aux = lista;
		Nodo *aux2;
		
		//se meten ordenadar los datos 
		while((aux!=NULL)&&(aux->valor<c)){
			aux2=aux;
			aux=aux->siguiente;
		}
		
		if(insLista == aux){
			lista = insLista;
		}else{
		 aux2->siguiente = insLista;
		}
		
		insLista->siguiente=aux;
		
		cout<<"Elemento: "<<c<<"Insertado"<<endl;			
	}
	
	void mostrarLista (Nodo *lista){
		Nodo * recurso = new Nodo();
		recurso = lista;
		//Imprimir los valores 
		
		while(recurso !=NULL){
			cout<<recurso->valor<<endl;
			
		}
	}
}
