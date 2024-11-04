#ifndef BUILDING_H
#define BUILDING_H

#include "BuildingState.h"

/**
 * @brief Abstract base class representing a building in the simulation
 *
 * The Building class implements the State pattern, where different states
 * (Placed, UnderConstruction, Complete, Demolished) affect the building's behavior.
 * Each building has a location, space capacity, and various consumption metrics.
 */
class Building
{
private:
    /** @brief Current state of the building */
    BuildingState *state;
    
    /** @brief X-coordinate of building location */
    int LOCATION_X;
    
    /** @brief Y-coordinate of building location */
    int LOCATION_Y;
    
    /** @brief Maximum space capacity of the building */
    int SPACE;
    
    /** @brief Current occupancy level */
    int occupancy;
    
    /** @brief Base power consumption rate */
    int POWER_CONSUMPTION;
    
    /** @brief Base water consumption rate */
    int WATER_CONSUMPTION;
    
    /** @brief Initial monetary cost to build */
    int BUILD_COST_MONEY;
    
    /** @brief Initial resource cost to build */
    int BUILD_COST_RESOURCES;

public:
    /**
     * @brief Get the current state of the building
     * @return Pointer to the current BuildingState
     */
    BuildingState *getState();

    /**
     * @brief Set the building to a new state
     * @param state Pointer to the new BuildingState
     */
    void setState(BuildingState *state);

    /**
     * @brief Transition to the next state in the building lifecycle
     * @return Pointer to the new BuildingState
     */
    BuildingState* getAndSetNextState();

    /**
     * @brief Get the X coordinate of the building
     * @return X coordinate value
     */
    int getXCoordinate();

    /**
     * @brief Get the Y coordinate of the building
     * @return Y coordinate value
     */
    int getYCoordinate();

    /**
     * @brief Get the total space capacity of the building
     * @return Maximum space capacity
     */
    int getSpace();

    /**
     * @brief Get current occupancy level
     * @return Current number of occupants
     */
    int getOccupancy();

    /**
     * @brief Update the building's occupancy
     * @param i Change in occupancy (positive or negative)
     * @return true if update successful, false if would exceed limits
     */
    virtual bool updateOccupancy(int i);

    /**
     * @brief Get remaining available space
     * @return Amount of unoccupied space
     */
    int getAvailableSpace();

    /**
     * @brief Get current power consumption
     * @return Power consumption units based on current state
     */
    int getPowerConsumption();

    /**
     * @brief Get current water consumption
     * @return Water consumption units based on current state
     */
    int getWaterConsumption();

    /**
     * @brief Get monetary cost consumption
     * @return Cost in monetary units based on current state
     */
    virtual int getCostConsumption() = 0;

    /**
     * @brief Get resource consumption
     * @return Resource units consumed based on current state
     */
    virtual int getResourceConsumption();

    /**
     * @brief Get revenue generated by the building
     * @return Revenue in monetary units
     */
    virtual int getRevenue() = 0;

    /**
     * @brief Get sewage production rate
     * @return Sewage units produced
     */
    virtual int getSewageProduction() = 0;

    /**
     * @brief Get waste production rate
     * @return Waste units produced
     */
    virtual int getWasteProduction() = 0;
};

#endif