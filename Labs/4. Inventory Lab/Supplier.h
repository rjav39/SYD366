#ifndef SUPPLIER_H
#define SUPPLIER_H

namespace Holiday_Store {
	class Supplier {

	private:
		int supplierID;
		int supplierDesc;

	public:
		void getSuppliers();

		void selectPurchaseSupplier(int supplierID);

		void getSupplier();
	};
}

#endif
