#ifndef FISICA_H
#define FISICA_H
#include <string>
#include "Enlace.h"

class Enlace{
	private:
		string mensaje;
	public:
		Enlace();
		void setMensaje(string mensaje);
		string getMensaje();
		void doProcess(Enlace enlace);
		void doProcess();	
	};
#endif
