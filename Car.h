#ifndef CAR_H
#define CAR_H

#include <Device.h>
#include <iostream>
using namespace std;

class Car : public Device
{
public:

    /** default constructor*/
    Car();

    /** destructor*/
    virtual ~Car();

    /** constructor with parameters*/
    Car(char* manu,int kw,int cm3);

    /** copy constructor*/
    Car(const Car& other);
    /** operator= */
    Car& operator=(const Car& other);

    /** setters and getters */
    int Get_power_in_kw() const
    {
        return power_in_kw;
    }

    void Set_power_in_kw(int val)
    {
        power_in_kw = val;
    }
    int Get_engine_volume_in_cm3() const
    {
        return engine_volume_in_cm3;
    }
    void Set_engine_volume_in_cm3(int val)
    {
        engine_volume_in_cm3 = val;
    }
    int Get_perf() const
    {
        return power_in_kw;
    }

    /** print function*/
    void print() const
    {
        cout<<" Car: The manufacturer is "<<Get_manufacturer()<<" and has power of "<<power_in_kw<< " in KW and engine volume of "<<engine_volume_in_cm3<< " in cm3."<<endl;
    }

protected:

private:
    int power_in_kw;
    int engine_volume_in_cm3;
};

#endif // CAR_H
