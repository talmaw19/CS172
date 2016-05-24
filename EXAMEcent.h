#pragma once



using namespace std;

class Event
{
private:
	int Time; // The event time
	string Title; //the event tittle 
public: 
	Event(); // default event constructor argument.. if you create a new even with no parameters it uses this
	Event(int, string); // parameterized constructor
	int getTime(); // uses the current time from the private 
	string getTitle(); // uses the current title from the private
	void setTime(int);
	void setTitle(string);
	
};
