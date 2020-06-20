#ifndef REGISTRO_H
#define REGISTRO_H

using namespace std;

#include <string>
#include "data.h"
#include "categoria.h"


class Registro {
private:
	int _cod;
	Data _data;
	int _hora;
	string _descricao;
	Categoria _categoria;
	float _valor;
	bool _ultrapassou;

public:

	static vector<Registro*> _registros;
	friend istream& operator>>(istream& is, Registro& registro);
	friend ostream& operator<<(ostream& os, Registro& registro);

	Registro();

	Registro(Data data, int hora, string descricao, Categoria categoria, float preco);

	void print();

	int getMes() {
		return _data.getMes();
	}

	bool verificaOrcamento();

	virtual ~Registro();
};

inline istream& operator>>(istream& is, Registro& registro) {
	char sep;
	is >> registro._data >> sep >> registro._hora >> sep >> registro._descricao >> sep >> registro._categoria.setNome >> sep >> registro._valor;
	return is;
}

inline ostream& operator<<(ostream& os, Registro& registro) {
	os << setfill('0') << setw(2) << registro._data.getDia << "/";
	os << setfill('0') << setw(2) << registro._data.getMes << "/" << registro._data.getAno;
	os << registro._hora << registro._descricao << registro._categoria.getNome << registro._valor;
	return os;
}

#endif // !REGISTRO_H

