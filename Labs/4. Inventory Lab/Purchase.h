#ifndef PURCHASE_H
#define PURCHASE_H

namespace Holiday_Store {
	class Purchase {

	private:
		int purchaseID;
		int purchaseDate;
		Holiday_Store::Product purchaseProduct;
		Holiday_Store::PurchaseDetail purchaseDetailSet;
		int purchaseReceipt;
		int purchaseSupplier;
		int purchaseTotal;
		int purchaseTax;

	public:
		void getPurchase();
	};
}

#endif
