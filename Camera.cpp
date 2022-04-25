#include "Camera.h"
#include "Simulator.h"
#include <random>;
void Camera::generate(int index) {
	int num = rand() % 2 + 1;
	Simulator s;
	baseMessage* m=NULL;
	if(num == 1) {
		m = s.createStatusMessage();
	}
	else {
		 m = s.createDiscoverMessage();
	}
	message_arr = (baseMessage**)realloc(message_arr, sizeof(baseMessage*));
	//check true[index]
	message_arr[index] = m;
}
void Camera::sendToBuffer(int i) {
	bufferCamera.addToBuffer(*message_arr);
	for (; i < 5; i++) {
		free(message_arr[i]);
	}
	free(message_arr);
}
void Camera::run() {
	while (isActive) {
		int i=0;
		for (int i = 0; i < 5 && isActive; i++) {
			generate(i);
		}
		sendToBuffer(i);
}
}
void Camera::stop() {
	isActive = false;
}
Camera::Camera() {
	isActive = true;
}
Camera::~Camera() {
	free(message_arr);
}