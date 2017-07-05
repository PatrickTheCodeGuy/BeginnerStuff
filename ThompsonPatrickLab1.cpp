#include <iostream>
#include <iomanip>

using namespace std;



char jeffschedule[4][5] =
{
    {'X','X','O','O'},
    {'O','X','X','X'},
    {'O','X','X','O'},
    {'X','X','X','O'}
    };

char annaschedule[4][5] =
{
    {'X','X','O','X'},
    {'O','X','O','X'},
    {'X','X','O','O'},
    {'X','O','X','X'}
};







void changeSchedule(char jeffschedule[][5],int size)
{
    string instructor;
    cout << "Which instructor would you like to change the schedule for, Anna or Jeff? " << endl;
    cin >> instructor;
    char choice;

        if(instructor == "Jeff" || instructor == "jeff")
        {
            cout << "What would you like to change Jeffs' schedule too? " << endl;
            cout << "Mark X for taken, O for open. " << endl;
            cout << "Monday from 11-12 ? " << endl;
            cin >> jeffschedule[0][0];
            cout << "Monday from 12-1 ? " << endl;
            cin >> jeffschedule[1][0];
            cout << "Monday from 1-2 ? " << endl;
            cin >> jeffschedule[2][0];
            cout << "Monday from 2-3 ? " << endl;
            cin >> jeffschedule[3][0];
            cout << "Tuesday from 11-12 ? " << endl;
            cin >> jeffschedule[0][1];
            cout << "Tuesday from 12-1 ? " << endl;
            cin >> jeffschedule[1][1];
            cout << "Tuesday from 1-2 ? " << endl;
            cin >> jeffschedule[2][1];
            cout << "Tuesday from 2-3 ? " << endl;
            cin >> jeffschedule[3][1];
            cout << "Wednesday from 11-12 ? " << endl;
            cin >> jeffschedule[0][2];
            cout << "Wednesday from 12-1 ? " << endl;
            cin >> jeffschedule[1][2];
            cout << "Wednesday from 1-2 ? " << endl;
            cin >> jeffschedule[2][2];
            cout << "Wednesday from 2-3 ? " << endl;
            cin >> jeffschedule[3][2];
             cout << "Thursday from 11-12 ? " << endl;
            cin >> jeffschedule[0][3];
            cout << "Thursday from 12-1 ? " << endl;
            cin >> jeffschedule[1][3];
            cout << "Thursday from 1-2 ? " << endl;
            cin >> jeffschedule[2][3];
            cout << "Thursday from 2-3 ? " << endl;
            cin >> jeffschedule[3][3];

        }
        else if(instructor == "Anna" || instructor == "anna")
        {
            cout << "What would you like to change Annas' schedule too? " << endl;
        }
        else
            cout << "Thats not a valid instructor, Please try again" << endl;


        cout << "Would you like to display the new schedule? Y/N " << endl;
        cin >> choice;

            if(choice == 'y' || choice == 'Y')
            {
                cout << "Heres the new schedule for both Jeff and Anna " << endl;

                cout << endl;
        cout << endl;
        cout << "Here is the schedule for Jeff" << endl;
        cout << "+++++++++++++++++++++++++++++" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;
        cout << left << setw(9) << "Jeff" << "|  " << "Monday" << "   " << "Tuesday" << "   " << "Wednesday" << "   " << "Thursday" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;
        cout << left << setw(10) << "11-12" << "  " << jeffschedule[0][0] << "        " << jeffschedule[0][1] << "         " << jeffschedule[0][2] << "           " << jeffschedule[0][3] << endl;
        cout << left << setw(10) << "12-1" <<  "  " << jeffschedule[1][0] << "        " << jeffschedule[1][1] << "         " << jeffschedule[1][2] << "           " << jeffschedule[1][3] << endl;
        cout << left << setw(10) << "1-2" <<  "  " << jeffschedule[2][0] << "        " << jeffschedule[2][1] << "         " << jeffschedule[2][2] << "           " << jeffschedule[2][3] << endl;
        cout << left << setw(10) << "2-3" <<  "  " << jeffschedule[3][0] << "        " << jeffschedule[3][1] << "         " << jeffschedule[3][2] << "           " << jeffschedule[3][3] << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;




            }
            else if(choice =='n' || choice =='N')
            {
                    cout << endl;
            }






}

void displaySchedule()
{


string choice;

    cout << " Which instructors schedule would you like to view? " << endl;
    cin >> choice;

    if(choice == "Jeff" || choice == "jeff")
    {




        cout << endl;
        cout << endl;
        cout << "Here is the schedule for Jeff" << endl;
        cout << "+++++++++++++++++++++++++++++" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;
        cout << left << setw(9) << "Jeff" << "|  " << "Monday" << "   " << "Tuesday" << "   " << "Wednesday" << "   " << "Thursday" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;
        cout << left << setw(10) << "11-12" << "  " << jeffschedule[0][0] << "        " << jeffschedule[0][1] << "         " << jeffschedule[0][2] << "           " << jeffschedule[0][3] << endl;
        cout << left << setw(10) << "12-1" <<  "  " << jeffschedule[1][0] << "        " << jeffschedule[1][1] << "         " << jeffschedule[1][2] << "           " << jeffschedule[1][3] << endl;
        cout << left << setw(10) << "1-2" <<  "  " << jeffschedule[2][0] << "        " << jeffschedule[2][1] << "         " << jeffschedule[2][2] << "           " << jeffschedule[2][3] << endl;
        cout << left << setw(10) << "2-3" <<  "  " << jeffschedule[3][0] << "        " << jeffschedule[3][1] << "         " << jeffschedule[3][2] << "           " << jeffschedule[3][3] << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;


   }

   else if(choice == "Anna" || choice == "anna")
   {

        cout << endl;
        cout << endl;
        cout << "Here is the schedule for Anna" << endl;
        cout << "+++++++++++++++++++++++++++++" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;
        cout << left << setw(9) << "Anna" << "|  " << "Monday" << "   " << "Tuesday" << "   " << "Wednesday" << "   " << "Thursday" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;
        cout << left << setw(10) << "11-12" << "  " << annaschedule[0][0] << "        " << annaschedule[0][1] << "         " << annaschedule[0][2] << "           " << annaschedule[0][3] << endl;
        cout << left << setw(10) << "12-1" <<  "  " << annaschedule[1][0] << "        " << annaschedule[1][1] << "         " << annaschedule[1][2] << "           " << annaschedule[1][3] << endl;
        cout << left << setw(10) << "1-2" <<  "  " << annaschedule[2][0] << "        " << annaschedule[2][1] << "         " << annaschedule[2][2] << "           " << annaschedule[2][3] << endl;
        cout << left << setw(10) << "2-3" <<  "  " << annaschedule[3][0] << "        " << annaschedule[3][1] << "         " << annaschedule[3][2] << "           " << annaschedule[3][3] << endl;
        cout << "------------------------------------------------------------------------------------------------------------------" << endl;







   }
   else
    cout << "That is not a valid instructor, please try again" << endl;






}



int main()

{




    string jeff[4][5];

    int selection;
    int exit;


    while(exit != 1)
    {


    cout << "++++++++++++++++++++++++++++++++++" << endl;
    cout << "Jeff and Anna School for Swimming! " << endl;
    cout << "++++++++++++++++++++++++++++++++++" << endl;
    cout << endl;
    cout << endl;
    cout << "Please enter your selection: " << endl;
    cout << "1: Change an instructors schedule " << endl;
    cout << "2: Display an instructors schedule" << endl;
    cout << "3: Display at least one open time slot for an instructor" << endl;
    cout << "4: Display time slots open for both instructors " << endl;
    cout << "5: Load the schedule from a file " << endl;
    cout << "6: Save the schedule to a file " << endl;
    cout << endl;
    cout << endl;

    cin >> selection;

    switch(selection)
    {
    case 1:
        changeSchedule(jeffschedule, 5);
        break;
    case 2:
        displaySchedule();
        break;
    default:
        cout << "Not a valid choice, please try again. " << endl;
    }
    cout << endl;
    cout << endl;
    cout << "Would you like to quit? Enter 1 to exit." << endl;
    cin >> exit;

    }







        return 0;
}
