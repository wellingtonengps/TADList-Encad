#include <iostream>
#include "TADNo.h"
#include "TADListaEncad.h"

using namespace std;

No::No() { }
No::~No() { }

int No::getInfo()
{
    return info;
}
No* No::getProx()
{
    return prox;
}
void No::setInfo(int val)
{
    info = val;
}
void No::setProx(No *p)
{
    prox = p;
}

void No::imprimeNo(){
    cout << info << " ";
}
