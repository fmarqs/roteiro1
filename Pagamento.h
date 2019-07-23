#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

class Pagamento
{
    public:
        Pagamento();
        double getValor();
        std::string getNome();
        void setValor(double v);
        void setNome(std::string nome);

    private:
        double valorPagamento;
        std::string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
