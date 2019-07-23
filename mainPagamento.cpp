#include <iostream>
#include <string>
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    Pagamento *p1 = new Pagamento();
    Pagamento *p2 = new Pagamento();
    Pagamento *p3 = new Pagamento();

    p1->setValor(20);
    p1->setNome("Fernando");

    p2->setValor(30);
    p2->setNome("Jose");

    p3->setValor(40);
    p3->setNome("Maria");

    ControleDePagamentos *cp = new ControleDePagamentos();

    cp->setPagamentos(*p1, 1);
    cp->setPagamentos(*p2, 2);
    cp->setPagamentos(*p3, 3);
    cp->calculaTotalDePagamentos();
    cp->existePagamentoParaFuncionario(p1->getNome());

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
