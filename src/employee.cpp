#include "../include/hr/employee.hpp"

int employee::klucz=0;

employee::employee(string ID,string NAME,string SURNAME,string DEPARTMENTID,string POSITION)
{
    //id=ID;
    id=to_string(klucz);
    klucz++;
    name=NAME;
    surname=SURNAME;
    departmentid=DEPARTMENTID;
    position=POSITION;
}

void employee::print()
{
    cout<<endl<<"Identyfikator == "<<id<<endl;
    cout<<"Imie == "<<name<<endl;
    cout<<"Nazwisko == "<<surname<<endl;
    cout<<"Identyfikator dzialu == "<<departmentid<<endl;
    cout<<"Stanowisko == "<<position<<endl;
}

string employee::getid()
{
    return id;
}