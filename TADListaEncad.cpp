#include <iostream>
#include "TADListaEncad.h"

using namespace std;

ListaEncad::ListaEncad()
{
    primeiro = NULL;
}

ListaEncad::~ListaEncad(){

}

void ListaEncad::insereInicio(int val)
{
    No *p = new No(); // cria No apontado por p
    p->setInfo(val); // preenche informacao
    p->setProx(primeiro); // preenche proximo
    primeiro = p; // no apontado por p passa
// a ser o primeiro da lista
}

void ListaEncad::imprimeLista(){

    primeiro->imprimeNo();
}
