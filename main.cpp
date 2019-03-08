#include <iostream>
#include <cstdlib>
using namespace std;

//#include "Interface.h"

int main(){cout << " Hello Jesus, Thank you! " << endl;

    char usrName = 0;
    char clicker = 0;
    do
    {
        //great the user, ask for name
        cout << " Hello what is your name ? " << endl;
        cin >> usrName;

        //use input to create new greating
        cout << " Hello " << usrName << " nice to meet you " << endl;
        //use input to start rng
        //reap and do until user is done
        clicker++;
    } while (clicker < 2);
    




    return 0;
}




