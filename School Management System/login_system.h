#ifndef __LOGIN_SYSTEM
#define __LOGIN_SYSTEM

#include <bits/stdc++.h>
using namespace std;

#include "admin.h"

#include "exam_marks.h"

class LoginSystem
{
private:
    string password[7] = {"1", "2", "3", "4", "5", "6", "7"};
    string username[7] = {"Admin", "Teacher", "Student", "Staff", "Class_teacher", "Class_monitor", "Leader"};
    string access_rights[7] = {"ADMIN", "TEACHER", "STUDENT", "STAFF", "CLASS_TEACHER", "CLASS_MONITOR", "LEADER"};

    string username_attempted;
    string password_attempted;
    string choice;

    bool accessgranted;

public:
    admin admin1;

    void login();
};

#endif