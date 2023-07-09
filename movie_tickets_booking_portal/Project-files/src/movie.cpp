#include "movie.h"
#include<string>
#include<string.h>
#include<time.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

movie::movie()
{
    //ctor
}
//to select city
int movie::city()
{
    int city_no;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Available city in Gujrat    "<<endl;
    cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 1.Ahemdabad"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 2.Vadodara"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 3.Surat"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 4.Rajkot"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 5.Gandhinagar"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 6.Valsad"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 7.Bhavnagar"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Sletect your city:";
    cin>>city_no;
    switch(city_no)
        {
        case 1:
            //Your selected city is Ahemdabad
            return 1;
            break;
        case 2:
            //Your selected city is Vadodara
            return 2;
            break;
        case 3:
            //Your selected city is Surat
            return 3;
            break;
        case 4:
            //Your selected city is Rajkot
            return 4;
            break;
        case 5:
            //Your selected city is Gandhinagar
            return 5;
            break;
        case 6:
            //Your selected city is Valsad
            return 6;
            break;
        case 7:
            //Your selected city is Bhavnagar
            return 7;
            break;
        default:
            system("CLS");
            cout<<"\t\t\t\t\t\t\t\t Your selected city is not available Enter right choice"<<endl;
            city();
            break;
        }
}
//to select show time
int movie::showtime()
{
    int time;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t        Available Show Times"      <<endl;
    cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 1.12:00 PM to 2:30 PM"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 2.3:00 PM to 5:30 PM"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 3.6:00 PM to 8:30 PM"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 4.9:00 PM to 11:30 PM"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Sletect your show time:";
    cin>>time;
    cout<<endl;
        switch(time)
        {
        case 1:
            //Your selected show time is 12:00 PM to 2:30 PM
            return 1;
            break;
        case 2:
            //Your selected show time is 3:00 PM to 5:30 PM
            return 2;
            break;
        case 3:
            //Your selected show time is 6:00 PM to 8:30 PM
            return 3;
            break;
        case 4:
            //Your selected show time is 9:00 PM to 11:30 PM
            return 4;
            break;
        default:
            system("CLS");
            cout<<"\t\t\t\t\t\t\t\t Your selected show time is not available Enter Right choice"<<endl;
            showtime();
            break;
        }
}
//to select ticket type
int movie::tickettype()
{
    int type;
    cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t    Available Show Ticket Type    "<<endl;
    cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 1.Silver:Rs 120"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 2.Gold:Rs 150"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 3.Platinum:Rs 200"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Sletect your ticket type:";
    cin>>type;
    cout<<endl;
        switch(type)
        {
        case 1:
            //Your selected show ticket type is Silver
            return 120;
            break;
        case 2:
            //Your selected show ticket type is Gold
            return 150;
            break;
        case 3:
            //Your selected show ticket type is Platinum
            return 200;
            break;
        default:
            system("CLS");
            cout<<"\t\t\t\t\t\t\t\t Your selected show ticket type is not available Enter Right choice"<<endl<<endl;
            tickettype();
            break;
        }
}
//to count total ticket cost
int movie::counttickectcash(int quantity)
{
        int total_pay=quantity*tickettype();
        return total_pay;
}
//to select payment mode
void movie::plymentmode(int cost,string name)
{
    fstream fout;
    int type;
    string f_name,l_name;
        cout<<"\n\t\t\t\t\t\t\t\t      You need to pay Rs:"<<cost<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
        cout<<"\t\t\t\t\t\t\t\t      Available Payment Type      "<<endl;
        cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
        cout<<"\t\t\t\t\t\t\t\t   Press 1.Plyment By Debit Card"<<endl;
        cout<<"\t\t\t\t\t\t\t\t   Press 2.Plyment By Net Banking"<<endl;
        cout<<"\t\t\t\t\t\t\t\t   Sletect your payment type:";
        cin>>type;
    switch(type)
    {
    case 1:
        {
            time_t t = time(NULL);
            tm* timePtr = localtime(&t);
            int Expiry_month,Expiry_year;
            string card_no,cvv;
            cout<<"\n\t\t\t\t\t\t\t\t   Enter Card Holder First name:";
            cin>>f_name;
            cout<<"\n\t\t\t\t\t\t\t\t   Enter Card Holder Last name:";
            cin>>l_name;
            cout<<"\n\t\t\t\t\t\t\t\t   Enter your 12-digit card number:";
            cin>>card_no;
            while(card_no.length()!=12)
            {
                cout<<"\n\t\t\t\t\t\t\t\t   Please Enter your 12-digit card number:";
                cin>>card_no;
            }
            cout<<endl;
            cout<<"\t\t\t\t\t\t\t\t   Enter Expiry month:";
            cin>>Expiry_month;
            cout<<endl;
            while(Expiry_month > 12)
            {
                cout<<"\t\t\t\t\t\t\t\t   Please Enter valid Expiry month:";
                cin>>Expiry_month;
                cout<<endl;
            }
            cout<<"\t\t\t\t\t\t\t\t   Enter Expiry year:";
            cin>>Expiry_year;
            cout<<endl;
            while(Expiry_year <= timePtr->tm_year + 1900)
            {
                cout<<"\t\t\t\t\t\t\t\t   Please Enter valid Expiry year:";
                cin>>Expiry_year;
                cout<<endl;
            }
            cout<<"\t\t\t\t\t\t\t\t   Enter your 3-digit cvv number:";
            cin>>cvv;
            while(cvv.length()!=3)
            {
                cout<<"\n\t\t\t\t\t\t\t\t   Please Enter your 3-digit cvv number:";
                cin>>cvv;
                cout<<endl;
            }
            time_t now = time(0);
            char* dt = ctime(&now);
            fout.open("user\\"+name+".txt", ios::out | ios::app);
            fout << "Name:" << f_name << " " << l_name << "||" << "Time: " << dt << " || " << "Method: DEBIT CARD " << "||";
            fout.close();
        }
            break;
    case 2:
        {

            string card_no,upi_no;
            cout<<"\n\t\t\t\t\t\t\t\t   Enter Card Holder First name:";
            cin>>f_name;
            cout<<"\n\t\t\t\t\t\t\t\t   Enter Card Holder Last name:";
            cin>>l_name;
            cout<<"\n\t\t\t\t\t\t\t\t   Enter your 12-digit card number:";
            cin>>card_no;
            while(card_no.length()!=12)
            {
                cout<<"\n\t\t\t\t\t\t\t\t   Please Enter your 12-digit card number:";
                cin>>card_no;
            }
            cout<<"\n\t\t\t\t\t\t\t\t   Enter your 6-digit UPI number:";
            cin>>upi_no;
            while(upi_no.length()!=6)
            {
                cout<<"\n\t\t\t\t\t\t\t\t   Please Enter your 6-digit UPI number:";
                cin>>upi_no;
                cout<<endl;
            }
            time_t now = time(0);
            char* dt = ctime(&now);
            fout.open("user\\"+name+".txt", ios::out | ios::app);
            fout << "Name:" << f_name << " " << l_name << "||" << "Time: " << dt << " || " << "Method: Net Banking " << "||";
            fout.close();
       }
            break;
    default:
            system("CLS");
            cout<<"\n\t\t\t\t\t\t\t\t Please Enter Valid Playment type"<<endl;
            plymentmode(cost,name);
            break;
    }
}
//to show ticket details
void movie::showticket(int quantity,int s_time,char *moviename,int cost,int city,string name)
{
    fstream fout;
    fout.open("user\\"+name+".txt", ios::out | ios::app);
    fout << "Movie Name: "<< moviename << " || " << "TicketNo." << quantity << " || " << "Cost " << cost << " || " << "City Code: " << city << " || " << "ShowTime "<<s_time << "\n";
    fout.close();
    cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t        Your Tickets Details      "<<endl;
    cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
    for(int i=0;i<quantity;i++)
    {
        cout<<"\t\t\t\t\t\t\t\t | Ticket no : "<<i+1<<endl;
        //to show city
        if(city == 1)
        cout<<"\t\t\t\t\t\t\t\t | City : Ahemdabad"<<endl;
        else if(city == 2)
        cout<<"\t\t\t\t\t\t\t\t | City : Vadodara"<<endl;
        else if(city == 3)
        cout<<"\t\t\t\t\t\t\t\t | City : surat"<<endl;
        else if(city == 4)
        cout<<"\t\t\t\t\t\t\t\t | City : Rajkot"<<endl;
        else if(city == 5)
        cout<<"\t\t\t\t\t\t\t\t | City : Gandhinagar"<<endl;
        else if(city == 6)
        cout<<"\t\t\t\t\t\t\t\t | City : Valsad"<<endl;
        else
        cout<<"\t\t\t\t\t\t\t\t | City : Bhavnagar"<<endl;

        //to show movie time
        if(s_time == 1)
        cout<<"\t\t\t\t\t\t\t\t | Show time : 12:00 PM to 2:30 PM"<<endl;
        else if(s_time == 2)
        cout<<"\t\t\t\t\t\t\t\t | Show time : 3:00 PM to 5:30 PM"<<endl;
        else if(s_time == 3)
        cout<<"\t\t\t\t\t\t\t\t | Show time : 6:00 PM to 8:30 PM"<<endl;
        else
        cout<<"\t\t\t\t\t\t\t\t | Show time : 9:00 PM to 11:30 PM"<<endl;

        //to show ticket class
        if(cost/quantity == 120)
        {
             //to show seat number
        cout<<"\t\t\t\t\t\t\t\t | Your seat no is : C"<<i+1<<endl;
        cout<<"\t\t\t\t\t\t\t\t | Ticket Class : Silver"<<endl;
        }
        else if(cost/quantity == 150)
        {
             //to show seat number
        cout<<"\t\t\t\t\t\t\t\t | Your seat no is : B"<<i+1<<endl;
        cout<<"\t\t\t\t\t\t\t\t | Ticket Class : Gold"<<endl;
        }
        else
        {
             //to show seat number
        cout<<"\t\t\t\t\t\t\t\t | Your seat no is : A"<<i+1<<endl;
        cout<<"\t\t\t\t\t\t\t\t | Ticket Class : Platinum"<<endl;
        }
        //to show movie name
        cout<<"\t\t\t\t\t\t\t\t | Movie Name : "<<moviename<<endl;

        cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
    }
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t  -------------------------------------------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t  For any help contact us on:"<<endl;
    cout<<"\t\t\t\t\t\t\t\t  ->contact no 1.9834567324"<<endl;
    cout<<"\t\t\t\t\t\t\t\t  ->contact no 2.7833333324"<<endl;
    cout<<"\t\t\t\t\t\t\t\t  ->For more information visit our site www.da_cinema&movie.com"<<endl;
    cout<<"\t\t\t\t\t\t\t\t  -------------------------------------------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t  Thank you Sir/Ma'am for visit our site hope you will enjoy the Movie"<<endl;
    cout<<"\t\t\t\t\t\t\t\t  -------------------------------------------------------------------- "<<endl<<endl;

}
//for prime membership
void movie::prime_membership(string name)
{
    int choice;
    cout<<"\n\t\t\t\t\t\t\t\t  -------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t    Our Prime Membership Details   "<<endl;
    cout<<"\t\t\t\t\t\t\t\t  -------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t  press 1.For 1 month memebership Rs:2000"<<endl;
    cout<<"\t\t\t\t\t\t\t\t  press 2.For 2 month memebership Rs:4000"<<endl;
    cout<<"\t\t\t\t\t\t\t\t  press 3.For 3 month memebership Rs:5500"<<endl;
    cout<<"\t\t\t\t\t\t\t\t  press 4.If you don't want to be Prime Memeber"<<endl;
    cout<<"\t\t\t\t\t\t\t\t  Select your memebership type:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t  -------For 1 months memebership details are below------"<<endl;
        cout<<"\t\t\t\t\t\t\t\t  for 1 months all new movie free for you in only Rs:2000"<<endl;
        cout<<"\t\t\t\t\t\t\t\t  All snack free with movie time in da cinema in only Rs:2000"<<endl;
        plymentmode(2000,name);
        cout<<"\n\t\t\t\t\t\t\t\t   Your Prime Memebership Succesfully Registered"<<endl;
        break;
    case 2:
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t  -------For 2 months memebership details are below------"<<endl;
        cout<<"\t\t\t\t\t\t\t\t  for 2 months all new movie free for you in only Rs:4000"<<endl;
        cout<<"\t\t\t\t\t\t\t\t  All snack free with movie time in da cinema in only Rs:4000"<<endl;
        plymentmode(4000,name);
        cout<<"\n\t\t\t\t\t\t\t\t   Your Prime Memebership Succesfully Registered"<<endl;
        break;
    case 3:
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t  -------For 3 months memebership details are below------"<<endl;
        cout<<"\t\t\t\t\t\t\t\t  for 2 months all new movie free for you in only Rs:5500"<<endl;
        cout<<"\t\t\t\t\t\t\t\t  All snack free with movie time in da cinema in only Rs:5500"<<endl;
        plymentmode(5500,name);
        cout<<"\n\t\t\t\t\t\t\t\tYour Prime Memebership Succesfully Registered"<<endl;
        break;
    case 4:
        cout<<"\n\t\t\t\t\t\t\t\t   Thank you Sir/Ma'am for visit our site"<<endl;
        exit(0);
        break;
    default:
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t  Enter Right choice"<<endl;
        prime_membership(name);
        break;
    }
    cout<<"\t\t\t\t\t\t\t\t   ------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t   Thank you Sir/Ma'am for be Part of Prime Memeber"<<endl;
    cout<<"\t\t\t\t\t\t\t\t   ------------------------------------------------"<<endl<<endl;
}
movie::~movie()
{
    //dtor
}
