#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main()
{

	Pessoa p1 = Pessoa("Fernando Marques");
	Pessoa p2 = Pessoa();
	Pessoa p3 = Pessoa("Jose", 18, "111111111");

	p1.setNome(p1.getNome());
	p2.setNome(p2.getNome());
	p2.setIdade(p2.getIdade());
	p2.setTel(p2.getTel());
	p3.setNome(p3.getNome());
	p3.setIdade(p3.getIdade());
	p3.setTel(p3.getTel());

	cout << "Pessoa [1]->\nNome: " << p1.getNome() << endl;
	cout << "Pessoa [2]->\nNome: " << p2.getNome() << "\nIdade: " << p2.getIdade() << "\nTelefone: " << p2.getTel() << endl;
	cout << "Pessoa [3]->\nNome: " << p3.getNome() << "\nIdade: " << p3.getIdade() << "\nTelefone: " << p3.getTel() << endl;

	return 0;
}
