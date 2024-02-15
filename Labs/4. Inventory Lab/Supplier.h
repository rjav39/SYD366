#ifndef SUPPLIER_H
#define SUPPLIER_H
#include<iostream>

namespace Holiday_Store {
	class Supplier {

	private:
		int supplierID;
		std::string supplierDesc;

	public:
		void getSuppliers();

		void selectPurchaseSupplier(int supplierID);

		void getSupplier();
	};
}

#endif
