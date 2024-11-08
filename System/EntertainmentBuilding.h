#ifndef ENTERTAINMENTBUILDING_H
#define ENTERTAINMENTBUILDING_H

#include "Building.h"
#include <cstdlib>

/**
 * @brief Class representing an entertainment building in the simulation
 *
 * EntertainmentBuilding extends the Building base class to implement
 * specific functionality for entertainment venues, including
 * revenue generation and resource consumption patterns.
 */
class EntertainmentBuilding : public Building
{
private:
	int revenue = rand() % 1000; ///< Revenue generated by the entertainment venue
	int wasteProduction = rand() % 20;

public:
	EntertainmentBuilding(std::string name, int x, int y) : Building(name, x, y) {}

	/**
	 * @brief Get cost consumption for entertainment building
	 * @return Cost consumption value
	 */
	virtual int getCostConsumption() override;

	/**
	 * @brief Get revenue generated by entertainment building
	 * @return Revenue value
	 */
	virtual int getRevenue() override {
		if (getState()->getStateName() == "Complete")
			return revenue;
		else
			return 0;
	}

	/**
	 * @brief Get waste production for entertainment building
	 * @return Waste production value
	 */
	virtual int getWasteProduction() override {
		if (getState()->getStateName() == "Complete")
			return wasteProduction;
		else
			return 0;
	}
};

#endif