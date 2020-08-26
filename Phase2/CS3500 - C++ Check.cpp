//********************************************************************************
//
// Project Assignment #4        CHECK_H
// Software Enginnering         CS 3500
//
// By                           Kefin Sajan & Jesus Toxtle
// Last modified                12/11/19
//
//*********************************************************************************

#ifndef CHECK_H
#define CHECK_H

#include <iostream> 
#include <string>

using namespace std;

class check
{
        private:    
                bool            validChk;    
                string          Drawee;    
                string          payor;    
                int             DTIssue;    
                unsigned_t      CurrencyTotal;    
                bool            Signatured;    
                unsigned_t      routingNum;    
                unsigned_t      AccNum;    
                unsigned_t      number; 
                bool            BackSigned;  

        public: 
                bool            getValidChk();    
                void            setValidChk();
                string          getDrawee();    
                void            setDrawee();
                string          getPayor();    
                void            setPayor();
                int             getDTIssue();    
                void            setDTIssue();
                unsigned_t      getCurrencyTotal();    
                void            setCurrencyTotal();
                bool            getSignatured() ;   
                void            setSignatured();
                unsigned_t      getRoutingNum();    
                void            setRoutingNum();
                unsigned_t      getAccNum();    
                void            setAccNum();
                unsigned_t      getNumber(); 
                void            setNumber();
                bool            getBackSigned();    
                void            setBackSigned();
                void            scanChk();   

}

#endif /* CHECK_H */