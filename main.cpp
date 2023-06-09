#include "Tarla.h"
#include "Traktor.h"

int main() {
    // Tarla nesnelerini oluştur
    Tarla tarla1(1, true, true, true, false);
    Tarla tarla2(2, true, false, true, false);
    Tarla tarla3(3, true, false, false, true);
    Tarla tarla4(4, true, true, false, false);
    Tarla tarla5(5, true, false, true, true);
    Tarla tarla6(6, true, false, false, false);

    // Tarla nesnelerini bir diziye ekle
    Tarla tarlalar[] = {tarla1, tarla2, tarla3, tarla4, tarla5, tarla6};
    int toplamTarla = sizeof(tarlalar) / sizeof(tarlalar[0]);

    // Traktör nesnesini oluştur
    Traktor traktor;

    // Rota belirleme ve ihtiyaç karşılama işlemini gerçekleştir
    traktor.rotaBelirleme(tarlalar, toplamTarla);
    traktor.ihtiyacKarsilama();

    return 0;
}
