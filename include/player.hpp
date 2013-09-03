#include "worker.hpp"
//#include "Basic Resource.hpp"
#include "special_product.hpp"

namespace Player{

class Player {
public:
	Player();
	// use default destructor
	void setInfo();
	void setName();

	void getName();
private:
	char *playerName;

};


}