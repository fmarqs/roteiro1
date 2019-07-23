#include "Empregado.h"
#include <iostream>
#include <string>

using namespace std;

Empregado::Empregado(string name, string sobre, double salMen)
{
    setNome(name);
    setSobrenome(sobre);
    setSalario(salMen);
}

string Empregado::getNome()
{
    return nome;
}

string Empregado::getSobrenome()
{
    return sobrenome;
}

double Empregado::getSalario()
{
    return salarioMensal;
}

void Empregado::setNome(string name)
{
    nome = name;
}

void Empregado::setSobrenome(string sobre)
{
    sobrenome = sobre;
}

void Empregado::setSalario(double salMen)
{
    salarioMensal = salMen;
}

void Empregado::aumento()
{
    salarioMensal = salarioMensal * 1.10;

    cout << "Nome: " << nome << "\nSobrenome: " << sobrenome << endl;
    cout << "Novo salario anual do funcionario: " << salarioMensal * 12 << endl;
}


