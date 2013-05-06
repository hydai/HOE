/***********************************************************************
    Basic Resource.hpp

    Header file of Basic Resource
    This file contains 3 class : Gold class,Food class,Wood class .
    I finish the initial edition of the Gold class.
    2013.05.03 by Jesse

************************************************************************/

class Gold
{
public:
    /* Constructor */
    Gold(void);
    /* Destructor */
    ~Gold(void);
    /* Get the amount of Gold */
    double getGoldAmount(void);
    
    /******
     *Gain*
     ******/
    /* 1.Worker Productivity : Use the WorkerProductivity method in the Worker class. */
    friend class Worker;
    /* 2.Plunder Income : Use the PlunderIncome method in the WarSystem class. */
    friend class WarSystem;
    /* 3.Bonus Reword : Such as stake or explore.
                        Use the Stake method in the HeroArena class.
                        Use the Explore method in the ExploreInformation class. */
    friend class HeroArena;
    friend class ExploreInformation;
    /* 4.Market Trading : Use the SaleSource,PurchaseSource,RunBusiness methods in the Trading class. */
    friend class Trading;
    
    /******
     *Cost*
     ******/
    /* 1.Upgrade : Use the EraUpgrade.BuildingUpgrade,TechnologyUpgrade methods in the EraEvolution class. */
    friend class EraEvolution;
    /* 2.Maintenance Fee : Use the ArmyMaintenanceFee,ScientistMaintenanceFee,TrainingMaintenanceFee methods in the ? class. */
    friend class ? ;
    /* 3.Production : Use the produceArmy,construction,research,compound methods in the  class. */
    friend class ;



private:
    double GoldAmount;
};

class Food
{
public:
    /* Constructor */
    Food(void);
    /* Destructor */
    ~Food(void);
    /* Get the amount of Food */
    double getFoodAmount(void);
private:
    double FoodAmount;
};

class Wood
{
public:
    /* Constructor */
    Wood(void);
    /* Destructor */
    ~Wood(void);
    /* Get the amount of Wood */
    double getWoodAmount(void);
private:
    double WoodAmount;
};
