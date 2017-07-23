################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/OV7670_control.c \
../src/lcd_fonts.c \
../src/lcd_ili9341.c \
../src/lcd_spi.c \
../src/main.c \
../src/syscalls.c \
../src/system_control.c \
../src/system_stm32f4xx.c 

OBJS += \
./src/OV7670_control.o \
./src/lcd_fonts.o \
./src/lcd_ili9341.o \
./src/lcd_spi.o \
./src/main.o \
./src/syscalls.o \
./src/system_control.o \
./src/system_stm32f4xx.o 

C_DEPS += \
./src/OV7670_control.d \
./src/lcd_fonts.d \
./src/lcd_ili9341.d \
./src/lcd_spi.d \
./src/main.d \
./src/syscalls.d \
./src/system_control.d \
./src/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429ZITx -DSTM32F429I_DISCO -DSTM32F4 -DSTM32 -DDEBUG -DUSE_STDPERIPH_DRIVER -DSTM32F429_439xx -I"C:/Users/Blych/Documents/Local repo/stm32f429i-disc0-obj-tracking/chech/inc" -I"C:/Users/Blych/Documents/Local repo/stm32f429i-disc0-obj-tracking/chech/StdPeriph_Driver/inc" -I"C:/Users/Blych/Documents/Local repo/stm32f429i-disc0-obj-tracking/chech/CMSIS/device" -I"C:/Users/Blych/Documents/Local repo/stm32f429i-disc0-obj-tracking/chech/CMSIS/core" -I"C:/Users/Blych/Documents/Local repo/stm32f429i-disc0-obj-tracking/chech/Utilities/Common" -I"C:/Users/Blych/Documents/Local repo/stm32f429i-disc0-obj-tracking/chech/Utilities/STM32F429I-Discovery" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


