class Nodo {
private:
	Nodo* siguiente;
	T dato;

public:
	Nodo();
};

Nodo::Nodo(){
	siguiente = nullptr;
}

class ListaEnlazada{
private:
	Nodo* cabecera;

public:
	ListaEnlazada();
};

ListaEnlazada::ListaEnlazada(){
	cabecera = null;
}
