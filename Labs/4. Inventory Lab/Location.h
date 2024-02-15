#ifndef LOCATION_H
#define LOCATION_H

namespace Holiday_Store {
	class Location {

	private:
		int locationID;
		int locationDesc;
		Holiday_Store::ProductInventory prodInvenSet;

	public:
		void getLocations();
	};
}

#endif
