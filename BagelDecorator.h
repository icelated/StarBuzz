#ifndef	_BAGEL_DECORATOR_
#define _BAGEL_DECORATOR_

#include "Starbuzz2.h"
#include "Myhummus.h"

namespace CoffeeHouse {
namespace Decorator {

class BagelDecorator : public Bagel {


	protected: BagelDecorator() {
	}
	public: virtual ~BagelDecorator() = 0 {
	};
	public: virtual std::string getDescription() const = 0;
};

} // namespace Observer
} // namespace CoffeeHouse

#endif
