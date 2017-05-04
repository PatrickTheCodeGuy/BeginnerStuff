/* Purpose is to allow the user to input how many of the two items given they want to buy and perform a
   calculation that will output with the look of a receipt and give them their total with tax */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{

    int item1Count;                // Number of Bananas the user inputs
    int item2Count;                // Number of Coke the user inputs
    int item3Count;                // Number of Grapes user inputs
    int item4Count;                // Number of Ground Beef user inputs
    float bananasPrice;            // Price of item1
    float cokePrice;               // Price of item2
    float grapePrice;              // Price of item3
    float gbeefPrice;              // Price of item4
    float bananasTotal;            // Number of that item * price
    float cokeTotal;               // Number of that item * price
    float grapeTotal;              // Number of that item * price
    float gbeefTotal;              // Number of that item * price
    float Total;                   // Total after tax added in
    int x;                         // input for item selection
    char A;                        // Y or N for more shopping



    const float Tax = .08675;      // Tax as a constant float
    bananasPrice = 2.99;           // Item 1 price
    cokePrice = 1.99;              // Item 2 price
    grapePrice = 3.99;             // Item 3 price
    gbeefPrice = 12.99;            // Item 4 price


    cout << "=========================\n";
    cout << "==Welcome to UnSafeWay!==\n";
    cout << "=========================\n";
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout << "We seem to only have four items in stock today\n";
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout << "-Grapes\n-Coke\n-Bananas\n-Ground Beef\n";
    cout << "-------------------------------------------------\n";
    cout << "-------------------------------------------------\n";
    cout << "What would you like to buy today?\n\nPlease enter the number that corresponds to your item:\n\n1 Bananas\n2 Cokes\n3 Grapes\n4 Ground Beef\n";




    while(A != 'N')
    {
        cin >> x;
        switch(x)
        {
            case 1 : cout << "Bananas are $2.99 each, Please enter the quantity needed..\n";
                     cin >> item1Count;
                     cout << "\nWould you like to buy anything else?(Y/N)\n";
                     cin >> A;
                     if(A == 'Y', 'y'){
                        cout << "Please enter the items number...\n";
                     }
                     break;
            case 2 : cout << "Cokes are $1.99 each, Please enter the quantity needed..\n";
                     cin >> item2Count;
                     cout << "\nWould you like to buy anything else?(Y/N)\n";
                     cin >> A;
                     if(A == 'Y', 'y'){
                        cout << "Please enter the items number...\n";
                     }
                     break;
            case 3 : cout << "Grapes are $3.99 each, Please enter the quantity needed..\n";
                     cin >> item3Count;
                     cout << "\nWould you like to buy anything else?(Y/N)\n";
                     cin >> A;
                     if(A == 'Y', 'y'){
                        cout << "Please enter the items number...\n";
                     }
                     break;
            case 4 : cout << "Ground Beef is $12.99 for 6 pounds, Please enter the quantity needed..\n";
                     cin >> item4Count;
                     cout << "\nWould you like to buy anything else?(Y/N)\n";
                     cin >> A;
                     if(A == 'Y', 'y'){
                        cout << "Please enter the items number...\n";
                     }
                     break;
            default : cout << "I'm sorry, that is not a valid selection, please try again\n";



        }
    }


    bananasTotal = bananasPrice * item1Count;
    cokeTotal = cokePrice * item2Count;
    grapeTotal = grapePrice * item3Count;
    gbeefTotal = gbeefPrice * item4Count;
    Total = (bananasTotal + cokeTotal + grapeTotal + gbeefTotal + ((bananasTotal + cokeTotal + grapeTotal + gbeefTotal) * Tax));


    cout << endl;

    cout << setw(20) << left << "Item" << setw(20) << left <<   "Count" << setw(20) << left << "Price" << "Ext. Price" << endl;
    cout << setw(20) << left <<"=====" << setw(20) << left << setw(20) << left << "=====" << setw(20) << left << "=====" << setw(20) << left << "========" << endl;
    cout << endl;
    cout << setw(20) << left << fixed << showpoint << setprecision(2) << "Bananas" << setw(20) << left << item1Count << "$" <<setw(19) << left << bananasPrice <<"$" << bananasTotal << endl;
    cout << endl;
    cout << setw(20) << left << fixed << showpoint << setprecision(2) << "Cokes" << setw(20) << left << item2Count << "$" << setw(19) << left << cokePrice << "$" << cokeTotal << endl;
    cout << endl;
    cout << setw(20) << left << fixed << showpoint << setprecision(2) << "Grapes" << setw(20) << left << item3Count << "$" << setw(19) << left << grapePrice << "$" << grapeTotal << endl;
    cout << endl;
    cout << setw(20) << left << fixed << showpoint << setprecision(2) << "Ground Beef" << setw(20) << left << item4Count << "$" << setw(19) << left << gbeefPrice << "$" << gbeefTotal << endl;
    cout << endl;
    cout << setw(60) << left << fixed << showpoint << setprecision (3) << "Tax" << Tax * 100  <<"%" << endl;
    cout << endl;
    cout << setw(60) << left << fixed << showpoint << setprecision (2) <<"Total" << "$" << Total << endl;


    return 0;

}


