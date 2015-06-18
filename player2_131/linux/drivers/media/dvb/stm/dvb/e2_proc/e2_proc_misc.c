/* 
 * e2_proc_misc.c
 */

#include <linux/proc_fs.h>  	/* proc fs */ 
#include <asm/uaccess.h>    	/* copy_from_user */

#include <linux/dvb/video.h>	/* Video Format etc */

#include <linux/dvb/audio.h>
#include <linux/smp_lock.h>
#include <linux/string.h>

#include "../backend.h"
#include "../dvb_module.h"
#include "linux/dvb/stm_ioctls.h"

extern struct DeviceContext_s* DeviceContext;

#if 0

int proc_misc_12V_output_write(struct file *file, const char __user *buf,
                           unsigned long count, void *data)
{
	char 		*page;
	ssize_t 	ret = -ENOMEM;
	/* int		result; */
	
	printk("%s %ld\n", __FUNCTION__, count);

	page = (char *)__get_free_page(GFP_KERNEL);
	if (page) 
	{
		ret = -EFAULT;
		if (copy_from_user(page, buf, count))
			goto out;

		//result = sscanf(page, "%3s %3s %3s %3s %3s", s1, s2, s3, s4, s5);
	}
	
	ret = count;
out:
	free_page((unsigned long)page);
	return ret;
}


int proc_misc_12V_output_read (char *page, char **start, off_t off, int count,
			  int *eof, void *data_unused)
{
	int len = 0;
	printk("%s %d\n", __FUNCTION__, count);

        return len;
}
#endif
