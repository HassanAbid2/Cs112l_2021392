#include <iostream>
using namespace std;

void menu();

static int off = 0;

class Officer {

private:
    int ID;
    string name, rank;

public:

    void get() {

        cout << "Enter ID of officer: ";
        cin >> ID;
        cout << "Enter name of officer: ";
        cin >> name;
        cout << "Enter rank of officer: ";
        cin >> rank;

        off++;
    }

    void pal() {

        int n, digit, rev = 0;

        n = ID;

        do
        {
            digit = ID % 10;
            rev = (rev * 10) + digit;
            ID = ID / 10;
        } while (ID != 0);

        if (n == rev)
            cout << " \nThe officer is not allowed to enter the restricted area!";
        else
            cout << " \nThe officer is allowed to enter the restricted area!";

        menu();

    }

};

void menu()
{
    Officer o;

    int x;

    cout << "\n\n    |Main Menu|   "
        << "\n\n1. Enter ID of officer."
        << "\n2. Get total number of officers."
        << "\n3. Exit."
        << "\n\n Enter desired option: ";

    cin >> x;

    switch (x) {

    case 1:

        o.get();
        o.pal();

        break;


    case 2:

        cout << "Total number of officers is: " << off;

        break;


    case 3:

        break;

    default:
        cout << "Enter correct option im angry!";
    }
}

int main()
{
    menu();

    return 0;
}
