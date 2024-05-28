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
    AddressEntry nuevasDirecciones;

public:

    AddressBookApplication(AddressEntry& nuevasDirecciones){

    }

    void seleccionarOpcion(){
        bool control = true;
        while(control){
            menu.getMenu();
            char opcion = menu.setOpcion();
            
            switch (opcion){
                case 'a': /* codigo  */     ; break;
                case 'b': /* codigo  */     ; break;
                case 'c': /* codigo  */     ; break;
                case 'd': /* codigo  */     ; break;
                case 'e': nuevasDirecciones.toString(); break;
                case 'f': control = false; cout<<"Hasta Luego..."<< endl;    ; break;
            };
        };
    };

};

#endif //ADDRESSBOOKAPLICATION_H



// notas, lo que falla ahora mismo es el cosntructor que no declaramos en AddressBookApplication
// por lo que es modificar esto y despues podremos llamar a la clase en la funcion main()