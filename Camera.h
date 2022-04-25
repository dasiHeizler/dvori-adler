#pragma once
#include "baseMessage.h";
#include "Buffer.h";
class Camera
{
	char id;//	מזהה מצלמה(char)
	baseMessage** message_arr;//	מערך של הודעות(מחלקה שכבר מימשתן)
	Buffer  bufferCamera;//	אובייקט מסוג buffer
	bool isActive;//isActive - האם המצלמה בפעילות
	void generate(int index);
	void sendToBuffer(int i);
public:	
	void run();
	void stop();
	Camera();
	~Camera();

};

