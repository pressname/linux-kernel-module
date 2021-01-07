#include <linux/module.h>
#include <linux/kernel.h> //Debug messages
#include <linux/init.h>

static int HelloInit(void){

  printk(KERN_INFO "ROOTKITDEV_DEBUG: HELLO WORLD! \n");
  return 0;
}

static void HelloExit(void){

  printk(KERN_INFO "ROOTKITDEV_DEBUG: GOODBYE \n");
}


module_init(HelloInit);
module_exit(HelloExit);

MODULE_LICENSE("GPL");
