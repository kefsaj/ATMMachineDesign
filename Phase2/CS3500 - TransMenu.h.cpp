// CS3500 Project Assignment 4 - Implementation
// By Kefin Sajan & Jesus Toxtle
// Last Modified: 12/05/2019

#ifndef Trans_Menu_H
#define Trans_Menu_H


class TransMenu
{
    public:
    void displayPreferSCRN();       //  This function will activate the MSB Preferred customer screen once user
                                    // has successfully authenticated themselves

    void displayNONPreferSCRN();    // "" the MSB Non Preferrred customer screen once user has successfully logged in

    void displaySYSAdminSCRN();     // "" displays the MSB SysAdmin Screen once user has successfully logged in
    
    void displayNONMSBSCRN();       // "" displays the non MSB screen once a customer from another bank has inputted their pin
    
    double getLoanLimit();          // This operation is double return type that will get a customer's loan limit based off their account status with MSB 

    void setLoanLimit();            // This operation will set a customer's loan limit based off their account status with MSB 

    double getInterestRate();      // This function will gets the interest rate working in conjunction with the Oracle database.

    void setInterestRate();        // This will set the interest rate on a customer's account while working in conjunction with the Oracle database

    bool getisMSB();               // This function will return if the customer is affilated in any way with Montana State Bank

    void setisMSB();               // If they are, they are then given a certain status with Montana Stae Bank, whether it's Preferrred or Non-Preferred

    bool setisPreferred();         // This function will is a boolean one that will determine whether a customer's status is indeed preferred or not and synch with the Oracle database.

    void getisPreferred();         // This function is a void return type because it won't return anything and will simply gather account information
                                  // and work with the Oracle database to ensure that a customer is indeed MSB Preferred.

    void moreTrans();             // This function will ask the user if they would like to perform another transaction at the ATM and if so, then they will be presented 
                                 // with the main screen again to either deposit, withdraw, transfer, check balance, or transfer money.

    void logoff();               // This function will appear once the user has decided to not perform anymore transactions at the ATM and would just like to logoff

    private:
    bool isPreferred;               // Private boolean attribute that will work in the background to ensure that the user
                                    // is indeed of MSB preferred status
    
    bool isMSB;                     // Private boolean attribute that will work in the background to ensure that the user is indeed
                                    // a MSB customer and if the customer is  non MSB, then the displayNONMSBSCRN() will activate    

    double interestRate;            // attribute of double return type because it will have a decimal percentage

    double loanLimit;               // Private attribute of double return type because the loan limit can contain decimals with loan limit              
}

#endif /* Trans_Menu_H*/