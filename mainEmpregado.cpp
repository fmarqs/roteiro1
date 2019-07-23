#include "Empregado.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Empregado *e1 = new Empregado("Fernando", "Filho", 970.00);
    Empregado *e2 = new Empregado("Joao", "das Neves", 1700.00);

    cout << "Nome: " << e1->getNome() << "\nSobrenome: " << e1->getSobrenome() << "\nSalario mensal: " << e1->getSalario() << endl;
    cout << "Salario anual: " << e1->getSalario() * 12 << endl;

    cout << "Nome: " << e2->getNome() << "\nSobrenome: " << e2->getSobrenome() << "\nSalario mensal: " << e2->getSalario() << endl;
    cout << "Salario anual: " << e2->getSalario() * 12 << endl;

    e1->aumento();
    e2->aumento();

    delete e1;
    delete e2;

    return 0;
}
