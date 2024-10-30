#include "Composite.h"

Composite::Composite() : Component(){
	this->components = std::vector<std::vector<Building*>>();
}

Iterator* Composite::createIterator() {
	return new ConcreteIterator(this);
}

void Composite::add(Building* component, int x, int y) {
    if (x >= components.size()) {
        components.resize(x + 1); // Resize
    }
    if (y >= components[x].size()) {
        components[x].resize(y + 1); // Resize
    }
    components[x][y] = component;
}

void Composite::remove(Building* component, int x, int y) {
    if (x < components.size() && y < components[x].size()) {
        if (components[x][y] == component) {
            components[x][y] = nullptr;
        }
    }
}

Building* Composite::getComponent(int x, int y) {
    if (x < components.size() && y < components[x].size()) {
        return components[x][y];
    }
    return nullptr;
}

int Composite::getTotalPowerConsumption() {
	int totalPowerConsumption = 0;
	for (int i = 0; i < components.size(); i++) {
		for (int j = 0; j < components[i].size(); j++) {
			if (components[i][j] != nullptr) {
				totalPowerConsumption += components[i][j]->getPowerConsumption();
			}
		}
	}

	return totalPowerConsumption;
}

int Composite::getTotalWaterConsumption() {
	int totalWaterConsumption = 0;
	for (int i = 0; i < components.size(); i++) {
		for (int j = 0; j < components[i].size(); j++) {
			if (components[i][j] != nullptr) {
				totalWaterConsumption += components[i][j]->getWaterConsumption();
			}
		}
	}
	return totalWaterConsumption;
}

int Composite::getTotalCostConsumption() {
	int totalCostConsumption = 0;
	for (int i = 0; i < components.size(); i++) {
		for (int j = 0; j < components[i].size(); j++) {
			if (components[i][j] != nullptr) {
				totalCostConsumption += components[i][j]->getCostConsumption();
			}
		}
	}
	return totalCostConsumption;
}

int Composite::getTotalSewageConsumption() {
	// HOW DOES A BUILDING USE SEWAGE CONSUMPTION, MAYBE PERSISTANT 0, UNLESS SPECIAL BUILDING?
	/*int totalSewageConsumption = 0;
	for (int i = 0; i < components.size(); i++) {
		for (int j = 0; j < components[i].size(); j++) {
			if (components[i][j] != nullptr) {
				totalSewageConsumption += components[i][j]->getSewageConsumption();
			}
		}
	}
	return totalSewageConsumption;*/
}

int Composite::getTotalWasteConsumption() {
	/*int totalWasteConsumption = 0;
	for (int i = 0; i < components.size(); i++) {
		for (int j = 0; j < components[i].size(); j++) {
			if (components[i][j] != nullptr) {
				totalWasteConsumption += components[i][j]->getWasteConsumption();
			}
		}
	}
	return totalWasteConsumption;*/
}

int Composite::getTotalPowerProduction() {
	/*int totalPowerProduction = 0;
	for (int i = 0; i < components.size(); i++) {
		for (int j = 0; j < components[i].size(); j++) {
			if (components[i][j] != nullptr) {
				totalPowerProduction += components[i][j]->getPowerProduction();
			}
		}
	}
	return totalPowerProduction;*/
}

int Composite::getTotalWaterProduction() {
	/*int totalWaterProduction = 0;
	for (int i = 0; i < components.size(); i++) {
		for (int j = 0; j < components[i].size(); j++) {
			if (components[i][j] != nullptr) {
				totalWaterProduction += components[i][j]->getWaterProduction();
			}
		}
	}
	return totalWaterProduction;*/
}

int Composite::getTotalRevenue() {
	int totalRevenue = 0;
	for (int i = 0; i < components.size(); i++) {
		for (int j = 0; j < components[i].size(); j++) {
			if (components[i][j] != nullptr) {
				totalRevenue += components[i][j]->getRevenue();
			}
		}
	}
	return totalRevenue;
}

int Composite::getTotalSewageProduction() {
	int totalSewageProduction = 0;
	for (int i = 0; i < components.size(); i++) {
		for (int j = 0; j < components[i].size(); j++) {
			if (components[i][j] != nullptr) {
				totalSewageProduction += components[i][j]->getSewageProduction();
			}
		}
	}
	return totalSewageProduction;
}

int Composite::getTotalWasteProduction() {
	int totalWasteProduction = 0;
	for (int i = 0; i < components.size(); i++) {
		for (int j = 0; j < components[i].size(); j++) {
			if (components[i][j] != nullptr) {
				totalWasteProduction += components[i][j]->getWasteProduction();
			}
		}
	}
	return totalWasteProduction;
}

BuildingState* Composite::getAndSetNextState() {
	// TODO - implement Composite::getAndSetNextState
	throw "Not yet implemented";
}

int Composite::lengthX() const{
	return components.size();
}

int Composite::lengthY() const{
	return components[0].size();
}