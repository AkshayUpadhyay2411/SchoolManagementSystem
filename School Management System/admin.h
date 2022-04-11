#ifndef __ADMIN
#define __ADMIN

#include <bits/stdc++.h>
using namespace std;

#include "bank.h"
#include "library.h"
#include "leader.h"
#include "class_teacher.h"

#include "exam_marks.h"

class admin
{
private:
    static int student_id;
    static int staff_id;

    bank obj_bank;
    Library obj_library;

    vector<student> student_list;
    vector<teacher> teacher_list;
    vector<staff> staff_list;
    vector<class_monitor> class_monitor_list;
    vector<class_teacher> class_teacher_list;
    vector<leader> leader_list;

public:
    int get_school_balance();

    void admin_functions();
    void student_functions();
    void teacher_functions();
    void staff_functions();

    void class_monitor_functions();
    void class_teacher_functions();
    void leader_functions();

    void add_student();
    void remove_student();

    void add_class_monitor();
    void remove_class_monitor();

    void add_leader();
    void remove_leader();

    void pay_staff();

    void add_teacher();
    void remove_teacher();

    void add_class_teacher();
    void remove_class_teacher();

    void add_staff();
    void remove_staff();

    void lib_add_book();
    void get_id_book();
};

#endif
