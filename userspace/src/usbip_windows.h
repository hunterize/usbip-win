#ifndef _USBIP_WINDOWS_H
#define _USBIP_WINDOWS_H

int show_port_status(void);
int detach_port(char *port);
int attach_device(char *host, char *busid);
int init_socket();
int cleanup_socket();

#endif