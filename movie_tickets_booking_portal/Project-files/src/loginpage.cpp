#include "loginpage.h"
#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

loginpage::loginpage()
{

}
//To create new account
string loginpage::createaccount()
{
    string name,pass;
    cout <<"\t\t\t\t\t\t\t\t Give your Name:";
    cin >> name;
    int mob;
    cout <<"\t\t\t\t\t\t\t\t Give user mobile number:";
    cin >> mob;
    cout <<"\t\t\t\t\t\t\t\t Give a Password:";
    cin >> pass;

    ifstream ifile;
    ifile.open("user\\"+name+".txt");
    if(ifile)
    {
        ofstream ofs;
        ofs.open("user\\"+name+".txt", ofstream::out | ofstream::trunc);
        ofs.close();
        fout.open("user\\"+name+".txt", ios::out | ios::app);
        fout << name << "\n" << pass << "\n" << mob <<"\n";
        fout.close();

    }
    else
    {
        fout.open("user\\"+name+".txt", ios::out | ios::app);
        fout << name << "\n" << pass << "\n" << mob <<"\n";
        fout.close();
    }

    system("CLS");
    cout <<"\n\t\t\t\t\t\t\t\t      Logged in successfully\n";
    return name;
}
//To login in portal
string loginpage::login()
{
   string un,pass,password,username;

   cout <<"\t\t\t\t\t\t\t\t Give Username:";
   cin >> username;
   cout <<"\t\t\t\t\t\t\t\t Give Password:";
   cin >> password;

   ifstream read("user\\"+username+".txt");

   getline(read, un);
   getline(read, pass);

   if((un == username) && (pass == password))
   {
       system("CLS");
       cout <<"\n\t\t\t\t\t\t\t\t      Logged in successfully!";
        return un;
   }
   else
   {
       int ch;
       cout <<"\n\t\t\t\t\t\t\t\t wrong credential detected please check details again\n";

       cout <<"\n\t\t\t\t\t\t\t\t Press 1.For Log In\n\t\t\t\t\t\t\t\t Press 2.For create account...\n";
       cout<<"\t\t\t\t\t\t\t\t Enter your choice:";
       cin >>ch;

       if(ch==1)
       {
           system("CLS");
           cout <<"\n\t\t\t\t\t\t\t\t Trying to log in again!!\n";
           login();
       }
       else
       {
           system("CLS");
           cout <<"\n\t\t\t\t\t\t\t\t Making new account\n";
           cout <<"\n\t\t\t\t\t\t\t\t create account\n";
           createaccount();
       }

   }


}

loginpage::~loginpage()
{
    //dtor
}
