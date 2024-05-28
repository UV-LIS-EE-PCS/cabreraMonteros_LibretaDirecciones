#ifndef ADDRESS_DATA_H
#define ADDRESS_DATA_H

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>
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
    long long int numeroTelefono;
public:
    AddressEntry(string _nombre, string _apellido, string _calle, string _ciudad, string _estado, int _codigoPostal, string _correoElectronico, long long int _numeroTelefono){
       this->nombre = _nombre;
        this->apellido = _apellido;
        this->calle =  _calle;
        this->ciudad =  _ciudad;
        this->estado =  _estado;
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

    void toString(){
        cout << "Nombre" << getNombre() << endl;
        cout << "Apellido" << getApellido() << endl;
        cout << "Calle" << getCalle() << endl;
        cout << "Ciudad" << getCiudad() << endl;
        cout << "Estado" << getEstado() << endl;
        cout << "Codigo Postal" << getCodigoPostal()<< endl;
        cout << "Correo electronico" << getCorreoElectronico() << endl;
        cout << "Numero de telefono" << getNmeroTelefono() << endl;
    }
    
    // hace falta el toString() que devuelva el formato de un directorio en la consola


};

//aqui se hara la logica de buscar contactos y metodos para gestiones la informacion
class AddresBook{
private:
    vector<AddressEntry> entradasDirectorios;

public:
    void createAddres(AddressEntry& entradas){
        entradasDirectorios.push_back(entradas);
    }

    void searchAddres(AddressEntry& entradas){
        //entradasDirectorios.
    }

};




#endif //ADDRESS_DATA_H 