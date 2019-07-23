#include "Data.h"
#include <iostream>

Data::Data()
{
    //ctor
}

Data::Data(int d, int m, int a)
{
    setDia(d);
    setMes(m);
    ano = a;
}

int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}

int Data::getAno()
{
    return ano;
}

void Data::setDia(int d)
{
    if(d > 0 && d <= 31)
        dia = d;
    else
        std::cout << "Dia invalido" << d << std::endl;
}

void Data::setMes(int m)
{
    if(m > 0 && m <= 12)
        mes = m;
    else
        std::cout << "Mes invalido: " << m << std::endl;
}

void Data::setAno(int a)
{
    ano = a;
}

void Data::avancarDia()
{
    dia++;

    if(mes == 2)
    {
        if(dia > 28)
        {
            dia = 1;
            mes = mes + 1;
        }
    }

    if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if(dia > 30)
        {
            dia = 1;
            mes = mes + 1;
        }
    }

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        if(dia > 31 && mes < 12)
        {
            dia = 1;
            mes = mes + 1;
        }else if(dia > 31 && mes == 12)
            {
                dia = 1;
                mes = 1;
                ano = ano + 1;
            }
    }
}


