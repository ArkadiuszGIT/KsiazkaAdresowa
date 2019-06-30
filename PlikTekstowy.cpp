#include "PlikTekstowy.h"

bool PlikTekstowy::czyPlikJestPusty()
{
    bool pusty = true;
    fstream plikTekstowy;
    plikTekstowy.open(NAZWA_PLIKU.c_str(), ios::app);

    if (plikTekstowy.good() == true)
    {
        plikTekstowy.seekg(0, ios::end);    // Odczytuje plik od koñca z przesuniêciem 0,
        if (plikTekstowy.tellg() != 0)      // tellg( ) odczytuje aktualn¹ pozycjê danych z pliku czyli je¿eli pozycja = 0 to
            pusty = false;                  // plik jest pusty bo odczytujemy od konca.
    }                                        // http://cpp0x.pl/kursy/Kurs-C++/Poziom-4/Poruszanie-sie-po-pliku-w-trybie-do-odczytu/476

    plikTekstowy.close();
    return pusty;
}
