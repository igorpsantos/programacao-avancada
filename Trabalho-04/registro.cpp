using namespace std;

#include <string>
#include <iterator>
#include "registro.h"
#include "categoria.h"

Registro::Registro() {
}

Registro::Registro(Data data, int hora, string descricao, Categoria categoria, float preco): _data(data), _hora(hora), _descricao(descricao), _categoria(categoria), _valor(preco){
	_data = data;
	_hora = hora;
	_descricao = descricao;
	_categoria = categoria;
	_valor = preco;
	this->_registros.push_back(this);
}

void Registro::print() {

}

bool Registro::verificaOrcamento() {

}

Registro::~Registro() {
	vector<Registro*>iterator it = find(_registros.begin(), _registros.end(), this);
	if (it != _registros.end) {
		_registros.erase(it);
	}
}