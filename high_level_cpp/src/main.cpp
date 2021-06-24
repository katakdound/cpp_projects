//============================================================================
// Name        : high_level_cpp.cpp
// Author      : Nitin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class cars
{
	float net_price;
	float rto_charges;
	float road_tax;

public:

	cars(float nnet_price = 100000, float rrto_charges=10000, float rroad_tax=450000)
	{
		net_price = nnet_price;
		rto_charges=rrto_charges;
		road_tax = rroad_tax;
	}


	void price()
	{
		cout<<"car price = "<<net_price+rto_charges+road_tax;
	}

	~cars()
	{
		cout<<endl;
	}

};

int main() {
	cars xylo;
	xylo.price();

	return 0;
}
