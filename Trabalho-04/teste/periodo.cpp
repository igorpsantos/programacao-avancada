#include <iostream>
#include <iterator>
#include "periodo.h"
using namespace std;

Periodo::Periodo(Data inicial, Data final) : _data_inicial(inicial), _data_final(final), _total(0) {
    for (int i = 0; i < Registro::_AllRegistros.size(); i++) {
        if (Registro::_AllRegistros[i].getData() >= inicial && Registro::_AllRegistros[i].getData() <= final) {
            _registros.push_back(Registro::_AllRegistros[i]);
            _total += Registro::_AllRegistros[i].getCusto();
        }
    }
}