#ifndef TRANSPORTE_H
#define TRANSPORTE_H
#include <string>
#include "Sesion.h"
#include "Red.h"

class Transporte{
	private:
		string mensaje;
	public:
		Transporte();
		void setMensaje(string s);
		string getMensaje();
		void doProcess(Sesion sesion);
		void doProcess(Red red);	
	};
#endif
