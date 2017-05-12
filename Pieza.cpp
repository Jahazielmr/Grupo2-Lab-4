#include "Pieza.h"
#include <string>
using namespace std;

  
Pieza::Pieza(){
}

  Pieza::Pieza(string color){
    this-> color = color;
  }

  string Pieza::getColor(){
    return color;
  }


  void Pieza::setColor(string pColor){
    color = pColor;
  }

 
  
  
  
  
  
