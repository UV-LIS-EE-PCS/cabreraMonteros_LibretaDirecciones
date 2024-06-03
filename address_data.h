#ifndef ADDRESS_DATA_H
#define ADDRESS_DATA_H


#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class AddressEntry{
private:
    string nombre,apellido,calle,ciudad;
    string estado,codigoPostal,correoElectronico,numeroTelefono;
public: //FIXME se refactorizara todo esto 
    AddressEntry(string _nombre, string _apellido, string _calle, string _ciudad, string _estado, string _codigoPostal, string _correoElectronico, string _numeroTelefono) :
        nombre(_nombre), apellido(_apellido), calle(_calle), ciudad(_ciudad), estado(_ciudad), 
        codigoPostal(_codigoPostal), correoElectronico(_correoElectronico), numeroTelefono(_numeroTelefono)
    {};

    string getNombre(){
        return nombre;
    }
    string getApellido(){
        return apellido;
    }
    string getCalle(){
        return calle;
    }
    string getCiudad(){
        return ciudad;
    }
    string getEstado(){
        return estado;
    }
    string getCodigoPostal(){
        return codigoPostal;
    }
    string getCorreoElectronico(){
        return correoElectronico;
    }
    string getNumeroTelefono(){
        return numeroTelefono;
    }



    void setNombre(string _nombre){
        nombre = _nombre;
    }
    void setApellido(string _apellido){
        apellido = _apellido;
    }
    void setCalle(string _calle){
        calle = _calle;
    }
    void setCiudad(string _ciudad){
        ciudad = _ciudad;
    }
    void setEstado(string _estado){
        estado = _estado;
    }
    void setCodigoPostal(string _codigoPostal){
        codigoPostal = _codigoPostal;
    }
    void setCorreoElectronico(string _correoElectronico){
        correoElectronico = _correoElectronico;
    }
    void setNumeroTelefono(string _numeroTelefono){
        numeroTelefono = _numeroTelefono;
    }

    
    void toString(){
        cout <<": "<< getNombre() << " " << getApellido() << endl;
        cout << getCalle() << endl;
        cout << getCiudad() << " " << getEstado() << " " << getCodigoPostal() << endl;
        cout << getCorreoElectronico() << endl;
        cout << getNumeroTelefono() << endl;
        cout << " "<< endl;
    }
};
   

class AddresBook{
private:
    vector<AddressEntry> entradasDirectorios;
    ifstream lectorDeArchivos;
public:
    void createAddress(){
        string nombre,apellido,calle,ciudad,estado;
        string codigoPostal,correoElectronico,numeroTelefono;

        cin.ignore();
        cout << "**Nombre**" << endl;
        getline(cin, nombre);
        cout << "**Apellido**" << endl;
        getline(cin, apellido);
        cout << "**Calle**" << endl;
        getline(cin, calle);
        cout << "**Ciudad**" << endl;
        getline(cin, ciudad);
        cout << "**Estado**" << endl;
        getline(cin, estado);
        cout << "**Codigo Postal**" << endl;
        getline(cin, codigoPostal);
        //cin.ignore();
        cout << "**Correo Electronico**" << endl;
        getline(cin, correoElectronico);
        cout << "**Numero de Telefono**" << endl;
        getline(cin, numeroTelefono);
        //cin.ignore();

        AddressEntry ingresoDeDatos(nombre,apellido,calle,ciudad,estado,codigoPostal,correoElectronico,numeroTelefono);
        addAddresVector(ingresoDeDatos);
        cout << "   " << endl;
        cout << "Se agrego exitosamente" << endl;
        cout << " " << endl;
    };


    void addAddresVector(AddressEntry& entrada){
        entradasDirectorios.push_back(entrada);
    };
    
    void searchAddres(){
        
    };
        //FIXME
    void importAddressTxt(){
        string nombre,apellido,calle,ciudad,estado;
        string codigoPostal,correoElectronico,numeroTelefono;

        cout << "ingresa el nombre del archivo" << endl;
        string nombreArchivo;
        cin >> nombreArchivo;
        fstream entradaArchivo(nombreArchivo);

        cin.ignore();
        getline(entradaArchivo,nombre);
        getline(entradaArchivo,apellido);
        getline(entradaArchivo,calle);
        getline(entradaArchivo,ciudad);
        getline(entradaArchivo,estado);
        getline(entradaArchivo,codigoPostal);
        getline(entradaArchivo,correoElectronico);
        getline(entradaArchivo,numeroTelefono);

        AddressEntry importarDatos(nombre,apellido,calle,ciudad,estado,codigoPostal,correoElectronico,numeroTelefono);
        addAddresVector(importarDatos);
    };
    
    void deleteAddres(){
        //eliminarDirectorios.
    };


    void showAddres(){
        for(size_t indice = 0; indice < entradasDirectorios.size(); indice++){
            int indicador = indice;
            indicador++;
            cout << indicador;
            entradasDirectorios[indice].toString();
        };
    };

};



#endif // ADDRESS_DATA_H