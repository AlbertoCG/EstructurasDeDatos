#include <iostream>
#pragma once

template <class T>
class ListaEnlazada;

template<class T>
class Nodo {
private:
	Nodo<T>* siguiente;
	T dato;

public:
	Nodo(){	
		siguiente = NULL;
	}

	friend class ListaEnlazada<T>;
};


template<class T>
class ListaEnlazada{
private:
	Nodo<T>* cabecera;

public:
	ListaEnlazada(){
		cabecera = NULL;
	}

	void anadirInicio(T dato){
		Nodo<T>* aux;
		aux = new Nodo<T>();
		aux->dato = dato;
		aux->siguiente = this->cabecera;
		cabecera = aux;
	}

	void imprimirInicio(){
		Nodo<T>* aux;
		aux = cabecera;
		while(aux != NULL){
			std::cout << "El dato en: " << aux << " es: " << aux->dato << std::endl;
			aux = aux->siguiente;
		};
	}
};

