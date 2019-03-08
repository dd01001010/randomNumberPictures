
#include "Interface.h"

int main() {
	
	RNG obj;
	char usr_choice = 'Q' || 'q';

	//beginning of Do-While statement 
	do {
		obj.great();

		cout << "Do you want to continue ?\n " << endl; cout << "Enter (Y)es or (Q)uit : ";
		cin >> usr_choice;
		cin.ignore(); //add in class
	} // close do
	while ((usr_choice == 'Y') || (usr_choice == 'y'));
	return 0;
}// end main

void RNG::dMenu(){char choice = 0;
	
    cout << "(C)reate Random Number." << endl;
	cout << "(Q)uit program by hitting the 'Q' key." << endl;
	cin >> choice;
	cin.ignore();

	switch (choice) { // switch statement controls user input
	case 'c':
	case 'C':
            great(); //great user
 			dMenu();// returns to top Display Menu
		 break;
	default:
		break;
	}//END SWITCH
}//END TOP MENU

void RNG::great(){cLs(); char nPut[MAX];
            int i = 0;
            cout << " Hello, what is your name " << endl;
            cin.getline(Value[i].f_name, MAX);
            cout << " Thank you " << Value[i].f_name << ", we will start create Random numbers. " << endl;
            system("pause");
            i++;
            create_Rng();
                        //cin.ignore(); //add in class
}

int RNG::create_Rng(){cLs(); //system ("clear");
     cout << " Access rng function correctly " << endl;
}

void RNG::cLs()
{
#ifdef WINDOWS
    std::system("cls");
#else
    // Assume POSIX
    std::system ("clear");
#endif
}