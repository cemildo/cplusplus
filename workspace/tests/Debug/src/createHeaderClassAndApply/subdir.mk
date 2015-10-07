################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/createHeaderClassAndApply/add.cpp \
../src/createHeaderClassAndApply/tests.cpp 

OBJS += \
./src/createHeaderClassAndApply/add.o \
./src/createHeaderClassAndApply/tests.o 

CPP_DEPS += \
./src/createHeaderClassAndApply/add.d \
./src/createHeaderClassAndApply/tests.d 


# Each subdirectory must supply rules for building sources it contributes
src/createHeaderClassAndApply/%.o: ../src/createHeaderClassAndApply/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


