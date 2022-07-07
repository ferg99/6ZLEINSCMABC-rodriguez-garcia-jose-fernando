/*
vamos a crear un grao que tiene los siguientes nod s

5 3
1 2
2 3
4 5
*/
#include<stdio.h>
#include<vector>
#include<cstring>

//sirve paa poder hacer operaciones con cadenas 
//para manioular elementos de caracteres bajo matriz

//debemos asignar un espacio de memoria para 
//las operaiones .de ahi el vector 

using namespace std;

#define MAX 10001;

vector <int> ady[MAX];

/*
tenemos una tener una variable que se encargue de 
detectar el recorrido de los nodos y del camino  que ya se 
visito 
*/

bool visitado[MAX];

bool Visitado_componente[MAX];

//debemos realizar un algoritmo para el recorrido 

void dfs(int u){
       //saber si ya visite el camino (arista)  
visitado[u]= true ;
      //saber si ya visite el nodo 
visistado_componente[u]= true;
      //ciclo de recorrido 
for(int v=0; v<ady[u].size(); v++){
	if(!visitado[ady[[u][u]]){
		dfs(ady[u][v]);
	}
}
}

int main(){
	  //variable para el grafo 
	int V, E, u, v,
	
	  //elemeto para la memoria 
	scanf("%d, %d", &V, &E);
	
	  //se crea bucle
	  //que se encargue de entrar 
	  //y salir meter y sacar 
	  
	  while(E--) {
	  
	  scanf("%d, %d", &u, &v);
	  ady[u].push_back(v)
	  ady[u].push_back(u)
}
pintf("Canttodad de componentes conexos\n");
int total=0
/* 
con esto puedo saber cuanto pesa cada uno 
de los caminos de mi grafo 
primero el camino, el inicio , su peso 
o tamaño 
*/
 memset(visitado, 0, sizeof(visitado));	  
 //tenemos 
 //
 for(int i=1; i<=V, ++i){
 	if(!visitado[i]){
 		memset(visitado_componente, 0, sizeof(visitado_componente));
 		dfs(i);
	 }
 }
}


