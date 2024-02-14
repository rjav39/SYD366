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
	PaymentType(std::string& paymentDesc);
	void createPaymentType(int &paymentTypeID, std::string &paymentTypeDesc);
};

#endif
