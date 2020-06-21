#include "categoriaDAO.h"
#define ARQUIVO "Categoria.txt"

void CategoriaDAO::carregarCategorias() {
	ifstream fin(ARQUIVO);
	string nome;

	while (!fin.eof()) {

		fin >> nome;
		if (fin.eof()) {
			break;
		}
		Categoria::listaCategorias.push_back(Categoria(nome));

	}
	fin.close();
}

void CategoriaDAO::adicionarCategoria(string categoria) {
	// abre arquivo  e escreve na ultima linha
	ofstream fout(ARQUIVO, ios::app);
	if (fout.is_open()) {
		fout << categoria << "\n";
		fout << categoria << "\n";
		fout.close();
	}
	else
		cout << "Nao foi possivel abrir o arquivo";

}

void CategoriaDAO::salvaLista() {
	//abre o arquivo e sobreescreve com alista atual
	ofstream fout(ARQUIVO);

	for (auto& e : Categoria::listaCategorias) {
		fout << e.getNome() << "\n";
	}
	fout.close();
}