#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario: Persona {
	
	private : string nit;
				double cui; 
	
	public : 
			Propietario(){	
			}
			
			Propietario(string nom,string ape,string dire,string fn, int tele, string n, double c) : Persona(nom,ape,dire,fn,tele){
				nit = n ;
				cui = c ;
			}

	void setNit(string n){nit = n;}
	void setCui(double c){cui = c;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFecha_nacimiento(string fn){fecha_nacimiento = fn;}
	void setTelefono(int tele){telefono = tele;}

	string getNit(){return nit;}
	double getCui(){return cui;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFecha_nacimiento(){return fecha_nacimiento;}
	int getTelefono(){return telefono;}
	
			
			
			void mostrar (){
				cout<<"__________________________________________________________"<<endl;
				cout<<nit<<";"<<cui<<";"<<nombres<<";"<<apellidos<<";"<<direccion<<";"<<fecha_nacimiento<<";"<<telefono;
			}
			
		
};
