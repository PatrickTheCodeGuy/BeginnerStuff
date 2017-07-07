#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

const int row = 4;
const int col = 4;

char jeffschedule[row][col] =
{
    {'X','X','O','O'},
    {'O','X','X','X'},
    {'O','X','X','O'},
    {'X','X','X','O'}
    };

char annaschedule[row][col] =
{
    {'X','X','O','X'},
    {'O','X','O','X'},
    {'X','X','O','O'},
    {'X','O','X','X'}
};




void changeSchedule(char jeffschedule[][col],int size)
{
    string instructor;
    cout << "Which instructor would you like to change the schedule for, Anna or Jeff? " << endl;
    cin >> instructor;
    char choice;

        if(instructor == "Jeff" || instructor == "jeff")
        {
            cout << "What would you like to change Jeffs' schedule too? " << endl;
            cout << endl;
            cout << "Mark X for taken, O for open. " << endl;
            cout << endl;
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
            cout << endl;
            cout << "Mark X for taken, O for open. " << endl;
            cout << endl;
            cout << "Monday from 11-12 ? " << endl;
            cin >> annaschedule[0][0];
            cout << "Monday from 12-1 ? " << endl;
            cin >> annaschedule[1][0];
            cout << "Monday from 1-2 ? " << endl;
            cin >> annaschedule[2][0];
            cout << "Monday from 2-3 ? " << endl;
            cin >> annaschedule[3][0];
            cout << "Tuesday from 11-12 ? " << endl;
            cin >> annaschedule[0][1];
            cout << "Tuesday from 12-1 ? " << endl;
            cin >> annaschedule[1][1];
            cout << "Tuesday from 1-2 ? " << endl;
            cin >> annaschedule[2][1];
            cout << "Tuesday from 2-3 ? " << endl;
            cin >> annaschedule[3][1];
            cout << "Wednesday from 11-12 ? " << endl;
            cin >> annaschedule[0][2];
            cout << "Wednesday from 12-1 ? " << endl;
            cin >> annaschedule[1][2];
            cout << "Wednesday from 1-2 ? " << endl;
            cin >> annaschedule[2][2];
            cout << "Wednesday from 2-3 ? " << endl;
            cin >> annaschedule[3][2];
             cout << "Thursday from 11-12 ? " << endl;
            cin >> annaschedule[0][3];
            cout << "Thursday from 12-1 ? " << endl;
            cin >> annaschedule[1][3];
            cout << "Thursday from 1-2 ? " << endl;
            cin >> annaschedule[2][3];
            cout << "Thursday from 2-3 ? " << endl;
            cin >> annaschedule[3][3];
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
            else if(choice =='n' || choice =='N')
            {
                    cout << endl;
            }






}

void displaySchedule()
{


string choice;
int out;

    cout << " Which instructors schedule would you like to view? You can enter 'Jeff' 'Anna' or 'Both'  " << endl;


    while(out != 0)
    {
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
        out = 0;


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
        out = 0;







   }
   else if(choice == "both" || choice == "Both")
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
        out = 0;



   }
   else
    cout << "That is not a valid instructor, please try again" << endl;


}






}



void displayOpen()
{



string nameinstructor;

cout << "Which instructor would you like to check for? " << endl;

cin >> nameinstructor;


char check = 'O';


if(nameinstructor == "jeff" || nameinstructor == "Jeff")

{


    for(int i = 0; i<row; i++)
{
        for(int j = 0; j<col; j++)
    {
            if(jeffschedule[i][j] == check)
        {


                if(i==0 && j==0)
                {
                    cout << "11-12 " << "on Monday"
                    << endl;
                }
                else if(i==0 && j==1)
                {
                    cout << "11-12 " << "on Tuesday "
                    << endl;
                }
                else if(i==0 && j==2)
                {
                    cout << "11-12 " << "on Wednesday "
                    << endl;
                }
                else if(i==0 && j==3)
                {
                    cout << "11-12 " << "on Thursday "
                    << endl;
                }
                else if(i==1 && j==0)
                {
                    cout << "12-1 " << "on Monday"
                    << endl;
                }
                else if(i==1 && j==1)
                {
                    cout << "12-1 " << "on Tuesday "
                    << endl;
                }
                else if(i==1 && j==2)
                {
                    cout << "12-1 " << "on Wednesday "
                    << endl;
                }
                else if(i==1 && j==3)
                {
                    cout << "12-1 " << "on Thursday "
                    << endl;
                }
                else if(i==2 && j==0)
                {
                    cout << "1-2 " << "on Monday"
                    << endl;
                }
                else if(i==2 && j==1)
                {
                    cout << "1-2 "  << "on Tuesday "
                    << endl;
                }
                else if(i==2 && j==2)
                {
                    cout << "1-2 " << "on Wednesday "
                    << endl;
                }
                else if(i==2 && j==3)
                {
                    cout << "1-2 " << "on Thursday "
                    << endl;
                }
                else if(i==3 && j==0)
                {
                    cout << "2-3 " << "on Monday"
                    << endl;
                }
                else if(i==3 && j==1)
                {
                    cout << "2-3 " << "on Tuesday "
                    << endl;
                }
                else if(i==3 && j==2)
                {
                    cout << "2-3 " << "on Wednesday "
                    << endl;
                }
                else if(i==3 && j==3)
                {
                    cout << "2-3 " << "on Thursday "
                    << endl;
                }


    }
    else if(jeffschedule[i][j] != check)
                {
                i = 3;
                j = 3;
                cout << "There is no open slots " << endl;

                }
        }
    }
}


else if(nameinstructor == "anna" || nameinstructor == "Anna")

{


for(int i = 0; i<row; i++)
{
    for(int j = 0; j<col; j++)
    {
        if(annaschedule[i][j] == check)
        {


            if(i==0 && j==0)
            {
                cout << "11-12 " << "on Monday"
                << endl;
            }
            else if(i==0 && j==1)
            {
                cout << "11-12 " << "on Tuesday "
                << endl;
            }
            else if(i==0 && j==2)
            {
                cout << "11-12 " << "on Wednesday "
                << endl;
            }
            else if(i==0 && j==3)
            {
                cout << "11-12 " << "on Thursday "
                << endl;
            }
            else if(i==1 && j==0)
            {
                cout << "12-1 " << "on Monday"
                << endl;
            }
            else if(i==1 && j==1)
            {
                cout << "12-1 " << "on Tuesday "
                << endl;
            }
            else if(i==1 && j==2)
            {
                cout << "12-1 " << "on Wednesday "
                << endl;
            }
            else if(i==1 && j==3)
            {
                cout << "12-1 " << "on Thursday "
                << endl;
            }
            else if(i==2 && j==0)
            {
                cout << "1-2 " << "on Monday"
                << endl;
            }
            else if(i==2 && j==1)
            {
                cout << "1-2 "  << "on Tuesday "
                << endl;
            }
            else if(i==2 && j==2)
            {
                cout << "1-2 " << "on Wednesday "
                << endl;
            }
            else if(i==2 && j==3)
            {
                cout << "1-2 " << "on Thursday "
                << endl;
            }
            else if(i==3 && j==0)
            {
                cout << "2-3 " << "on Monday"
                << endl;
            }
            else if(i==3 && j==1)
            {
                cout << "2-3 " << "on Tuesday "
                << endl;
            }
            else if(i==3 && j==2)
            {
                cout << "2-3 " << "on Wednesday "
                << endl;
            }
            else if(i==3 && j==3)
            {
                cout << "2-3 " << "on Thursday "
                << endl;
            }
            else if(annaschedule[i][j] != check)
        {
            i = 3;
            j = 3;
            cout << "There is no open slots " << endl;


        }
    }
    else if(annaschedule[i][j] != check)
                {
                    i = 3;
                    j = 3;
                    cout << "There is no open slots " << endl;

                }
            }

        }

    }

}
void displayAllOpen()
{



char check = 'O';
for(int i = 0; i<row; i++)
{
    for(int j = 0; j<col; j++)
    {
        if(jeffschedule[i][j] && annaschedule[i][j] == check)
        {






            if(i==0 && j==0)
            {
                cout << "11-12 " << "on Monday"
                << endl;
            }
            else if(i==0 && j==1)
            {
                cout << "11-12 " << "on Tuesday "
                << endl;
            }
            else if(i==0 && j==2)
            {
                cout << "11-12 " << "on Wednesday "
                << endl;
            }
            else if(i==0 && j==3)
            {
                cout << "11-12 " << "on Thursday "
                << endl;
            }
            else if(i==1 && j==0)
            {
                cout << "12-1 " << "on Monday"
                << endl;
            }
            else if(i==1 && j==1)
            {
                cout << "12-1 " << "on Tuesday "
                << endl;
            }
            else if(i==1 && j==2)
            {
                cout << "12-1 " << "on Wednesday "
                << endl;
            }
            else if(i==1 && j==3)
            {
                cout << "12-1 " << "on Thursday "
                << endl;
            }
            else if(i==2 && j==0)
            {
                cout << "1-2 " << "on Monday"
                << endl;
            }
            else if(i==2 && j==1)
            {
                cout << "1-2 "  << "on Tuesday "
                << endl;
            }
            else if(i==2 && j==2)
            {
                cout << "1-2 " << "on Wednesday "
                << endl;
            }
            else if(i==2 && j==3)
            {
                cout << "1-2 " << "on Thursday "
                << endl;
            }
            else if(i==3 && j==0)
            {
                cout << "2-3 " << "on Monday"
                << endl;
            }
            else if(i==3 && j==1)
            {
                cout << "2-3 " << "on Tuesday "
                << endl;
            }
            else if(i==3 && j==2)
            {
                cout << "2-3 " << "on Wednesday "
                << endl;
            }
            else if(i==3 && j==3)
            {
                cout << "2-3 " << "on Thursday "
                << endl;
            }
            else
                cout <<"No availability" << endl;


        }
        else if(jeffschedule[i][j] && annaschedule[i][j] != check)
        {
            i = 3;
            j = 3;
            cout << "There is no open slots for both instructors " << endl;
        }

    }
    }

}

void saveFile()
{



ofstream myfile ("Schedule.txt");

  if (myfile.is_open())
  {

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {

            myfile << jeffschedule[i][j] << annaschedule[i][j] << endl;


        }
        myfile << endl;
    }
    cout << "File Saved as Schedule.txt, check your source folder for it...." << endl;
    }
    if (!myfile) {
        cout << "Error saving to file.\n";
    }

     myfile.close();



  }




void loadFile()
{
 ifstream myfile;
 myfile.open("Schedule.txt");
 if (myfile.is_open())
    {
    while (!myfile.eof())
        {


        for (int i = 0; i < row; i++ )
        {
            for(int j = 0; j < col; j++ )
                {
                  myfile >> jeffschedule[i][j] >> annaschedule[i][j];
                }


        }

        }
myfile.close();

cout << "File loaded!~~" << endl;




    }


}

int main()

{
    string jeff[4][5];

    int selection = 0;
    int exit = 0;


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
    cout << "7: Exit application " << endl;
    cout << endl;
    cout << endl;



    cin >> selection;
    cout << endl;

    switch(selection)
    {
    case 1:
        changeSchedule(jeffschedule, 5);
        break;
    case 2:
        displaySchedule();
        break;
    case 3:
        displayOpen();
        break;
    case 4:
        displayAllOpen();
        break;
    case 5:
        loadFile();
        break;
    case 6:
        saveFile();
        break;
    case 7:
        break;
    default:
        cout << "Not a valid choice, please try again. " << endl;
        cin.clear();                                                                               // Prevent infinite loop if user enters anything characters
        cin.ignore();
        break;
    }
    cout << endl;
    cout << endl;
    cout << "Would you like to exit? Enter 1 to exit." << endl;

    cin >> exit;
    cin.clear();                                                                                  // Prevent infinite loop if user enters anything characters
    cin.ignore();

    }

        return 0;


}
