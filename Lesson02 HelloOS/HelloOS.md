## 1 hello os 
#### 参考 https://blog.csdn.net/weixin_45941099/article/details/120356421

1.1 clone code
#### https://gitee.com/liuyangyangweb/cosmos.git

#### 1.2 install nasm  gcc
#### yum install build-essential nasm
#### yum install gcc

#### 1.3 vi grub.cfg

#### 1.4 make all
#### 1.5 copy HelloOS.bin /boot

#### 1.6 grub.cfg config
menuentry 'HelloOS' {
    insmod gzio
    insmod part_msdos
    insmod xfs
    set root='hd0,msdos1'
    multiboot /HelloOS.bin
    boot
}
