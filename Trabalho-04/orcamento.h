#ifndef ORCAMENTO_H
#define ORCAMENTO_H

#include <string>

class Orcamento {
private:
	float _orcamentoTotal = 0.00;
	string _categoria;
public:
	Orcamento();
	Orcamento(float despesa, string categoria);

	bool verificarOrcamento();
	void acrescentaValor();
	void consultaOrcamento();
};


#endif // !ORCAMENTO_H
