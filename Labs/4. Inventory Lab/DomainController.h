#ifndef DOMAINCONTROLLER_H
#define DOMAINCONTROLLER_H

namespace Controllers {
	class DomainController {


	public:
		void queryProductTypes();

		void addProduct(int newProdName, int newProdDesc, int newProdIngred, int newProdInstruct, int newProdType = prodTypeID);

		void generateProdID();

		void get(int ProductType);

		void save(int newProd);

		void querySuppliers();

		void addPurchase(int supplierID, int purchaseDate, int purchaseReceipt);

		void queryProducts();

		void chooseProduct(int prodID);

		void addDetails(int locationID, int purchaseDetailPrice, int purchaseDetailQty);

		void generatePurchaseDetailID();

		void calculateExtendedPrice();

		void calculateTaxes();

		void calculateTotal();
	};
}

#endif
