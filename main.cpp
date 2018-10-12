#include <iostream>
#include <cstring>
#include "Carte.h"
#include "Cuprins.h"
#include "Autor.h"
#include "Capitol.h"
#include "Subcapitol.h"

using namespace std;

int main()
{
    Carte book;
    Cuprins content;
    Autor author;
    Capitol chapter;
    Subcapitol subchapter;

    char titluCarte[100];
    char Cuprinsul[250];
    char numeAutor[100];
    char titluCapitol[100];
    char titluSubcapitol[100];

    book.putTitlu("Carte --- Omul Pesterilor");
    book.getTitlu(titluCarte);

    chapter.setTitlu("Cuprins -----------------");
    chapter.getTitlu(Cuprinsul);

    author.setNume("Autor --- Doug Batchelor");
    author.getNume(numeAutor);

    chapter.setTitlu("Capitol --- Prima zi in salbaticie");
    chapter.getTitlu(titluCapitol);

    subchapter.setTitlu("Subcapitol --- Ploaia");
    subchapter.getTitlu(titluSubcapitol);

    cout << titluCarte << endl;
    cout << Cuprinsul << endl;
    cout << numeAutor << endl;
    cout << titluCapitol << endl;
    cout << titluSubcapitol << endl;

    return 0;
}
