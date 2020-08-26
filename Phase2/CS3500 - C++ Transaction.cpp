//********************************************************************************
//
// Project Assignment #4 - Transaction
// Software Enginnering - CS 3500
//
// By   Kefin Sajan & Jesus Toxtle
// Last modified    12/17/19
//
//*********************************************************************************

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream> 
using namespace std;

class transaction
{
    protected:  
        bool    isValidAcct; 
        int     transTime;
        int     transDate; 
        int     transID; 
        int     transAccNum; 
        string  nearestBranch; 
        bool    isAuthenticated; 
        bool    validedCurrency; 
        string  ATMLocation; 
        double  accountBal; 
        double  checkingBal; 
        double  savingsBal;  
        double  moneyMktBal; 
        double  consLoanBal; 
        double  mortgageBal; 
        double  limitofWithdraw; 
        bool    confirmTrans; 
        int     destAccNum; 
        int     doublefromAccNum;

    public:  
        void    sendtoDBMS(cardNum, cardPin);          
                // This function will record every transaction that occurs at a MSB ATM; 
                // sends it to the Oracle database and all done in the background
        bool    getValidAcct();   
                // This a bool type that will work in conjuncction with the validAcct() 
                // function and ensure that the account is affilated with MSB.
        void    setValidAcct();              
                // This function will set a validAcct with a certain variable based of a customer's status
        int     getTransTime();             
                // This int type function will get the time of any transaction and record it. 
                // Is also record and sent to to the database 
        void    setTransTime ();           
                // This will set the transTime to the protected variable int transTime
        int     getTransDT();             
                // This int type function will get the date of any transaction and record it. 
                // Is also record and sent to to the database 
        void    setTransDT();            
                // This will set the transDate to the protected variable int transDate
        int     getTransAccNum();             
                // This int type will record a transaction with a client's account    
        void    setTransAccNum();            
                // This will set a transaction to the protected int variable tranAccNum 
        int     getTransID();               
                // This will record any transaction perform and create and transaction ID
        void    setTransID();              
                // The transaction ID will be set to int transID 
        void    generateTransID();           
                // This function will work, in order to generate a transaction ID 
                // whenever a transaction is performed     
        void    captureNONMSBAgree();           
                // This function will work in the background when a non-MSB client 
                // wants to perform a transaction at an ATM and will display a NON-MSB 
                // agreement and that a service fee will be charge
        void    validAcct(cardNum, cardPin);           
                // This function will validated a user's account with their card number 
                // and pin associated with the debit card
        void    captureTrans();           
                // captureTrans() will record any transaction that's being performed 
                // and record it with the Oracle database
        void    validPartner();           
                // The vaildPartner() is an operation that will be activated should the 
                // user be non-msb and the user wishes to perform a transaction at the ATM.
        void    getAccountBal();           
                // this function will get the account balance for any user
        void    setAccountBal();          
                // this function will set the account balance for any user
        void    getCheckingBal();          
                // this function will get the checking account balance for any user
        void    setCheckingBal();          
                // this function will set the checking account balance for any user
        void    getSavingsBal();          
                // this function will get the savings account balance for any user
        void    setSavingsBal();          
                // this function will set the savings account balance for any user
        void    setMoneyMktBal();          
                // this function will set the money market account balance for a user 
                // based of their account status (MSB - preferred)
        void    getMoneyMktBal();          
                // this function will get the money market account balance for a user (MSB-preferred)
        void    setConsLoanBal();          
                // this function will set the consumer loan account balance for a user (MSB-preferred)
        void    getConsLoanBal();          
                // this function will get the account balance for a user (MSB-preferred)
        void    getdestAccNum();          
                // this function will get the destination account number for any user
        void    setdestAccNum();          
                // this function will set the destination account number for any user
        void    getFromAccNum();          
                // this function will get information from information depending on the account number
        void    setFromAccNum();          
                // this function will set the information depending on the account number
        void    addtoChecking();            
                // addtoChecking() is adding funds to a user's checking account
        void    addtoSavings();             
                // addtoSavings() is adding funds to a user's savings account
        void    addtoConsLoan();            
                // addtoConsLoan() is adding funds to a user's consumer loan account, 
                // but this only works if they are MSB preferred.
        void    addtoMortgage();            
                // addtoMortgage() is adding funds to a user's mortgage account, 
                // but this only works if they are MSB preferred.
        void    addtoMoneyMkt();            
                // addtoMoneyMkt() is adding funds to a user's money market account
        void    rmfromChecking();           
                // rmfromChecking() is removing funds from a user's checking account.
        void    rmfromSavings();            
                // rmfromSavings() is removing funds from a user's savings account.
        void    rmfromMoneyMkt();           
                // rmfromMoneyMkt() is removing funds from a user's money market account.
        void    rmfromConsLoan();           
                // rmfromConsLoan() is removing funds from a user's consumer loan account.
        void    rmfromMortgage();           
                // rmfromMortgage() is removing funds from a user's mortgage account.
        void    confirmSCRN();           
                // confirmSCRN() will ask the user to confirm if the deposited amount, 
                // withdrawal amount, transfer amount is correct and to confirm it.
        void    cancelBtn();           
                // The cancelBtn() will appear throughout the ATM screen and be able to 
                // cancel any operation the user is conducting
        void    insertBills();           
                // This operation will activate and a message appear saying "Please insert up to 50 bills"
        void    depositSCRN();           
                // depositSCRN() will appear when the user selects deposit, asking what 
                // account they would like to deposit into, deposit type and how much..
        void    withdrawlSCRN();           
                // withdrawalSCRN() will appear once the user selects withdrawal and 
                // asking what accounts the user would like to withdraw from today and the withdrawal amount
        void    ckbSCRN();                
                // The ckbSCRN() will is one of the options that allows the user to 
                // check on their balance from any of their open accounts such as
                // checkings, savings, mortgage, consumer loan, or money market
        void    transferSCRN(); 
                // The transferSCRN() will appear once the user has decided what account 
                // they would like to transfer move into will only work based of the user's 
                // account status e.g(preferred vs non-preferred/non-msb)
        void    setConfirmTrans();           
                // This will display that the transaction was successful in processing it 
                // and in the background record it with the Oracle database.
        void    getConfirmTrans();           
                // This will be confirming the transaction was successful.
        void    transError();           
                // This error will appear if there has been an error with the transaction 
                // that's being conducted regardless if it's a deposit, withdrawal, or transfer
        void    transferDestAcct();           
                // the transferDestAcct() will work within the Transfer option and this 
                // the destination to where the money is being transferred to
        void    transferFromAcct();           
                // the transferFromAcct() " " but this is the source of where the money is being remove from.
        void    getlimitofWithdraw();           
                // This operation will determine the limit on how much a withdrawal can be done from a MSB ATM.
}

#endif /* TRANSACTION_H */