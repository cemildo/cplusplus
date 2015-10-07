################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Ubung_2015_1_Test

dependents:
	-cd /Applications/cevelop/cevelop.app/Contents/MacOS/workspace2/Ubung_2015_1/Debug && $(MAKE) all

# Tool invocations
Ubung_2015_1_Test: $(OBJS) $(USER_OBJS) /Applications/cevelop/cevelop.app/Contents/MacOS/workspace2/Ubung_2015_1/Debug/libUbung_2015_1.a
	@echo 'Building target: $@'
	@echo 'Invoking: MacOS X C++ Linker'
	g++ -L"/Applications/cevelop/cevelop.app/Contents/MacOS/workspace2/Ubung_2015_1/Debug" -o "Ubung_2015_1_Test" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(CPP_DEPS)$(C_DEPS) Ubung_2015_1_Test
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:
/Applications/cevelop/cevelop.app/Contents/MacOS/workspace2/Ubung_2015_1/Debug/libUbung_2015_1.a:

-include ../makefile.targets
