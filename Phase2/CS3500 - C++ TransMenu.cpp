//********************************************************************************
//
// Project Assignment #4        TRANS_MENU_H
// Software Enginnering         CS 3500
//
// By                           Kefin Sajan & Jesus Toxtle
// Last modified                12/17/19
//
//*********************************************************************************

#ifndef TRANS_MENU_H
#define TRANS_MENU_H

#include <iostream> 
#include <string>

using namespace std;

class TransMenu
{
    private:
        bool    isPrefered;
        bool    isMSB;
        double  interestRate;
        double  loanLimit;
    
    public:
        void    displayPreferSCRN(); 
                // will display the MSB preferred screen that is if the user is an MSB preferred customer
        void    displayNONPreferSCRN(); 
                // will display the MSB non-preferred screen that is if the user is an non-preferred customer
        void    displaySYSAdminSCRN();  
                // will display the MSB system administrator screen that is if the user is an MSB system administrator
        void    displayNONMSBSCRN();  
                // will display the non msb screen that is if the user is an non msb customer
        double  getLoanLimit();  
                // will get the customer loan limit on their consumer loan based of their account status
        void    setLoanLimit();  
                // will set the customer loan limit on their consumer loan based of their account status
        double  getInterestRate();  
                // get the interest rate on a customer's account
        void    setInterestRate();  
                // set the interest rate on a customer's account
        bool    getisMSB();  
                // operation will determine if a customer is msb preferred or non-preferred
        void    setisMSB();  
                // will set if the customer is indeed a customer of Montana State Bank
        void    setisPrefered();  
                // will set if the customer is of MSB preferred status
        bool    getisPrefered();  
                // will determine if the customer is of MSB preferred status
        void    moreTrans();  
                // moreTrans() will allow the user to perform another transaction after finishing their current one should they wish to do so
        void    logoff();  
                // allows any user once logged in, to also logout at any time.

};

#endif /* TRANS_MENU_H */
