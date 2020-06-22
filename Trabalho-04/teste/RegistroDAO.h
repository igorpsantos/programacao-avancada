#include "Registro.h"
#include "periodo.h"
#include <vector>
using namespace std;

class RegistroDAO {
private:
	std::vector<Registro> Registro::_AllRegistros;
public:
	void importar(int mes);
	void exportar(int mes);
	void adicionar(string arquivo);
	void consultar();
};