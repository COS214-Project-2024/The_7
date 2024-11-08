#ifndef BOWLING_H
#define BOWLING_H

#include "EntertainmentBuilding.h"

/**
 * @class Bowling
 * @brief Represents a bowling alley in the entertainment district
 *
 * The Bowling class is a specialized type of EntertainmentBuilding that generates
 * revenue and has associated consumption costs.
 */
class Bowling : public EntertainmentBuilding
{
private:
    int revenue; /**< The revenue generated by the bowling alley */

public:
    Bowling(int revenue, int consumption, int x, int y) : EntertainmentBuilding("Bowling", x, y) {}
};
#endif