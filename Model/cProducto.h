/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>
#include "../Model/ObraSocial.h"
#include "../Model/Pago.h"
#include "../Model/Ticket.h"
#include "../Model/TipoAdmision.h"
#include "TipoMedicamento.h"
using namespace std;

#ifndef _CPRODUCTO_H
#define _CPRODUCTO_H

class cProducto
{
protected:
    string Nombre;
    float Precio;
    int Stock;
    string Marca;
    string Area;
    int ID;

public:
    cProducto(string Nombre, float Precio, int Stock, string Marca, string Area, int _ID);
    ~cProducto();
    virtual bool VerificarStock();
    float getPrecio();
    void setPrecio(float Precio);
    virtual TipoProducto getTipoProducto() = 0;
};

#endif //_CPRODUCTO_H