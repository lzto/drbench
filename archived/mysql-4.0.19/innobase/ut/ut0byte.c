/*******************************************************************
Byte utilities

(c) 1994, 1995 Innobase Oy

Created 5/11/1994 Heikki Tuuri
********************************************************************/

#include "ut0byte.h"

#ifdef UNIV_NONINL
#include "ut0byte.ic"
#endif

#include "ut0sort.h"

/* Zero value for a dulint */
dulint	ut_dulint_zero 		= {0, 0};

/* Maximum value for a dulint */
dulint	ut_dulint_max 		= {0xFFFFFFFF, 0xFFFFFFFF};

/****************************************************************
Sort function for dulint arrays. */
void
ut_dulint_sort(dulint* arr, dulint* aux_arr, ulint low, ulint high)
/*===============================================================*/
{
	UT_SORT_FUNCTION_BODY(ut_dulint_sort, arr, aux_arr, low, high,
				ut_dulint_cmp);
}

/****************************************************************
Copies a string to a memory location, setting characters to lower case. */

void
ut_cpy_in_lower_case(
/*=================*/
	char*		dest,	/* in: destination */
	const char*	source,	/* in: source */
	ulint		len)	/* in: string length */
{
        ulint i;

	for (i = 0; i < len; i++) {
	        dest[i] = tolower(source[i]);
	}
}

/****************************************************************
Compares two strings when converted to lower case. */

int
ut_cmp_in_lower_case(
/*=================*/
				/* out: -1, 0, 1 if str1 < str2, str1 == str2,
				str1 > str2, respectively */
	const char*	str1,	/* in: string1 */
	const char*	str2)	/* in: string2 */
{
	for (;;) {
		int c1, c2;
		if (!*str1) {
			return(*str2 ? -1 : 0);
		} else if (!*str2) {
			return 1;
		}
		c1 = tolower(*str1++);
		c2 = tolower(*str2++);
		if (c1 < c2) {
			return(-1);
		}
		if (c1 > c2) {
			return(1);
		}
	}

	return(0);
}
