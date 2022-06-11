#include <iostream>

using namespace std;

int main(){
	int numero [5] = {200, 150, -50, 300, 100};// array de 5 numeros enteros
	int suma = 0;
	//inicializamos los valores del arreglo
	/*numero [0]= 200; 
	numero [1]= 150;
	numero [2]= 100;
	numero [3]=  50;
	numero [4]= 300;
	*/
	//hallar la suma de los elemntos del arreglo
	
	//suma = numero [0] + numero [1] + numero [2] + numero [3] + numero [4];
	
	//ineficiente
	//iterador o ciclo
	int i;
	for(i= 0; i<=4; i++){
		suma += numero [i];
		cout<<"\nDato\n\n"<<suma;
	};
	cout<<"La suma es : "<<suma;
	return 0;
}
#include <iostream>

using namespace std;

int main (){
	
	/*
	
	Ejemplo  de arreglo introducir datos
	
	*/
	
	float vector1[3];
	float vector2[3];
	float vectorSuma[3];
	int i = 0;
	//introducir los elementos del primer vector
	
	for (i=0; i<3; i++){
		cout<<"\n Introduce el primer componente "<<i<<"del primer vector \n";
		cin>>vector1[i];
	}
	
	for (i=0; i<3; i++){
		cout<<"\n Introduce el primer componente "<<i<<"del segundo vector \n";
		cin>>vector2[i];	
	}
	//calculo de la suma
	
	for (i=0; i<3; i++){
		vectorSuma[i] = vector1[i] + vector2[i];
	}
	
	cout<<"\n La suma de los numeros es :\n  ";
	
	for (i=0; i<3; i++){
		cout<<vectorSuma[i] << " " ;
	}
	
	
}
#include <iostream>

using namespace std;

//arreglo bidimencional

int main (){
	int notas [2][10] = {
		{1,2,3,4,5,6,7,8,9,10},
		{11,12,13,14,15,16,17,18,19,20}
	};
	
	cout<<"Los elementos de la nota son : "<<notas[0][2];
	return 0;
}
