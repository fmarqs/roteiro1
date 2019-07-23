#ifndef PESSOA_H
#define PESSOA_H


#include <string>

using namespace std;

class Pessoa
{
  private:
    string telefone;
    string nome;
    int idade;

  public:
    Pessoa();
    Pessoa(string n);
    Pessoa(string n, int i, string t);
    string getNome();
    string getTel();
    int getIdade();
    void setNome(string n);
    void setTel(string t);
    void setIdade(int i);


};
#endif // PESSOA_H
