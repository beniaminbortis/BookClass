#include "Subcapitol.h"
#include <cstring>

void Subcapitol::setTitlu(char *n){
    strcpy(titluSubcapitol, n);
}

void Subcapitol::getTitlu(char *n){
    strcpy(n, titluSubcapitol);
}
