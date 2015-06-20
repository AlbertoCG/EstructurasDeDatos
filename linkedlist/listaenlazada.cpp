#include "listaenlazada.h"
#include <iostream>

template <class T>
Nodo<T>::Nodo(){
	siguiente = NULL;
}

template<class T>
ListaEnlazada<T>::ListaEnlazada(){
	cabecera = NULL;
}