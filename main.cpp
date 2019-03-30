#include "Interface.h"
// The MIT License (MIT)

// Copyright (c) 2019 David Johnson 

//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

/* code */

int main()
{
	RNG obj;
	char usr_choice = 'Q' || 'q';
	obj.cLs();

	//

	//beginning of Do-While Loop
	do
	{
		obj.great();

		cout << "Do you want to continue ?\n " << endl;
		cout << "Enter (Y)es or (Q)uit : ";
		cin >> usr_choice;
		cin.ignore();									//add in class
	}													// close do
	while ((usr_choice == 'Y') || (usr_choice == 'y')); //check condition
	return 0;
} // end main

void RNG::dMenu()
{
	char choice = 0;

	cout << "(C)reate Random Number." << endl;
	cout << "(Q)uit program by hitting the 'Q' key." << endl;
	cin >> choice;
	cin.ignore();

	switch (choice)
	{ // switch statement controls user input
	case 'c':
	case 'C':
		great(); //great user
		dMenu(); // returns to top Display Menu
		break;
	default:
		break;
	} //END SWITCH
} //END TOP MENU

void RNG::great()
{
	cLs();
	int i = 0;
	cout << " Hello, enter your name to continue...  ";
	cin.getline(Value[i].f_name, MAX);
	cLs();
	cout << " " << endl;
	cout << " Thank you " << Value[i].f_name << ", we will start creating Random numbers.. "
												"Press Enter to continue "
		 << endl;
	cin.get();

	i++;
	create_Rng();
	cin.get(); //hold terminal output.. 
}

void RNG::create_Rng()
{cLs();
	srand(time(0));
	int rNg = (rand() % MAX) + 1;

	cout << rNg << endl;
	rngCheck(rNg);
}

void RNG::cLs()
{
	#ifdef WINDOWS
		std::system("cls");
	#else
		// Assume POSIX
		std::system("clear");
	#endif
}

void RNG::rngCheck(int rng)
{
	switch (rng)
	{ // switch statement controls user input
	case 1:
		system("gnome-terminal -x sh -c 'firefox https://previews.123rf.com/images/martialred/martialred1601/martialred160100213/51673234-number-1-one-fan-hand-glove-with-finger-raised-flat-vector-icon.jpg'");
		//system(" ");
		break;

	case 2:
		system("gnome-terminal -x sh -c 'firefox http://pngimg.com/uploads/number2/Number%202%20PNG%20images%20free%20download_PNG14925.png'");
		break;

	case 3:
		system("gnome-terminal -x sh -c 'firefox https://www.johnbrownhardware.co.uk/ekmps/shops/513a47/images/classic-designs-3-black-number-3-digit-pack-5-54617-p.jpg'");
		break;

	case 4:
		system("gnome-terminal -x sh -c 'firefox https://vignette.wikia.nocookie.net/phobia/images/d/d0/4.jpg/revision/latest?cb=20161127143001'");
		break;

	case 5:
		system("gnome-terminal -x sh -c 'firefox https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSwg5LAww4T6MmRkQUwG3Cnsc6qTyOfCFkQ46tPvXv0gm5D90V1'");
		break;

	case 6:
		system("gnome-terminal -x sh -c 'firefox https://blognumbers.files.wordpress.com/2010/09/6.jpg");
		break;

	case 7:
		system("gnome-terminal -x sh -c 'firefox https://images-na.ssl-images-amazon.com/images/I/31muN9eG3yL._SX355_.jpg'");
		break;

	case 8:
		system("gnome-terminal -x sh -c 'firefox https://upload.wikimedia.org/wikipedia/commons/thumb/b/b1/Huit.svg/1024px-Huit.svg.png'");
		break;

	case 9:
		system("gnome-terminal -x sh -c 'firefox https://s12085.pcdn.co/wp-content/uploads/2013/10/B-9.jpg'");
		cout << " 9 " << endl;
		break;

	default:
		system("gnome-terminal -x sh -c 'firefox https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTwAocoBM-ddlESN75Yj7Ed8Sqf1f81HfR3EhrNDDoyzeZw79kU'");
		break;
	}
}