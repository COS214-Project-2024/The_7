#ifndef BUILDINGMEDIATOR_H
#define BUILDINGMEDIATOR_H

#include "CityMediator.h"

#include "BuildingFactory.h"
	#include "ResidentialBuildingFactory.h"
	#include "CommercialBuildingFactory.h"
	#include "ServiceBuildingFactory.h"
	#include "EntertainmentBuildingFactory.h"
	#include "LandmarkBuildingFactory.h"
	#include "IndustrialBuildingFactory.h"
	#include "PlantBuildingFactory.h"

#include "Iterator.h"

// #include "Government.h"
	#include "ConcreteGovernment.h"

class BuildingMediator : public CityMediator {

private:
	BuildingFactory* factory;

	ConcreteGovernment* government;

public:
	BuildingMediator();

	std::string build(std::string& buildingName, int locationX, int locationY);

	std::string demolish(int locationX, int locationY);

	~BuildingMediator();
};

#endif
