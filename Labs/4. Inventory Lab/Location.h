#ifndef LOCATION_H
#define LOCATION_H
#include <iostream>
namespace Holiday_Store {
	class Location {

	private:
		int locationID;
		std::string  locationDesc;
		Holiday_Store::ProductInventory prodInvenSet;

	public:
		void getLocations();
	};
}

#endif
