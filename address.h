#ifndef ADDRESSBOOKAPLICATION_H
#define ADDRESSBOOKAPLICATION_H
#include <iostream>

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

public:

    bool correr = true;

    void seleccionarOpcion(){
        while(correr){
            char seleccionMenu = menu.setOpcion();
            if(seleccionMenu != 'f'){
                
            }
            cout << "bye"<< endl;

    }
    };

};

#endif //ADDRESSBOOKAPLICATION_H