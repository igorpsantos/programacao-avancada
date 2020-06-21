#ifndef CONTROLLERREGISTRO_H
#define CONTROLLERREGISTRO_H

#include "registro.h";
#include "periodo.h";

class ControllerRegistro {
private:
public:
	ControllerRegistro();

	void adicionarGastos(Registro registro);
	void consultarGastos(Periodo periodo);

};

#endif // !CONTROLLERREGISTRO_H

