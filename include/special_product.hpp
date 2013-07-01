/****************************************************************************
 * Header file of Special Product. This file defines the basic data.
 *
 * Main contributor: hydai
 ****************************************************************************/

#ifndef SPECIAL_PRODUCT_HPP
#define SPECIAL_PRODUCT_HPP 
//#include "CostFunction.hpp"

class SpecialProduct {

public:
	/* type define */
	enum SpecialProductType {
		QUARRY = 0,
		IRON = 1, 
		CRYSTAL = 2, 
		SULFUR = 3
	};

	/* constructor */
	SpecialProduct(enum SpecialProductType );
	/* destructor */
	~SpecialProduct(void);
	/* get total number of the holdings */
	int getHoldingsNumber(void);
	/* get type name */
	const char* getTypeName(void);

private:
	
	/* number of the player have */
	int num_holdings;
	/* use the cost functions mathod */
	//friend class CostFunction;
	/* use the earn source mathod */
	//friend class EarnSource;
	/* type of this specital product */
	SpecialProductType type_of_SP;
};

#endif
