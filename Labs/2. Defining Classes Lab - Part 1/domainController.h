#include <iostream>
#include <cstring>
#include "paymentType.h"
#include "location.h"
#include "productType.h"

class DomainController
{
    public:
    void get(PaymentType& paymentType);
    PaymentType* getPaymentTypes();

    void get(Location& location);
    Location* getLocations();

    void get(ProductType& productType);
    ProductType* getproductTypes();

};
