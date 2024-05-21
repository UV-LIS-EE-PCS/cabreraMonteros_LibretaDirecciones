#ifndef ADDRESS_DATA_H
#define ADDRESS_DATA_H

#include <iostream>
#include <string>
using namespace std;


class AddressEntry{
private:
    string nombre;
    string apellido;
    string calle;
    string ciudad;
    string estado;
    int codigoPostal;
    string correoElectronico;
    int numeroTelefono;
public:
    AddressEntry(string _nombre, string _apellido, string _calle, string _ciudad, string _estado, int _codigoPostal, string _correoElectronico, int _numeroTelefono)
       :nombre(_nombre),
        apellido(_apellido),
        calle(_calle),
        ciudad(_ciudad),
        estado(_estado),
        codigoPostal(_codigoPostal),
        correoElectronico(_correoElectronico),
        numeroTelefono(_numeroTelefono){}
};

//aqui se hara la logica de buscar contactos y metodos para gestiones la informacion
class AddresBook{
private:

public:


};




#endif ADDRESS_DATA_H;