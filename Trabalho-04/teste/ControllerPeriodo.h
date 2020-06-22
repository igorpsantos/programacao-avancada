#include "periodo.h"
#include "periodoDAO.h"
#include "data.h"

class ControllerPeriodo{
public:
    float Consultar(Data inicial,Data final);
    void Exportar(Data inicial, Data final);
};

float ControllerPeriodo::Consultar(Data inicial,Data final){
    Periodo(inicial,final).getTotal();
}

void ControllerPeriodo::Exportar(Data inicial,Data final){
    PeriodoDAO::exportar(Periodo(inicial,final));
}