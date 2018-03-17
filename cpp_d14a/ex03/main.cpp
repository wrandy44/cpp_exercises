
#include <iostream>
#include "BaseComponent.hpp"
#include "SimplePtr.hpp"
int main()
{
    try {
	// Use your auto delete here
	SimplePtr regulator(new AtmosphereRegulator);
	SimplePtr reclaimer(new WaterReclaimer);
	// The code above shouldn’t be changed.
	throw std::runtime_error("An error occured here!");
	}
    catch (std::exception const& e) {
      std::cout << e.what() << std::endl;
    }
    return 0;
}
