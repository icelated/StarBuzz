#ifndef	_THE_ORDER_
#define _THE_ORDER_
#pragma once;
#include "Beverage.h"
#include <list>
#include <iostream>

using namespace std;


using namespace CoffeeHouse::Decorator;

namespace CoffeeHouse {
namespace Observers {
	
//class Beverage;

	class TheOrder : public Subject {


	 Beverage* _beverage;


     private: 
		 mutable std::list< Observer* > _observers;
	     mutable std::list< Beverage* > _orders;
		 friend ostream& operator<< (ostream& out, const TheOrder& data);

		 static TheOrder* _uniqueInstance;

	    ~TheOrder() {
		_uniqueInstance;

	   }

		// not using
public: Beverage* getBeverage()
		{
 return _beverage;
		}

// not using
	public: void ProcessOrder(Beverage* bev)
			{
				
				_orders.push_front(bev);
				
				_beverage = bev;
	
		}
    public: 
                   // singleton //////////////////////////////////////
	static TheOrder* getInstance() {
		if( _uniqueInstance == 0 ) {
			std::cout << "Creating unique instance of The order class" << std::endl;
			_uniqueInstance = new TheOrder();
		}
		std::cout << "Returning instance of theorder class"<< std::endl;
		return _uniqueInstance;
	   }

	void registerObserver( Observer* o ) { assert( o );
		_observers.push_back(o);
	}
	
	 void removeObserver( Observer* o ) { assert( o );
		_observers.remove(o);
	}
			
	void notifyObservers()  {
		
			
			for( std::list< Observer* >::iterator iterator = _observers.begin(); _observers.end() != iterator; ++iterator ) {
        Observer* observer = *iterator;
        observer->update();

			
			
			
		}
	}

	
};
//}
} // namespace Observer
} // namespace CoffeeHouse

#endif
