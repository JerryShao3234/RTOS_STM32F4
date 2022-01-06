# RTOS_STM32F4

RTOS on an STM32F411 microcontroller with Round-Robin/Weighted Round-Robin task scheduling:
-use SysTick as a timer to pre-emptively context switch (implemented in asm)
-osKernel initializes memory and threads properly for context switching
-main just defines the tasks/threads and runs them using kernel

GPIO Pin stuff:

Keil/CubeMX/uVision5 Specifics:

![image](https://user-images.githubusercontent.com/72317125/148339555-1d58f8aa-c447-4d12-b029-ea59bd99e874.png)
