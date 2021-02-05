#ifndef TADLISTAENCAD_H_INCLUDED
#define TADLISTAENCAD_H_INCLUDED
#include "TADNo.h"

class ListaEncad
{
public:
    ListaEncad();
    ~ListaEncad();
    void insereInicio(int val);
    void imprimeLista();
    bool busca(int val);
private:
    No* primeiro; // ponteiro para o primeiro
};

#endif // TADLISTAENCAD_H_INCLUDED
