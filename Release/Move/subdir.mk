################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Move/MovSpeed.cpp 

LINK_OBJ += \
./Move/MovSpeed.cpp.o 

CPP_DEPS += \
./Move/MovSpeed.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
Move/MovSpeed.cpp.o: ../Move/MovSpeed.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/home/jun/eclipse/cpp-neon/eclipse//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"/home/jun/eclipse/cpp-neon/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.17/cores/arduino" -I"/home/jun/eclipse/cpp-neon/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.17/variants/mega" -I"/home/jun/Dropbox/arduino-1.6.11/libraries/Arduino_Vector-master" -I"/home/jun/Dropbox/arduino-1.6.11/libraries/tlc5940" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


