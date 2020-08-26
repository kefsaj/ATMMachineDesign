//********************************************************************************
//
// Project Assignment #4        MAINTENANCE_H
// Software Enginnering         CS 3500
//
// By                           Kefin Sajan & Jesus Toxtle
// Last modified                12/17/19
//
//*********************************************************************************

#ifndef MAINTENANCE_H
#define MAINTENANCE_H

#include <iostream> 
#include <string>

using namespace std;

class Maintenance
{
    private:
        bool    inMaintanceMode;
    
    public:
        void    maintenance(); 
                // display the maintenance screen for the system administrator only
        bool    getinMaintanceMode();  
                // This function will verify if the present actor can enter maintainence mode
        void    setinMaintanceMode();  
                // This void function will then set the screen in maintenance mode
        void    testATMBalance();     
                // This function will allow the system administrator to test the ATM balance
        void    testCheckBalance();   
                // Allow the sys admin to make sure that checking account balance works
        void    testDeposit();       
                // The testDeposit function will allow the system administrator to test deposits and ensure they are successful
        void    testTransfer();     
                // Test that transfering money between accounts does work
        void    testWithdrawal();  
                // Test that withdrawals are sucessful and in certain amounts
        void    testATMDBMS();    
                // Test the the ATM connection with the Oracle database and ensure that every transaction is being recorded.
        void    testCard();      
                // Test that ATM cards can be inserted successfully without any problems
        void    cancelTrans();  
                // Function will allow any user to cancel a transaction if they no longer wish to proceed with it
        void    clearERROR();  
                // the clearError function will be tested by the sysadmin to ensure that all errors are cleared
        void    restart();    
                // the restart function will allow the sysadmin to restart the ATM and ensure that all updates were installed
        void    shutdown();  
                // Allow the sysadmin to shutdown the ATM
        void    factoryReset();  
                // Allow the sysadmin to completely wipe out everything from the ATM and deleted any cached memory to do a complete fresh install 
        void    rmMode();  
                // Allow the system administrator to remove any other errors that weren't cleared by the clearError()
        void    diagnosisLOG();  
                // check the diagnosis log for any errors and determine from the error, the type of solution to implement
        void    disableCOMM();  
                // disable all communication activities with the ATM
        void    installSoft();  
                // allow the system administrator to perform any new softare updates
        void    openATMMess();  
                // allow the system administrator to open up the ATM and display a message saying, "Please come back later. Under repair"
        void    exitSCRN();  
                // exitSCRN() allows the system administrator to exit out of maintenance mode

};

#endif /* MAINTENANCE_H */
