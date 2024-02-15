#ifndef PRODUCT_H
#define PRODUCT_H

namespace Holiday_Store {
	class Product {

	private:
		int prodID;
		Holiday_Store::ProductType prodType;
		int prodStatus;
		int prodtName;
		int prodInstruct;
		int prodDesc;
		int prodIngred;

	public:
		void createProduct(int newProdID, int newProdName, int newProdDesc, int newProdIngred, int newProdInstruct, int newProdType, int prodStatus = "Active");

		void generateProdID();

		void getProduct();

		void getProducts();

		void selectProduct(int prodID);

		void getProduct(int prodID);
	};
}

#endif
