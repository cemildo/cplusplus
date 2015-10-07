################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Test.cpp \
../getline_iterator.cpp \
../main.cpp \
../palindrome.cpp \
../squares.cpp 

OBJS += \
./Test.o \
./getline_iterator.o \
./main.o \
./palindrome.o \
./squares.o 

CPP_DEPS += \
./Test.d \
./getline_iterator.d \
./main.d \
./palindrome.d \
./squares.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


