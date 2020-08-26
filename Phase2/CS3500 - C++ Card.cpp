//********************************************************************************
//
// Project Assignment #4        CARD_H
// Software Enginnering         CS 3500
//
// By                           Kefin Sajan & Jesus Toxtle
// Last modified                12/17/19
//
//*********************************************************************************

#ifndef CARD_H
#define CARD_H

#include <iostream> 
#include <string>

using namespace std;

class Card
{
        private:
                unsigned_t      cardNum;
                int             expiredDt; 
                unsigned_t      CVV; 
                unsigned_t      cardPIN; 
                double          accBalance;
        protected:
                double          InterestRate; 
                                // protected variable will work with the getInterestRate and setInterestRate()
                void            sendtoDBMS(cardNum, cardPin)  
                                // will record every transaction that occurs at a MSB ATM; sends it to the 
                                // Oracle database with user's car number and pin and all done in the background 
        public:
                unsigned_t      getCardNumber();  
                                // this function will get the card number from the inserted debit card   
                void            setCardNumber();  
                                // this function will set the card number from the inserted debit card
                int             getExpiredDt();  
                                // This will get the expired date that's associated with the debit card
                void            setExpiredDt();  
                                // This will set the expired date that's associated with the debit card
                unsigned_t      getCVV();  
                                // getCVV() will get the cards' cvv number that's usually located on the back of the debit card
                void            setCVV();  
                                // setCVV() will set the cards' cvv number that's usually located on the back of the debit card
                unsigned_t      getCardPin();  
                                // getCardPin() will get the user's inputted pin associated with the debit card 
                void            setCardPin();  
                                // setCardPin() will get the user's inputted pin associated with the debit card 
                double          getInterestRate();  
                                // This will get a user's interest rate on their accounts
                void            setInterestRate();  
                                // This will set a user's interest rate on their accounts
                double          getAccBalance();  
                                // getAccBalance() will get a user's account balance
                void            setAccBalance();  
                                // setAccBalance() will set a user's account balance  

}

#endif /* CARD_H */