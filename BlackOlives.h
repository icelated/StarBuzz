#ifndef	_BLACKOLIVES_
#define _BLACKOLIVES_

#include "Veggies.h"

namespace CoffeeHouse2{
namespace Factory {
namespace Abstract {

class BlackOlives : public Veggies {

	public: std::string toString() const {
		return ( "Black Olives" );
	}
};

} // namespace Abstract
} // namespace Factory
} // namespace CoffeeHouse

#endif
