#include <iostream>
#include "neuronio.h"

using namespace std;

int main()
{
	Neuronio_List *first_layer = new Neuronio_List();
	first_layer.add (new Neuronio());

	return 0;
}