make clean
make all
sudo insmod helloworld.ko
sudo remmod helloworld
tail -f /var/log/syslog | grep DEBUG
