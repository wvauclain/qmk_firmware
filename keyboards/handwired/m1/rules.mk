# Hardware configuration for pro micro
MCU = atmega32u4
BOOTLOADER = caterina
F_CPU = 16000000
ARCH = AVR8
F_USB = $(F_CPU)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT

# Extra features
EXTRAKEY_ENABLE ?= yes	# Audio control and System control
