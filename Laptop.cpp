#include "Laptop.h"

Laptop::Laptop()
{
    Set_manufacturer("Default Manufacturer");
    speed_in_MHz=0;
}

Laptop::Laptop(char* manu,int speed)
{
Set_manufacturer(manu);
speed_in_MHz=speed;
}

Laptop::~Laptop()
{
    deleteManufacturer();
}

Laptop::Laptop(const Laptop& other)
{
Set_manufacturer(other.Get_manufacturer());
Set_speed_in_MHz(other.Get_speed_in_MHz());
}

Laptop& Laptop::operator=(const Laptop& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    deleteManufacturer();
    Set_manufacturer(rhs.Get_manufacturer());
    Set_speed_in_MHz(rhs.Get_speed_in_MHz());
    return *this;
}
