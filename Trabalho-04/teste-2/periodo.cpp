#include "periodo.h";
#include <iostream>
#include <iterator>
using namespace std;

Periodo::Periodo(Data inicial, Data final, float total) : _data_inicial(inicial), _data_final(final), _total(total) {
    for(int i = 0; i < Registro::_AllRegistros.size(); i++){
        if(Registro::_AllRegistros[i].getData() >= inicial && Registro::_AllRegistros[i].getData() <= final) {
            _registros.push_back(Registro::_AllRegistros[i]);
        }
    }
}