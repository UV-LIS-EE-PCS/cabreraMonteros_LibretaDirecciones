#include <iostream>
#include "address_data.h"
#include "address.h"

using namespace std;




int main(){

    AddresBook directorio;

    //directorio.addAddresVector("pepe","Torres","leyes de reforma","minatitlan","veracruz",96720,"toriperla@gmail.com",9221220843);
    
    directorio.createAddress();
    directorio.showAddres();
    



    return 0;
}

