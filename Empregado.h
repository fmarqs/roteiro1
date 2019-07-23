#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado
{
    private:
        std::string nome, sobrenome;
        double salarioMensal;
    public:
        Empregado(std::string name, std::string sobre, double salMen);
        void aumento();
        std::string getNome();
        void setNome(std::string name);
        std::string getSobrenome();
        void setSobrenome(std::string sobre);
        double getSalario();
        void setSalario(double salMen);
};

#endif // EMPREGADO_H
