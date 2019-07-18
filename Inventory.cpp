#include "Inventory.h"
using namespace std;
#include <iostream>

Inventory::Inventory()
{
    number_of_devices=0;
    inventory=new Device* [100];
}

Inventory::Inventory(const Inventory& other)
{
    inventory=new Device* [100];
    for(int i=0; i<other.number_of_devices; ++i)
    {
        inventory[i]=other.inventory[i];
    }
    number_of_devices=other.Get_number_of_devices();
}

Inventory::Inventory(Device** devices, unsigned device_number)
{
    inventory=new Device* [100];
    number_of_devices=device_number;
    for(int i=0; i<number_of_devices; ++i)
    {
        inventory[i]=devices[i];
    }
}

Inventory& Inventory::operator=(const Inventory& rhs)
{
    if (this == &rhs)
        return *this; // handle self assignment
    //assignment operator
    delete[] inventory;
    inventory=new Device* [100];
    for(int i=0; i<rhs.number_of_devices; ++i)
    {
        inventory[i]=rhs.inventory[i];
    }
    number_of_devices=rhs.Get_number_of_devices();
    return *this;
}

bool Inventory::is_arranged_by_perf() const
{
    for(int j=0; j<number_of_devices-1; ++j)
    {
        if(inventory[j]->Get_perf()>inventory[j+1]->Get_perf())
        {
            return false;
        }
    }
    return true;
}

void Inventory::print() const
{
    cout<<"The inventory has: "<<endl;
    for(int i=0; i<number_of_devices; ++i)
    {
        inventory[i]->print();
    }
}

void Inventory:: addDevice( Device& device)
{
    if(number_of_devices<100)
    {
        number_of_devices++;
        inventory[number_of_devices-1]=&device;
    }
}

Inventory::~Inventory()
{
    delete[] inventory;
}

