#include "Cas.h"

Cas::Cas(int hours, int minutes,int seconds) 
{
	this->seconds = seconds;
	this->minutes = minutes;
	this->hours = hours;	
}


int Cas::CompareTo(IComparable* obj) const
{
	Cas* cas = dynamic_cast<Cas*>(obj);

	if (hours == cas->hours &&
		minutes == cas->minutes &&
		seconds == cas->seconds)
	{
		return 0;
	}
	else if (hours > cas->hours)
	{
		return 1;
	}
	else if ((hours == cas->hours) && minutes > cas->minutes)
	{
		return 1;
	}
	else if ((hours == cas->hours && minutes == cas->minutes) && seconds > cas->seconds)
	{
		return 1;
	}
	else return -1;
}
		
	


std::string Cas::ToString() const 
{
	std::string strSeconds = std::to_string(seconds);
	if (strSeconds.length() == 1) {
		strSeconds ='0'+ strSeconds;
	}
	std::string strMinutes = std::to_string(minutes);	
	if (strMinutes.length() == 1) {
		strMinutes ='0'+ strMinutes;
	}
	std::string strHours = std::to_string(hours);
	if (strHours.length() == 1) {
		strHours ='0'+ strHours;
	}

	return " = " + strHours + ":" + strMinutes + ":" + strSeconds;
}

void SortArray(IComparable** _array, int arraySize)
{
	for (int i = 0; i < arraySize - 1; i++) {
		for (int j = 0; j < arraySize - 1 - i; j++) {
			if (_array[j + 1]->CompareTo(_array[j]) == -1) {
				IComparable* tmp = _array[j + 1];
				_array[j + 1] = _array[j];
				_array[j] = tmp;
			}
		}
	}
}


Cas::~Cas() 
{

}
