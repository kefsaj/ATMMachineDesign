//********************************************************************************
//
// Project Assignment #4        ATMRECEIPT_H
// Software Enginnering         CS 3500
//
// By                           Kefin Sajan & Jesus Toxtle
// Last modified                12/17/19
//
//*********************************************************************************

#ifndef ATMRECEIPT_H
#define ATMRECEIPT_H

#include <iostream> 
#include <string>

using namespace std;

class ATMReceipt
{
        protected:  
                unsigned_t      unitID ; 
                string          unitLocation ; 
                bool            ActorName ;
                string          typeOfTrans ;
                double          currencyExged ; 
                bool            isPrinted ;
                bool            isEmailed ;
                time            transTime ; 
                date            transDate ; 
                int             transID ; 
        public:
                unsigned_t      getUNITID(); 
                                // this operation will capture the ATM information on where a transaction 
                                // was performed and record each transaction to the Oracle database
                string          getULocation(); 
                                // Just like the previous operation, it works in the same way, except it 
                                // captures the location of the ATM
                bool            getisOperational(); 
                                // function will ensure that the ATM is operational
                void            intgetCurrencyExged ();  
                                // function will ensure that currency was exchanged properly.
                void            drawerClose();  
                                // drawerClose() will activate once the user has inputted their form of a 
                                deposit or has requested a withdrawal
                                // then the ATM will close it's drawer and finish processing the transaction
                void            calcCurrTotal(); // This will calculate the currency total within the ATM 
                void            errorLoginMess(); 
                                // this operation will display a message letting the user 
                                // know if they have conflict successfully logging in
                                // and authenticating themselves
                void            ejectCard();  
                                // ejectCard() will operate once the user has confirmed that 
                                // they wish to not perform anymore transactions
                                // then a message will be displayed, "Please take your card" 
                void            cancelTrans();  
                                // cancelTrans() is a choice that the user has should they 
                                // decide to not proceed with their original transaction
                                // and wish to cancel it effectively immediately
                void            ATMCheck();  
                                // ATMCheck will be performed behind-the-scenes and ensure that 
                                // all ATM operations are running as intended
                                // and monitor for any glitches or errors that may have occurred; 
                                // records it in a log for the SysAdmin to review
                void            noReceipt();  
                                // One of two options and a message will display, 
                                // "Would you like a receipt for today's transaction?"
                void            receipt();  
                                // receipt function will occur and bring up the types of receipt the user can get based
                                // off if they like a receipt for their transaction performed today.
                void            confirmEmail();  
                                // confirmEmail will function once the user has confirmed that their inputted email is correct
                void            inputEmail();  
                                // inputEmail will only operate when the user will input their 
                                // desired email for the emailed receipt
                void            changeEmail();  
                                // function will initiate should the user wish to change their email to their correct one
                bool            toEmail();  
                                // toEmail operation will activiate the email receipt version 
                                // should the user request for it
                bool            toPrint();  
                                // toPrint operation will activate the paper receipt version 
                                // should the user requests for it

}

#endif /* ATMRECEIPT_H */