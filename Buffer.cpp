#include "Buffer.h"
#include "BaseMessage.h"
#include <cstdlib>;
Buffer::Buffer() {	
	index = 0;
}
Buffer::~Buffer() {
      free(buffer);
}
 void Buffer::addToBuffer(baseMessage* message) {
	 char* arr_message = (char*)message->getMessageBuffer();
	 buffer = (char**)realloc(buffer, sizeof(char*));
	 buffer[index++] = arr_message;
 }

char** Buffer::getBuffer() {
	return buffer;

}

void  Buffer::cleanBuffer() {
	buffer = NULL;
}