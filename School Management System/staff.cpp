#include <bits/stdc++.h>
using namespace std;

#include "staff.h"

void staff::display()
{

    cout << "Displaying staff" << endl;
    cout << "--------------------------------" << endl;

    cout << "Name: " << get_name() << "                     Username: " << get_username() << endl;
    cout << "Roll Number: " << get_staff_id() << endl;
    cout << "Email ID: " << get_email() << endl;
    cout << "Phone No: " << get_phone_no() << endl;
    cout << "Date of Birth: " << get_date_of_birth() << endl;
    cout << "Salary: " << get_salary() << endl;
    cout << "Payment done(1) or not(0) " << get_payment_done() << endl;
}

void staff::set_payment_done(int check)
{
    this->payment_done = check;
}

int staff::get_payment_done()
{
    return this->payment_done;
}

void staff::set_address(string address)
{
    this->address = address;
}

string staff::get_address()
{
    return this->address;
}

void staff::set_username(string username)
{
    this->username = username;
}

void staff::set_staff_id(int staff_id)
{
    this->staff_id = staff_id;
}

void staff::set_designation(string designation)
{
    this->designation = designation;
}

void staff::set_name(string name)
{
    this->name = name;
}

void staff::set_email(string email)
{
    this->email = email;
}

void staff::set_phone_no(string phone_no)
{
    this->phone_no = phone_no;
}

void staff::set_date_of_birth(string date_of_birth)
{
    this->date_of_birth = date_of_birth;
}

void staff::set_salary(int salary)
{
    this->salary = salary;
}

void staff::add_date_for_attandence(string date, int present)
{
    attandence.push_back({date, present});
}

string staff::get_username()
{
    return this->username;
}

int staff::get_staff_id()
{
    return this->staff_id;
}

string staff::get_designation()
{
    return this->designation;
}

int staff::get_salary()
{
    return this->salary;
}

string staff::get_name()
{
    return this->name;
}

string staff::get_email()
{
    return this->email;
}

string staff::get_phone_no()
{
    return this->phone_no;
}

string staff::get_date_of_birth()
{
    return this->date_of_birth;
}

vector<pair<string, int>> staff::get_attendance_list()
{
    return this->attandence;
}
