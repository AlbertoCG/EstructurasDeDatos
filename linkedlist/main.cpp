#include <iostream>
#include "listaenlazada.h"

int main(int argc, char const *argv[])
{
	ListaEnlazada<int> lista;

	lista.anadirInicio(5);
	lista.anadirInicio(4);

	lista.imprimirInicio();
	return 0;
}