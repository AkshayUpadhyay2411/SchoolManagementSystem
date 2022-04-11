#ifndef __LIBRARY
#define __LIBRARY

#include <bits/stdc++.h>
using namespace std;

#include "entry_detail.h"

class Library
{
private:
   static int student_book_id;
   static int teacher_book_id;

   vector<book_detail> student_store;
   vector<book_detail> teacher_store;

   map<int, vector<entry_detail>> student_record;
   map<int, vector<entry_detail>> teacher_record;

public:
   void add_book(string, int); // parameter (name of the book, 1 --> stdent/  2 --> teacher))

   void add_to_students_store(string);
   void add_to_teachers_store(string);

   int get_id_student(string); // returns the id of the book with given name from students store
   int get_id_teacher(string); // returns the id of the book with given name from teachers store

   void issue_student(string, string, int);  // name of book, date of issue of book,roll no of the student
   void submit_student(int, string, string); // roll_no , book name , date of submission

   void issue_teacher(string, string, int);

   void submit_teacher(int, string, string); // staff id , book name , date of submission

   void display();
};

#endif
