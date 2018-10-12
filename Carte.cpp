#include "Carte.h"
#include <cstring>

void Carte::putTitlu(char *n){
    strcpy(titluCarte, n);
}

void Carte::getTitlu(char *n){
    strcpy(n, titluCarte);
}
