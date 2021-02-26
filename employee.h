

#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

    class Employee
    {
    private:
        string name;
        char status;
        int id;
        string startDate;
        string endDate;
    public:

    
        //precondition:N/A
        //postcondition:creates an employee object
        Employee( );
        //precondition: a name and ssn
        //postcondition: creates a employee object with that name and ssn
        Employee(string newName, char newStatus, string newStartDate, string newEndDate, int newId);
        //precondition:a employee object or a derived class of employee
        //postcondition:returns the name of the object
        string getName( ) const;
        //precondition:a employee object or a derived class of employee
        //postcondition:returns the ssn of the object
        char getStatus( ) const;
        //precondition:a employee object or a derived class of employee
        //postcondition:returns the net pay of the object
        int getId( ) const;
        //precondition:a employee object or a derived class of employee and a new name
        //postcondition:Sets the name of the object to new_name
        void setName(string newName);
        //precondition:a employee object or a derived class of employee and a new ssn
        //postcondition:returns the objects ssn
        void setStatus(char newStatus);
        //precondition:a employee object or a derived class of employee and a new net pay
        //postcondition:sets the objects net pay to the new net pay
        void setId(int newId);

        string getStartDate() const;

        string getEndDate() const;

        void setStartDate(string newDate);

        void setEndDate(string newDate);

    };

#endif
    //TODO: Overload = operator, write copy constructor/destructor
