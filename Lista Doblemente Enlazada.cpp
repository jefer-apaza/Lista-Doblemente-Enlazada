#include <iostream>

using namespace std;
class Nodo{
    public:
        int dato;
        Nodo* ant;
        Nodo* sig;
    Nodo* crear(Nodo* cab, int d){
        Nodo* nuevo = new Nodo;
        nuevo -> dato = d;
        nuevo -> ant = NULL;
        nuevo -> sig = NULL;
        cab = nuevo;
        return cab;
    }
    Nodo* insertar(Nodo* cab, int d){
        Nodo* nuevo = new Nodo;
        nuevo -> dato = d;
        nuevo -> ant = NULL;
        nuevo -> sig = cab;
        cab -> ant = nuevo;
        cab = nuevo;
        return cab;
    }
    void mostrar (Nodo* cab){
        Nodo* aux =cab;
        while(aux != NULL){
            cout<< aux -> dato<<endl;
            aux = aux ->sig;
        }
    }
    
    void invertir(Nodo* cab){
    	Nodo* aux = cab;
    	while(aux -> sig != NULL){
    		aux = aux->sig;
		}
		while(aux != NULL){
			cout<<aux->dato<<endl;
			aux=aux->ant;
		}
	} 
};
int main(){
    Nodo* cab = NULL;
    Nodo* p;
    cab = p -> crear (cab,4);
    
    cab = p -> insertar(cab,3);
    cab = p -> insertar(cab,2);
    cab = p -> insertar(cab,1);
    cout<<"Datos de la Lista"<<endl;
    p ->mostrar(cab);
    cout<<"Datos de la Lista Invertida"<<endl;
    p ->invertir(cab);
    
    return 0
