#ifndef __CLASS_MONITOR
#define __CLASS_MONITOR

#include <bits/stdc++.h>
using namespace std;

#include "student.h"

#include "exam_marks.h"

class class_monitor : public student
{
private:
public:
    void maintain_the_class();

    void display();
};

#endif
