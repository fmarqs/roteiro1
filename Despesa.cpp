#include "Despesa.h"
#include <iostream>
#include <string>

using namespace std;

Despesa::Despesa()
{
    valor = 0;
    tipo = " ";
}

double Despesa::getValor()
{
    return valor;
}

string Despesa::getTipo()
{
    return tipo;
}

void Despesa::setValor(double v)
{
    valor = v;
}

void Despesa::setTipo(string tipo)
{
    this->tipo = tipo;
}
