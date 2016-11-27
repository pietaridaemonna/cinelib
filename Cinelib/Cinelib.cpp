// Cinelib.cpp : Defines the exported functions for the static library.
//

#include "Cinelib.h"

// This is an example of an exported variable
int nCinelib=0;

// This is an example of an exported function.
int fnCinelib(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Cinelib.h for the class definition
Cinelib::Cinelib()
{
    return;
}
