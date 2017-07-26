#include <iostream>

using namespace std;

int main()
{
    enum status {available, unavailable};

    struct book
    {
        string title;
        string author;
        string isbn;
        int copies;
        int total;
        status availability;
    };

    book library[100];
    int number = 3;

    library[0].title = "Enders Game";
    library[0].author = "Orson Scott";
    library[0].isbn = "1997";
    library[0].copies = 0;
    library[0].total = 5;
    library[0].availability = unavailable;

    library[1].title = "The Lord of the Rings";
    library[1].author = "J. R. R. Tolkien";
    library[1].isbn = "1955";
    library[1].copies = 1;
    library[1].total = 1;
    library[1].availability = available;

    library[2].title = "Steps to Christ";
    library[2].author = "Ellen G. White";
    library[2].isbn = "1892";
    library[2].copies = 0;
    library[2].total = 1;
    library[2].availability = unavailable;



    string titlesearch;
    string authorsearch;
    string isbnsearch;
    int no;

    string titleout;
    string authorout;
    string isbnout;

    string titlein;
    string authorin;
    string isbnin;

    int selection = 1;

    while (selection != 0)
    {
        cout << "Please select an option" << endl;
        cout << endl;
        cout << "1: Add book(s) to system" << endl;
        cout << "2: Search books by title" << endl;
        cout << "3: Search books by author" << endl;
        cout << "4: Search books by ISBN" << endl;
        cout << "5: Check out book" << endl;
        cout << "6: Check in book" << endl;
        cout << "7: List books by status" << endl;
        cout << "8: Display books sorted by title" << endl;
        cout << "9: Display books sorted by author" << endl;
        cout << "0: Exit" << endl;
        cout << endl;
        cout << "Selection: ";
        cin >> selection;
        cout << endl;

        switch(selection)
        {
            case 1:

                no = 0;

                cout << "Enter title: ";
                cin.ignore();
                getline(cin, library[number].title);

                cout << "Enter author: ";
                getline(cin, library[number].author);

                cout << "Enter ISBN: ";
                getline(cin, library[number].isbn);

                cout << "Enter number of copies: ";
                cin >> library[number].copies;
                library[number].total = library[number].copies;
                cout << endl;

                for (int i = number - 1; i >= 0; i--)
                {
                    if (library[number].title == library[i].title && library[number].author == library[i].author && library[number].isbn == library[i].isbn)
                    {
                        cout << "Existing book found. Added " << library[number].copies << " copies." << endl;
                        cout << endl;

                        library[i].copies = library[i].copies + library[number].copies;
                        library[i].total = library[i].total + library[number].copies;

                        cout << library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        cout << endl;
                    }
                    else
                    {
                        no++;
                    }
                }

                if (no == number)
                {
                    cout << "Book(s) added." << endl;
                    cout << endl;

                    if (library[number].copies > 0)
                    {
                        library[number].availability = available;
                    }
                    else
                    {
                        library[number].availability = unavailable;
                    }

                    number++;
                }

                break;

            case 2:

                no = 0;

                cout << "Enter title to search: ";
                cin.ignore();
                getline(cin, titlesearch);
                cout << endl;

                for (int i = 0; i < 100; i++)
                {
                    if (titlesearch == library[i].title)
                    {
                        cout << "Book(s) found" << endl;
                        cout << endl;
                        cout << library[i].title << endl;
                        cout << "By " << library[i].author << endl;
                        cout << "ISBN: " << library[i].isbn << endl;
                        if (library[i].availability == available)
                        {
                            cout << "Available, " << library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        }
                        else
                        {
                            cout << "Unavailable, " << library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        }
                    }
                    else
                    {
                        no++;
                    }
                }

                if (no == 100)
                {
                    cout << "Book not found." << endl;
                }

                cout << endl;

                break;

            case 3:

                no = 0;

                cout << "Enter author to search: ";
                cin.ignore();
                getline(cin, authorsearch);
                cout << endl;

                for (int i = 0; i < 100; i++)
                {
                    if (authorsearch == library[i].author)
                    {
                        cout << "Book(s) found" << endl;
                        cout << endl;
                        cout << library[i].title << endl;
                        cout << "By " << library[i].author << endl;
                        cout << "ISBN: " << library[i].isbn << endl;
                        if (library[i].availability == available)
                        {
                            cout << "Available, " << library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        }
                        else
                        {
                            cout << "Unavailable, " << library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        }
                    }
                    else
                    {
                        no++;
                    }
                }

                if (no == 100)
                {
                    cout << "Book not found." << endl;
                }

                cout << endl;

                break;

            case 4:

                no = 0;

                cout << "Enter ISBN to search: ";
                cin.ignore();
                getline(cin, isbnsearch);
                cout << endl;

                for (int i = 0; i < 100; i++)
                {
                    if (isbnsearch == library[i].isbn)
                    {
                        cout << "Book(s) found" << endl;
                        cout << endl;
                        cout << library[i].title << endl;
                        cout << "By " << library[i].author << endl;
                        cout << "ISBN: " << library[i].isbn << endl;
                        if (library[i].availability == available)
                        {
                            cout << "Available, " << library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        }
                        else
                        {
                            cout << "Unavailable, " << library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        }
                    }
                    else
                    {
                        no++;
                    }
                }

                if (no == 100)
                {
                    cout << "Book not found." << endl;
                }

                cout << endl;

                break;

            case 5:

                no = 0;

                cout << "Check out which book?" << endl;
                cout << endl;

                cout << "Enter title: ";
                cin.ignore();
                getline(cin, titleout);

                cout << "Enter author: ";
                getline(cin, authorout);

                cout << "Enter ISBN: ";
                getline(cin, isbnout);
                cout << endl;

                for (int i = number - 1; i >= 0; i--)
                {
                    if (titleout == library[i].title && authorout == library[i].author && isbnout == library[i].isbn)
                    {
                        if (library[i].availability == unavailable)
                        {
                            cout << "Book not checked out." << endl;
                            cout << endl;
                            cout << library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        }
                        else
                        {
                            library[i].copies--;

                            cout << "Book checked out." << endl;
                            cout << library[i].copies << " out of " << library[i].total << " copies remaining" << endl;
                            cout << endl;

                            if (library[i].copies == 0)
                            {
                                library[i].availability = unavailable;
                            }
                        }
                    }
                    else
                    {
                        no++;
                    }
                }

                if (no == number)
                {
                    cout << "Book not found." << endl;
                    cout << endl;
                }

                break;

            case 6:

                no = 0;

                cout << "Check in which book?" << endl;
                cout << endl;

                cout << "Enter title: ";
                cin.ignore();
                getline(cin, titlein);

                cout << "Enter author: ";
                getline(cin, authorin);

                cout << "Enter ISBN: ";
                getline(cin, isbnin);
                cout << endl;

                for (int i = number - 1; i >= 0; i--)
                {
                    if (titlein == library[i].title && authorin == library[i].author && isbnin == library[i].isbn)
                    {
                        if (library[i].copies == library[i].total)
                        {
                            cout << "Book not checked in." << endl;
                            cout << endl;
                            cout << library[i].copies << " out of " << library[i].total << " copies already available" << endl;
                        }
                        else
                        {
                            library[i].copies++;

                            cout << "Book checked in." << endl;
                            cout << library[i].copies << " out of " << library[i].total << " copies now available" << endl;
                            cout << endl;

                            if (library[i].copies > 0)
                            {
                                library[i].availability = available;
                            }
                        }
                    }
                    else
                    {
                        no++;
                    }
                }

                if (no == number)
                {
                    cout << "Book not in system." << endl;
                    cout << endl;
                }


                break;

            case 7:

                no = 0;

                cout << "Available books" << endl;
                cout << endl;

                for (int i = number - 1; i >= 0; i--)
                {
                    if (library[i].availability == available)
                    {
                        cout << library[i].title << endl;
                        cout << "By " << library[i].author << endl;
                        cout << "ISBN: " << library[i].isbn << endl;
                        cout <<library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        cout << endl;
                    }
                    else
                    {
                            no++;
                    }
                }

                if (no == number)
                {
                    cout << "None" << endl;
                    cout << endl;
                }

                no = 0;

                cout << "Unavailable books" << endl;
                cout << endl;

                for (int i = number - 1; i >= 0; i--)
                {
                    if (library[i].availability == unavailable)
                    {
                        cout << library[i].title << endl;
                        cout << "By " << library[i].author << endl;
                        cout << "ISBN: " << library[i].isbn << endl;
                        cout <<library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        cout << endl;
                    }
                    else
                    {
                            no++;
                    }
                }

                if (no == number)
                {
                    cout << "None" << endl;
                    cout << endl;
                }

                break;

            case 8:

                cout << "Books sorted by title:" << endl;
                cout << endl;

                for (int i = 0; i < number - 1; i++)
                {
                    for (int j = 0; j < number - 1; j++)
                    {
                        if (library[j + 1].title[0] < library[j].title[0])
                        {
                            string tempstring;
                            int tempint;
                            status tempstatus;

                            tempstring = library[j].title;
                            library[j].title = library[j + 1].title;
                            library[j + 1].title = tempstring;

                            tempstring = library[j].author;
                            library[j].author = library[j + 1].author;
                            library[j + 1].author = tempstring;

                            tempstring = library[j].isbn;
                            library[j].isbn = library[j + 1].isbn;
                            library[j + 1].isbn = tempstring;

                            tempint = library[j].copies;
                            library[j].copies = library[j + 1].copies;
                            library[j + 1].copies = tempint;

                            tempint = library[j].total;
                            library[j].total = library[j + 1].total;
                            library[j + 1].total = tempint;

                            tempstatus = library[j].availability;
                            library[j].availability = library[j + 1].availability;
                            library[j + 1].availability = tempstatus;

                        }
                    }
                }

                if (number == 0)
                {
                    cout << "No books." << endl;
                    cout << endl;
                }
                else
                {
                    for (int i = 0; i < number; i++)
                    {
                        cout << library[i].title << endl;
                        cout << "By " << library[i].author << endl;
                        cout << "ISBN: " << library[i].isbn << endl;
                        cout << library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        cout << endl;
                    }
                }

                break;

            case 9:

                cout << "Books sorted by author:" << endl;
                cout << endl;

                for (int i = 0; i < number - 1; i++)
                {
                    for (int j = 0; j < number - 1; j++)
                    {
                        if (library[j + 1].author[0] < library[j].author[0])
                        {
                            string tempstring;
                            int tempint;
                            status tempstatus;

                            tempstring = library[j].title;
                            library[j].title = library[j + 1].title;
                            library[j + 1].title = tempstring;

                            tempstring = library[j].author;
                            library[j].author = library[j + 1].author;
                            library[j + 1].author = tempstring;

                            tempstring = library[j].isbn;
                            library[j].isbn = library[j + 1].isbn;
                            library[j + 1].isbn = tempstring;

                            tempint = library[j].copies;
                            library[j].copies = library[j + 1].copies;
                            library[j + 1].copies = tempint;

                            tempint = library[j].total;
                            library[j].total = library[j + 1].total;
                            library[j + 1].total = tempint;

                            tempstatus = library[j].availability;
                            library[j].availability = library[j + 1].availability;
                            library[j + 1].availability = tempstatus;
                        }
                    }
                }

                if (number == 0)
                {
                    cout << "No books." << endl;
                    cout << endl;
                }
                else
                {
                    for (int i = 0; i < number; i++)
                    {
                        cout << library[i].title << endl;
                        cout << "By " << library[i].author << endl;
                        cout << "ISBN: " << library[i].isbn << endl;
                        cout << library[i].copies << " out of " << library[i].total << " copies available" << endl;
                        cout << endl;
                    }
                }

                break;

            case 0:
                break;
            default:
                cout << "Invalid selection" << endl;
                cout << endl;
                break;
        }
    }

        return 0;
}
