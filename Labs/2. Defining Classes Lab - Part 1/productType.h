#include <iostream>
#include <cstring>

class ProductType
{
    std::string productTypeName;
    std::string productTypeDesc;
    public:
    std::string getProductTypeName();
    void setProductTypeName(std::string& productTypeName);
    std::string getProductTypeDesc();
    void setProductTypeDesc(std::string setProductTypeDesc);
};