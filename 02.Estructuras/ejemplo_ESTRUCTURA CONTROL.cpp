#include<iostream>

using namespace std;

int main (){
/*//vamos a crear un do while
	
	int i= 1;
	do{
		    //imprime cada elemento  hasta el 10
		cout<<i<<endl;
		i++;
		    
	} while(i<=10);

*/
/*//while

int cont = 1;
while (cont <=10){
	cout<<cont<<endl;
	cont++;
}

   count<<"y se murioo oooo";

*/

/*//otro contador 

int contador =1 ;
while(contador  <=20){
	cout<<"debo hacer la tarea T_T"<<" "<<contador<<endl;
	contador++;
}
 count<<"y se murioo oooo";
*/

/*//for

for(int i =1; i<= 10; i++)
   cout<<i<<endl;

*/

//menu

int selection, 1;

do{
	cout<<"\n menu 1,2,3 otro opcion es salir \n";
	cout<<"1: opcion\n"; 
	cout<<"2: opcion\n";
	cout<<"3: opcion\n";
	cout<<"Otra opcion Salir ";
	cout<<"Ingresa la seleccion";
	
	cin>>seleccion;
	 switch(seleccion){
	 
	 caso 1:
	 	cout<<"opcion 1";
	 	break;
	 	
	 	caso 2:
	 	cout<<"opcion 2";
	 	break;
	 	
	 	caso 3:
	 	cout<<"opcion 3";
	 	break;
	 
	 default:
	   cout<<" hasta la proxima *inserta musica remix";
	   break;
	

}

} while((seleccion > 0)&&(seleccion < 4));

}






