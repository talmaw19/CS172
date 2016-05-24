#include <iostream>
#include <ctime>
#include <string>
#include "Event.h"

Event::Event()
{
	Title = ""; // empty string
	Time = -1; // free -1 when its avaliable
}

Event::Event(int t, string eventName)
{
	Time = t; //goes back to the default snd changed to the new int
	Title = eventName; //goes back to the default snd changed to the new int
}
// getter, goes to private 
int Event::getTime() //function declaration, return type
{
	return Time; //since there is nothing in the parameters  
}

string Event::getTitle()
{
	return Title; // returns default title
}

void Event::setTime(int t)
{
	Time = t; // sets a new time for the event
}

void Event::setTitle(string name)
{
	Title = name; // sets a new name title for the event
}
