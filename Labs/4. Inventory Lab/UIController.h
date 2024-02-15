#ifndef UICONTROLLER_H
#define UICONTROLLER_H

namespace Controllers {
	class UIController {


	public:
		void queryProductTypes();

		void addProduct(int newProdName, int newProdDesc, int newProdIngred, int newProdInstruct, int newProdType = prodTypeID);

		void save(int newProd);

		void querySuppliers();

		void addPurchase(int supplierID, int purchaseDate, int purchaseReceipt);

		void queryProducts();

		void chooseProduct(int prodID);

		void addDetails(int locationID, int purchaseDetailPrice, int purchaseDetailQty);
	};
}

#endif
