################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Test.cpp \
../allcharc.cpp \
../averagei.cpp \
../bartender.cpp \
../calc.cpp \
../calculator.cpp \
../charc.cpp \
../conditionalOperator.cpp \
../first.cpp \
../fractab.cpp \
../lc.cpp \
../multab.cpp \
../sumi.cpp \
../wc.cpp 

OBJS += \
./Test.o \
./allcharc.o \
./averagei.o \
./bartender.o \
./calc.o \
./calculator.o \
./charc.o \
./conditionalOperator.o \
./first.o \
./fractab.o \
./lc.o \
./multab.o \
./sumi.o \
./wc.o 

CPP_DEPS += \
./Test.d \
./allcharc.d \
./averagei.d \
./bartender.d \
./calc.d \
./calculator.d \
./charc.d \
./conditionalOperator.d \
./first.d \
./fractab.d \
./lc.d \
./multab.d \
./sumi.d \
./wc.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


