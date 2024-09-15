#include <iostream>
using namespace std;

int main()
{
    char citizen, degree;
    int experience;

    cout << "Are you a citizen?(y/n) "; 
    cin >> citizen;

    cout << "Do you have a bachelor degree?(y/n) ";
    cin >> degree;

    cout << "How many years of experinece do you have? ";
    cin >> experience;

    if (citizen == 'y' && (degree == 'y' || experience >= 2)) {
        cout << "You are eligible " << endl;
    }
    else {
        cout << "You are not eligible " << endl;
    }


    return 0;
}

