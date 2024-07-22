#ifndef __OTA_BOOT_H
#define __OTA_BOOT_H

int OTA_burnboot0(const char *img_path); // 烧U-Boot SPL
int OTA_burnuboot(const char *img_path); // 烧U-Boot

#endif
