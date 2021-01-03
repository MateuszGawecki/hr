#ifndef SYSTEM_HR
#define SYSTEM_HR

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <map>
#include <algorithm>

#include "employee.hpp"
#include "except.hpp"

using namespace std;

class hrms
{
    private:
        vector<employee> sklad;
        map<string,string> identyfikatory; //pracownik dzial
        map<string,double> zarobki; //pracownik,wyplata

    public:
        void add(employee& employee,string DEPARTMENTID,int salary);
        void printDepartment(string departmentid);
        void changeSalary(string employeeid, double salary);
        void printSalaries();
        void printSalariesSorted();
};

#endif