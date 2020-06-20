#ifndef PERIODO_DAO_H
#define PERIODO_DAO_H

#include "periodo.h"

class PeriodoDAO {
private:
	vector<Registro> _especificos;
public:
	PeriodoDAO();

	void validarPeriodo();
	Registro importarGastos();
	void exportarGastos();
	void mostrarGastos();
};


#endif // !PERIODO_DAO_H

