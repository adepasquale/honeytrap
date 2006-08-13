/* htm_ftpDownload.h
 * Copyright (C) 2006 Tillmann Werner <tillmann.werner@gmx.de>
 *
 * This file is free software; as a special exception the author gives
 * unlimited permission to copy and/or distribute it, with or without
 * modifications, as long as this notice is preserved.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef __HT_MODULE_FTPDOWNLOAD_H
#define __HT_MODULE_FTPDOWNLOAD_H 1

#if HAVE_CONFIG_H
# include <config.h>
#endif

const char module_name[]="htm_ftpDownload";
const char module_version[]="0.2";

void plugin_init(void);
void plugin_unload(void);
void plugin_register_hooks(void);
int cmd_parse_for_ftp(Attack *attack);
int read_ftp_line(int control_sock_fd, char *rline, int timeout);
int ftp_quit(int control_sock_fd, int data_sock_fd, int dumpfile_fd);
int get_ftp_ressource(const char *user, const char* pass, struct in_addr *lhost, struct in_addr *rhost, const int port, const char *save_file);
int get_ftpcmd(char *attack_string, int string_size, struct in_addr lhost);

#endif