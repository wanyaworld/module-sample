#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Robert W. Oliver II");
MODULE_DESCRIPTION("A simple example Linux module.");
MODULE_VERSION("0.01");

static int __init lkm_example_init(void) {
	volatile unsigned long ptr = 0;

	printk(KERN_INFO "before: %10lx\n", ptr);
	printk(KERN_INFO "after: %10lx\n", ptr);
	return 0;
}

static void __exit lkm_example_exit(void) {
	printk(KERN_INFO "Goodbye, World!\n");
}

module_init(lkm_example_init);
module_exit(lkm_example_exit);
