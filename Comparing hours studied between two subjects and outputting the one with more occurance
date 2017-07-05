// This program finds the average time spent programming by a student

// each day over a three day period.

// PLACE YOUR NAME HERE

#include <iostream>

using namespace std;

int main()

{

int numStudents;
int numHoursBio;

float numHours, total, total2, average, average2, averageCopy;



int student,day = 0; // these are the counters for the loops

cout << "This program will find the average number of hours a day" << " that a student spent programming over a long weekend\n\n";

cout << "How many students are there ?" << endl << endl;

cin >> numStudents;

for( student = 1; student <= numStudents; student++)

{

     total = 0;
     total2 = 0;

     for(day = 1; day <= 3; day++)

     {

          cout << "Please enter the number of hours worked programming by student " << student <<" on day " << day << "." << endl;
          cin >> numHours; total = total + numHours;
          cout << "Please enter the number of hours studying biology by student " << student <<" on day " << day << "." << endl;
          cin >> numHoursBio; total2 = total2 + numHoursBio;

     }

     average = total / 3;
     average2 = total2 / 3;

     cout << endl;

     cout << "The average number of hours per day spent programming by " << "student " << student << " is " << average << endl;
     cout << "The average number of hours per day spent studying biology by " << "student " << student << " is " << average2 << endl << endl << endl;

     if(average2 > average){

        cout << "Student " << student <<" studies more biology than programming " << endl;
     }
     else
        cout << "Student " << student <<" studies more programming than biology " << endl << endl << endl;
}




return 0;

}
