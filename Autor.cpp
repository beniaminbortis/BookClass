#include "Autor.h"
#include <cstring>

void Autor::setNume(char *n){
    strcpy (numeAutor, n);
}

void Autor::getNume(char *n){
    strcpy (n, numeAutor);
}
