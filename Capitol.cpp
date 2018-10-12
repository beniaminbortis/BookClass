#include "Capitol.h"
#include <cstring>

void Capitol::setTitlu(char *n){
    strcpy(titluCapitol, n);
}

void Capitol::getTitlu(char *n){
    strcpy(n, titluCapitol);
}
