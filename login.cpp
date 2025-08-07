#include <iostream>
#include <string>
using namespace std;

class LoginSystem 
{
private:
    string username;
    string password;

public:
    
    LoginSystem() 
    {
        username = "het";
        password = "1796";
    }

    void login() 
    {
        string inputUser, inputPass;

        cout << "Enter Username: ";
        cin >> inputUser;

        cout << "Enter Password: ";
        cin >> inputPass;

        
        if (inputUser == username)
        {
            if (inputPass == password) 
            {
                cout << "Login Successful!" << endl;
            } else 
            {
                cout << "Wrong Password!" << endl;
            }
        } 
        else 
        {
            cout << "Wrong Username!" << endl;
        }
    }
};


int main() {
    LoginSystem system;  
    system.login();      

    return 0;
}
