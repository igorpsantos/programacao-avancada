#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "ControllerCategoria.h"
#include "categoriaDAO.h"
#include "registro.h"

// mesmo principio do executar do ControllerRegistro.cpp
// de acordo com o menu do interface, define os metodos que ser�o chamados aqui
void ControllerCategoria::executar() {

}

// void ControllerCategoria::adicionarCategoria(string categoria) {
// 	categoriaDAO.adicionarCategoria(categoria);
// }
void ControllerCategoria::carregarCategorias() {
	categoriaDAO.carregarCategorias();
}

void ControllerCategoria::salvarCategorias() {
	cout << "Salvando lista ordenada no arquivo" << endl;
	categoriaDAO.salvaLista();
}

float ControllerCategoria::OrcamentoCategoria(Categoria cat){
	return cat.consultaRestante();
}

void ControllerCategoria::RegistrosCategoria(Categoria cat){
	//Ficou meio pedreiro mas dps a gente decide se cout resolve
	Categoria* cat_ptr = &cat;
	for(int i = 0;i < Registro::_AllRegistros.size();i++){
		if(Registro::_AllRegistros[i].getCategoria()==cat_ptr){
			cout << Registro::_AllRegistros[i];
		}
	}
}

float ControllerCategoria::EstouroCategoria(Categoria cat){
	if(cat.consultaEstouro()==true)
		return cat.consultaEstouro();
}