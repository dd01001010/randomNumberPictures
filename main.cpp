#include "Interface.h"

int main() {
	
	RNG obj;
	char usr_choice = 'Q' || 'q';
    obj.cLs();

	//beginning of Do-While statement 
	do {
		obj.great();

		cout << "Do you want to continue ?\n " << endl; cout << "Enter (Y)es or (Q)uit : ";
		cin >> usr_choice;
		cin.ignore(); //add in class
	} // close do
	while ((usr_choice == 'Y') || (usr_choice == 'y')); //check condition
	return 0;}// end main

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
            cout << " Hello, what is your name ";
            cin.getline(Value[i].f_name, MAX);
            cout << " " << endl;
            cout << " Thank you " << Value[i].f_name << ", we will start creating Random numbers now, " 
                                                    "Press Enter to continue "<< endl;
            cin.get(); 
            //system("pause");
            i++;
            create_Rng();
            cin.get();            //cin.ignore(); //add in class
}

void RNG::create_Rng(){cLs(); //system ("clear");
	string linkem = " ";
	//"https://previews.123rf.com/images/martialred/martialred1601/martialred160100213/51673234-number-1-one-fan-hand-glove-with-finger-raised-flat-vector-icon.jpg";
    
	srand(time(0));
     int rNg = (rand() % MAX) + 1;
     
	  cout << rNg << endl;
	  system("gnome-terminal -x sh -c 'firefox https://previews.123rf.com/images/martialred/martialred1601/martialred160100213/51673234-number-1-one-fan-hand-glove-with-finger-raised-flat-vector-icon.jpg'");
	  
	  }

	  //system()

void RNG::cLs()
{
#ifdef WINDOWS
    std::system("cls");
#else
    // Assume POSIX
    std::system ("clear");
#endif
}