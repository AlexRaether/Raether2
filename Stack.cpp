/********************************************************************
*** NAME : Alex Raether
*** CLASS : CSc 300
*** ASSIGNMENT : 2
*** DUE DATE : 10/6/2023
*** INSTRUCTOR : GAMRADT ***
*********************************************************************
*** DESCRIPTION : This assignment deals with implementation of the 
ADT Stack, where variables are added to a list of related elements.
The operations of the stack include pop, push, peek, and view.
********************************************************************/

// Include libraries
#include "Stack.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Constructor - creates an empty stack with a preset size
Stack::Stack() : STACK_SIZE(10)
{
    stackArray = new Element[STACK_SIZE];
    top = -1;
}

// Constructor - creats an empty stack with a user-defined size
Stack::Stack(const int size) : STACK_SIZE(size)
{
    stackArray = new Element[STACK_SIZE];
    top = -1;
}

// Copy Constructor
Stack::Stack( Stack &obj ) : STACK_SIZE(10)
{
    if (obj.STACK_SIZE > 0)
    {
        stackArray = new Element[obj.STACK_SIZE];
    }
    else 
    {
        stackArray = nullptr;
    }

    for(int count = 0; count < STACK_SIZE; count++)
    {
        stackArray[count] = obj.stackArray[count];
    }

    top = obj.top;

}

// Destructor
Stack::~Stack()
{
    delete [] stackArray;
}

/********************************************************************
*** FUNCTION push ***
*********************************************************************
*** DESCRIPTION : pushes a new element to the top of the array ***
*** INPUT ARGS : const Element input ***
*** OUTPUT ARGS : none ***
*** IN/OUT ARGS : none ***
*** RETURN : none ***
********************************************************************/
void Stack::push(const Element input)
{
    if(top == STACK_SIZE - 1)
    {
        cout << "ERROR: STACK IS FULL. CANNOT PUSH/INPUT MORE VALUES!";
    }
    else 
    {
        top++;
        stackArray[top] = input;
    }
}

/********************************************************************
*** FUNCTION pop ***
*********************************************************************
*** DESCRIPTION : pops the top element off the array ***
*** INPUT ARGS : none ***
*** OUTPUT ARGS : Element ***
*** IN/OUT ARGS : none ***
*** RETURN : Stack_Element ***
********************************************************************/
Element Stack::pop()
{
    if (top == -1)
    {
        cout << "ERROR: STACK IS EMPTY. CANNOT POP/REMOVE MORE VALUES!" << endl << endl;
        return Element("empty");
    }
    else
    {
        Element Stack_Element = stackArray[top];
        top--;
        return Stack_Element;
    }
}

/********************************************************************
*** FUNCTION peek ***
*********************************************************************
*** DESCRIPTION : takes a peek at the topmost element of the array ***
*** INPUT ARGS : none ***
*** OUTPUT ARGS : ElementPtr ***
*** IN/OUT ARGS : none ***
*** RETURN : stackArray[top] ***
********************************************************************/
Element Stack::peek()
{
    if (top == -1)
    {
        cout << "ERROR: STACK IS EMPTY. CANNOT PEEK TOP VALUE." << endl << endl;
        return Element("empty");
    }
    else 
    {
        return stackArray[top];
    }
}

/********************************************************************
*** FUNCTION view ***
*********************************************************************
*** DESCRIPTION : view all contents of the array ***
*** INPUT ARGS : none ***
*** OUTPUT ARGS : void ***
*** IN/OUT ARGS : none ***
*** RETURN : none ***
********************************************************************/
void Stack::view( )
{
    Element Stack_Element;

    cout << "TOP -> ";

    for(int i = 0; i <= top; i++)
    {
        cout << stackArray[i] << " -> ";
    }

    cout << "BOTTOM" << endl << endl;
}
