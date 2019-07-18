#include <iostream>
#include "Laptop.h"
#include "Car.h"
#include "Inventory.h"
using namespace std;

/*the program is solution of this task:
����������
�� �� ����������:
���������� ����� ���� Device, ������� ���������o ���������o, ����� ������� ������������ (��� � ���������� �������) � �������� ��� ��������:
print: �� ��������� �� ���������� �� ����������;
getPerf: �� �������� �� ������� ����� �� ���������������� �� ������������;
���������� ���� Laptop, ������� ������, ����� ��� ������������ ����-����� �� ������� (���� ����� ���������). �� �� ��������� ����� �������� print � getPerf, ����:
������������ �� ������� �� ������ �� ������� ������������ � �������;
������� �� ���������������� �� ������� � �������� �������;
���������� ���� Car, ������� ���������, ����� ��� ������������ ����-����� �� ������� (���� ����� ��������) � ���� �� ��������� (���� ����� cm3). �� �� ��������� ����� �������� print � getPerf, ����:
������������ �� ���������� �� ������ �� ������� ������������, ������� � ����;
������� �� ���������������� �� ���������� � �������� �������;
���� Inventory, ������� ������ �������� �� ���������� (�� 100 �� ����), ����� ����� �� ����� ������� � ����. �� �� ����������:
�������, ����� ������� ���������� �� ������ ���������� � �������;
�������, ����� ��������� ���� ���������� � �������� � ��������� ��� �� ����������������.
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
