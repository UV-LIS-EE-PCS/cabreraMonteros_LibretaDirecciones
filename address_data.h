#ifndef ADDRESS_DATA_H
#define ADDRESS_DATA_H

#include <iostream>
#include <string>
using namespace std;

//clase finalizada
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
    AddressEntry(string _nombre, string _apellido, string _calle, string _ciudad, string _estado, int _codigoPostal, string _correoElectronico, int _numeroTelefono){
       this->nombre = _nombre;
        this->apellido = _apellido;
        this->calle = _calle;
        this->ciudad = _ciudad;
        this->estado = _estado;
        this->codigoPostal = _codigoPostal;
        this->correoElectronico = _correoElectronico;
        this->numeroTelefono = _numeroTelefono;
    };

    string getNombre(){
        return this->nombre;
    }

    string getApellido(){
        return this->apellido;
    }

    string getCalle(){
        return this->calle;
    }
    string getCiudad(){
        return this->ciudad;
    }

    string getEstado(){
        return this->estado;
    }

    int getCodigoPostal(){
        return this->codigoPostal;
    }

    string getCorreoElectronico(){
        return this->correoElectronico;
    }

    int getNmeroTelefono(){
        return this->numeroTelefono;
    }



    void setNombre(string _nombre){
        this->nombre = _nombre;
    }

    void setApellido(string _apellido){
        this->apellido = _apellido;
    }

    void setCalle(string _calle){
        this->calle = _calle;
    }

    void setCiudad(string _ciudad){
        this->ciudad = _ciudad;
    }

    void setEstado(string _estado){
        this->estado = _estado;
    }

    void setCodigoPostal(int _codigoPostal){
        this->codigoPostal = _codigoPostal;
    }

    void setCorreoElectronico(string _correoElectronico){
        this->correoElectronico = _correoElectronico;
    }

    void setNumeroTelefono(int _numeroTelefono){
        this->numeroTelefono = _numeroTelefono;
    }



};

//aqui se hara la logica de buscar contactos y metodos para gestiones la informacion
class AddresBook{
private:

public:


};




#endif //ADDRESS_DATA_H 