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
//������
//����� buffer - ����� ������� �� ����� ����� �������� ����� ����� ���� �� ������ ���� char
//������ :
//buffer
//�������� :
//addToBuffer - ����� �����
//getBuffer - ������ �� � buffer
//cleanBuffer - ����� �buffer
//

