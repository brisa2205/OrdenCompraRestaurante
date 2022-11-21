#ifndef Menu_H_
#define Menu_H_

#include <string>
using namespace std;
class Menu{
 	private: //atributos
 		string nombre;
 		int opcion;
 		
 		
 		
 	public://metodos
 	    Menu();
 	    int  desplegarMenu();
 	    void buscardisponibilidad();
		void buscarprecio();	
		void imprimirdatos(int opcion);
	};

#endif // Menu_H_
