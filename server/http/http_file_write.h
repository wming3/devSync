
/*
 * Copyright (C) Reage
 * BLOG: http://www.rhttp.cn
 */

#ifndef _HTTP_FILE_WRITE_H_INCLUDE
#define _HTTP_FILE_WRITE_H_INCLUDE
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include "base.h"
#include "http_request.h"
#include "http_send_page.h"


int  _mkdir(char *root, pool_t *p);

int  open_write_file(http_connect_t *con);
int  write_file_content(http_connect_t *con);


#endif
