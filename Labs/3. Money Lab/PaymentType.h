#ifndef PAYMENTTYPE_H
#define PAYMENTTYPE_H
#include <iostream>
#include <string>

class PaymentType {

private:
	int paymentTypeID;
	std::string paymentTypeDesc;

public:
	PaymentType getPaymentTypes();

	void createPaymentType(int &paymentTypeID, std::string &paymentTypeDesc);
};

#endif
