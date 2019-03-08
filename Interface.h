#ifndef Interface_Header
#define Interface_Header

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

const char MAX(10);

class RNG{
    private:
        struct Data1
	{char f_name[MAX];
		char l_name[MAX];};
    int node_Counter;

    public:
    Data1 Value[MAX];
    void dMenu();
    void create_Rng();
    void great();
    void cLs();
};
#endif