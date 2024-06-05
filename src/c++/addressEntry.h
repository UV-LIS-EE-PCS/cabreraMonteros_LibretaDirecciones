#ifndef ADDRESSENTRY_H
#define ADDRESSENTRY_H

#include<iostream>
#include<string>
using namespace std;


class AddressEntry{
private:
    string nombre,apellido,calle,ciudad;
    string estado,codigoPostal,correoElectronico,numeroTelefono;
public:
    AddressEntry(string _nombre, string _apellido, string _calle, string _ciudad, string _estado, string _codigoPostal, string _correoElectronico, string _numeroTelefono) :
        nombre(_nombre), apellido(_apellido), calle(_calle), ciudad(_ciudad), estado(_ciudad), 
        codigoPostal(_codigoPostal), correoElectronico(_correoElectronico), numeroTelefono(_numeroTelefono)
    {};

    string getNombre(){
        return nombre;
    };
    string getApellido(){
        return apellido;
    };
    string getCalle(){
        return calle;
    };
    string getCiudad(){
        return ciudad;
    };
    string getEstado(){
        return estado;
    };
    string getCodigoPostal(){
        return codigoPostal;
    };
    string getCorreoElectronico(){
        return correoElectronico;
    };
    string getNumeroTelefono(){
        return numeroTelefono;
    };


    void setNombre(string _nombre){
        nombre = _nombre;
    };
    void setApellido(string _apellido){
        apellido = _apellido;
    };
    void setCalle(string _calle){
        calle = _calle;
    };
    void setCiudad(string _ciudad){
        ciudad = _ciudad;
    };
    void setEstado(string _estado){
        estado = _estado;
    };
    void setCodigoPostal(string _codigoPostal){
        codigoPostal = _codigoPostal;
    };
    void setCorreoElectronico(string _correoElectronico){
        correoElectronico = _correoElectronico;
    };
    void setNumeroTelefono(string _numeroTelefono){
        numeroTelefono = _numeroTelefono;
    };

    void toString(){
        cout <<": "<< getNombre() << " " << getApellido() << endl;
        cout << getCalle() << endl;
        cout << getCiudad() << " " << getEstado() << " " << getCodigoPostal() << endl;
        cout << getCorreoElectronico() << endl;
        cout << getNumeroTelefono() << endl;
        cout << " "<< endl;
    };
};

#endif //ADDRESSENTRY_H