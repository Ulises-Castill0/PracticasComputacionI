// Castillo Gomez Jesus Ulises
// 5 de Noviembre de 2020

#include "Punto.h"
#include <cmath>
using namespace std;

void Punto2D::SetPosicion(float a, float b)
{
    x=a;
    y=b;
}

void Punto2D::Trasladar(float temp1, float temp2)
{
    x = x + temp1;
    y = y + temp2;
}

void Punto2D::RotarRespectoAlOrigen(float temp1)
{

    temp1=(temp1*3.141592)/180;

    float xp = x*cos(temp1)-y*sin(temp1);
    float yp = y*cos(temp1)+x*sin(temp1);

    x = xp;
    y = yp;
}

void Punto2D::Escalar(float temp1, float temp2)
{
    x = x * temp1;
    y = y * temp2;
}

float Punto2D::GetX()
{
    return x;
}

float Punto2D::GetY()
{
    return y;
}
