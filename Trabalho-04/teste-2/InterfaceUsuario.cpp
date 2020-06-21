#include <iostream>
#include <istream>
#include "InterfaceUsuario.h"

using namespace std;

int InterfaceUsuario::exibirMenu() {
	cout << "=== Interface Usuario - Menu ===" << endl;
	cout << endl;
	cout << "1) adicionar gastos" << endl;
	cout << "2) adicionar categorias" << endl;
	cout << "3) importar gastos" << endl;
	cout << "4) exportar gastos" << endl;
	cout << "5) consultar gastos" << endl;
	cout << "6) consultar categorias" << endl;

	int opt;
	cin >> opt;

	switch (opt)
	{
	case 1:
		adicionarGastos();
		break;
	default:
		break;
	}
	return opt;
}

void InterfaceUsuario::exibirCategorias() {
	
}

void InterfaceUsuario::exibirGastos() {

}

string InterfaceUsuario::adicionarGastos() {
	string buffer;
	cout << "=== Interface Usuario - Adicionar Gastos ===" << endl;
	cout << endl;
	cout << "O arquivo deve contar o dado de cada registro na seguinte sequencia separado virgula cada virgula eh um registro:" << endl;
	cout << "Data -> DD/MM/AAAA, Hora -> HH:MM, Descricao -> Texto alfa numerico, Categoria -> Nome da categoria, Preco -> 0.00 numero real com '.' " << endl;
	cout << "Digite o caminho absoluto do arquivo texto: " << endl;
	cin >> buffer;

	return buffer;
}

void InterfaceUsuario::importarGastos() {
	
}

int InterfaceUsuario::exportarGastos() {
	int mes;

	cout << "=== Interface Usuario - Exportar Gastos ===" << endl;
	cout << endl;
	cout << "Digite o mes que deseja fazer a exportacao" << endl;
	cin >> mes;

	return mes;
}

void InterfaceUsuario::adicionarCategorias() {

}

void InterfaceUsuario::consultarGastos() {

}
