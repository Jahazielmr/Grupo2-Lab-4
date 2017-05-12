#include<iostream>
#include<string>

#ifndef PIEZA_H
#define PIEZA_H

using namespace std;

class Pieza{

	public:
		
		string color;

		Pieza();
    		Pieza(string);
		//get
    		string getColor();
		//set
    		void setColor(string);
    		

};

#endif




















