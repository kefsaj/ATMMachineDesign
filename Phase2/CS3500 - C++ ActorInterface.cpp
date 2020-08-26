//********************************************************************************
//
// Project Assignment #4        ACTOR_INTERFACE_H
// Software Enginnering         CS 3500
//
// By                           Kefin Sajan & Jesus Toxtle
// Last modified                12/17/19
//
//*********************************************************************************

#ifndef ACTOR_INTERFACE_H
#define ACTOR_INTERFACE_H

#include <iostream> 
#include <string>

using namespace std;

class ActorInterface
{
    protected:
        bool inMaintanceMode;
        bool status;
    
    public:
        bool getinMaintanceMode();  
             // This function will verify if the present actor can enter maintainence mode
        void setinMaintanceMode();  
             // This void function will then set the screen in maintenance mode
        bool getstatus();   
             // get the user's account status
        void setstatus();   
             // set the user's account status based of their card and account with MSB
        void welcomeSCRN();   
             // a welcome message that appears before the user decides to insert their card, "Welcome to MSB!"
        void transType();   
             // this function will hold the many different transaction types that a user can choose to do so
        void thankYouMSB();   
             // a thankYouMSB() message appears after a user's transaction has been processed sucessfully saying, "Thank you for conducting business with MSB!"
        void moreTrans();    
             // moreTrans() will allow the user to perform another transaction after finishing their current one should they wish to do so
        void validated(status);   
             // will validate a user's account and their account status
        void displayPinSCRN();   
             // Immediately display after a user inserts their card because it will ask for authentication
        void nonMSBPrompt();   
             // Immediately display if the user is non-msb and wishes to proceed to use the MSB ATM
        void cancelTrans();   
             // function will allow a user to cancel their current transaction should they no longer wish to proceed
};

#endif /* ACTOR_INTERFACE_H */
