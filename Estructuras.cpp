#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <class T> 
class Pila : public vector <T>{
	public:
		Pila ();
		void adicionar (T elem);
		T eliminar ();
		void mostrar ();
		void buscarpos( T elemen);
		void intercambiar(T elemento1, T elemento2);
};
template <class T>
Pila <T>::Pila (): vector<T> () {}

template <class T>
void Pila <T>::adicionar (T elem) {
	this->push_back (elem);
}

template <class T>
void Pila <T>::mostrar () {
	int n = this->size ();
	for (int i=0; i < n; i++)
		cout << this->at (i)  << ", ";
	cout << endl;
}

template <class T>
T Pila <T>::eliminar () {
	int posUltimo = this->size () - 1;
	T elem = this->at (posUltimo);
	this->pop_back();
	return elem;
}

template <class T>
void Pila <T>::buscarpos(T elemen) {
	int n = this->size ();
	for (int i=0; i < n; i++){
	
		if(elemen==this->at (i)){
			cout<< " El elemento buscado, esta en en la posicion "<<i;
		} 
	cout << endl;
	}
}



template <class T>
void Pila <T>::intercambiar(T elemento1, T elemento2) {
	int pos1= elemento1;
	int pos2= elemento2;
	this->at(elemento1)=pos1;
	this->at(elemento2)=pos2;
}


