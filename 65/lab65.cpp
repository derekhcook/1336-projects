// Derek Cook
// CS 1337
// Lab 65

#include <lab65.h>
#include <iostream>

using namespace std;

// Function addSecond - adds one second to the time represented by
// *this
void Time::addSecond()
{
    setTime(getHour(), getMinute(), getSecond() + 1);

    if (getSecond() == 0)
    {
        setTime(getHour(), getMinute() + 1, 0);

        if (getMinute() == 0)
        {
            setTime(getHour() + 1, 0, 0);
        }
    }
}

// Function isEqualTo - returns true if the time represented by
// *this is equal to the time represented by secondTime
bool Time::isEqualTo(const Time& secondTime) const
{

    if (timeToSeconds() == secondTime.timeToSeconds())
        return true;
    else
        return false;

}

// Function isEarlierThan - returns true if the time represented by
// *this is earlier than the time represented by secondTime

bool Time::isEarlierThan(const Time& secondTime) const
{
    
    if (timeToSeconds() < secondTime.timeToSeconds())
        return true;
    else
        return false;
}