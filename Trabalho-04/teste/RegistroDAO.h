#pragma once
#include "Registro.h"
#include <vector>
using namespace std;

class RegistroDAO {
public:
	void importar(int mes);
	void exportar(int mes);
};