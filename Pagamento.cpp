#include "Pagamento.h"
#include <iostream>
#include <string>

using namespace std;

Pagamento::Pagamento()
{
    valorPagamento = 0;
    nomeDoFuncionario = " ";
}

double Pagamento::getValor()
{
    return valorPagamento;
}

string Pagamento::getNome()
{
    return nomeDoFuncionario;
}

void Pagamento::setValor(double v)
{
    valorPagamento = v;
}

void Pagamento::setNome(string nome)
{
    nomeDoFuncionario = nome;
}


