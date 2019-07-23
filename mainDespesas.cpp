#include <iostream>
#include "ControleDeGastos.h"
#include <string>

using namespace std;

int main()
{
    Despesa *d1 = new Despesa();
    Despesa *d2 = new Despesa();
    Despesa *d3 = new Despesa();

    d1->setValor(15);
    d1->setTipo("comida");

    d2->setValor(5);
    d2->setTipo("bebida");

    d3->setValor(10);
    d3->setTipo("sobremesa");

    ControleDeGastos *cg = new ControleDeGastos();

    cg->setDespesas(*d1, 1);
    cg->setDespesas(*d2, 2);
    cg->setDespesas(*d3, 3);
    cg->calculaTotalDeDespesas();
    cg->existeDespesaDoTipo(d1->getTipo());

    delete d1;
    delete d2;
    delete d3;

    return 0;
}
