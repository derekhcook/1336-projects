#ifndef LAB63_H
#define LAB63_H

#include <iostream>

using namespace std;

class Time
{
 public:
  // Constructor - Uses hr to initialize hour, min minute, and sec second
  Time(int hr = 0, int min = 0, int sec = 0);

  // Function getHour - returns private data member hour
  int getHour() const;

  // Function getMinute - returns private data member minute
  int getMinute() const;

  // Function getSecond - returns private data member second
  int getSecond() const;
  
  // Function setTime - set hour, minute, second
  //   if hr is in the range [0..23] then assign hr to hour;
  //     otherwise, assign 0 to hour
  //   if min is in the range [0..59] then assign min to minute;
  //     otherwise, assign 0 to minute
  //   if sec is in the range [0..59] then assign sec to second;
  //     otherwise, assign 0 to second
  void setTime(int hr, int min, int sec);

  // Function isAM - returns true if the time is ante meridiem; that
  // is, before noon.  By definition, 12:00:00 A.M. denotes midnight
  // (that is, hour, minute, and second are all zero), and 12:00:00 P.M.
  // denotes noon (that is, hour equals 12 and minute and second
  // are both zero).
  bool isAM() const;

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
  void printStandard(ostream& os) const;

  // Function timeToSeconds - converts time to total number of seconds
  // since midnight
  int timeToSeconds() const;
 private:
  int hour;     // 0 <= hour <= 23
  int minute;   // 0 <= minute <= 59
  int second;   // 0 <= second <= 59
};

#endif
