#include <iostream>
#include <fstream>

#ifndef LOGINPAGE_H
#define LOGINPAGE_H

using namespace std;

class loginpage
{
    public:
        loginpage();
        virtual ~loginpage();
        string createaccount();//To create new account
        string login();//To login in portal

    private:
        fstream fout;
};

#endif // LOGINPAGE_H
