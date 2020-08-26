//********************************************************************************
//
// Project Assignment #4        ATMCORE_H
// Software Enginnering         CS 3500
//
// By                           Kefin Sajan & Jesus Toxtle
// Last modified                12/17/19
//
//*********************************************************************************

#ifndef ATMCORE_H
#define ATMCORE_H

#include "ATMRecipt.h"
#include <iostream> 
#include <string>

using namespace std;

class ATMCore
{
        private:  
                unsigned_t      unitID; 
                string          unitLocation; 
                bool            isOperational; 
                int             currencyTotal; 
                void            cancelTrans(); 
                                // function will allow a user to cancel their current transaction should they no longer wish to proceed
                void            ATMCheck();    
                                // function will work behind the scenes and ensure that all operations are running as intended
                void            disableCOMM();  
                                // an operation that's only accessible by one actor which is the system administrator and disable all communication activities
                void            diagnosisLog();  
                                // a diagnosis log that will appear that can only be read by the system administrator
                void            addCurrBal();  
                                // addCurrBal() will add to the current account balance 
                void            rmCurrBal();  
                                // rmCurrBal() will remove from the current account balance
                void            validAcct(cardNum, cardPin);   
                                // will validate a user's account with their card number and card pin and record it with the Oracle database
        protected:
                void            withdrawalSCRN();  
                                // shared operation presents the withdrawalSCRN() allowing a user to make any withdrawals
                double          calcCurrTotal();  
                                // function will calculate the currency total within the ATM
        public:
                unsigned_t      getUNITID();   
                                // this will get the ATM unit ID and record everything that was done with the Oracle database in the background
                void            setUNITID();  
                                // will set the ATM unit ID associated with the ATM
                string          getULocation();  
                                // similar to the Unit id, but this will hold information regarding the ATM location and record with the Oracle database
                void            setULocation();  
                                // set the ATM location
                bool            getisOperational();  
                                // ensure that the ATM is operational and working to be used by any customers
                void            setisOperational();  
                                // set the ATM in a working manner
                int             getCurrencyTotal();  
                                // gets the currency total and will work with the calcCurrTotal()
                void            setCurrencyTotal();  
                                // sets the currency total and will work with the calcCurrTotal()
                void            drawerClose();  
                                // drawerClose() will occur once the user has finished depositing 
                                // their selected amount or withdrawing and then finish processing            
                                // their transaction
                void            calcCurrTotal();  
                                // calculate the currency total of any amount 
                void            errorLoginMess();  
                                // errorLoginMess() will only appear if a user is unable to successfully login into their account
                void            ejectCard();      
                                // ejectCard() will occur once the user is has decided they won't like to perform anymore transactions
                                // then their card will be ejected along with a message saying, "Please take your card"
                void            cancelBtn();    
                                // cancelBtn() will be an operation displayed for the user and will work with the cancelTrans()
                void            rmCash();      
                                // rmCash() will display once the user selects withdrawal and a message will say, "Please take your cash withdrawal"
}

#endif /* ATMCORE_H */