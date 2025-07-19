#include <linux/module.h> 		//和模块编程初始化相关的头文件
#include <linux/init.h>			//和初始化相关的头文件



//安装回调函数
//static  代表静态函数，仅该文件可用
//int   函数返回值
//__init  标识给内核看的，代表初始化函数，编译到内核会用得上
static int __init xxx_init(void)
{
	
	printk(KERN_EMERG "打印等级%d\r\n",0);
	printk(KERN_ALERT "打印等级%d\r\n",1);
	printk(KERN_CRIT "打印等级%d\r\n",2);
	printk(KERN_ERR "打印等级%d\r\n",3);
	printk(KERN_WARNING "打印等级%d\r\n",4);
	printk(KERN_NOTICE "打印等级%d\r\n",5);
	printk(KERN_INFO "打印等级%d\r\n",6);
	printk(KERN_DEBUG "打印等级%d\r\n",7);
	printk(KERN_DEFAULT "%s\r\n","默认等级信息");
	printk(KERN_DEFAULT "%s\r\n","默认等级信息");
	return 0;
}

//卸载回调函数
static void __exit xxx_exit(void)
{
	printk(KERN_SOH "0" "打印等级%d\r\n",0);
	printk(KERN_SOH "1" "打印等级%d\r\n",1);
	printk(KERN_SOH "2" "打印等级%d\r\n",2);
	printk(KERN_SOH "3" "打印等级%d\r\n",3);
	printk(KERN_SOH "4" "打印等级%d\r\n",4);
	printk(KERN_SOH "5" "打印等级%d\r\n",5);
	printk(KERN_SOH "6" "打印等级%d\r\n",6);
	printk(KERN_SOH "7" "打印等级%d\r\n",7);
	printk("%s\r\n","默认等级信息");
	printk("%s\r\n","默认等级信息");
	printf(" test-demo\r\n");
}

//按装模块执行函数
module_init(xxx_init);
//卸载模块执行函数
module_exit(xxx_exit);


//这个是必须要有的，免费声明许可
MODULE_LICENSE("GPL");
//下面这些是当前模块的描述 --- 可选项
MODULE_AUTHOR("作者是谁");
MODULE_DESCRIPTION("模块描述");
MODULE_VERSION("模块的版本");





