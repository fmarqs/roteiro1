#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main()
{
  string amount;
  Invoice invoice("T4921", "Placa-mae", 4, 500);
  Invoice invoice3("LP021", "Teclado", -1, -5);

  invoice.setNumero(invoice.getNumero());
  invoice.setDescricao(invoice.getDescricao());
  invoice.setQuantidade(invoice.getQuantidade());
  invoice.setPreco(invoice.getPreco());

  cout << "Fatura do Produto:\n " << endl;
  cout << "Numero: " << invoice.getNumero() << endl;
  cout << "Descricao do produto: " << invoice.getDescricao() << endl;
  cout << "Quantidade: " << invoice.getQuantidade() << endl;
  cout << "Preco: R$" << invoice.getPreco() << endl;
  cout << "Total: R$" << invoice.getQuantidade() * invoice.getPreco() << endl;
  cout << "\n" << endl;

  invoice3.setNumero(invoice3.getNumero());
  invoice3.setDescricao(invoice3.getDescricao());
  invoice3.setQuantidade(invoice3.getQuantidade());
  invoice3.setPreco(invoice3.getPreco());

  cout << "Fatura do Produto:\n " << endl;
  cout << "Numero: " << invoice3.getNumero() << endl;
  cout << "Descricao do produto: " << invoice3.getDescricao() << endl;
  cout << "Quantidade: " << invoice3.getQuantidade() << endl;
  cout << "Preco: R$" << invoice3.getPreco() << endl;
  cout << "Total: R$" << invoice3.getQuantidade() * invoice3.getPreco() << endl;

  return 0;
}
