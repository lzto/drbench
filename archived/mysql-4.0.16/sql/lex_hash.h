/* Copyright (C) 2001 MySQL AB
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

/* This code is generated by gen_lex_hash.cc that seeks for a perfect
hash function */

#include "lex.h"

static uint16 char_table[] = {
10024,42973,20465,1596,19205,55150,54009,35596,50705,35198,10074,1747,11621,14695,60862,45460,
14739,523,49382,37482,62728,258,44011,27083,20800,30888,7137,21078,29146,17195,17495,45325,
56247,20164,37242,63595,7383,26671,59777,61472,55586,40091,3551,11746,39569,13939,55310,42453,
4745,16419,14966,52885,10487,58450,51462,39646,57258,26570,40353,56168,40283,15709,47037,47077,
32431,44198,40284,47733,57622,24795,36746,62870,51965,25495,14587,14878,63990,51362,31783,46116,
50725,42696,7167,10114,95,26512,27094,26135,14569,35311,49254,23341,42864,19273,5756,28320,
62845,44198,40284,47733,57622,24795,36746,62870,51965,25495,14587,14878,63990,51362,31783,46116,
50725,42696,7167,10114,95,26512,27094,26135,14569,35311,49254,58187,32206,5364,21073,4359,
3736,33695,34075,16400,35889,46530,24152,25004,717,3571,44992,3172,53375,44899,3253,52395,
21208,26542,6190,62401,59292,14852,19497,19640,55350,45444,2724,30836,21779,182,38169,61249,
28870,36170,2090,62629,54069,23320,47682,22366,62287,23921,43194,34701,17428,61064,60222,25498,
52882,28879,44995,43754,48455,36572,26098,10363,49463,50739,8722,52879,30917,5496,30306,17328,
769,8223,56148,18649,33453,37563,42309,56429,25810,39689,59577,52285,11854,55107,25778,63840,
28987,57441,23276,31104,18404,33107,41065,57486,36985,24709,11018,32252,62327,32447,49200,18435,
56312,19784,56178,49702,46750,7321,15440,2372,47568,16184,55834,20689,32766,55977,58044,14143,
29664,10348,53224,52044,4098,29619,40423,32679,17036,3100,5283,38539,10511,21793,2179,52167
};


static uchar unique_length[] = {
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,3,1,2,0,
0,5,5,13,9,7,6,6,6,7,1,4,10,12,5,7,
8,3,12,10,6,7,4,5,2,5,1,0,0,0,0,0,
0,5,5,13,9,7,6,6,6,7,1,4,10,12,5,7,
8,3,12,10,6,7,4,5,2,5,1,0,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};


static uint16 my_function_table[] = {
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,238,32767,
32767,32767,32767,32767,474,32767,351,32767,32767,32767,32767,32767,
322,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,266,32767,426,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,355,32767,32767,32767,32767,32767,32767,225,32767,
32767,32767,32767,32767,32767,32767,244,284,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,106,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,78,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,419,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,287,32767,32767,188,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,336,32767,32767,32767,
372,147,32767,32767,32767,32767,32767,32767,32767,406,32767,342,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,477,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,151,32767,
32767,32767,179,32767,32767,32767,32767,71,32767,32767,15,32767,
174,32767,32767,32767,32767,32767,155,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,245,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,275,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,76,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,436,
32767,32767,32767,32767,268,32767,32767,32767,32767,32767,32767,32767,
134,32767,452,32767,32767,32767,32767,32767,32767,32767,32767,219,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,260,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,442,32767,32767,32767,32767,32767,414,32767,32767,
32767,32767,32767,251,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,233,161,132,32767,32767,32767,
110,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,370,172,32767,32767,
32767,32767,124,32767,32767,32767,32767,32767,120,32767,32767,45,
32767,32767,32767,32767,32767,32767,32767,165,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,103,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,16,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,90,430,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,368,32767,186,
32767,32767,428,32767,32767,353,32767,149,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,229,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,86,32767,32767,32767,32767,32767,32767,32767,9,32767,32767,
32767,32767,32767,32767,32767,164,32767,32767,32767,32767,32767,32767,
283,32767,32767,32767,32767,32767,32767,32767,253,349,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,68,32767,32767,
32767,32767,32767,32767,32767,128,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,70,32767,32767,32767,32767,32767,32767,32767,
32767,42,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,51,32767,32767,32767,32767,32767,294,32767,32767,
32767,32767,32767,32767,32767,32767,279,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,481,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,383,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,326,
32767,32767,32767,32767,32767,32767,32767,32767,32767,468,32767,252,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,126,32767,32767,32767,32767,32767,32767,
32767,136,32767,32767,32767,183,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,35,32767,32767,32767,80,
32767,32767,32767,32767,32767,324,470,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
48,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,455,32767,148,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,28,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,297,469,32767,32767,156,32767,211,32767,39,141,
32767,32767,32767,41,32767,32767,32767,356,32767,32767,32767,32767,
32767,333,32767,32767,385,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,298,59,32767,32767,32767,135,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,127,32767,32767,32767,32767,484,32767,
32767,47,32767,32767,32767,32767,32767,274,323,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,246,
32767,440,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,360,32767,32767,32767,32767,32767,
32767,32767,363,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,345,32767,32767,32767,32767,
32767,32767,32767,32767,32767,458,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,116,32767,
32767,32767,32767,32767,32767,206,32767,32767,32767,32767,255,32767,
32767,379,390,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,271,32767,373,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,215,32767,32767,32767,32767,32767,389,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,344,32767,6,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,153,150,32767,32767,431,32767,
32767,32767,32767,32767,32767,32767,32767,217,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,259,32767,32767,32767,396,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,24,32767,32767,32767,32767,32767,32767,
296,32767,14,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,451,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,19,32767,32767,32767,32767,32767,32767,
261,32767,32767,32767,196,32767,32767,32767,32767,32767,32767,32767,
388,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
479,32767,32767,32767,366,36,32767,32767,32767,32767,187,32767,
32767,32767,32767,32767,65,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,220,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,381,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,249,32767,32767,100,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,264,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
335,32767,32767,327,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,443,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
197,32767,310,32767,32767,32767,32767,398,32767,143,32767,32767,
32767,32767,32767,263,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,299,32767,32767,32767,32767,32767,32767,
32767,276,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,152,270,32767,32767,32767,32767,32767,38,32767,
32767,32767,32767,32767,32767,445,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,392,459,32767,378,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,421,32767,32767,
32767,32767,32767,32767,32767,32767,354,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,293,
32767,257,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,29,32767,32767,32767,32767,32767,32767,32767,32767,77,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,54,170,32767,32767,32767,32767,
32767,32767,32767,32767,32767,401,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,367,32767,93,
32767,32767,32767,32767,32767,32767,32767,11,32767,32767,32767,91,
32767,69,32767,32767,8,248,32767,405,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,240,32767,32767,56,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,237,52,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,330,32767,32767,32767,422,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,285,32767,32767,32767,32767,
40,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32,32767,43,32767,32767,32767,32767,32767,32767,32767,
32767,84,32767,32767,32767,32767,32767,400,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,88,32767,32767,
32767,32767,32767,32767,32767,384,32767,32767,32767,32767,32767,32767,
280,32767,32767,32767,32767,446,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,460,32767,32767,
32767,32767,32767,362,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
242,32767,32767,142,32767,32767,117,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,200,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,433,361,32767,32767,32767,181,32767,32767,
32767,32767,32767,32767,32767,32767,160,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,485,32767,
32767,222,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
231,32767,364,32767,393,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,232,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,347,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,286,32767,
32767,32767,32767,33,32767,403,32767,32767,32767,122,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,223,
32767,32767,32767,32767,32767,32767,32767,32767,308,32767,32767,475,
32767,32767,32767,32767,32767,32767,32767,32767,32767,273,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,139,32767,277,32767,32767,32767,32767,32767,89,32767,
7,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,375,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,329,302,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,73,32767,32767,32767,32767,32767,
32767,32767,32767,44,32767,32767,32767,32767,32767,32767,32767,32767,
32767,464,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,290,32767,
32767,32767,334,32767,32767,32767,32767,32767,32767,453,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,17,32767,32767,32767,
180,32767,32767,321,32767,32767,113,32767,32767,32767,210,32767,
32767,32767,32767,32767,194,32767,32767,32767,32767,32767,32767,32767,
32767,75,32767,32767,32767,32767,311,32767,32767,32767,32767,32767,
32767,32767,18,32767,32767,118,32767,87,32767,303,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,441,32767,32767,32767,365,32767,
32767,32767,32767,32767,32767,32767,32767,32767,55,182,32767,32767,
32767,32767,175,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,447,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,192,32767,32767,32767,32767,32767,
32767,32767,32767,226,32767,32767,32767,32767,32767,37,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,418,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,415,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,395,32767,32767,32767,32767,32767,32767,480,32767,32767,
129,32767,32767,32767,32767,32767,319,32767,32767,32767,32767,32767,
32767,32767,32767,254,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,26,125,32767,32767,32767,427,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,376,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,295,32767,101,173,32767,32767,32767,
331,32767,32767,32767,32767,32767,454,32767,32767,31,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,34,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,46,32767,32767,32767,32767,32767,74,32767,32767,32767,32767,
32767,32767,32767,159,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,236,32767,32767,32767,450,32767,437,32767,
32767,32767,32767,32767,32767,32767,32767,32767,99,32767,32767,32767,
202,341,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,471,32767,
32767,32767,32767,32767,32767,382,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,292,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
291,32767,32767,32767,32767,32767,32767,32767,32767,307,32767,32767,
32767,472,32767,318,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
434,32767,32767,32767,444,32767,32767,32767,32767,32767,32767,32767,
32767,157,32767,32767,32767,32767,185,32767,32767,337,32767,32767,
2,32767,32767,32767,32767,32767,32767,32767,162,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,301,32767,53,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,62,
32767,32767,32767,32767,32767,32767,32767,32767,32767,407,209,32767,
32767,32767,32767,191,32767,32767,32767,32767,32767,32767,32767,412,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,258,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,234,
32767,32767,32767,32767,97,32767,32767,369,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,49,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,416,32767,61,32767,32767,32767,171,32767,314,
32767,32767,22,32767,32767,32767,168,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,456,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,67,32767,32767,32767,32767,32767,32767,32767,32767,32767,130,
32767,32767,32767,32767,32767,32767,32767,32767,304,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,104,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,438,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,205,140,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,177,32767,32767,32767,32767,213,32767,32767,32767,
32767,137,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,199,32767,32767,32767,32767,457,121,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,27,
32767,399,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,83,32767,32767,32767,
316,306,32767,32767,32767,32767,32767,32767,425,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,346,
32767,163,32767,32767,32767,32767,32767,112,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,214,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,224,32767,32767,352,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,343,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,66,
154,32767,32767,32767,32767,32767,32767,32767,350,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,288,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,262,235,32767,32767,300,
32767,72,32767,32767,32767,32767,32767,32767,32767,32767,32767,203,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,85,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,315,32767,32767,32767,32767,32767,
32767,32767,32767,32767,108,32767,32767,32767,32767,32767,32767,32767,
32767,309,218,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,357,32767,32767,32767,32767,32767,
32767,32767,21,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,432,32767,32767,338,32767,32767,32767,32767,32767,413,32767,
32767,32767,32767,111,32767,32767,32767,32767,32767,32767,32767,32767,
32767,207,32767,32767,32767,32767,32767,32767,32767,32767,320,32767,
32767,281,145,32767,241,32767,32767,32767,32767,32767,32767,32767,
105,32767,32767,32767,32767,32767,32767,131,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,190,32767,32767,32767,32767,32767,32767,32767,
32767,32767,449,32767,32767,32767,32767,32767,32767,32767,32767,176,
32767,32767,32767,216,32767,32767,32767,32767,95,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,339,397,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,282,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,473,32767,32767,32767,32767,32767,32767,467,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,63,482,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,348,32767,
32767,32767,10,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,243,32767,32767,32767,32767,
227,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,79,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,167,228,32767,
25,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,289,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,478,4,
32767,32767,32767,32767,58,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,313,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,13,32767,32767,32767,
32767,32767,189,32767,221,32767,32767,32767,32767,32767,32767,32767,
32767,32767,81,32767,32767,32767,32767,32767,0,32767,32767,32767,
32767,32767,359,32767,98,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,60,
32767,32767,32767,32767,208,409,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,57,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,123,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,133,115,32767,32767,
32767,32767,32767,32767,32767,305,32767,32767,32767,32767,32767,32767,
265,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,114,463,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,358,32767,32767,439,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,420,201,
32767,32767,32767,32767,32767,32767,32767,32767,32767,466,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
64,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,20,32767,32767,429,32767,32767,32767,476,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,138,
32767,198,32767,32767,32767,32767,107,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,1,32767,
32767,32767,32767,32767,94,32767,32767,32767,32767,377,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,82,32767,408,
32767,269,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,402,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
410,32767,391,32767,32767,32767,32767,32767,32767,32767,374,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,411,417,
32767,32767,32767,32767,32767,32767,32767,32767,317,394,32767,32767,
435,32767,32767,32767,32767,32767,380,32767,32767,461,32767,32767,
239,32767,32767,32767,166,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,483,32767,230,32767,32767,32767,
32767,32767,32767,32767,212,32767,32767,5,32767,32767,32767,32767,
32767,12,32767,32767,32767,32767,32767,184,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
204,32767,32767,32767,32767,32767,32767,32767,32767,32767,178,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,119,32767,32767,32767,32767,32767,32767,32767,32767,32767,256,
32767,32767,32767,32767,32767,32767,32767,32767,32767,267,32767,50,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,328,32767,
32767,32767,32767,32767,3,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
92,32767,32767,448,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,465,32767,32767,
462,32767,32767,32767,32767,32767,32767,32767,32767,96,387,32767,
340,272,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,30,32767,32767,32767,32767,32767,32767,32767,146,32767,32767,
32767,32767,32767,32767,32767,371,32767,32767,32767,32767,32767,386,
32767,32767,32767,32767,32767,332,32767,32767,32767,32767,32767,32767,
32767,32767,102,325,32767,32767,32767,32767,32767,32767,32767,32767,
247,144,32767,32767,32767,32767,32767,32767,193,32767,278,32767,
423,32767,32767,195,32767,32767,32767,32767,32767,32767,32767,312,
158,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,23,
424,32767,32767,250,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,169,32767,109,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,404,32767,
32767,32767,32767,32767,32767,32767,32767,32767,32767,32767,32767
};


/* start_value=0L;  best_t1=654916L;  best_t2=1723390L;  best_type=3; */ /* mode=4943  add=1  type: 0 */

inline SYMBOL *get_hash_symbol(const char *s,unsigned int length,bool function)
{
  ulong idx = 2925024+char_table[(uchar) *s];
  SYMBOL *sim;
  const char *start=s;
  int i=unique_length[(uchar) *s++];
  if (i > (int) length) i=(int) length;
  while (--i > 0)
    idx= (idx ^ (char_table[(uchar) *s++] + (idx << 1)));
  idx=my_function_table[(idx & 8388607) % 4943];
  if (idx >= 345)
  {
    if (!function || idx >= 32767) return (SYMBOL*) 0;
    sim=sql_functions + (idx - 345);
  }
  else
    sim=symbols + idx;
  if ((length != sim->length) || lex_casecmp(start,sim->name,length))
    return  (SYMBOL *)0;
  return sim;
}
