 #include <iostream>
using namespace std;

int main ()
{
    string id;
    string Pass;
    int loginattemp = 0;

    while (loginattemp < 3)
    {
        cout << "Enter Id: ";
        cin >> id;
        cout << "Enter Password: ";
        cin >> Pass;

        if (id == "khush" && Pass == "patel")
        {
            cout << "Login Successfull\n" << endl;
            cout << "           o   o     "<< endl;
            cout << "             J      "<< endl;
            cout << "            ---    "<< endl;
            break;
        }
        else
        {
            cout << "Please try again.\n" << endl;
            loginattemp++;
        }
    }
    if (loginattemp == 3)
    {
            cout << "Too many login attemps!" << endl;
            cout << "          O     O    "<< endl;
            cout << "          ;  A  ;    "<< endl;
            cout << "            ---      "<< endl;
            return 0;
    }
}
