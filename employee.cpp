
//This is the file: employee.cpp.
//This is the implementation for the class Employee.
//The interface for the class Employee is in the header file employee.h.
#include <string>
#include <cstdlib>
#include <iostream>
#include "employee.h"
using namespace std;


    Employee::Employee( ) : name("No name yet"), id(0), status('T'), startDate("default"), endDate("default")
    {

    }

    Employee::Employee(string newName, char newStatus, string newStartDate, string newEndDate,int newId) : name(newName), status('T'),startDate(newStartDate),endDate(newEndDate),id(newId)
    {
        
    }

    string Employee::getName( ) const
    {
        return name;
    }

    char Employee::getStatus( ) const
    {
        return status;
    }

   int Employee::getId( ) const
    {
        return id;
    }

   void Employee::setName(string new_name)
    {
        name = new_name;
    }
    void Employee::setStatus (char newStatus)
    {
        status = newStatus;
    }

    void Employee::setId (int newId)
    {
        id = newId;
    }

    string Employee::getStartDate() const
    {
        return startDate;
    }

    string Employee::getEndDate() const
    {
        return endDate;
    }

    void Employee::setStartDate(string newDate)
    {
        startDate = newDate;
    }

    void Employee::setEndDate(string newDate)
    {
        endDate = newDate;
    }


