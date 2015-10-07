################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TestNumbers.cpp \
../acount.cpp \
../chacount.cpp \
../chcount.cpp \
../fractab.cpp \
../istream.cpp \
../lcount.cpp \
../multab.cpp \
../printLargeDigit.cpp \
../sumd.cpp \
../sumi.cpp \
../wcount.cpp 

OBJS += \
./TestNumbers.o \
./acount.o \
./chacount.o \
./chcount.o \
./fractab.o \
./istream.o \
./lcount.o \
./multab.o \
./printLargeDigit.o \
./sumd.o \
./sumi.o \
./wcount.o 

CPP_DEPS += \
./TestNumbers.d \
./acount.d \
./chacount.d \
./chcount.d \
./fractab.d \
./istream.d \
./lcount.d \
./multab.d \
./printLargeDigit.d \
./sumd.d \
./sumi.d \
./wcount.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


