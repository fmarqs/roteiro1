#ifndef DESPESA_H
#define DESPESA_H

#include <string>

class Despesa
{
    public:
        Despesa();
        double getValor();
        std::string getTipo();
        void setValor(double v);
        void setTipo(std::string tipo);
    private:
        double valor;
        std::string tipo;

};

#endif // DESPESA_H
