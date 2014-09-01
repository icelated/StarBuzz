#ifndef	_CELLPHONE_
#define _CELLPHONE_
#include <iostream>
#include "Beverage.h"
#include "Bagel.h"

using namespace std;

namespace CoffeeHouse {
namespace Observers {

	class CellPhone: public Observer {
	public: 

		std::string _number; // store number
		double total;       // add the order up

        Beverage* _beverage; // beverage object order
         Bagel* _bagel;      // bagel object order

		CellPhone(std::string number,Beverage* bev, Bagel* bagel ){ // constructor
            _number = number; // store number to use for display
			_beverage = bev; // store beverage 
			_bagel = bagel;
		}

		void update() // update
     {
		
		 std::cout << endl;
		 std::cout << "             Order Details:          " << endl;
		 std::cout << endl;
		 std::cout << "--- Buzzzzz - CellPhone #" << _number << " your order is ready ---" << endl;
		 std::cout << _beverage->getDescription() << endl; 
		 total = _beverage->cost();

		 if(_bagel == NULL)  // if the order dont have a bagel to it do nothing
		 {
		 }
		 else{  // if the order has a bagel than add the bagel price and print it 
			 total += _bagel->cost();
			 std::cout << endl;
			 std::cout << _bagel->getDescription() << endl;
		 }
		 // print the order
		 std::cout << "--- Your total is $ " << total << "  Please pay the cashier"  << " ---" << endl;
		 std::cout << endl;
	}
	private:
};

} // namespace Observer
} //

#endif
