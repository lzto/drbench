
/*
 * Aget, Multithreaded Download Accelerator
 *
 * (c) 2002 Murat Balaban <murat at enderunix dot org>
 * See COPYING for copyright information
 *
 * $Id$
 *
 */

#ifndef RESUME_H
#define RESUME_H

#include "Data.h"
#include "Defs.h"

typedef struct hist_data {
	struct request req;
	int nthreads;
	int bwritten;
	struct thread_data wthread[MAXTHREADS];
} hist_data;

void save_log();
int read_log(struct hist_data *);

#endif
