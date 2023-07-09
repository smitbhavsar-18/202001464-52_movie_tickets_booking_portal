#include <iostream>
#include <string>

#ifndef MOVIE_H
#define MOVIE_H

using namespace std;
class movie
{
    public:
        movie();
        int showtime();//to select show time
        int city();//to select city
        int tickettype();//to select ticket type
        int counttickectcash(int quantity);//to count total ticket cost
        void plymentmode(int cost,string name);//to select payment mode
        void showticket(int quantity,int s_time,char *moviename,int cost,int city,string name);//to show ticket details
        void prime_membership(string name);//for prime membership
        virtual ~movie();

    protected:

    private:
};

#endif // MOVIE_H
