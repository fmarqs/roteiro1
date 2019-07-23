#include "ControleDeGastos.h"
#include <iostream>
#include <string>

using namespace std;

ControleDeGastos::ControleDeGastos()
{
    for(int i = 0; i<100; i++)
        despesas[i] = Despesa();
}

void ControleDeGastos::setDespesas(Despesa d, int t)
{
    despesas[t] = d;
}

double ControleDeGastos::calculaTotalDeDespesas()
{
    double total = 0;

    for(int i = 0; i < 100; i++)
        total += despesas[i].Despesa::getValor();

    cout << "Total de despesas: " << total << endl;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipo)
{
    for(int i = 0; i<100; i++)
    {
        if(tipo == despesas[i].Despesa::getTipo())
            return true;
        else
            return false;
    }
}
