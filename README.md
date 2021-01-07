# linux-kernel-module
In this repo we explore the topic of creating and signing your own kernel modules.
I created this project to explore this topic to understand rootkit development.

# how to use this stuff
First you need to compile the project. For this I created a makefile.
```bash
make all
```
to see the output:
```bash
tail -f /var/log/syslog | grep DEBUG
```
then you need to load this module into the kernel

```bash
insmod helloworld.ko
```

or just use the test.sh file. 

