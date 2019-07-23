#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

Invoice::Invoice(string inumero, string idescricao, int iquantidade, int ipreco)
{
  setNumero(inumero);
  setDescricao(idescricao);
  setQuantidade(iquantidade);
  setPreco(ipreco);
}

void Invoice::setNumero(string inumero)
{
   numero = inumero;
}

string Invoice::getNumero()
{
  return numero;
}

void Invoice::setDescricao(string idescricao)
{
  descricao = idescricao;
}

string Invoice::getDescricao()
{
  return descricao;
}

void Invoice::setPreco(int ipreco)
{
  if(ipreco >= 0)
    preco = ipreco;
  else if (ipreco < 0)
    preco = 0;
}

int Invoice::getPreco()
{
  return preco;
}

void Invoice::setQuantidade(int iquantidade)
{
  if(iquantidade > 0)
    quantidade = iquantidade;
  else if(iquantidade <= 0)
    quantidade = 0;
}

int Invoice::getQuantidade()
{
  return quantidade;
}

double Invoice::getInvoiceAmount(int iquantidade, int ipreco)
{
  if((iquantidade < 0) || (ipreco < 0))
      cout << "Entrada invalida" << endl;
  else
    invoiceAmount = ipreco * iquantidade;
  return invoiceAmount;

}
