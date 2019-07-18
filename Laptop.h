#ifndef LAPTOP_H
#define LAPTOP_H

#include <Device.h>
using namespace std;
#include <iostream>

class Laptop : public Device
{
public:

    /**default constructor*/
    Laptop();

    /**destructor*/
    virtual ~Laptop();

    /**constructor with parameters*/
    Laptop(char* manu, int speed);

    /**copy constructor*/
    Laptop(const Laptop& other);

    /**operator=*/
    Laptop& operator=(const Laptop& other);

    /**getters and setters*/
    int Get_speed_in_MHz() const
    {
        return speed_in_MHz;
    }
    void Set_speed_in_MHz(int val)
    {
        speed_in_MHz = val;
    }
    int Get_perf() const
    {
        return speed_in_MHz;
    }

    /**print function*/
    void print() const
    {
        cout<<"Laptop: The manufacturer is "<<Get_manufacturer()<<" and has processor speed of "<<Get_perf()<<" in MHz."<<endl;
    }

protected:

private:
    int speed_in_MHz;
};

#endif // LAPTOP_H
