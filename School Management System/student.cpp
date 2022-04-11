#include <bits/stdc++.h>
using namespace std;

#include "student.h"

void student::display()
{

    cout << "Displaying student" << endl;
    cout << "--------------------------------" << endl;

    cout << "Name: " << name << "                     Username: " << username << endl;
    cout << "Roll Number: " << roll_no << endl;
    cout << "Email ID: " << email << endl;
    cout << "Phone No: " << phone_no << endl;
    cout << "Date of Birth: " << date_of_birth << endl;
    cout << "Standard: " << standard << endl;
}

void student::add_exam_marks(exam_marks m)
{
    this->exam.push_back(m);
    set_percentage();
}

void student ::set_fee_paid(int check)
{
    this->fee_paid = check;
}

int student ::get_fee_paid()
{
    return this->fee_paid;
}

void student::set_percentage()
{
    float sum = 0;
    for (auto x : exam)
    {
        sum = sum + x.maths_marks + x.computer_marks + x.english_marks + x.hindi_marks + x.social_marks + x.science_marks;
    }
    float x = sum / 6;
    this->percentage = x;
}

float student::get_percentage()
{
    return this->percentage;
}

void student::set_username(string username)
{
    this->username = username;
}

void student::set_roll_no(int roll_no)
{
    this->roll_no = roll_no;
}

void student::set_name(string name)
{
    percentage = 0; // for initalization
    this->name = name;
}

void student::set_email(string email)
{
    this->email = email;
}

void student::set_phone_no(string phone_no)
{
    this->phone_no = phone_no;
}

void student::set_date_of_birth(string date_of_birth)
{
    this->date_of_birth = date_of_birth;
}

void student::set_standard(int standard)
{
    this->standard = standard;
}

void student::update_standard(int status)
{
    if (status == 1)
    {
        standard++;
    }
    else
    {
        standard = standard + 0;
    }
}

void student::add_date_for_attandence(string date, int present)
{
    attandence.push_back({date, present});
}

void student::give_exam()
{

    cout << "Student is writting the exam !! Please dont disturb him " << endl;
}

void student::give_maths_exam()
{

    calculator *ptr;
    modified_calculator obj;
    ptr = &obj;

    cout << "Welcome " << endl;
    cout << "--------------------" << endl;
    cout << "Menu" << endl;
    cout << "--------------------" << endl;
    cout << "Press 1 to add" << endl;
    cout << "Press 2 to subtract" << endl;
    cout << "Press 3 to multiply" << endl;
    cout << "Press 4 to divide" << endl;
    cout << "Press 5 to find power (x^n)" << endl;
    cout << "Press 6 to check if a number is prime or not " << endl;
    cout << "Press 7 to find gcd of two numbers" << endl;
    cout << "Press 8 to find lcm of two numbers" << endl;
    // cout<<"Press 9 to solve expression"<<endl;
    cout << "Press 9 to find the factorial of a number" << endl;
    cout << "Press 10 to exit " << endl;

    int choice;
    cout << "Enter your choice" << endl;
    cin >> choice;

    if (choice == 1)
    {
        int x, y;
        cout << "Enter two numbers" << endl;
        cin >> x >> y;
        int ans = ptr->add(x, y);
        cout << ans << endl;
    }
    else if (choice == 2)
    {
        int x, y;
        cout << "Enter two numbers" << endl;
        cin >> x >> y;
        int ans = ptr->sub(x, y);
        cout << ans << endl;
    }
    else if (choice == 3)
    {
        int x, y;
        cout << "Enter two numbers" << endl;
        cin >> x >> y;
        int ans = ptr->mul(x, y);
        cout << ans << endl;
    }
    else if (choice == 4)
    {
        int x, y;
        cout << "Enter two numbers" << endl;
        cin >> x >> y;
        int ans = ptr->div(x, y);
        cout << ans << endl;
    }
    else if (choice == 5)
    {
        int x, n;
        cout << "Enter two numbers" << endl;
        cin >> x >> n;
        int ans = ptr->power(x, n);
        cout << ans << endl;
    }
    else if (choice == 6)
    {
        int x;
        cout << "Enter a number" << endl;
        cin >> x;
        int ans = ptr->check_prime(x);
        cout << ans << endl;
    }
    else if (choice == 7)
    {
        int x, y;
        cout << "Enter two numbers" << endl;
        cin >> x >> y;
        int ans = ptr->gcd(x, y);
        cout << ans << endl;
    }
    else if (choice == 8)
    {
        int x, y;
        cout << "Enter two numbers" << endl;
        cin >> x >> y;
        int ans = ptr->lcm(x, y);
        cout << ans << endl;
    }

    else if (choice == 9)
    {
        int num;
        cout << "Enter the number ";
        cin >> num;
        int ans = ptr->fac(num);
        cout << ans << endl;
    }

    else if (choice == 10)
    {
        return;
    }

    cout << "Do you want to perform more functions < y/Y for yes > < n/N for no >";
    char ch;
    cin >> ch;

    if (ch == 'y' || ch == 'Y')
    {
        give_maths_exam();
    }
    else
    {
        return;
    }
}

string student::get_username()
{
    return this->username;
}

int student::get_roll_no()
{
    return this->roll_no;
}

string student::get_name()
{
    return this->name;
}

string student::get_email()
{
    return this->email;
}

string student::get_phone_no()
{
    return this->phone_no;
}

string student::get_date_of_birth()
{
    return this->date_of_birth;
}

int student::get_standard()
{
    return this->standard;
}

vector<pair<string, int>> student::get_attendance_list()
{
    return this->attandence;
}
void student::show_report()
{
    cout << "Name: " << name << "                     Username: " << username << endl;
    cout << "Roll Number: " << roll_no << endl;
    cout << "Email ID: " << email << endl;
    cout << "Phone No: " << phone_no << endl;
    cout << "Date of Birth: " << date_of_birth << endl;
    cout << "Standard: " << standard << endl;
    cout << "___________" << endl;
    cout << "Percentage:                " << percentage << "%" << endl;
}
