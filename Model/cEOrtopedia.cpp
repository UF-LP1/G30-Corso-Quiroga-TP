/**
 * Project Untitled
 */
#include <iostream>
#include <string>
#include <cTime>

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
cEOrtopedia::cEOrtopedia(string _Nombre, const int _ID, float _Factura) {
    this->Nombre = _Nombre;
    this->Factura = _Factura;
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
float cEOrtopedia::EmitirFactura(float Factura) {
    cCliente* _cliente = this->getcliente();
    float _monto->getcarrito()->VerTotal();
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