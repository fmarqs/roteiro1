#include "ControleDePagamentos.h"
#include <iostream>
#include <string>

using namespace std;

ControleDePagamentos::ControleDePagamentos()
{
    for(int i = 0; i < 100; i++)
        pagamentos[i] = Pagamento();
}

void ControleDePagamentos::setPagamentos(Pagamento p, int t)
{
    pagamentos[t] = p;
}

double ControleDePagamentos::calculaTotalDePagamentos()
{
    double total = 0;

    for(int i = 0; i < 100; i++)
        total += pagamentos[i].Pagamento::getValor();

    cout << "Total de pagamentos: " << total << endl;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nome)
{
    for(int i = 0; i < 100; i++)
    {
        if(nome == pagamentos[i].Pagamento::getNome())
                return true;
        else
                return false;
    }
}
