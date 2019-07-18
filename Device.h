#ifndef DEVICE_H
#define DEVICE_H
#include "cstring"

class Device
{
public:

    /**setters and getters*/

    virtual int Get_perf() const =0;

    char* Get_manufacturer() const
    {
        return manufacturer;
    }


    void Set_manufacturer(char* val)
    {
        manufacturer =new char[strlen(val)+1];
        strcpy(manufacturer,val);
    }

    /**print function*/
    virtual void print() const =0;

    /**help function for the destructor*/
    void deleteManufacturer()
    {
    delete[] manufacturer;
    }

protected:

private:
    char* manufacturer;
};

#endif // DEVICE_H
