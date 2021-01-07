#include <linux/module.h>
#include <linux/kernel.h> //Debug messages
#include <linux/init.h>
#include <linux/moduleparam.h>
#include <linux/stat.h>

#define DRIVER_AUTHOR "pressname"
#define DRIVER_DESC "some text"

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_SUPPORTED_DEVICE("test_device");

static char *MyString = "";
module_param(MyString, charp, 0000);
MODULE_PARM_DESC(MyString, "Hello World!");

static int HelloInit(void){

  printk(KERN_INFO "ROOTKITDEV_DEBUG: %s \n", MyString);
  return 0;
}

static void HelloExit(void){

  printk(KERN_INFO "ROOTKITDEV_DEBUG: GOODBYE \n");
}


module_init(HelloInit);
module_exit(HelloExit);
