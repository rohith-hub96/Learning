/* 
 * hello.c the simple kernel module
 */


#include <linux/module.h> //nedded by all modules
#include<linux/kernel.h>
#include <linux/init.h>
#include <linux/printk.h> //nedded for pr-info()

static int __init hello_init(void){
	printk(KERN_INFO,"Hello world\n");
	
	//A non 0 return means init_module failed ; moduke cannot be loaded 
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_INFO,"Goodbye Hello world\n");
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rohith");
MODULE_DESCRIPTION("A simple helloworld program");
