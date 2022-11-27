#ifndef Clases_H
#define Clases_H
#include <string.h>

using namespace std;

class Cliente{
    private:
        string nombre;
        string telefono;
        string direccion;
    public:
        Cliente(string, string, string);
        void setNombre(string);
        void setTelefono(string);
        void setDireccion(string);
        string getNombre();
        string getTelefono();
        string getDireccion();
};
class MetodoPago{
    protected:
        string direccion;
        string ciudad;
        string telefono;
    public:
        MetodoPago(string, string, string);
        float pagar(int);
        void mostrarDatos();
};
class Postre{
	public:
		void getPostre();	
};
class Menu1{
	private:
		Postre postre;
	public:
		Postre getPostre();
		void getMenu();
		void preparar(int);
};
class Credito: public MetodoPago{
	private:
		string numero;
		string banco;
		string tipo;
		string fecha_vencimiento;
	public: 
		Credito(string direccion, string ciudad, string telefono, string numero, string banco, string tipo, string fecha_vencimiento): MetodoPago(direccion,ciudad,telefono){
			this->banco = banco;
			this->numero = numero;
			this->tipo = tipo;
			this->fecha_vencimiento = fecha_vencimiento;
			}
		void mostrarDatos(){
            MetodoPago::mostrarDatos();
            cout << "Nombre del Banco: " << banco << endl;
            cout << "Numero de Cuenta: " << numero<< endl;
        }
};
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
