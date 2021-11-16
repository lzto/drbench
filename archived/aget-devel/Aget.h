
/*
 * Aget, Multithreaded Download Accelerator
 *
 * (c) 2002 Murat Balaban <murat at enderunix dot org>
 * See COPYING for copyright information
 *
 * $Id$
 *
 */

#ifndef AGET_H
#define AGET_H

#include "Data.h"
#include "Resume.h"

void startHTTP(struct request *);
void startFTP(struct request *);
void resumeDownload(struct hist_data *, int );

#endif
