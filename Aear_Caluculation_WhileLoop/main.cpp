#include <iostream>

using namespace std;

int main()
{
    double height{}, width{};
    char selection{};
    do {
    cout << "enter the width and height separated by a space ";
    cin >> height >> width;
    double area {height * width};
    cout << "The area is " << area << "\nDo you want to calculate another area? (Y/N) ";
    cin >> selection;
    }while (selection == 'Y' || selection == 'y');
    cout << "Thanks" << endl;
    return 0;
}
