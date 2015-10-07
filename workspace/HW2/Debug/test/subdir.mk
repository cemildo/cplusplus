################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/test.cpp 

OBJS += \
./test/test.o 

CPP_DEPS += \
./test/test.d 


# Each subdirectory must supply rules for building sources it contributes
test/test.o: ../test/test.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/cemil/Schreibtisch/hsr/Prog3/ws0/firstCUTE/cute -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"test/test.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


