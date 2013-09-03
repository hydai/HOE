/****************************************************************************
 * Implement of the Special Product.
 * Main contributier: hydai
 ****************************************************************************/

#include "../include/special_product.hpp"
#include <cstdio>
#include <cstring>

/* constructor */
SpecialProduct::SpecialProduct(enum SpecialProductType _type) {
    this->num_holdings = 0;
    type_of_SP = _type;
}

/* distructor */
SpecialProduct::~SpecialProduct(void) {
    this->num_holdings = 0;
}

const char* SpecialProduct::getTypeName(void) {
    switch (type_of_SP) {
    case 0:
        return "QUARRY";
    case 1:
        return "IRON";
    case 2:
        return "CRYSTAL";
    case 3:
        return "SULFUR";
    default:
        return "ERROR";
    }
    return "ERROR";
}
int SpecialProduct::getHoldingsNumber(void) {
	return this->num_holdings;
}
