#include "Cuprins.h"
#include <cstring>

void Cuprins::setCuprins(char *n){
    strcpy(Cuprinsul, n);
}

void Cuprins::getCuprins(char *n){
    strcpy(n, Cuprinsul);
}
