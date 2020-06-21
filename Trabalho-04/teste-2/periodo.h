#pragma once
#include "data.h";
#include "registro.h"
#include <vector>;
using namespace std;

class Periodo{
private:
	Data _data_inicial;
	Data _data_final;
	float _total;
public:
	Periodo(Data inicial, Data final, float total);
	vector<Registro> _registros;
};