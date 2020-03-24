// Definition of class CreateAndDestroy.
// Member functions defined in create.cpp.
#ifndef CREATE_H
#define CREATE_H
class CreateAndDestroy {
    public:
        CreateAndDestroy( int, char * ); // constructor
        ~CreateAndDestroy(); // destructor
    private:
        int objectID;
        char *message;
}; // end class CreateAndDestroy
#endif
