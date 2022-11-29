#ifndef Clases_H
#define Clases_H
#include <string.h>

using namespace std;

class Efectivo: public MetodoPago{
		public: 
		Efectivo(string direccion, string ciudad, string telefono): MetodoPago(direccion,ciudad,telefono){}
		void mostrarDatos(){
            MetodoPago::mostrarDatos();
            cout << "Favor de pagar en caja"<< endl;
            cout << "Muchas gracias por su compra :) Vuleva pronto"<< endl;
        }
};
#endif // Clases_H
