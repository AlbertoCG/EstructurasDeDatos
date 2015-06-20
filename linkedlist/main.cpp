#include <iostream>

template<class T>
class Nodo {
private:
	Nodo<T>* siguiente;
	T dato;

public:
	Nodo();
	friend class ListaEnlazada;
};

template <class T>
Nodo<T>::Nodo(){
	siguiente = NULL;
}

template<class T>
class ListaEnlazada{
private:
	Nodo<T>* cabecera;

public:
	ListaEnlazada();
};

template<class T>
ListaEnlazada<T>::ListaEnlazada(){
	cabecera = NULL;
}

int main(int argc, char const *argv[])
{
	
	return 0;
}