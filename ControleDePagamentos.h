#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include "Pagamento.h"
#include <iostream>


class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        void setPagamentos(Pagamento p, int t);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(std::string nome);

    private:
        Pagamento pagamentos[100];
};

#endif // CONTROLEDEPAGAMENTOS_H
