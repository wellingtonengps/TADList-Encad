#ifndef TADNO_H_INCLUDED
#define TADNO_H_INCLUDED

class No
{
public:
    No();
    ~No();
    int getInfo();
    No* getProx();
    void setInfo(int val);
    void setProx(No *p);
    void imprimeNo();
private:
    int info; // informacao
    No *prox; // ponteiro para o proximo
};

#endif // TADNO_H_INCLUDED
