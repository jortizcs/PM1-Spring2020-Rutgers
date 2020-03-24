// Member-function definitions for class CreateAndDestroy
#include <iostream>
using namespace std;
// include CreateAndDestroy class definition from create.h
#include "create.h"

// constructor
CreateAndDestroy::CreateAndDestroy(
    int objectNumber, char *messagePtr ){
    objectID = objectNumber;
    message = messagePtr;
    cout << "Object " << objectID << " constructor runs "
    << message << endl;
} // end CreateAndDestroy constructor

// destructor                                               
CreateAndDestroy::~CreateAndDestroy()                       
{                                                           
    // the following line is for pedagogic purposes only     
    cout << ( objectID == 1 || objectID == 6 ? "\n" : "" );  

    cout << "Object " << objectID << "   destructor runs    "
            << message << endl;                                 
} // end ~CreateAndDestroy destructor                       


