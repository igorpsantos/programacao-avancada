#include "categoriaDAO.h"

#define ARQUIVO "Categoria.txt"
CategoriaDAO::CategoriaDAO() {
	//ctor
}

void CategoriaDAO::carregarCategorias() {
	ifstream fin(ARQUIVO);
	string nome;

	while (!fin.eof()) {

		fin >> nome;
		if (fin.eof()) {
			break;
		}
		listaCategorias.push_back(Categoria(nome));

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

void CategoriaDAO::listarCategorias() {
	cout << "***************************************" << endl;
	cout << "Printando agora da lista de Categorias" << endl;
	if (listaCategorias.size() > 0) {
		cout << "o Tamanho da lista de categorias eh :" << listaCategorias.size() << endl;
	}
	else {
		cout << "a da lista ta vazia..." << endl;
	}

	for (int i = 0; i < listaCategorias.size(); i++) {
		cout << "Nome: " << listaCategorias[i].getNome() << endl;
	}
}

void CategoriaDAO::ordenarCategorias() {

	cout << "Ordenando Lista de Categorias..." << endl;
	auto ordenaPorString = [](const Categoria& c1, const Categoria& c2) -> bool {
		return c1.getNome() < c2.getNome();
	};

	sort(listaCategorias.begin(), listaCategorias.end(), ordenaPorString);
}

void CategoriaDAO::salvaLista() {
	//abre o arquivo e sobreescreve com alista atual
	ofstream fout(ARQUIVO);

	for (auto& e : listaCategorias) {
		fout << e.getNome() << "\n";
	}
	fout.close();
}

CategoriaDAO::~CategoriaDAO() {
	//dtor
}