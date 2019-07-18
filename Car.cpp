#include "Car.h"

Car::Car()
{
    Set_manufacturer("Default Manufacturer");
    power_in_kw=0;
    engine_volume_in_cm3=0;
}

Car::~Car()
{
    deleteManufacturer();
}

Car::Car(char* manu, int kw, int cm3)
{
    Set_engine_volume_in_cm3(cm3);
    Set_manufacturer(manu);
    Set_power_in_kw(kw);
}

Car::Car(const Car& other)
{
    Set_engine_volume_in_cm3(other.Get_engine_volume_in_cm3());
    Set_manufacturer(other.Get_manufacturer());
    Set_power_in_kw(other.Get_power_in_kw());
}

Car& Car::operator=(const Car& other)
{
    if(this==&other){return *this;}
    deleteManufacturer();
    Set_engine_volume_in_cm3(other.Get_engine_volume_in_cm3());
    Set_manufacturer(other.Get_manufacturer());
    Set_power_in_kw(other.Get_power_in_kw());
    return *this;
}
