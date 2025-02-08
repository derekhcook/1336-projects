// Derek Cook
// CS 1337
// Lab 63

#include <lab63.h>
#include <iomanip>

using namespace std;

// Constructor - Uses hr to initialize hour, min minute, and sec second

Time::Time(int hr, int min, int sec)
{
    setTime(hr, min, sec);
}

  // Function getHour - returns private data member hour
int Time::getHour() const
{
    return hour;
}

  // Function getMinute - returns private data member minute

int Time::getMinute() const
{
    return minute;
}

  // Function getSecond - returns private data member second
int Time::getSecond() const
{
    return second;
}
  
  // Function setTime - set hour, minute, second
  //   if hr is in the range [0..23] then assign hr to hour;
  //     otherwise, assign 0 to hour
  //   if min is in the range [0..59] then assign min to minute;
  //     otherwise, assign 0 to minute
  //   if sec is in the range [0..59] then assign sec to second;
  //     otherwise, assign 0 to second
void Time::setTime(int hr, int min, int sec)
{
    if (hr >= 0 && hr <= 23)
        hour = hr;
    else
        hour = 0;

    if (min >= 0 && min <= 59)
        minute = min;
    else
        minute = 0;

    if (sec >= 0 && sec <= 59)
        second = sec;
    else
        second = 0;
}

  // Function isAM - returns true if the time is ante meridiem; that
  // is, before noon.  By definition, 12:00:00 A.M. denotes midnight
  // (that is, hour, minute, and second are all zero), and 12:00:00 P.M.
  // denotes noon (that is, hour equals 12 and minute and second
  // are both zero).

bool Time::isAM() const
{
    if (hour < 12)
        return true;
    else
        return false;
}

  // Function printStandard - prints the time in the format
  //   hh:mm:ss DD 
  // where
  //   hh is the hour displayed as a two-digit, blank-filled number in
  //     the range [1..12]
  //   mm is the minute displayed as a two-digit, zero-filled number
  //     in the range [0..59] 
  //   ss is the second displayed as a two-digit, zero-filled number
  //     in the range [0..59] 
  //   DD is a four-character string equal to one of "A.M." or "P.M."
  //     (call isAM() to determine)
void Time::printStandard(ostream& os) const
{
    char ch = os.fill();
    os << setfill(' ') << setw(2);

    if (hour == 0)
        os << 12;
    else
        if (hour >= 1 && hour <=12)
            os << hour;
        else
            os << hour - 12;

    os << ':' << setfill('0') << setw(2) << minute;
    os << ':' << setw(2) << second;
    os << ' ';

    if (isAM())
        os << "A.M.";
    else
        os << "P.M.";

    os << setfill(ch);
}

  // Function timeToSeconds - converts time to total number of seconds
  // since midnight
int Time::timeToSeconds() const
{
    int timeInSeconds = 0;

    timeInSeconds += second;
    timeInSeconds += minute*60;
    timeInSeconds += hour*3600;

    return timeInSeconds;
}