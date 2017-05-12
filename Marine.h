#include <iostream>
#include "Pieza.h"
#include <string>
#ifndef MARINE_H
#define MARINE_H

using namespace std;

class Marine : public Pieza{

    public:	
	Marine();
	Marine(string);
};

#endif
