#include "osKernel.h"

#define QUANTA 1

int32_t semaphore1, semaphore2;
uint32_t count0, count1 = 0;


void Task0(void) {
	while(1) {
		osSignalSet(&semaphore1);
		osSignalWait(&semaphore2);
		count0++;
	}
	
}

void Task1(void) {
	while(1) {
		osSignalSet(&semaphore2);
		osSignalWait(&semaphore1);
		count1++;
	}
	
}

void Task2(void) {
	while(1) {
		
	}
	
}


int main(void){
	osSemaphoreInit(&semaphore1,1);
	osSemaphoreInit(&semaphore2,0);
	osKernelInit();
	osKernelAddThreads(&Task0,&Task1,&Task2);
	osKernelLaunch(QUANTA);
	
	return 0;
}