#ifndef Menu1_H
#define Menu1_H
#include <string.h>

class Menu1{
	private:
		Postre postre;
	public:
		Postre getPostre();
		void getMenu();
		void preparar(int);
};

#endif // Menu1_H