template<class T>
class Nodo {
private:
	Nodo<T>* siguiente;
	T dato;

public:
	Nodo();
	friend class ListaEnlazada;
};


template<class T>
class ListaEnlazada{
private:
	Nodo<T>* cabecera;

public:
	ListaEnlazada();
};