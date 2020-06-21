#ifndef CONTROLLERREGISTRO_H
#define CONTROLLERREGISTRO_H

#include "registro.h";
#include "RegistroDAO.h"
#include "periodo.h";
#include "InterfaceUsuario.h"

class ControllerRegistro {
private:
	RegistroDAO registroDAO;
	InterfaceUsuario interfaceUsuario;
public:
	ControllerRegistro();

	void executar();

	void adicionarGastos(string arquivo);
	void consultarGastos();
	void importarGastos(int mes);
	void exportarGastos(int mes);

};

#endif // !CONTROLLERREGISTRO_H

