#include <iostream>

template <class T>
class Nodo {
private:
	Nodo<T>* siguiente;
	T dato;

public:
	Nodo();
	friend class ListaEnlazada<T>;
};

template <class T>
class ListaEnlazada


int main(int argc, char* argv[]){


	return 0;
}