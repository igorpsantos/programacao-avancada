#ifndef INTERFACEUSUARIO_H
#define INTERFACEUSUARIO_H

class InterfaceUsuario {
private:
public:
	int exibirMenu();
	void exibirCategorias();
	void exibirGastos();
	string adicionarGastos();
	void adicionarCategorias();
	void consultarGastos();
	void importarGastos();
	int exportarGastos();
};

#endif // !INTERFACEUSUARIO_H

