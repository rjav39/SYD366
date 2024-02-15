#ifndef PRODUCTTYPE_H
#define PRODUCTTYPE_H

namespace Holiday_Store {
	class ProductType {

	private:
		int prodTypeID;
		int prodTypeDesc;

	public:
		void getProductTypes();

		void getProductTypeID(int newProdTypeID);

		void selectProductType(int prodTypeID);

		void getProductType();

		void generateProdID();
	};
}

#endif
