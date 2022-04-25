#pragma once
#include "baseMessage.h"

class Buffer
{
	
	char** buffer;
	int index;
 public:
	void addToBuffer(baseMessage* message);
	char** getBuffer();
	void cleanBuffer();
	Buffer();
	~Buffer();

};
//מחלקות
//מחלקת buffer - מחלקה שמייצגת את המידע שנשלח מהקליינט לסרבר מכילה מערך של מערכים מסוג char
//משתנים :
//buffer
//פונקציות :
//addToBuffer - הוספת הודעה
//getBuffer - מחזירה את ה buffer
//cleanBuffer - ריקון הbuffer
//

