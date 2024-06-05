#ifndef ADDRESS_DATA_H
#define ADDRESS_DATA_H

#include <iostream>
#include <vector>
#include <fstream>
#include "addressEntry.h"
using namespace std;


class AddresBook{
private:
    vector<AddressEntry> entradasDirectorios;
    ifstream lectorDeArchivo;
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
        cout << "**Correo Electronico**" << endl;
        getline(cin, correoElectronico);
        cout << "**Numero de Telefono**" << endl;
        getline(cin, numeroTelefono);

        AddressEntry ingresoDeDatos(nombre,apellido,calle,ciudad,estado,codigoPostal,correoElectronico,numeroTelefono);
        addAddresVector(ingresoDeDatos);
        cout << "   " << endl;
        cout << "Se agrego exitosamente \n" << endl;
    };


    void addAddresVector(AddressEntry& entrada){
        entradasDirectorios.push_back(entrada);
    };
    

    void searchAddres(){
        cout << " " << endl;
        cout << "introduzca el numero de telefono de la direccion" << endl;
        string numeroTelefono;
        bool verificador = false;
        int posicion;
        cin >> numeroTelefono;

        for(size_t indice = 0; indice < entradasDirectorios.size(); indice++){
            if(entradasDirectorios[indice].getNumeroTelefono() == numeroTelefono){
                verificador = true;
                posicion = indice;
            };
        }

        if(verificador == true){
            cout << "directorio encontrado: \n" << endl;
            entradasDirectorios[posicion].toString();
        }else cout << "directorio no encontrado" << endl;
    };


    void importAddressTxt(){
        string nombre, apellido, calle, ciudad, estado;
        string codigoPostal, correoElectronico, numeroTelefono;
        bool verificadorArchivoAbierto = false;
        bool verificadorArchivoVacio = true;

        cout << "Ingresa el nombre del archivo:" << endl;
        string nombreArchivo;
        cin >> nombreArchivo;
        cout << " " << endl;

        ifstream VerificadorArchivo(nombreArchivo);

        if (!VerificadorArchivo.is_open()){
            cout << "No se encontro ningun archivo con ese nombre" << endl;
        } else {
            verificadorArchivoAbierto = true;
            cout << "Archivo encontrado" << endl;
        };

        if (verificadorArchivoAbierto){
            ifstream archivo(nombreArchivo, ios::ate);
            if (archivo.tellg() == 0) {
                verificadorArchivoVacio = true;
                cout << "El archivo esta vacio" << endl;
            } else {
                verificadorArchivoVacio = false;
            };
        };

        if (!verificadorArchivoVacio && verificadorArchivoAbierto){
            fstream lectorDeArchivo(nombreArchivo);

            cin.ignore();
            getline(lectorDeArchivo, nombre);
            getline(lectorDeArchivo, apellido);
            getline(lectorDeArchivo, calle);
            getline(lectorDeArchivo, ciudad);
            getline(lectorDeArchivo, estado);
            getline(lectorDeArchivo, codigoPostal);
            getline(lectorDeArchivo, correoElectronico);
            getline(lectorDeArchivo, numeroTelefono);

            AddressEntry importarDatos(nombre, apellido, calle, ciudad, estado, codigoPostal, correoElectronico, numeroTelefono);
            addAddresVector(importarDatos);
            cout << "Se agrego el nuevo directorio correctamente" << endl;
        };
    };

    

    void deleteAddres(){
        cout << " " << endl;
        cout << "introduzca el numero de telefono de la direccion a eliminar" << endl;
        string numeroTelefono;
        bool verificador = false;
        int posicion;
        cin >> numeroTelefono;

        for(size_t indice = 0; indice < entradasDirectorios.size(); indice++){
            if(entradasDirectorios[indice].getNumeroTelefono() == numeroTelefono){
                verificador = true;
                posicion = indice;
            };
        }

        if(verificador == true){
            cout << "directorio encontrado: \n" << endl;
            entradasDirectorios[posicion].toString();
            cout << "Desea eliminarlo"<< endl;
            cout << "S/N" << endl;
            

            while(verificador == true){
                char opcion;
                cin >> opcion;
                switch(opcion){
                case 's':entradasDirectorios.erase(entradasDirectorios.begin() + posicion); cout <<"Se elimino exitosamente"<< endl; verificador = false;break;
                case 'n': cout<<"La operacion ha sido cancelada"<< endl; verificador = false ;break;
                default: cout << "Selecciona una de las opciones disponibles \n" << endl;
                };
            };
        };
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