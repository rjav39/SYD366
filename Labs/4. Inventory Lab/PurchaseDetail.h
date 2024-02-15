#ifndef PURCHASEDETAIL_H
#define PURCHASEDETAIL_H

namespace Holiday_Store {
	class PurchaseDetail {

	private:
		int purchaseDetailID;
		Location purchaseDetailLocation;
		int purchaseDetailQty;
		int purchaseDetailPrice;

	public:
		void selectPurchaseDetailLocation(int locationID);

		void create(int purchaseDetailID, int purchaseDetailLocation, int purchaseDetailQty, int purchaseDetailPrice);
	};
}

#endif
