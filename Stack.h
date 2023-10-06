/********************************************************************
*** NAME : Alex Raether
*** CLASS : CSc 300
*** ASSIGNMENT : 1
*** DUE DATE : 9/25/2023
*** INSTRUCTOR : GAMRADT ***
*********************************************************************
*** DESCRIPTION : The class of this file is called List, a list of 
nodes with the ability to add (insert a new node), remove 
(delete an existing node), or view all nodes in the list
********************************************************************/


#ifndef _STACK_H // Guard
#define _STACK_H

#include <iostream>

typedef std::string Element;
typedef Element * ElementPtr;

class Stack {
    public: 
        // Constructor - Creates a basic, empty stack with a pre-set size
        Stack(); 

        // Constructor - Creates a basic, empty stack BUT with a user-set size
        Stack( const int ); 

        // Copy Constructor
        Stack( Stack & );

        // Destructor
        ~Stack();

        /********************************************************************
        *** FUNCTION push ***
        *********************************************************************
        *** DESCRIPTION : pushes a new element to the top of the array ***
        *** INPUT ARGS : const Element input ***
        *** OUTPUT ARGS : none ***
        *** IN/OUT ARGS : none ***
        *** RETURN : none ***
        ********************************************************************/
        void push( const Element );

        /********************************************************************
        *** FUNCTION pop ***
        *********************************************************************
        *** DESCRIPTION : pops the top element off the array ***
        *** INPUT ARGS : none ***
        *** OUTPUT ARGS : Element ***
        *** IN/OUT ARGS : none ***
        *** RETURN : Stack_Element ***
        ********************************************************************/
        Element pop( );

        /********************************************************************
        *** FUNCTION peek ***
        *********************************************************************
        *** DESCRIPTION : takes a peek at the topmost element of the array ***
        *** INPUT ARGS : none ***
        *** OUTPUT ARGS : ElementPtr ***
        *** IN/OUT ARGS : none ***
        *** RETURN : stackArray[top] ***
        ********************************************************************/
        Element peek( );

        /********************************************************************
        *** FUNCTION view ***
        *********************************************************************
        *** DESCRIPTION : view all contents of the array ***
        *** INPUT ARGS : none ***
        *** OUTPUT ARGS : void ***
        *** IN/OUT ARGS : none ***
        *** RETURN : none ***
        ********************************************************************/
        void view( );

    private: 
        const int STACK_SIZE; 
        ElementPtr stackArray;
        int top;
};

#endif