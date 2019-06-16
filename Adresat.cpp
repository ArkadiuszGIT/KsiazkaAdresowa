#include "Adresat.h"

using namespace std;

void Adresat::ustawId(int noweId)
{
    if (noweId >= 0) // zabezpieczenie/walidacja
        id = noweId;
}
void Adresat::ustawIdUzytkownika(int noweId)
{
    if (noweId >= 0) // zabezpieczenie/walidacja
        idUzytkownika = noweId;
}

void Adresat::ustawLogin(string nowyLogin)
{
    login = nowyLogin;
}
void Adresat::ustawHaslo(string noweHaslo)
{
    haslo = noweHaslo;
}
void Adresat::ustawImie(string noweImie)
{
    imie = noweImie;
}
void Adresat::ustawNazwisko(string noweNazwisko)
{
    nazwisko = noweNazwisko;
}
void Adresat::ustawNumerTelefonu(string nowyNumerTelefonu)
{
    numerTelefonu = nowyNumerTelefonu;
}
void Adresat::ustawEmail(string nowyEmail)
{
    email = nowyEmail;
}
void Adresat::ustawAdres(string nowyAdres)
{
    adres = nowyAdres;
}

int Adresat::pobierzId()
{
    return id;
}
int Adresat::pobierzIdUzytkownika()
{
    return idUzytkownika;
}
string Adresat::pobierzLogin()
{
    return login;
}
string Adresat::pobierzHaslo()
{
    return haslo;
}
string Adresat::pobierzImie()
{
    return imie;
}
string Adresat::pobierzNazwisko()
{
    return nazwisko;
}
string Adresat::pobierzNumerTelefonu()
{
    return numerTelefonu;
}
string Adresat::pobierzEmail()
{
    return email;
}
string Adresat::pobierzAdres()
{
    return adres;
}
