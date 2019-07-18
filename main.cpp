#include <iostream>
#include "Laptop.h"
#include "Car.h"
#include "Inventory.h"
using namespace std;

/*the program is solution of this task:
Устройства
Да се реализират:
абстрактен базов клас Device, описващ техническo устройствo, който съдържа производител (низ с произволна дължина) и поддържа две операции:
print: за извеждане на информация за устройство;
getPerf: за намиране на числова мярка за производителност на устройството;
производен клас Laptop, описващ лаптоп, който има допълнителна член-данна за скорост (цяло число мегахерци). Да се дефинират двете операции print и getPerf, като:
информацията за лаптопа се състои от неговия производител и скорост;
мярката за производителност на лаптопа е неговата скорост;
производен клас Car, описващ автомобил, който има допълнителни член-данни за мощност (цяло число киловати) и обем на двигателя (цяло число cm3). Да се дефинират двете операции print и getPerf, като:
информацията за автомобила се състои от неговия производител, мощност и обем;
мярката за производителност на автомобила е неговата мощност;
клас Inventory, описващ фирмен инвентар от устройства (до 100 на брой), които могат да бъдат лаптопи и коли. Да се реализират:
функция, която извежда информация за всички устройства в списъка;
функция, която проверява дали инвентарът е подреден в нарастващ ред по производителност.
*/
int main()
{
    Laptop Dell;
    Dell.print();

    Laptop Asus("Asus",3000);
    Asus.print();

    Laptop Toshiba("Mitsubishi",123124);
    Toshiba.print();


    Car Mazda;
    Mazda.print();

    Car Limuzina("Bentley",40,175);
    Limuzina.print();

    Car Tarataika("Zebra",32,122);
    Tarataika.print();
    //prints information for different devices

    Inventory MPEP;

    MPEP.addDevice(Mazda);
    MPEP.addDevice(Dell);
    MPEP.print();
    MPEP.addDevice(Limuzina);
    MPEP.addDevice(Tarataika);
    MPEP.addDevice(Asus);

    Car Subaru("Subabru",23,159);
    MPEP.addDevice(Subaru);
    MPEP.print();
//creates an inventory and prints information about it
    Inventory KV=MPEP;

    KV.print();

    Inventory BRSE(KV.Get_inventory(),4);
    BRSE.print();

    if(BRSE.is_arranged_by_perf()){cout<<"The elements are arranged"<<endl;}
    else{cout<<"The elements are not arranged "<<endl;}

    Inventory SND;
    SND.addDevice(Mazda);
    SND.addDevice(Tarataika);
    SND.addDevice(Toshiba);
    SND.print();
    if(SND.is_arranged_by_perf()){cout<<"The elements are arranged"<<endl;}
    else{cout<<"The elements are not arranged "<<endl;}

    SND=BRSE;
    if(SND.is_arranged_by_perf()){cout<<"The elements are arranged"<<endl;}
    else{cout<<"The elements are not arranged "<<endl;}
        return 0;
}
