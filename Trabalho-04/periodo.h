#include "data.h";
#include "registro.h"

#include <vector>;
#include <list>;

class Periodo {
private:
	Data _data_inicial;
	Data _data_final;
	float _total;
public:
	Periodo();
	Periodo(Data inicial, Data final, float total);

	vector<Registro> registros;

	Registro * importar(int csv);
	void exportar(int mes);
	void mostraDespesas();

};
