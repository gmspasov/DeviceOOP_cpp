#ifndef INVENTORY_H
#define INVENTORY_H
#include "Device.h"

class Inventory
{
    public:
        /** default constructor*/
        Inventory();

        /** destructor*/
        virtual ~Inventory();

        /** constructor with parameters*/
        Inventory(Device** inventory,unsigned number_of_devices);

        /** copy constructor*/
        Inventory(const Inventory& other);

        /**operator=*/
        Inventory& operator=(const Inventory& other);

        /**getter*/
        unsigned Get_number_of_devices() const { return number_of_devices; }

        /**setter*/
        void Set_number_of_devices(unsigned val) { number_of_devices = val; }

        /**check if devices are arranged by their performance*/
        bool is_arranged_by_perf() const;

        /**print function*/
        void print() const;

        /**adds device*/
        void addDevice(Device& device);

        /**return the devices in the inventory*/
        Device** Get_inventory () const{return inventory;}

    protected:

    private:
        Device** inventory;
        unsigned number_of_devices;
};

#endif // INVENTORY_H
