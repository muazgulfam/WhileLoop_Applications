#include <iostream>

using namespace std;

int main()
{
    char selection{};
    char selection1{};
    char selection2{};
    cout << "What type of Food do you want" << endl;
    do{
        cout << "1. Fast Food" << endl;
        cout << "2. Desi Food" << endl;
        cout << "Q. Quit! I don't want any of them" << endl;
        cout << "Enter your selection" << endl;
        cin >> selection;

        if(selection == '1'){
            cout << "What would you like to have in Fast food" << endl;
            cout << "1. Chicken Broast" << endl;
            cout << "2. BBQ" << endl;
            cin >> selection1;
            if (selection1 == '1'){
                cout << "Ok! Your chicken broast will be ready in 15 minutes" << endl;
            }
            else if (selection1 == '2'){
                cout << "OK! Your order is ready, you may line up in the queue to receive your order" << endl;
            }
            else {cout << "Selection not valid in Fast Food" << endl;}
        }
        else if(selection == '2'){
             cout << "What would you like to have in Desi food" << endl;
             cout << "1. Chicken karhai" << endl;
             cout << "2. Beef Biryani" << endl;
             cin >> selection2;
             if (selection2 == '1'){
                cout << "OK! sir Your Karhai will be ready in just 10 min" << endl;
             }
             else if (selection2 == '2') {
                cout << "OK!, you may lineup in the queue to get your biryani" << endl;
             }
             else {cout << "Selection not valid in desi Food" << endl;}
        }
        else if(selection == 'Q' || selection == 'q'){
            cout << "OK!, Goodbye" << endl;
        }
        else {cout << "Unknown option...try again" << endl;}


    }
    while (selection != 'q' && selection != 'Q');
    cout << "The program has been ended" << endl;
    return 0;
}
