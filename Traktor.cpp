#include "Traktor.h"
#include <iostream>

Traktor::Traktor() {
    islemOnceligi[0] = 3; // İlaçlama
    islemOnceligi[1] = 2; // Çapalama
    islemOnceligi[2] = 1; // Gübreleme
    islemOnceligi[3] = 0; // Sulama
}

void Traktor::sulamaIslemi(Tarla tarla) {
    // Sulama işlemini gerçekleştir
    std::cout << "Tarla " << tarla.tarlaNo << " sulama islemini tamamladi." << std::endl;
}

void Traktor::guBrelemeIslemi(Tarla tarla) {
    // Gübreleme işlemini gerçekleştir
    std::cout << "Tarla " << tarla.tarlaNo << " guBreleme islemini tamamladi." << std::endl;
}

void Traktor::ilacIslemi(Tarla tarla) {
    // İlaçlama işlemini gerçekleştir
    std::cout << "Tarla " << tarla.tarlaNo << " ilac islemini tamamladi." << std::endl;
}

void Traktor::capalamaIslemi(Tarla tarla) {
    // Çapalama işlemini gerçekleştir
    std::cout << "Tarla " << tarla.tarlaNo << " capalama islemini tamamladi." << std::endl;
}

void Traktor::rotaBelirleme(Tarla tarlalar[], int toplamTarla) {
    // Rota belirleme işlemini gerçekleştir
    // Tarla numaralarını ve işlem önceliklerini kullanarak rota belirleme algoritması uygulanabilir
    // Bu algoritma burada örnek olarak verilmemiştir
    // Belirlenen rota, Traktor sınıfının içindeki uygun fonksiyonlar kullanılarak işlemler gerçekleştirilir
    // Örnek olarak:
    for (int i = 0; i < toplamTarla; i++) {
        Tarla tarla = tarlalar[i];
        if (tarla.ilac) {
            ilacIslemi(tarla);
        }
        if (tarla.capalama) {
            capalamaIslemi(tarla);
        }
        if (tarla.guBreleme) {
            guBrelemeIslemi(tarla);
        }
        if (tarla.sulama) {
            sulamaIslemi(tarla);
        }
    }
}

void Traktor::ihtiyacKarsilama() {
    // İhtiyaç karşılama işlemini gerçekleştir
    // Rota belirleme fonksiyonunu çağır ve ihtiyaçları karşıla
}
