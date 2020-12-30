#include "../include/hr/hr.hpp"

int main()
{
    hrms XXX;
    employee a("1","mateusz","gawecki","inf","progr");
    employee b("2","piotr","piekarz","inf","prog");
    employee c("3","grzegorz","kolodziej","inf","projektant");
    employee d("4","maciej","nowak","hr","rekrutacja");
    employee e("5","antoni","brzorzowski","hr","rekrutacja");
    employee f("6","pawel","majewski","hr","rekrutacja");
    employee g("7","anna","midro","office","kawa");
    employee h("8","gabriela","kowal","office","herbata");
    employee i("9","patrycja","lis","office","drukarka");
    employee j("10","kasia","mak","office","sekretarka");

 try
 {
    XXX.add(a,"inf",5000);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }
 
 try
 {
    XXX.add(b,"inf",2100);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }
 try
 {
    XXX.add(c,"inf",2200);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }
 try
 {
    XXX.add(d,"hr",1500);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }
 try
 {
    XXX.add(e,"hr",2600);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }
 try
 {
    XXX.add(f,"hr",2050);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }
 try
 {
    XXX.add(g,"office",2000);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }
 try
 {
    XXX.add(h,"office",1500);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }
 try
 {
    XXX.add(i,"office",2300);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }
 try
 {
    XXX.add(j,"office",2100);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }

try
{
    XXX.printDepartment("office");
}
catch(const std::exception& e)
{
    cout << e.what() <<endl;
}

try
{
    XXX.printDepartment("inf");
}
catch(const std::exception& e)
{
    cout << e.what() <<endl;
}

try
{
    XXX.printDepartment("hr");
}
catch(const std::exception& e)
{
    cout << e.what() <<endl;
}

try
{
    XXX.printDepartment("niematakiego");
}
catch(const std::exception& e)
{
    cout << e.what() <<endl;
}


    cout<<endl<<endl<<endl;

    XXX.printSalaries();

    cout<<endl<<endl<<endl;

    XXX.printSalaries();

    cout<<endl<<endl<<endl<<"Salaries sorted!"<<endl;
    XXX.printSalariesSorted();

    cout<<endl<<endl;

try
 {
    XXX.changeSalary("1",500);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }
    
    cout<<endl<<endl<<endl<<"Salaries sorted!"<<endl;
    XXX.printSalariesSorted();

try
 {
    XXX.add(j,"office",2100);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }

 try
 {
    XXX.changeSalary("111",500);
 }
 catch(const std::exception& e)
 {
     cout<<e.what()<<endl;
 }

    return 0;
}