//********************************************************************************
//
// Project Assignment #4        CONNECTION_H
// Software Enginnering         CS 3500
//
// By                           Kefin Sajan & Jesus Toxtle
// Last modified                12/14/19
//
//*********************************************************************************

#ifndef CONNECTION_H
#define CONNECTION_H

#include <iostream> 
#include <string>

using namespace std;

class Actor
{
        private:
            bool    isConnected;
            int     DBMSHost;
            int     DBMSPort;
            int     DBMSID;
            string  DBMSUID;
            string  DBMSPwd;
            string  DBSMIP;
            int     DBMSAddress;
               
        public:
            bool    getisConnected();
            void    setisConnected();
            int     getDBMSHost();
            void    setDBMSHost();
            int     getDBMSPort();
            void    setDBMSPort();
            int     getDBMSID();
            void    setDBMSID();
            string  getDBMSUID();
            void    setDBMSUID();
            string  getDBMSPwd();
            void    setDBMSPwd();
            string  getDBMSIP();
            void    setDBMSIP();
            int     getDBMSAddress();
            void    setDBMSAddress();
            void    connectwDBMS();
            void    closewDBMS();
            void    excuteMaintanceMode();
            void    logConnection();

};

#endif /* CONNECTION_H */
