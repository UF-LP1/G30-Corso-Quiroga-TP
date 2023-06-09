/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

using namespace std;

#ifndef _CEMOSTRADOR_H
#define _CEMOSTRADOR_H

#include "cAtienden.h"

#include "../Model/ObraSocial.h"
#include "../Model/Pago.h"
#include "../Model/Ticket.h"
#include "../Model/TipoAdmision.h"
#include "../G30-Corso-Quiroga-TP/TipoEmpleado.h"
class cEMostrador : public cAtienden
{


public:
    /**
     * @param Nombre
     * @param ID
     * @param Factura
     */
    cEMostrador(string Nombre, int _ID, cCliente* _cliente);

    ~cEMostrador();

    void LlamarCliente(cCliente* cliente);
    
    void setTipoEmpleado(TipoEmpleado tipoEmpleado);
    /**
     * @param Factura
     */
    float EmitirFactura();

    /**
     * @param ObraSocial
     */
    float AplicarDescuento(ObraSocial obraSocial, float Monto);

    string getNombre();

    /**
     * @param string
     */
    void setNombre(string Nombre);

    /**
     * @param Nombre
     * @param Unidades
     * @param Medicamento
     */
    void LeerReceta(string Nombre, int Unidades, string Medicamento);
};

#endif //_CEMOSTRADOR_H