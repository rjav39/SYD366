#include <iostream>
#include <cstring>

class PaymentType
{
    int paymentTypeID;
    std::string paymentTypeDesc;
    public:
    int getPaymentTypeID();
    void setPaymentTypeID(std::string& paymentTypeID);
    std::string getPaymentTypeDesc();
    void setPaymentTypeDesc(std::string& paymentTypeDesc);
};
