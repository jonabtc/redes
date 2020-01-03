#include "Sesion.h"

		Sesion::Sesion(){
			setMensaje("");
			}
		void Sesion::setMensaje(string s){
			mensaje = s;
			}
		string Sesion::getMensaje(){
			return mensaje;
			}
		void Sesion::doProcess(Transporte transporte){
			
			}
		void Sesion::doProcess(Presentacion presentacion){
			
			}
