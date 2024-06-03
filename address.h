#ifndef ADDRESSBOOKAPLICATION_H
#define ADDRESSBOOKAPLICATION_H
#include <iostream>
#include "address_data.h"

using namespace std;




//muestra el menu y las opciones
class Menu{
private:

public:

    void getMenu(){
        cout<<"=================================="<< endl;
        cout<<"Eliga una opcion del menu"<< endl;
        cout<<"a) Cargar archivo"<<endl;
        cout<<"b) Agregar"<<endl;
        cout<<"c) Eliminar"<<endl;
        cout<<"d) Buscar" <<endl;
        cout<<"e) Mostrar" <<endl;
        cout<<"f) Salir"<<endl; 
        cout<<"=================================="<< endl; 
    }

    char setOpcion(){
        char opcion;
        cin >> opcion;
        return opcion;
    };

};


//aqui se manejara la intraccion del usuarioo
class AddressBookApplication{
private:
    Menu menu;
    AddresBook logica;
public:
    void seleccionarOpcion(){
        bool control = true;
        while(control){
            menu.getMenu();
            char opcion = menu.setOpcion();
            
            switch (opcion){
                case 'a': logica.importAddressTxt() ;break;
                case 'b': logica.createAddress(); break;
                case 'c': /* codigo  */     ; break;
                case 'd': /* codigo  */     ; break;
                case 'e': logica.showAddres()  ; break;
                case 'f': control = false; cout<<"Hasta Luego..."<< endl;    ; break;
                default: cout << "Seleccione unas de las opciones presentes \n" << endl;
            };
        };
    };

};

#endif //ADDRESSBOOKAPLICATION_H



// notas, lo que falla ahora mismo es el cosntructor que no declaramos en AddressBookApplication
// por lo que es modificar esto y despues podremos llamar a la clase en la funcion main()