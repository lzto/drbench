
/*
 * Aget, Multithreaded Download Accelerator
 *
 * (c) 2002 Murat Balaban <murat at enderunix dot org>
 * See COPYING for copyright information
 *
 * $Id$
 *
 */

#ifndef HEAD_H
#define HEAD_H

#include "Data.h"

void http_head_req(struct request *);
int ftp_head_req(struct request *, int *);

#endif
