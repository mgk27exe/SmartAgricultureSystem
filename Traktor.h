#ifndef TRAKTOR_H
#define TRAKTOR_H

#include "Tarla.h"

class Traktor {
public:
    Traktor();

    void sulamaIslemi(Tarla tarla);
    void guBrelemeIslemi(Tarla tarla);
    void ilacIslemi(Tarla tarla);
    void capalamaIslemi(Tarla tarla);

    void rotaBelirleme(Tarla tarlalar[], int toplamTarla);
    void ihtiyacKarsilama();

private:
    int islemOnceligi[4];
};

#endif
