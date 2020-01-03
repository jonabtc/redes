#include "Transporte.h"

		Transporte::Transporte(){
			setMensaje("");
			}
		void Transporte::setMensaje(string s){
			mensaje = s;
			}
		string Transporte::getMensaje(){
			return mensaje;
			}
		void Transporte::doProcess(Sesion sesion){
			
			}
		void Transporte::doProcess(Red red){
			
			}
