#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{

    srand((unsigned)time(0));

    int random_numb = rand();
    int random_numb2 = rand();
    float average;
    float numb1Root;
    float numb2Root;

    random_numb = (rand() %20);
    random_numb2 =(rand() %20);

    cout << "=======================" << endl;
    cout << right << "First Number: " << random_numb << endl;
    cout << "=======================" << endl;
    cout << right << "Second Number: " << random_numb2 << endl;
    cout << "=======================" << endl;


    average = (random_numb + random_numb2)/2.0; // 2.0 turns average into a float from int
    //numb1Root = random_numb^0.5;
    numb1Root = pow(random_numb, 0.5);
    numb2Root = pow(random_numb2, 0.5);



    cout << fixed << showpoint << setprecision(1) << "The average of " << random_numb << " and " << random_numb2 << " is " << average << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << fixed << showpoint << setprecision(3) << "The Square root of " << random_numb << " is: " << numb1Root << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    cout << fixed << showpoint << setprecision(3) << "The Square root of " << random_numb2 << " is: " << numb2Root << endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;






    }











