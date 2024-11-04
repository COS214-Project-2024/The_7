#ifndef RESIDENTIALBUILDING_H
#define RESIDENTIALBUILDING_H

#include "Building.h"

class ResidentialBuilding : public Building
{
private:
	int sewageProduction;
	int wasteProduction;

public:
	ResidentialBuilding(std::string name, int x, int y) : Building(name, x, y) {}

	virtual int getCostConsumption() override;

	virtual int getRevenue() override;

	virtual int getSewageProduction() override;

	virtual int getWasteProduction() override;
};

#endif