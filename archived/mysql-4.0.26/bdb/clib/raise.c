/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 1997, 1998, 1999, 2000
 *	Sleepycat Software.  All rights reserved.
 */

#include "db_config.h"

#ifndef lint
static const char revid[] = "$Id$";
#endif /* not lint */

#ifndef NO_SYSTEM_INCLUDES
#include <signal.h>
#include <unistd.h>
#endif

/*
 * raise --
 *	Send a signal to the current process.
 *
 * PUBLIC: #ifndef HAVE_RAISE
 * PUBLIC: int raise __P((int));
 * PUBLIC: #endif
 */
int
raise(s)
	int s;
{
	return (kill(getpid(), s));
}
