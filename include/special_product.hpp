/****************************************************************************
 * Header file of Special Product. This file defines the basic data.
 *
 * Main contributer: hydai
 ****************************************************************************/

#ifndef SPECIAL_PRODUCT_HPP
#define SPECIAL_PRODUCT_HPP 
#include "CostFunction.hpp"

enum SpecialProductType {
    QUARRY,
    IRON, 
    CRYSTAL, 
    SULFUR
};

class SpecialProduct {
    /* number of the player have */
    int num_holdings;
    /* use the cost functions mathod */
    friend class CostFunction;
    /* use the earn source mathod */
    friend class EarnSource;
    /* type of this specital product */
    enum SpecailProduct type_of_SP;

public:
    /* constructor */
    SpecailProduct(enum SpecialProductType );
    /* distructor */
    ~SpecailProduct(void);
    /* get total number of the holdings */
    int getHoldingsNumber(void);
    /* get type name */
    const char* getTypeName(void);
}
#endif
