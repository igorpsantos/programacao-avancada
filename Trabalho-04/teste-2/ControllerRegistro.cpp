#include "ControllerRegistro.h"
#include "RegistroDAO.h"
#include "periodoDAO.h"

using namespace std;

ControllerRegistro::ControllerRegistro(){}

void ControllerRegistro::executar() {
	int opt = interfaceUsuario.exibirMenu();
	string arquivo = interfaceUsuario.adicionarGastos();
	
	switch (opt) {
	// adicionar gastos
	case 1:
		adicionarGastos(arquivo);
		break;
	// adicionar categorias
	// esse método faz parte do ControllerCategoria
	case 2:
		break;
	// importar gastos
	case 3:
		break;
	// exportar gastos
	case 4:
		int mes = interfaceUsuario.exportarGastos();
		exportarGastos(mes);
		break;
	// consultar gastos
	case 5:
		break;
	// consultar categorias
	// esse método faz parte do ControllerCategoria
	case 6:
		break;
	default:
		break;
	}
}

void ControllerRegistro::adicionarGastos(string arquivo) {
	// chama o metodo adicionar do RegistroDAO.cpp
	registroDAO.adicionar(arquivo);
}

void ControllerRegistro::consultarGastos() {
	// chama o metodo consultar do periodoDAO.ccp
	registroDAO.consultar();
}

void ControllerRegistro::importarGastos(int mes) {
	registroDAO.importar(mes);
}

void ControllerRegistro::exportarGastos(int mes) {
	registroDAO.exportar(mes);
}