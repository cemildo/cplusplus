################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Date.cpp \
../Main.cpp \
../Tracer.cpp \
../Word.cpp \
../WordTest.cpp 

OBJS += \
./Date.o \
./Main.o \
./Tracer.o \
./Word.o \
./WordTest.o 

CPP_DEPS += \
./Date.d \
./Main.d \
./Tracer.d \
./Word.d \
./WordTest.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0  -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


