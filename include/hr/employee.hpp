#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class employee
{
  private:
    string id;
    string name;
    string surname;
    string departmentid;
    string position;
  
  public:
    employee(string ID,string NAME,string SURNAME,string DEPARTMENTID,string POSITION);
    void print();
    string getid();
};

#endif