#include <iostream>
#include <ctime>
#include "Venue.h"
#include "Event.h"


bool Venue::validTime(int time)
{
	if (time == -1) 
	{
		return false; // if thegiven time is negative then its false
	}
	else
	{
		return true; //other 
	}
}

void Venue::addEvent(int time, string name )//takestime
{
	Event e = Venue::findEvent(time);   // adds a new time and title name if there isnt a timeused up
	if (!Venue::validTime(e.getTime()))  // if the time is not valid then it will store
	{
		e.setTime(time); // onnly if -1 sets tinme for the new event onlyif its invalid
		e.setTitle(name); // sets title for the new title only
		scheduledEvents[numEvents++] = e;
	}
	else cout << " sorry we can't sechedule an event" << endl;

}

Event Venue::findEvent(int time)
{
	for (int i = 0; i < numEvents; i++) // the events from 0 to 12. max is zero
	{
		if (time == scheduledEvents[i].getTime()) 
		{
			return scheduledEvents[i];
		} 

	}
	return Event(); //our given time 
}


Event Venue::findEvent(string name)
{
	for (int i = 0; i < numEvents; i++)
	{
		if (scheduledEvents[i].getTitle() == name)
		{
			return scheduledEvents[i];
		}
	}
	return Event(); //return out defult given name
}

