#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H


#include "Despesa.h"
#include <iostream>

class ControleDeGastos
{
    public:
        ControleDeGastos();
        void setDespesas(Despesa d, int t);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(std::string tipo);

    private:
        Despesa despesas[100];
};

#endif // CONTROLEDEGASTOS_H
