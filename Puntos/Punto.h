// Castillo Gomez Jesus Ulises
// 5 de noviembre de 2020

#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H

class Punto2D
{

public:

    void SetPosicion(float a,float b);
    void Trasladar(float temp1,float temp2);
    void RotarRespectoAlOrigen(float temp1);
    void Escalar(float temp1, float temp2 );

    float GetX();
    float GetY();

};

#endif
