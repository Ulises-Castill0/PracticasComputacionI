#include <string>
using namespace std;

class Grupo

{

public:

    Grupo()
    {
        nombreGrupo = "";
        pkGrupo = 0;
        cargaGrupo = 0;
    }
    Grupo(string nombre, float pk, int carga);
    float getpK();
    int getCarga();

private:

    string nombreGrupo;
    float pkGrupo;
    int cargaGrupo;

};
