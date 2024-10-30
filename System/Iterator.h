#ifndef CONCRETEITERATOR_H
#define CONCRETEITERATOR_H

#include <random>
#include "Building.h"
#include "Composite.h"

class Iterator{
	protected:
		Composite* composite;
		int currentX;
		int currentY;

	public:
		/**
		 * @brief Construct a new Concrete Iterator object
		 * 
		 */
		Iterator(Composite* composite);
		/**
		 * @brief Adds a building to the list
		 * 
		 * @param building
		 * @param x x-coordinate
		 * @param y y-coordinate
		 * @return true 
		 * @return false 
		 */
		bool add(Building* building, int x, int y);

		/**
		 * @brief Returns the current component
		 * 
		 * @return Component* 
		 */
		Building* current();

		/**
		 * @brief Returns the first component in the list
		 * 
		 * @return Component* 
		 */
		Building* first();

		/**
		 * @brief Gets the Component at the specific location
		 * 
		 * @param locationX 
		 * @param locationY 
		 * @return Component* 
		 */
		Building* get(int locationX, int locationY);

		/**
		 * @brief Checks if there is a component after the current one
		 * 
		 * @return true 
		 * @return false 
		 */
		bool hasNext();

		/**
		 * @brief Checks if it is a leaf (singular object), if false it means it is a Composite object
		 * 
		 * @return true 
		 * @return false 
		 */
		bool isLeaf();

		/**
		 * @brief Returns the length of the list
		 * 
		 * @return int 
		 */
		int length();

		/**
		 * @brief Returns the next component
		 * 
		 * @return Component* 
		 */
		Building* next();

		/**
		 * @brief Returns the previous component
		 * 
		 * @return Component* 
		 */
		Building* previous();

		/**
		 * @brief Removes the object at that specific point
		 * 
		 * @param locationX 
		 * @param locationY 
		 * @return true 
		 * @return false 
		 */
		bool remove(int locationX, int locationY);

		/**
		 * @brief Returns if the slot is open to be used at the location
		 * 
		 * @param locationX 
		 * @param locationY 
		 * @return true 
		 * @return false 
		 */
		bool slotAvailable(int locationX, int locationY);

		/**
		 * @brief Get the And Set Next State
		 * 
		 * @return BuildingState* 
		 */
		BuildingState* getAndSetNextState();

		/**
		 * @brief Get a random house object
		 * 
		 * @return Building* 
		 */
		Building* getHouse();

		/**
		 * @brief Get the random job
		 * 
		 * @return Building* 
		 */
		Building* getJob();
};

#endif //CONCRETEITERATOR_H