#ifndef ADDRESS_DATA_H
#define ADDRESS_DATA_H


#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

//clase finalizada
class AddressEntry{
private:
    string nombre;
    string apellido;
    string calle;
    string ciudad;
    string estado;
    string codigoPostal;
    string correoElectronico;
    string numeroTelefono;
public: //FIXME se refactorizara todo esto 
    AddressEntry(string _nombre, string _apellido, string _calle, string _ciudad, string _estado, string _codigoPostal, string _correoElectronico, string _numeroTelefono){
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
    string getCodigoPostal(){
        return this->codigoPostal;
    }
    string getCorreoElectronico(){
        return this->correoElectronico;
    }
    string getNmeroTelefono(){
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
    void setCodigoPostal(string _codigoPostal){
        this->codigoPostal = _codigoPostal;
    }
    void setCorreoElectronico(string _correoElectronico){
        this->correoElectronico = _correoElectronico;
    }
    void setNumeroTelefono(string _numeroTelefono){
        this->numeroTelefono = _numeroTelefono;
    }

    int contarDirectorios(){
        int contador = 1;
        return contador++;
    }

    void toString(){
        cout << contarDirectorios() << ": "<< getNombre() << " " << getApellido() << endl;
        cout << getCalle() << endl;
        cout << getCiudad() << " " << getEstado() << " " << getCodigoPostal() << endl;
        cout << getCorreoElectronico() << endl;
        cout << getNmeroTelefono() << endl;
        cout << " "<< endl;
    }
    
    // hace falta el toString() que devuelva el formato de un directorio en la consola


};


class AddresBook{
private:
    vector<AddressEntry> entradasDirectorios;
    ifstream lectorDeArchivos;
public://FIXME se refactorizara todo esto
    void createAddress(){
        string nombre;
        string apellido;
        string calle;
        string ciudad;
        string estado;
        string codigoPostal;
        string correoElectronico;
        string numeroTelefono;

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
        cin >> codigoPostal;
            cin.ignore();
        cout << "**Correo Electronico**" << endl;
        getline(cin, correoElectronico);
        cout << "**Numero de Telefono**" << endl;
        cin >> numeroTelefono;
            cin.ignore();

        AddressEntry ingresoDeDatos(nombre,apellido,calle,ciudad,estado,codigoPostal,correoElectronico,numeroTelefono);
        addAddresVector(ingresoDeDatos);
        cout << "   " << endl;
        cout << "Se agrego exitosamente" << endl;
        cout <<"================================="<< endl;
    };


    void addAddresVector(AddressEntry& entrada){
        entradasDirectorios.push_back(entrada);
    };
    
    void searchAddres(){
        
    };
        //FIXME
    void importAddressTxt(){
        cout << "ingresa el nombre del archivo" << endl;
        string nombreArchivo;
        cin >> nombreArchivo;

        fstream entradaArchivo(nombreArchivo);
        string nombre;
        string apellido;
        string calle;
        string ciudad;
        string estado;
        string codigoPostal;
        string correoElectronico;
        string numeroTelefono;
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
        for(AddressEntry& entrada : entradasDirectorios){
            entrada.toString();
        }
    };

};



#endif // ADDRESS_DATA_H