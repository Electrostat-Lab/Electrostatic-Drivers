#include <linux/module.h>
#include <linux/init.h>
#include <linux/cdev.h>
#include <electrokio/sio.h>

/* Meta Information */
MODULE_LICENSE("BSD-3");
MODULE_AUTHOR("pavl_g <pepogerges33@gmail.com>");
MODULE_DESCRIPTION("A LKM to control the Super I/O Chips via a userspace character device driver, typically the ITE-IT87xx variants.");

/**
 * @brief Read data out of the buffer
 */
static ssize_t driver_read(struct file *File, char *user_buffer, size_t count, loff_t *offs) {
//	int to_copy, not_copied, delta;
//
//	/* Get amount of data to copy */
//	to_copy = min(count, buffer_pointer);
//
//	/* Copy data to user */
//	not_copied = copy_to_user(user_buffer, buffer, to_copy);
//
//	/* Calculate data */
//	delta = to_copy - not_copied;

	return 0;
}

/**
 * @brief Write data to buffer
 */
static ssize_t driver_write(struct file *File, const char *user_buffer, size_t count, loff_t *offs) {
//	int to_copy, not_copied, delta;
//
//	/* Get amount of data to copy */
//	to_copy = min(count, sizeof(buffer));
//
//	/* Copy data to user */
//	not_copied = copy_from_user(buffer, user_buffer, to_copy);
//	buffer_pointer = to_copy;
//
//	/* Calculate data */
//	delta = to_copy - not_copied;

	return 0;
}

/**
 * @brief This function is called, when the device file is opened
 */
static int driver_open(struct inode *device_file, struct file *instance) {
	printk("dev_nr - open was called!\n");
	return 0;
}

/**
 * @brief This function is called, when the device file is opened
 */
static int driver_close(struct inode *device_file, struct file *instance) {
	printk("dev_nr - close was called!\n");
	return 0;
}


/**
 * @brief This function is called, when the module is loaded into the kernel
 */
static int __init my_init(void) {
	printk("Loaded ksio module successfully.\n");
	return 0;
}

/**
 * @brief This function is called, when the module is removed from the kernel
 */
static void __exit my_exit(void) {
	printk("Unloaded ksio module successfully.\n");
}

module_init(my_init);
module_exit(my_exit);
