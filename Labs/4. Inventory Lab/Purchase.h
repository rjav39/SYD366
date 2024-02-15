#ifndef PURCHASE_H
#define PURCHASE_H
#include <iostream>

namespace Holiday_Store {
	class Purchase {

	private:
		int purchaseID;
		int purchaseDate;
		Holiday_Store::Product purchaseProduct;
		Holiday_Store::PurchaseDetail purchaseDetailSet;
		std::string purchaseReceipt;
		std::string purchaseSupplier;
		double purchaseTotal;
		double purchaseTax;

	public:
		void getPurchase();
	};
}

#endif
