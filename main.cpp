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

// Include libraries
#include "Stack.h"
#include <iostream>
#include <iomanip>
using namespace std;

Stack Stack1;

int main()
{
    // User input variable(s)
    char stack_set;
    int choice;
    Element push_input;
    Element peek_val;

    // Create a loop until the user decides to close the program
    do 
    {
        // Give a title! Tell the user what their using!
        cout << "******** STACK OPERATION MENU ********" << endl;
    
        cout << "Please select from the options below:" << endl << "1. PUSH" << endl << "2. POP" << endl << "3. PEEK" << endl << "4. VIEW" << endl << "5. EXIT" << endl;

        cin >> choice;


         switch (choice)
         {
             // Push case
             case 1:
                 // Title
                 cout << endl << endl << "******** YOU HAVE SELECTED: PUSH ********" << endl;

                     cout << "Enter a string to add to the stack: " << endl;

                     cin >> push_input;
                 
                 cout << endl << endl;

                 Stack1.push(push_input);
                 break;
             // Pop case
             case 2:
             // Title
                 cout << endl << endl << "******** YOU HAVE SELECTED: POP ********" << endl;
                 
                 cout << "Removing top-most value..." << endl;
                 Stack1.pop();
                 break;
             // Peek case
             case 3:
             // Title
                 cout << endl << endl << "******** YOU HAVE SELECTED: PEEK ********" << endl;
                 peek_val = Stack1.peek();
                 
                 if (peek_val == "empty")
                 {
                     break;
                 }
                 else
                 {
                     cout << "The top-most value in the stack is: " << peek_val << endl << endl;
                     break;
                 }
             // View case
             case 4:
             // Title
                 cout << endl << endl << "******** YOU HAVE SELECTED: VIEW ********" << endl;
                 Stack1.view();
                 break;
         }

    } while (choice != 5);

    return (0);


}
