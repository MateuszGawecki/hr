#include "../include/hr/hr.hpp"
#include "../include/hr/except.hpp"

void hrms::add(employee employee,string DEPARTMENTID,int salary)
{
    string tmp=employee.getid();
    
    if(identyfikatory.find(tmp)!=identyfikatory.end())
    {
        throw My_Exception_Add();
    }

    sklad.push_back(employee);

    identyfikatory.insert(make_pair(tmp,DEPARTMENTID));
    zarobki.insert(make_pair(tmp,salary));
}

void hrms::printDepartment(string departmentid)
{
    int l=0;
    map<string,string>::iterator it;
    vector<employee>::iterator it_vec;

    for(it=identyfikatory.begin();it!=identyfikatory.end();++it)
    {
        if(it->second==departmentid)
        {
            //it->first -- id pracownika w danym departamencie (bo już w ifie)

            for(it_vec=sklad.begin();it_vec!=sklad.end();++it_vec) 
            {
              if(it_vec->getid()==it->first)
              {
                  it_vec->print();
                  l++;
              }
            }
        }
    }

    if(l==0) throw My_Exception_PrintDep();
}

void hrms::changeSalary(string employeeid, double salary)
{
    map<string,double>::iterator it=zarobki.find(employeeid);

    if(it==zarobki.end()) throw My_Exception_ChangeSalary();

    it->second=salary;
}

void hrms::printSalaries()
{
    map<string,double>::iterator it;
    vector<employee>::iterator it_vec;

    for(it_vec=sklad.begin();it_vec!=sklad.end();++it_vec) 
    {
        it_vec->print();
        it=zarobki.find(it_vec->getid());
        cout<<"Pensja = "<<it->second<<endl;
    }
}

void hrms::printSalariesSorted()
{
    vector<pair<string, int>> v {make_move_iterator(begin(zarobki)),make_move_iterator(end(zarobki))};
    vector<employee>::iterator it_vec;

    sort(begin(v), end(v),[](auto p1, auto p2){return p1.second > p2.second;});

    for(auto const &pair: v)
    {
        for(it_vec=sklad.begin();it_vec!=sklad.end();++it_vec)
        {
            if(it_vec->getid()==pair.first)
            {
                it_vec->print();
                cout<<"Pensja = "<<pair.second<<endl;
            }
        }
    }
    


   /* int x=zarobki.size();
    double *tab=new double[x];
    int i=0;

    map<string,double>::iterator it;
    vector<employee>::iterator it_vec;

    for(it=zarobki.begin();it!=zarobki.end();++it)
    {
        tab[i]=it->second;
        i++;
    }

    sort(tab,tab+x);
    //i=0;

    for(int j=0;j<x;j++)
    {
        for(it=zarobki.begin();it!=zarobki.end();++it)
        {
            if(it->second==tab[j])
            {
                for(it_vec=sklad.begin();it_vec!=sklad.end();++it_vec)
                {
                    if(it_vec->getid()==it->first)
                    {
                        it_vec->print();
                        cout<<"Pensja = "<<it->second<<endl;
                    }
                }
             break;
            }
        }
    }
    
    delete [] tab;*/
}