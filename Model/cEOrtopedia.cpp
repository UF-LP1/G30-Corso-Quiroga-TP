/**
 * Project Untitled
 */
#include <iostream>
#include <string>


using namespace std;

#include "cEOrtopedia.h"

/**
 * cEOrtopedia implementation
 */


/**
 * @param Nombre
 * @param ID
 * @param Factura
 */
cEOrtopedia::cEOrtopedia(string _Nombre, int _ID) :cAtienden(_Nombre) {
    this->Nombre = _Nombre;
    this->ID = cEmpleado::cont;
    cEmpleado::cont++;
}

/*cCajero::cCajero(string _Nombre, const int _ID, float _Factura) {
    this->Nombre = _Nombre;
    this->Factura = _Factura;

}*/

/**
 * @return void
 */
void cEOrtopedia::LlamarCliente() {
    return;
}

/**
* 
* Esta funci�n genera un monto de los productos pertenecientes al sector donde trabaja este empleado.
* 
 * @param Factura
 * @return float
 */
float cEOrtopedia::EmitirFactura() {
    cCliente* _cliente = this->getcliente();
    float _monto = _cliente->getcarrito()->VerTotal();//corregido
    cout << "Emitiendo Factura" << endl;
    return _monto;
}


/**
 * @return void
 */
void cEOrtopedia::Asesorar() {
    return;
}

/**
 * @return string
 */
string cEOrtopedia::getNombre() {
    return this->Nombre;

}

/**
 * @param string
 * @return void
 */
void cEOrtopedia::setNombre(string Nombre) {
    this->Nombre = Nombre;
    return;

}

cEOrtopedia::~cEOrtopedia() {

}