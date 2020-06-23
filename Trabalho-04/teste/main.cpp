#include "categoria.h"
#include "categoriaDAO.h"
#include "data.h"
#include "periodo.h"
#include "periodoDAO.h"
#include "registro.h"
#include "RegistroDAO.h"
#include <iostream>
using namespace std;

int main() {
	Categoria a("categoria1",100);
	Categoria::listaCategorias.push_back(a);
	Categoria b("categoria2",300);
	Categoria::listaCategorias.push_back(b);
	CategoriaDAO CDAO;
	CDAO.carregarCategorias();
	CDAO.salvaLista();
	RegistroDAO RDAO;
	RDAO.importar(4);
	RDAO.consultar();
	RDAO.exportar(4);
	for (int i = 0; i < Categoria::listaCategorias.size(); i++) {
		cout << Categoria::listaCategorias[i].getNome() << ", " << Categoria::listaCategorias[i].getOrcamentoTotal() << endl;
	}
	PeriodoDAO PDAO;
	PDAO.exportar(Periodo(Data(), Data(9, 9, 99)));

	// Criamos até agora:
	/*  
		Orcamento: Orcamento.h, Orcamento.cpp, OrcamentoDAO.cpp, OrcamentoDAO.h
		Registro: Registro.h, Registro.cpp, RegistroDAO.h, RegistroDAO.cpp
		Categoria: Categoria.h, Categoria.cpp, CategoriaDAO.cpp, CategoriaDAO.h
		Data: Data.h, Data.cpp
		Periodo: Periodo.h, Periodo.cpp, PeridoDAO.h, PeriodoDAO.cpp

		Controllers:
		ControllerRegistro: Método de Adicionar Gastos e Consultar Gastos		
	*/

	return 0;
}