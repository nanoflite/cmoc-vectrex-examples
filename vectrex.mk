##########################################################################
# Makefile for CMOC Vectrex development.
#
# (c) 2015-2016 Johan Van den Brande (nanoflite)
#
#-------------------------------------------------------------------------
# 
# This file expected to be included from an actual makefile
#

# The name of application and also of the main C source file
NAME ?= example

# vecx Emulator to use, should be on your PATH
VX ?= vecx

# Port to be used by the vecmulti tool
VM_PORT ?= /dev/cu.SLAB_USBtoUART
# vecmulti tool command line and parameters
VM ?= vecmulti load --port $(VM_PORT) --progress

# We target the vectrex and we are verbose
CC = cmoc
CFLAGS += --vectrex --verbose

TARGET = $(NAME).bin
SOURCE = $(NAME).c

all: $(TARGET)

$(TARGET): $(SOURCE)
	@ echo "CC $<"
	$(CC) $(CFLAGS) $<

run: $(TARGET)
	$(VX) $<

upload: $(TARGET)
	@ echo "UPLOAD $(NAME)"
	$(VM) $<

clean:
	@ echo $@ $(NAME)
	@ rm -f $(NAME).{bin,i,lst,asm,hex}

#
#    (\/)
#   ( ..)
#  C(")(")
#
##########################################################################  
