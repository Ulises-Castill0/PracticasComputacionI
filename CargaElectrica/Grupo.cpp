#include "Grupo.h"
using namespace std;

Grupo::Grupo(string nombre, float pk, int carga)

{
    nombreGrupo = nombre;
    pkGrupo = pk;
    cargaGrupo = carga;
}

float Grupo::getpK()

{
    return pkGrupo;
}

int Grupo::getCarga()

{
    return cargaGrupo;
}
