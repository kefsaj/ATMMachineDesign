//********************************************************************************
//
// Project Assignment #4        ACTOR_H
// Software Enginnering         CS 3500
//
// By                           Kefin Sajan & Jesus Toxtle
// Last modified                12/17/19
//
//*********************************************************************************

#ifndef ACTOR_H
#define ACTOR_H

#include <iostream> 
#include <string>

using namespace std;

class Actor
{
        private:
                string  FName;
                string  MName;
                string  LName;
                string  Email;
                bool    nonMSBAgree;
                bool    isAdmin; 

        protected:
                bool    isPreferred;
                bool    isMSB;
                int     restrictions;
                void    sendtoDBMS(cardNum, cardPin); 
                        // will record every transaction that occurs at a MSB ATM; sends it to the 
                        // Oracle database with user's car number and pin and all done in the background
                void    validAcct(cardNum, cardPin); 
                        // will validate a client's account with MSB and ensure their account 
                        // with their card number and pin is already created within the Oracle database

        public:
                string  getFName();     
                        // will get a client's first name and is a string type
                void    setFName();          
                        // will set a client's first name to the string variable FName 
                string  getMName();          
                        // will get a client's middle name and is a string type
                void    setMName();          
                        // will set a client's middle name to the string variable FName
                string  getLName();          
                        // will get a client's last name and is a string type
                void    setLName();          
                        // will set a client's last name to the string variable FName
                bool    getPreferred();      
                        // This boolean function will check if a client's account is indeed preferred
                void    setPreferred()      
                        // If a client is of preferred status, it will return true and display it; 
                        // if not, then it won't display
                bool    getisMSB();         
                        // This boolean function will determine if a client's account is associated 
                        // with MSB with shared isMSB variable
                void    setisMSB();        
                        // If a client is of MSB status, it will return true and display it; 
                        // if not, then it will instead display NON-MSB
                int     getRestrictions();       
                        // This int type function will check with a client's account and depending 
                        // on their status, there will be restrictions
                void    setRestrictions();      
                        // This will store any restrictions and save it into the int restrictions variable
                bool    getAdmin();             
                        // This function will verify that the actor that's logging is indeed of MSB Admin status
                void    setAdmin();            
                        // This will store if an actor is indeed admin in  a private isAdmin variable
                string  getEmail();           
                        // This function will get an actor's email and return it as a string type 
                void    setEmail();          
                        // This will set an actor's email in the private string variable named Email
                void    validInsertCard();      
                        // This operation will validate if an actor did insert their card into the ATM
                void    nonMSBPrompt();      
                        // The operation will prompt an NON-MSB agreement and use the bool private variable nonMSBAgree
                void    moneyCheck();      
                        // moneyCheck operation will verify that there is enough money in the ATM 
                        // to perform transaction such as deposits, withdrawals.
                void    acctFault();      
                        // The operation will check if there are any issues with a user's account.
       
};

#endif /* ACTOR_H */