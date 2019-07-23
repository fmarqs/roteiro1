#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data d1 = Data(31, 12, 2019);
    Data d2 = Data(01, 10, 2019);
    Data *d3 = new Data(8, 8, 2019);

    d1.avancarDia();

    cout << "A data eh: " << d1.getDia() << "/" << d1.getMes() << "/" << d1.getAno() << endl;
    cout << "A data eh: " << d2.getDia() << "/" << d2.getMes() << "/" << d2.getAno() << endl;
    cout << "A data3 eh: " << d3->getDia() << "/" << d3->getMes() << "/" << d3->getAno() << endl;

    delete d3;

    return 0;
}
