KERNEL_DIR=/media/1/kcalmod/test
obj-m := mdss_mdp_kcal_ctrl.o
PWD := $(shell pwd)
default:
	$(MAKE) ARCH=arm CROSS_COMPILE=/media/1/kcalmod/test/arm-eabi-4.7/bin/arm-eabi- -C $(KERNEL_DIR) SUBDIRS=$(PWD) modules
clean:
        $(MAKE) -C $(KERNEL_DIR) SUBDIRS=$(PWD) clean
