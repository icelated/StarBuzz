#ifndef	_BAGEL_
#define _BAGEL_


#include "Starbuzz2.h"

namespace CoffeeHouse {
namespace Decorator {


class Bagel {

 	protected: std::string _description;

	protected: Bagel() : 
		_description( "Unknown Bagel" ) {
	}
	public: virtual ~Bagel() = 0 {
	}
	public: virtual std::string getDescription() const {
		return _description;
	}
	public: virtual double cost() const = 0;
};

} // namespace Observer
} // namespace CoffeeHouse

#endif
