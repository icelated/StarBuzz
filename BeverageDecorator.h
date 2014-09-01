#ifndef	_BEVERAGE_DECORATOR_
#define _BEVERAGE_DECORATOR_

#include "Starbuzz.cpp"

namespace CoffeeHouse {
namespace Decorator {

class BeverageDecorator : public Beverage {

	private: BeverageDecorator( const BeverageDecorator& ); // Disable copy constructor
	private: void operator=( const BeverageDecorator& ); // Disable assignment operator

	protected: BeverageDecorator() {
	}
	public: virtual ~BeverageDecorator() = 0 {
	};
	public: virtual std::string getDescription() const = 0;
};

} // namespace Observer
} // namespace CoffeeHouse

#endif
