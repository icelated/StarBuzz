#ifndef	_BEVERAGE_
#define _BEVERAGE_

//#include <iostream>

#include "Starbuzz.h"


namespace CoffeeHouse {
	namespace Decorator {
		//namespace Observer {
		//using namespace std;

		class Beverage {

		protected: std::string _description;

        private: static Beverage* _uniqueInstance;

		protected: Beverage() : 
			_description( "Unknown Beverage" ) {
			}
		public: virtual ~Beverage() = 0 {
				}
		public: virtual std::string getDescription() const {
					return _description;
				}
		public: virtual double cost() const = 0;
		};

	} // namespace Observer
} // namespace CoffeeHouse
//}
#endif
