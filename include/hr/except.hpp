#ifndef EXCEPT_HPP
#define EXCEPT_HPP

#include <iostream>
#include <exception>

using namespace std;

class My_Exception_Add : public exception
{
    virtual const char *what() const throw()
    {
        return "\nNie mozna dodac tego pracownika\n";
    }
};

class My_Exception_PrintDep : public exception
{
    virtual const char *what() const throw()
    {
        return "\nNie ma zadnego pracownika w tym departamencie\n";
    }
};

class My_Exception_ChangeSalary : public exception
{
    virtual const char *what() const throw()
    {
        return "\nNie ma takiego pracownika\n";
    }
};

#endif