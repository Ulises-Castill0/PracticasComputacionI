
#include "Molecula.h"
#include <iostream>
#include <string>
#include <vector>

Molecula::Molecula(string nmgpo){
    nombreMolecula = nmgpo;
}

void Molecula::AgregarGrupo(Grupo gpo){
    Grupos.push_back(gpo);
}

float Molecula::CalcularPuntoIsoelectrico(){

    float ph;
    int numGrupos = Grupos.size();

}

int Molecula::CalcularCarga(float ph){

    int carga = {};
    int numGrupos = Grupos.size();

}
