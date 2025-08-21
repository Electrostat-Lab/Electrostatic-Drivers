KERNEL_DIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)
SUBDIRS := vm/lib bus driver/chardev driver/i2c driver/gpio driver/sio
BUILD_DIR ?= build
INCLUDE:= $(PWD)/vm/include
KBUILD_OPTIONS += SKIP=BTF

build:
	# Compiling the ElectroKIO Kernel Drivers Tree
	@for dir in $(SUBDIRS); do \
		mkdir -p $(BUILD_DIR)/$$dir; \
		$(MAKE) -C $(KERNEL_DIR) M=$(PWD)/$(BUILD_DIR)/$$dir \
		src=$(PWD)/$$dir EXTRA_CFLAGS="-I$(INCLUDE)" modules; \
	done

clean:
	@rm -rf $(BUILD_DIR)
