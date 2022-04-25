#pragma once
#include "baseMessage.h";
#include "Buffer.h";
class Camera
{
	char id;//	���� �����(char)
	baseMessage** message_arr;//	���� �� ������(����� ���� ������)
	Buffer  bufferCamera;//	������� ���� buffer
	bool isActive;//isActive - ��� ������ �������
	void generate(int index);
	void sendToBuffer(int i);
public:	
	void run();
	void stop();
	Camera();
	~Camera();

};

