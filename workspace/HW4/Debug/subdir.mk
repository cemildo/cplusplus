################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../\ printFunctionTable.cpp \
../Ansi.cpp \
../AnsiTest.cpp \
../countingToLower.cpp \
../countingToLowerTest.cpp \
../experiment.cpp \
../main.cpp \
../wlist.cpp 

OBJS += \
./\ printFunctionTable.o \
./Ansi.o \
./AnsiTest.o \
./countingToLower.o \
./countingToLowerTest.o \
./experiment.o \
./main.o \
./wlist.o 

CPP_DEPS += \
./\ printFunctionTable.d \
./Ansi.d \
./AnsiTest.d \
./countingToLower.d \
./countingToLowerTest.d \
./experiment.d \
./main.d \
./wlist.d 


# Each subdirectory must supply rules for building sources it contributes
\ printFunctionTable.o: ../\ printFunctionTable.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF" printFunctionTable.d" -MT"\ printFunctionTable.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


