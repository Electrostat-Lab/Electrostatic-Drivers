#include <test.h>
#include <linux/module.h>
#include <linux/init.h>

void test(void) {
    printk("Test static linking is successful!\n");
}

EXPORT_SYMBOL(test);