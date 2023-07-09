/*
---------------Authors---------------
Krish D. Patel student id :-202001452
Smit P. Bhavsar student id :-202001464
Project Title :- Online movie Ticket booking Portal
Subject :- It-206 Data structures
-------------------------------------
*/
#include <iostream>
#include "movie.h"
#include "loginpage.h"
using namespace std;

int main()
{
    loginpage l;
    string name;
    cout<<"\n\t\t\t\t\t\t\t\t ---------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t            Login Page               ";
    cout<<"\n\t\t\t\t\t\t\t\t ---------------------------------"<<endl;
    int logch;
    cout<<"\n\t\t\t\t\t\t\t\t If you enter first time than first create account"<<endl;
    cout <<"\n\t\t\t\t\t\t\t\t Press 1.For Log In\n\t\t\t\t\t\t\t\t Press 2.For create account\n";
    cout<<"\t\t\t\t\t\t\t\t Enter your choice:";
    cin >> logch;
    switch(logch)
    {
    case 1:
        name = l.login();
        break;

    case 2:
        name = l.createaccount();
        break;

    default:
        system("CLS");
        cout <<"\n\t\t\t\t\t\t\t\t    Give correct choice!!!\n";
        main();
        break;
    }


    movie m;
    int choice,ch;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t ---------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t| WELCOME TO DA CINEMA AND MOVIES |"<<endl;
    cout<<"\t\t\t\t\t\t\t\t ---------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t             Main menu           "<<endl;
    cout<<"\t\t\t\t\t\t\t\t  ------------------------------- "<<endl;
    cout<<"\t\t\t\t\t\t\t\t   Press 1.To Book Bollywood/Hollywood Movie Ticket"<<endl;
    cout<<"\t\t\t\t\t\t\t\t   Press 2.To Book Gujrati Movie Ticket"<<endl;
    cout<<"\t\t\t\t\t\t\t\t   Press 3.To Be Prime Member"<<endl;
    cout<<"\t\t\t\t\t\t\t\t   Press 4.For Any Information or Help"<<endl;
    cout<<"\t\t\t\t\t\t\t\t   Press 5.To Exit From Portal"<<endl;
    cout<<"\t\t\t\t\t\t\t\t   select your choice:";
    cin>>choice;
    switch(choice)
    {
    case 1:
    {
    system("CLS");
    int cost,quantity;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t ---------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t         Available Movies         "<<endl;
    cout<<"\t\t\t\t\t\t\t\t ---------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      screen 1.Bahubali"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      screen 2.Avengers:End Game"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      screen 3.Sultan"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      screen 4.Dangal"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      screen 5.Spider man:no way home"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 6.To Exit from portal"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      select your screen:";
    cin>>ch;
    cout<<endl;
    switch(ch)
    {
    case 1:
        {
        char *moviename="Bahubali";
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t      Welcome to screen 1 portal"<<endl;
        int city=m.city();
        system("CLS");
        int s_time=m.showtime();
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t How many ticket do you want to purchase?:";
        cin>>quantity;
        cout<<endl;
        cost=m.counttickectcash(quantity);
        system("CLS");
        m.plymentmode(cost,name);
        cout<<endl;
        system("CLS");
        m.showticket(quantity,s_time,moviename,cost,city,name);
        break;
        }
    case 2:
        {
        char *moviename="Avengers:End Game";
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t      Welcome to screen 2 portal"<<endl;
        int city=m.city();
        system("CLS");
        int s_time=m.showtime();
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t How many ticket do you want to purchase?:";
        cin>>quantity;
        cout<<endl;
        cost=m.counttickectcash(quantity);
        system("CLS");
        m.plymentmode(cost,name);
        cout<<endl;
        system("CLS");
        m.showticket(quantity,s_time,moviename,cost,city,name);
        break;
        }
    case 3:
        {
        char *moviename="Sultan";
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t      Welcome to screen 3 portal"<<endl;
        int city=m.city();
        system("CLS");
        int s_time=m.showtime();
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t How many ticket do you want to purchase?:";
        cin>>quantity;
        cout<<endl;
        cost=m.counttickectcash(quantity);
        system("CLS");
        m.plymentmode(cost,name);
        cout<<endl;
        system("CLS");
        m.showticket(quantity,s_time,moviename,cost,city,name);
        break;
        }
    case 4:
        {
        char *moviename="Dangal";
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t      Welcome to screen 4 portal"<<endl;
        int city=m.city();
        system("CLS");
        int s_time=m.showtime();
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t How many ticket do you want to purchase?:";
        cin>>quantity;
        cout<<endl;
        cost=m.counttickectcash(quantity);
        system("CLS");
        m.plymentmode(cost,name);
        cout<<endl;
        system("CLS");
        m.showticket(quantity,s_time,moviename,cost,city,name);
        break;
        }
    case 5:
        {
        char *moviename="Spider man:no way home";
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t      Welcome to screen 5 portal"<<endl;
        int city=m.city();
        system("CLS");
        int s_time=m.showtime();
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t How many ticket do you want to purchase?:";
        cin>>quantity;
        cout<<endl;
        cost=m.counttickectcash(quantity);
        system("CLS");
        m.plymentmode(cost,name);
        cout<<endl;
        system("CLS");
        m.showticket(quantity,s_time,moviename,cost,city,name);
        break;
        }
    case 6:
        {
        cout<<endl<<"\t\t\t\t\t\t\t\t   Exiting..."<<endl;
        exit(0);
        break;
        }
    default:
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t   Please enter valid choice"<<endl;
        break;
    }
    }
    break;
    case 2:
    {
    system("CLS");
    int cost,quantity;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t ---------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t         Available Movies         "<<endl;
    cout<<"\t\t\t\t\t\t\t\t ---------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      screen 1.Chhello Divas"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      screen 2.Gujjubhai The Great"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      screen 3.Papa Tamne Nai Samjay"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      screen 4.Sharato Lagu"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      screen 5.Gujjubhai The Most Wanted"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      Press 6.To Exit from portal"<<endl;
    cout<<"\t\t\t\t\t\t\t\t      select your screen:";
    cin>>ch;
    cout<<endl;
    switch(ch)
    {
    case 1:
        {
        char *moviename="Chhello Divas";
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t      Welcome to screen 1 portal"<<endl;
        int city=m.city();
        system("CLS");
        int s_time=m.showtime();
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t How many ticket do you want to purchase?:";
        cin>>quantity;
        cout<<endl;
        cost=m.counttickectcash(quantity);
        system("CLS");
        m.plymentmode(cost,name);
        cout<<endl;
        system("CLS");
        m.showticket(quantity,s_time,moviename,cost,city,name);
        break;
        }
    case 2:
        {
        char *moviename="Gujjubhai The Great";
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t      Welcome to screen 2 portal"<<endl;
        int city=m.city();
        system("CLS");
        int s_time=m.showtime();
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t How many ticket do you want to purchase?:";
        cin>>quantity;
        cout<<endl;
        cost=m.counttickectcash(quantity);
        system("CLS");
        m.plymentmode(cost,name);
        cout<<endl;
        system("CLS");
        m.showticket(quantity,s_time,moviename,cost,city,name);
        break;
        }
    case 3:
        {
        char *moviename="Papa Tamne Nai Samjay";
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t      Welcome to screen 3 portal"<<endl;
        int city=m.city();
        system("CLS");
        int s_time=m.showtime();
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t How many ticket do you want to purchase?:";
        cin>>quantity;
        cout<<endl;
        cost=m.counttickectcash(quantity);
        system("CLS");
        m.plymentmode(cost,name);
        cout<<endl;
        system("CLS");
        m.showticket(quantity,s_time,moviename,cost,city,name);
        break;
        }
    case 4:
        {
        char *moviename="Sharato Lagu";
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t      Welcome to screen 4 portal"<<endl;
        int city=m.city();
        system("CLS");
        int s_time=m.showtime();
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t How many ticket do you want to purchase?:";
        cin>>quantity;
        cout<<endl;
        cost=m.counttickectcash(quantity);
        system("CLS");
        m.plymentmode(cost,name);
        cout<<endl;
        system("CLS");
        m.showticket(quantity,s_time,moviename,cost,city,name);
        break;
        }
    case 5:
        {
        char *moviename="Gujjubhai The Most Wanted";
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t      Welcome to screen 5 portal"<<endl;
        int city=m.city();
        system("CLS");
        int s_time=m.showtime();
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t How many ticket do you want to purchase?:";
        cin>>quantity;
        cout<<endl;
        cost=m.counttickectcash(quantity);
        system("CLS");
        m.plymentmode(cost,name);
        cout<<endl;
        system("CLS");
        m.showticket(quantity,s_time,moviename,cost,city,name);
        break;
        }
    case 6:
        {
        cout<<endl<<"\t\t\t\t\t\t\t\t   Exiting..."<<endl;
        exit(0);
        break;
        }
    default:
        system("CLS");
        cout<<"\n\t\t\t\t\t\t\t\t   Please enter valid choice"<<endl;
        break;
    }
    }
    break;
    case 3:
        {
            system("CLS");
            cout<<endl;
            cout<<"\t\t\t\t\t\t\t\t ----------------------------------"<<endl;
            cout<<"\t\t\t\t\t\t\t\t|  WELCOME TO DA PRIME MEMEBERSHIP |"<<endl;
            cout<<"\t\t\t\t\t\t\t\t ----------------------------------"<<endl;
            cout<<"\t\t\t\t\t\t\t\t   Press 1.To Be Prime Member"<<endl;
            cout<<"\t\t\t\t\t\t\t\t   Press 2.To exit from portal"<<endl;
            cout<<"\t\t\t\t\t\t\t\t   select your choice:";
            cin>>ch;
            switch(ch)
            {
                case 1:
                    {
                    system("CLS");
                    m.prime_membership(name);
                    break;
                    }
                case 2:
                    {
                    cout<<endl<<"\t\t\t\t\t\t\t\t   Exiting..."<<endl;
                    exit(0);
                    break;
                    }
                default:
                    {
                    system("CLS");
                    cout<<"\n\t\t\t\t\t\t\t\t   Please enter valid choice"<<endl;
                    break;
                    }
            }
        }
    break;
    case 4:
        {
            system("CLS");
            cout<<endl;
            cout<<"\t\t\t\t\t\t\t\t ----------------------------------"<<endl;
            cout<<"\t\t\t\t\t\t\t\t| WELCOME TO DA INFORMATION CENTRE |"<<endl;
            cout<<"\t\t\t\t\t\t\t\t ----------------------------------"<<endl;
            cout<<"\t\t\t\t\t\t\t\t   Press 1.To get information about us"<<endl;
            cout<<"\t\t\t\t\t\t\t\t   Press 2.To get help from us"<<endl;
            cout<<"\t\t\t\t\t\t\t\t   Press 3.To exit from portal"<<endl;
            cout<<"\t\t\t\t\t\t\t\t   select your choice:";
            cin>>ch;
            switch(ch)
            {
                case 1:
                    system("CLS");
                    cout<<"\n\t\t\t\t\t\t\t\t  -Our oldest cinema in Ahemdabad"<<endl;
                    cout<<"\t\t\t\t\t\t\t\t  -Our cinema's are 62 years old"<<endl;
                    cout<<"\t\t\t\t\t\t\t\t  -We are able to entertain you in Gujrat's all mega city"<<endl<<endl;
                    cout<<"\t\t\t\t\t\t\t\t  ->For more information visit our site www.da_cinema&movie.com"<<endl<<endl;
                    break;
                case 2:
                    system("CLS");
                    cout<<"\n\t\t\t\t\t\t\t\t  -For any help contact us on:"<<endl;
                    cout<<"\t\t\t\t\t\t\t\t  ->contact no 1.9834567324"<<endl;
                    cout<<"\t\t\t\t\t\t\t\t  ->contact no 2.7833333324"<<endl;
                    cout<<"\t\t\t\t\t\t\t\t  ->For more information visit our site www.da_cinema&movie.com"<<endl<<endl;
                    break;
                case 3:
                    cout<<endl<<"\t\t\t\t\t\t\t\t   Exiting..."<<endl;
                    exit(0);
                    break;
                default:
                    system("CLS");
                    cout<<"\n\t\t\t\t\t\t\t\t   Please enter valid choice"<<endl;
                    break;
            }

        }
    break;
    case 5:
        {
                cout<<endl<<"\t\t\t\t\t\t\t\t   Exiting..."<<endl;
                exit(0);
                break;
        }
    default:
        {
            system("CLS");
            cout<<"\n\t\t\t\t\t\t\t\t   Please enter valid choice"<<endl;
            break;
        }
    }
    return 0;
}
