#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa()
{
}

Pessoa::Pessoa(string n)
{
  nome = n;
}

Pessoa::Pessoa(string n, int i, string t)
{
  nome = n;
  idade = i;
  telefone = t;
}

string Pessoa::getNome()
{
  return nome;
}

int Pessoa::getIdade()
{
  return idade;
}

string Pessoa::getTel()
{
  return telefone;
}

void Pessoa::setNome(string n)
{
  if(n == "")
  {
    nome = "Nome invalido";
  }else
  {
    nome = n;
  }
}

void Pessoa::setIdade(int i)
{
  if(idade < 0 || i > 200)
  idade = 0;
  else
  idade = i;
}

void Pessoa::setTel(string t)
{
  if(t == "")
  {
    telefone == "Sem numero";
  }else
  {
    telefone = t;
  }
}
