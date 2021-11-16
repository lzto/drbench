/* A Bison parser, made from sql_yacc.yy, by GNU bison 1.75.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON	1

/* Pure parsers.  */
#define YYPURE	1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END_OF_INPUT = 258,
     CLOSE_SYM = 259,
     HANDLER_SYM = 260,
     LAST_SYM = 261,
     NEXT_SYM = 262,
     PREV_SYM = 263,
     DIV_SYM = 264,
     EQ = 265,
     EQUAL_SYM = 266,
     SOUNDS_SYM = 267,
     GE = 268,
     GT_SYM = 269,
     LE = 270,
     LT = 271,
     NE = 272,
     IS = 273,
     MOD_SYM = 274,
     SHIFT_LEFT = 275,
     SHIFT_RIGHT = 276,
     SET_VAR = 277,
     ABORT_SYM = 278,
     ADD = 279,
     AFTER_SYM = 280,
     ALTER = 281,
     ANALYZE_SYM = 282,
     ANY_SYM = 283,
     AVG_SYM = 284,
     BEGIN_SYM = 285,
     BINLOG_SYM = 286,
     CHANGE = 287,
     CLIENT_SYM = 288,
     COMMENT_SYM = 289,
     COMMIT_SYM = 290,
     COUNT_SYM = 291,
     CREATE = 292,
     CROSS = 293,
     CUBE_SYM = 294,
     DELETE_SYM = 295,
     DUAL_SYM = 296,
     DO_SYM = 297,
     DROP = 298,
     EVENTS_SYM = 299,
     EXECUTE_SYM = 300,
     EXPANSION_SYM = 301,
     FLUSH_SYM = 302,
     HELP_SYM = 303,
     INSERT = 304,
     RELAY_THREAD = 305,
     KILL_SYM = 306,
     LOAD = 307,
     LOCKS_SYM = 308,
     LOCK_SYM = 309,
     MASTER_SYM = 310,
     MAX_SYM = 311,
     MIN_SYM = 312,
     NONE_SYM = 313,
     OPTIMIZE = 314,
     PURGE = 315,
     REPAIR = 316,
     REPLICATION = 317,
     RESET_SYM = 318,
     ROLLBACK_SYM = 319,
     ROLLUP_SYM = 320,
     SAVEPOINT_SYM = 321,
     SELECT_SYM = 322,
     SHOW = 323,
     SLAVE = 324,
     SQL_THREAD = 325,
     START_SYM = 326,
     STD_SYM = 327,
     VARIANCE_SYM = 328,
     STOP_SYM = 329,
     SUM_SYM = 330,
     ADDDATE_SYM = 331,
     SUPER_SYM = 332,
     TRUNCATE_SYM = 333,
     UNLOCK_SYM = 334,
     UNTIL_SYM = 335,
     UPDATE_SYM = 336,
     ACTION = 337,
     AGGREGATE_SYM = 338,
     ALL = 339,
     AND = 340,
     AS = 341,
     ASC = 342,
     AUTO_INC = 343,
     AVG_ROW_LENGTH = 344,
     BACKUP_SYM = 345,
     BERKELEY_DB_SYM = 346,
     BINARY = 347,
     BIT_SYM = 348,
     BOOL_SYM = 349,
     BOOLEAN_SYM = 350,
     BOTH = 351,
     BTREE_SYM = 352,
     BY = 353,
     BYTE_SYM = 354,
     CACHE_SYM = 355,
     CASCADE = 356,
     CAST_SYM = 357,
     CHARSET = 358,
     CHECKSUM_SYM = 359,
     CHECK_SYM = 360,
     COMMITTED_SYM = 361,
     COLLATE_SYM = 362,
     COLLATION_SYM = 363,
     COLUMNS = 364,
     COLUMN_SYM = 365,
     CONCURRENT = 366,
     CONSTRAINT = 367,
     CONVERT_SYM = 368,
     DATABASES = 369,
     DATA_SYM = 370,
     DEFAULT = 371,
     DELAYED_SYM = 372,
     DELAY_KEY_WRITE_SYM = 373,
     DESC = 374,
     DESCRIBE = 375,
     DES_KEY_FILE = 376,
     DISABLE_SYM = 377,
     DISCARD = 378,
     DISTINCT = 379,
     DUPLICATE_SYM = 380,
     DYNAMIC_SYM = 381,
     ENABLE_SYM = 382,
     ENCLOSED = 383,
     ESCAPED = 384,
     DIRECTORY_SYM = 385,
     ESCAPE_SYM = 386,
     EXISTS = 387,
     EXTENDED_SYM = 388,
     FALSE_SYM = 389,
     FILE_SYM = 390,
     FIRST_SYM = 391,
     FIXED_SYM = 392,
     FLOAT_NUM = 393,
     FORCE_SYM = 394,
     FOREIGN = 395,
     FROM = 396,
     FULL = 397,
     FULLTEXT_SYM = 398,
     GLOBAL_SYM = 399,
     GRANT = 400,
     GRANTS = 401,
     GREATEST_SYM = 402,
     GROUP = 403,
     HAVING = 404,
     HASH_SYM = 405,
     HEAP_SYM = 406,
     HEX_NUM = 407,
     HIGH_PRIORITY = 408,
     HOSTS_SYM = 409,
     IDENT = 410,
     IDENT_QUOTED = 411,
     IGNORE_SYM = 412,
     IMPORT = 413,
     INDEX = 414,
     INDEXES = 415,
     INFILE = 416,
     INNER_SYM = 417,
     INNOBASE_SYM = 418,
     INTO = 419,
     IN_SYM = 420,
     ISOLATION = 421,
     ISAM_SYM = 422,
     JOIN_SYM = 423,
     KEYS = 424,
     KEY_SYM = 425,
     LEADING = 426,
     LEAST_SYM = 427,
     LEAVES = 428,
     LEVEL_SYM = 429,
     LEX_HOSTNAME = 430,
     LIKE = 431,
     LINES = 432,
     LOCAL_SYM = 433,
     LOG_SYM = 434,
     LOGS_SYM = 435,
     LONG_NUM = 436,
     LONG_SYM = 437,
     LOW_PRIORITY = 438,
     MASTER_HOST_SYM = 439,
     MASTER_USER_SYM = 440,
     MASTER_LOG_FILE_SYM = 441,
     MASTER_LOG_POS_SYM = 442,
     MASTER_PASSWORD_SYM = 443,
     MASTER_PORT_SYM = 444,
     MASTER_CONNECT_RETRY_SYM = 445,
     MASTER_SERVER_ID_SYM = 446,
     MASTER_SSL_SYM = 447,
     MASTER_SSL_CA_SYM = 448,
     MASTER_SSL_CAPATH_SYM = 449,
     MASTER_SSL_CERT_SYM = 450,
     MASTER_SSL_CIPHER_SYM = 451,
     MASTER_SSL_KEY_SYM = 452,
     RELAY_LOG_FILE_SYM = 453,
     RELAY_LOG_POS_SYM = 454,
     MATCH = 455,
     MAX_ROWS = 456,
     MAX_CONNECTIONS_PER_HOUR = 457,
     MAX_QUERIES_PER_HOUR = 458,
     MAX_UPDATES_PER_HOUR = 459,
     MEDIUM_SYM = 460,
     MERGE_SYM = 461,
     MEMORY_SYM = 462,
     MIN_ROWS = 463,
     MYISAM_SYM = 464,
     NAMES_SYM = 465,
     NATIONAL_SYM = 466,
     NATURAL = 467,
     NEW_SYM = 468,
     NCHAR_SYM = 469,
     NCHAR_STRING = 470,
     NVARCHAR_SYM = 471,
     NOT = 472,
     NO_SYM = 473,
     NULL_SYM = 474,
     NUM = 475,
     OFFSET_SYM = 476,
     ON = 477,
     OPEN_SYM = 478,
     OPTION = 479,
     OPTIONALLY = 480,
     OR = 481,
     OR_OR_CONCAT = 482,
     ORDER_SYM = 483,
     OUTER = 484,
     OUTFILE = 485,
     DUMPFILE = 486,
     PACK_KEYS_SYM = 487,
     PARTIAL = 488,
     PRIMARY_SYM = 489,
     PRIVILEGES = 490,
     PROCESS = 491,
     PROCESSLIST_SYM = 492,
     QUERY_SYM = 493,
     RAID_0_SYM = 494,
     RAID_STRIPED_SYM = 495,
     RAID_TYPE = 496,
     RAID_CHUNKS = 497,
     RAID_CHUNKSIZE = 498,
     READ_SYM = 499,
     REAL_NUM = 500,
     REFERENCES = 501,
     REGEXP = 502,
     RELOAD = 503,
     RENAME = 504,
     REPEATABLE_SYM = 505,
     REQUIRE_SYM = 506,
     RESOURCES = 507,
     RESTORE_SYM = 508,
     RESTRICT = 509,
     REVOKE = 510,
     ROWS_SYM = 511,
     ROW_FORMAT_SYM = 512,
     ROW_SYM = 513,
     RTREE_SYM = 514,
     SET = 515,
     SEPARATOR_SYM = 516,
     SERIAL_SYM = 517,
     SERIALIZABLE_SYM = 518,
     SESSION_SYM = 519,
     SIMPLE_SYM = 520,
     SHUTDOWN = 521,
     SPATIAL_SYM = 522,
     SSL_SYM = 523,
     STARTING = 524,
     STATUS_SYM = 525,
     STRAIGHT_JOIN = 526,
     SUBJECT_SYM = 527,
     TABLES = 528,
     TABLE_SYM = 529,
     TABLESPACE = 530,
     TEMPORARY = 531,
     TERMINATED = 532,
     TEXT_STRING = 533,
     TO_SYM = 534,
     TRAILING = 535,
     TRANSACTION_SYM = 536,
     TRUE_SYM = 537,
     TYPE_SYM = 538,
     TYPES_SYM = 539,
     FUNC_ARG0 = 540,
     FUNC_ARG1 = 541,
     FUNC_ARG2 = 542,
     FUNC_ARG3 = 543,
     UDF_RETURNS_SYM = 544,
     UDF_SONAME_SYM = 545,
     UDF_SYM = 546,
     UNCOMMITTED_SYM = 547,
     UNDERSCORE_CHARSET = 548,
     UNICODE_SYM = 549,
     UNION_SYM = 550,
     UNIQUE_SYM = 551,
     USAGE = 552,
     USE_FRM = 553,
     USE_SYM = 554,
     USING = 555,
     VALUE_SYM = 556,
     VALUES = 557,
     VARIABLES = 558,
     WHERE = 559,
     WITH = 560,
     WRITE_SYM = 561,
     NO_WRITE_TO_BINLOG = 562,
     X509_SYM = 563,
     XOR = 564,
     COMPRESSED_SYM = 565,
     ERRORS = 566,
     WARNINGS = 567,
     ASCII_SYM = 568,
     BIGINT = 569,
     BLOB_SYM = 570,
     CHAR_SYM = 571,
     CHANGED = 572,
     COALESCE = 573,
     DATETIME = 574,
     DATE_SYM = 575,
     DECIMAL_SYM = 576,
     DOUBLE_SYM = 577,
     ENUM = 578,
     FAST_SYM = 579,
     FLOAT_SYM = 580,
     GEOMETRY_SYM = 581,
     INT_SYM = 582,
     LIMIT = 583,
     LONGBLOB = 584,
     LONGTEXT = 585,
     MEDIUMBLOB = 586,
     MEDIUMINT = 587,
     MEDIUMTEXT = 588,
     NUMERIC_SYM = 589,
     PRECISION = 590,
     QUICK = 591,
     REAL = 592,
     SIGNED_SYM = 593,
     SMALLINT = 594,
     STRING_SYM = 595,
     TEXT_SYM = 596,
     TIMESTAMP = 597,
     TIME_SYM = 598,
     TINYBLOB = 599,
     TINYINT = 600,
     TINYTEXT = 601,
     ULONGLONG_NUM = 602,
     UNSIGNED = 603,
     VARBINARY = 604,
     VARCHAR = 605,
     VARYING = 606,
     ZEROFILL = 607,
     AGAINST = 608,
     ATAN = 609,
     BETWEEN_SYM = 610,
     BIT_AND = 611,
     BIT_OR = 612,
     BIT_XOR = 613,
     CASE_SYM = 614,
     CONCAT = 615,
     CONCAT_WS = 616,
     CURDATE = 617,
     CURTIME = 618,
     DATABASE = 619,
     DATE_ADD_INTERVAL = 620,
     DATE_SUB_INTERVAL = 621,
     DAY_HOUR_SYM = 622,
     DAY_MICROSECOND_SYM = 623,
     DAY_MINUTE_SYM = 624,
     DAY_SECOND_SYM = 625,
     DAY_SYM = 626,
     DECODE_SYM = 627,
     DES_ENCRYPT_SYM = 628,
     DES_DECRYPT_SYM = 629,
     ELSE = 630,
     ELT_FUNC = 631,
     ENCODE_SYM = 632,
     ENCRYPT = 633,
     EXPORT_SET = 634,
     EXTRACT_SYM = 635,
     FIELD_FUNC = 636,
     FORMAT_SYM = 637,
     FOR_SYM = 638,
     FROM_UNIXTIME = 639,
     GEOMCOLLFROMTEXT = 640,
     GEOMFROMTEXT = 641,
     GEOMFROMWKB = 642,
     GEOMETRYCOLLECTION = 643,
     GROUP_CONCAT_SYM = 644,
     GROUP_UNIQUE_USERS = 645,
     GET_FORMAT = 646,
     HOUR_MICROSECOND_SYM = 647,
     HOUR_MINUTE_SYM = 648,
     HOUR_SECOND_SYM = 649,
     HOUR_SYM = 650,
     IDENTIFIED_SYM = 651,
     IF = 652,
     INSERT_METHOD = 653,
     INTERVAL_SYM = 654,
     LAST_INSERT_ID = 655,
     LEFT = 656,
     LINEFROMTEXT = 657,
     LINESTRING = 658,
     LOCATE = 659,
     MAKE_SET_SYM = 660,
     MASTER_POS_WAIT = 661,
     MICROSECOND_SYM = 662,
     MINUTE_MICROSECOND_SYM = 663,
     MINUTE_SECOND_SYM = 664,
     MINUTE_SYM = 665,
     MODE_SYM = 666,
     MODIFY_SYM = 667,
     MONTH_SYM = 668,
     MLINEFROMTEXT = 669,
     MPOINTFROMTEXT = 670,
     MPOLYFROMTEXT = 671,
     MULTILINESTRING = 672,
     MULTIPOINT = 673,
     MULTIPOLYGON = 674,
     NOW_SYM = 675,
     OLD_PASSWORD = 676,
     PASSWORD = 677,
     POINTFROMTEXT = 678,
     POINT_SYM = 679,
     POLYFROMTEXT = 680,
     POLYGON = 681,
     POSITION_SYM = 682,
     PROCEDURE = 683,
     RAND = 684,
     REPLACE = 685,
     RIGHT = 686,
     ROUND = 687,
     SECOND_SYM = 688,
     SECOND_MICROSECOND_SYM = 689,
     SHARE_SYM = 690,
     SUBDATE_SYM = 691,
     SUBSTRING = 692,
     SUBSTRING_INDEX = 693,
     TRIM = 694,
     UDA_CHAR_SUM = 695,
     UDA_FLOAT_SUM = 696,
     UDA_INT_SUM = 697,
     UDF_CHAR_FUNC = 698,
     UDF_FLOAT_FUNC = 699,
     UDF_INT_FUNC = 700,
     UNIQUE_USERS = 701,
     UNIX_TIMESTAMP = 702,
     USER = 703,
     UTC_DATE_SYM = 704,
     UTC_TIME_SYM = 705,
     UTC_TIMESTAMP_SYM = 706,
     WEEK_SYM = 707,
     WHEN_SYM = 708,
     WORK_SYM = 709,
     YEAR_MONTH_SYM = 710,
     YEAR_SYM = 711,
     YEARWEEK = 712,
     BENCHMARK_SYM = 713,
     END = 714,
     THEN_SYM = 715,
     SQL_BIG_RESULT = 716,
     SQL_CACHE_SYM = 717,
     SQL_CALC_FOUND_ROWS = 718,
     SQL_NO_CACHE_SYM = 719,
     SQL_SMALL_RESULT = 720,
     SQL_BUFFER_RESULT = 721,
     ISSUER_SYM = 722,
     CIPHER_SYM = 723,
     BEFORE_SYM = 724,
     NEG = 725
   };
#endif
#define END_OF_INPUT 258
#define CLOSE_SYM 259
#define HANDLER_SYM 260
#define LAST_SYM 261
#define NEXT_SYM 262
#define PREV_SYM 263
#define DIV_SYM 264
#define EQ 265
#define EQUAL_SYM 266
#define SOUNDS_SYM 267
#define GE 268
#define GT_SYM 269
#define LE 270
#define LT 271
#define NE 272
#define IS 273
#define MOD_SYM 274
#define SHIFT_LEFT 275
#define SHIFT_RIGHT 276
#define SET_VAR 277
#define ABORT_SYM 278
#define ADD 279
#define AFTER_SYM 280
#define ALTER 281
#define ANALYZE_SYM 282
#define ANY_SYM 283
#define AVG_SYM 284
#define BEGIN_SYM 285
#define BINLOG_SYM 286
#define CHANGE 287
#define CLIENT_SYM 288
#define COMMENT_SYM 289
#define COMMIT_SYM 290
#define COUNT_SYM 291
#define CREATE 292
#define CROSS 293
#define CUBE_SYM 294
#define DELETE_SYM 295
#define DUAL_SYM 296
#define DO_SYM 297
#define DROP 298
#define EVENTS_SYM 299
#define EXECUTE_SYM 300
#define EXPANSION_SYM 301
#define FLUSH_SYM 302
#define HELP_SYM 303
#define INSERT 304
#define RELAY_THREAD 305
#define KILL_SYM 306
#define LOAD 307
#define LOCKS_SYM 308
#define LOCK_SYM 309
#define MASTER_SYM 310
#define MAX_SYM 311
#define MIN_SYM 312
#define NONE_SYM 313
#define OPTIMIZE 314
#define PURGE 315
#define REPAIR 316
#define REPLICATION 317
#define RESET_SYM 318
#define ROLLBACK_SYM 319
#define ROLLUP_SYM 320
#define SAVEPOINT_SYM 321
#define SELECT_SYM 322
#define SHOW 323
#define SLAVE 324
#define SQL_THREAD 325
#define START_SYM 326
#define STD_SYM 327
#define VARIANCE_SYM 328
#define STOP_SYM 329
#define SUM_SYM 330
#define ADDDATE_SYM 331
#define SUPER_SYM 332
#define TRUNCATE_SYM 333
#define UNLOCK_SYM 334
#define UNTIL_SYM 335
#define UPDATE_SYM 336
#define ACTION 337
#define AGGREGATE_SYM 338
#define ALL 339
#define AND 340
#define AS 341
#define ASC 342
#define AUTO_INC 343
#define AVG_ROW_LENGTH 344
#define BACKUP_SYM 345
#define BERKELEY_DB_SYM 346
#define BINARY 347
#define BIT_SYM 348
#define BOOL_SYM 349
#define BOOLEAN_SYM 350
#define BOTH 351
#define BTREE_SYM 352
#define BY 353
#define BYTE_SYM 354
#define CACHE_SYM 355
#define CASCADE 356
#define CAST_SYM 357
#define CHARSET 358
#define CHECKSUM_SYM 359
#define CHECK_SYM 360
#define COMMITTED_SYM 361
#define COLLATE_SYM 362
#define COLLATION_SYM 363
#define COLUMNS 364
#define COLUMN_SYM 365
#define CONCURRENT 366
#define CONSTRAINT 367
#define CONVERT_SYM 368
#define DATABASES 369
#define DATA_SYM 370
#define DEFAULT 371
#define DELAYED_SYM 372
#define DELAY_KEY_WRITE_SYM 373
#define DESC 374
#define DESCRIBE 375
#define DES_KEY_FILE 376
#define DISABLE_SYM 377
#define DISCARD 378
#define DISTINCT 379
#define DUPLICATE_SYM 380
#define DYNAMIC_SYM 381
#define ENABLE_SYM 382
#define ENCLOSED 383
#define ESCAPED 384
#define DIRECTORY_SYM 385
#define ESCAPE_SYM 386
#define EXISTS 387
#define EXTENDED_SYM 388
#define FALSE_SYM 389
#define FILE_SYM 390
#define FIRST_SYM 391
#define FIXED_SYM 392
#define FLOAT_NUM 393
#define FORCE_SYM 394
#define FOREIGN 395
#define FROM 396
#define FULL 397
#define FULLTEXT_SYM 398
#define GLOBAL_SYM 399
#define GRANT 400
#define GRANTS 401
#define GREATEST_SYM 402
#define GROUP 403
#define HAVING 404
#define HASH_SYM 405
#define HEAP_SYM 406
#define HEX_NUM 407
#define HIGH_PRIORITY 408
#define HOSTS_SYM 409
#define IDENT 410
#define IDENT_QUOTED 411
#define IGNORE_SYM 412
#define IMPORT 413
#define INDEX 414
#define INDEXES 415
#define INFILE 416
#define INNER_SYM 417
#define INNOBASE_SYM 418
#define INTO 419
#define IN_SYM 420
#define ISOLATION 421
#define ISAM_SYM 422
#define JOIN_SYM 423
#define KEYS 424
#define KEY_SYM 425
#define LEADING 426
#define LEAST_SYM 427
#define LEAVES 428
#define LEVEL_SYM 429
#define LEX_HOSTNAME 430
#define LIKE 431
#define LINES 432
#define LOCAL_SYM 433
#define LOG_SYM 434
#define LOGS_SYM 435
#define LONG_NUM 436
#define LONG_SYM 437
#define LOW_PRIORITY 438
#define MASTER_HOST_SYM 439
#define MASTER_USER_SYM 440
#define MASTER_LOG_FILE_SYM 441
#define MASTER_LOG_POS_SYM 442
#define MASTER_PASSWORD_SYM 443
#define MASTER_PORT_SYM 444
#define MASTER_CONNECT_RETRY_SYM 445
#define MASTER_SERVER_ID_SYM 446
#define MASTER_SSL_SYM 447
#define MASTER_SSL_CA_SYM 448
#define MASTER_SSL_CAPATH_SYM 449
#define MASTER_SSL_CERT_SYM 450
#define MASTER_SSL_CIPHER_SYM 451
#define MASTER_SSL_KEY_SYM 452
#define RELAY_LOG_FILE_SYM 453
#define RELAY_LOG_POS_SYM 454
#define MATCH 455
#define MAX_ROWS 456
#define MAX_CONNECTIONS_PER_HOUR 457
#define MAX_QUERIES_PER_HOUR 458
#define MAX_UPDATES_PER_HOUR 459
#define MEDIUM_SYM 460
#define MERGE_SYM 461
#define MEMORY_SYM 462
#define MIN_ROWS 463
#define MYISAM_SYM 464
#define NAMES_SYM 465
#define NATIONAL_SYM 466
#define NATURAL 467
#define NEW_SYM 468
#define NCHAR_SYM 469
#define NCHAR_STRING 470
#define NVARCHAR_SYM 471
#define NOT 472
#define NO_SYM 473
#define NULL_SYM 474
#define NUM 475
#define OFFSET_SYM 476
#define ON 477
#define OPEN_SYM 478
#define OPTION 479
#define OPTIONALLY 480
#define OR 481
#define OR_OR_CONCAT 482
#define ORDER_SYM 483
#define OUTER 484
#define OUTFILE 485
#define DUMPFILE 486
#define PACK_KEYS_SYM 487
#define PARTIAL 488
#define PRIMARY_SYM 489
#define PRIVILEGES 490
#define PROCESS 491
#define PROCESSLIST_SYM 492
#define QUERY_SYM 493
#define RAID_0_SYM 494
#define RAID_STRIPED_SYM 495
#define RAID_TYPE 496
#define RAID_CHUNKS 497
#define RAID_CHUNKSIZE 498
#define READ_SYM 499
#define REAL_NUM 500
#define REFERENCES 501
#define REGEXP 502
#define RELOAD 503
#define RENAME 504
#define REPEATABLE_SYM 505
#define REQUIRE_SYM 506
#define RESOURCES 507
#define RESTORE_SYM 508
#define RESTRICT 509
#define REVOKE 510
#define ROWS_SYM 511
#define ROW_FORMAT_SYM 512
#define ROW_SYM 513
#define RTREE_SYM 514
#define SET 515
#define SEPARATOR_SYM 516
#define SERIAL_SYM 517
#define SERIALIZABLE_SYM 518
#define SESSION_SYM 519
#define SIMPLE_SYM 520
#define SHUTDOWN 521
#define SPATIAL_SYM 522
#define SSL_SYM 523
#define STARTING 524
#define STATUS_SYM 525
#define STRAIGHT_JOIN 526
#define SUBJECT_SYM 527
#define TABLES 528
#define TABLE_SYM 529
#define TABLESPACE 530
#define TEMPORARY 531
#define TERMINATED 532
#define TEXT_STRING 533
#define TO_SYM 534
#define TRAILING 535
#define TRANSACTION_SYM 536
#define TRUE_SYM 537
#define TYPE_SYM 538
#define TYPES_SYM 539
#define FUNC_ARG0 540
#define FUNC_ARG1 541
#define FUNC_ARG2 542
#define FUNC_ARG3 543
#define UDF_RETURNS_SYM 544
#define UDF_SONAME_SYM 545
#define UDF_SYM 546
#define UNCOMMITTED_SYM 547
#define UNDERSCORE_CHARSET 548
#define UNICODE_SYM 549
#define UNION_SYM 550
#define UNIQUE_SYM 551
#define USAGE 552
#define USE_FRM 553
#define USE_SYM 554
#define USING 555
#define VALUE_SYM 556
#define VALUES 557
#define VARIABLES 558
#define WHERE 559
#define WITH 560
#define WRITE_SYM 561
#define NO_WRITE_TO_BINLOG 562
#define X509_SYM 563
#define XOR 564
#define COMPRESSED_SYM 565
#define ERRORS 566
#define WARNINGS 567
#define ASCII_SYM 568
#define BIGINT 569
#define BLOB_SYM 570
#define CHAR_SYM 571
#define CHANGED 572
#define COALESCE 573
#define DATETIME 574
#define DATE_SYM 575
#define DECIMAL_SYM 576
#define DOUBLE_SYM 577
#define ENUM 578
#define FAST_SYM 579
#define FLOAT_SYM 580
#define GEOMETRY_SYM 581
#define INT_SYM 582
#define LIMIT 583
#define LONGBLOB 584
#define LONGTEXT 585
#define MEDIUMBLOB 586
#define MEDIUMINT 587
#define MEDIUMTEXT 588
#define NUMERIC_SYM 589
#define PRECISION 590
#define QUICK 591
#define REAL 592
#define SIGNED_SYM 593
#define SMALLINT 594
#define STRING_SYM 595
#define TEXT_SYM 596
#define TIMESTAMP 597
#define TIME_SYM 598
#define TINYBLOB 599
#define TINYINT 600
#define TINYTEXT 601
#define ULONGLONG_NUM 602
#define UNSIGNED 603
#define VARBINARY 604
#define VARCHAR 605
#define VARYING 606
#define ZEROFILL 607
#define AGAINST 608
#define ATAN 609
#define BETWEEN_SYM 610
#define BIT_AND 611
#define BIT_OR 612
#define BIT_XOR 613
#define CASE_SYM 614
#define CONCAT 615
#define CONCAT_WS 616
#define CURDATE 617
#define CURTIME 618
#define DATABASE 619
#define DATE_ADD_INTERVAL 620
#define DATE_SUB_INTERVAL 621
#define DAY_HOUR_SYM 622
#define DAY_MICROSECOND_SYM 623
#define DAY_MINUTE_SYM 624
#define DAY_SECOND_SYM 625
#define DAY_SYM 626
#define DECODE_SYM 627
#define DES_ENCRYPT_SYM 628
#define DES_DECRYPT_SYM 629
#define ELSE 630
#define ELT_FUNC 631
#define ENCODE_SYM 632
#define ENCRYPT 633
#define EXPORT_SET 634
#define EXTRACT_SYM 635
#define FIELD_FUNC 636
#define FORMAT_SYM 637
#define FOR_SYM 638
#define FROM_UNIXTIME 639
#define GEOMCOLLFROMTEXT 640
#define GEOMFROMTEXT 641
#define GEOMFROMWKB 642
#define GEOMETRYCOLLECTION 643
#define GROUP_CONCAT_SYM 644
#define GROUP_UNIQUE_USERS 645
#define GET_FORMAT 646
#define HOUR_MICROSECOND_SYM 647
#define HOUR_MINUTE_SYM 648
#define HOUR_SECOND_SYM 649
#define HOUR_SYM 650
#define IDENTIFIED_SYM 651
#define IF 652
#define INSERT_METHOD 653
#define INTERVAL_SYM 654
#define LAST_INSERT_ID 655
#define LEFT 656
#define LINEFROMTEXT 657
#define LINESTRING 658
#define LOCATE 659
#define MAKE_SET_SYM 660
#define MASTER_POS_WAIT 661
#define MICROSECOND_SYM 662
#define MINUTE_MICROSECOND_SYM 663
#define MINUTE_SECOND_SYM 664
#define MINUTE_SYM 665
#define MODE_SYM 666
#define MODIFY_SYM 667
#define MONTH_SYM 668
#define MLINEFROMTEXT 669
#define MPOINTFROMTEXT 670
#define MPOLYFROMTEXT 671
#define MULTILINESTRING 672
#define MULTIPOINT 673
#define MULTIPOLYGON 674
#define NOW_SYM 675
#define OLD_PASSWORD 676
#define PASSWORD 677
#define POINTFROMTEXT 678
#define POINT_SYM 679
#define POLYFROMTEXT 680
#define POLYGON 681
#define POSITION_SYM 682
#define PROCEDURE 683
#define RAND 684
#define REPLACE 685
#define RIGHT 686
#define ROUND 687
#define SECOND_SYM 688
#define SECOND_MICROSECOND_SYM 689
#define SHARE_SYM 690
#define SUBDATE_SYM 691
#define SUBSTRING 692
#define SUBSTRING_INDEX 693
#define TRIM 694
#define UDA_CHAR_SUM 695
#define UDA_FLOAT_SUM 696
#define UDA_INT_SUM 697
#define UDF_CHAR_FUNC 698
#define UDF_FLOAT_FUNC 699
#define UDF_INT_FUNC 700
#define UNIQUE_USERS 701
#define UNIX_TIMESTAMP 702
#define USER 703
#define UTC_DATE_SYM 704
#define UTC_TIME_SYM 705
#define UTC_TIMESTAMP_SYM 706
#define WEEK_SYM 707
#define WHEN_SYM 708
#define WORK_SYM 709
#define YEAR_MONTH_SYM 710
#define YEAR_SYM 711
#define YEARWEEK 712
#define BENCHMARK_SYM 713
#define END 714
#define THEN_SYM 715
#define SQL_BIG_RESULT 716
#define SQL_CACHE_SYM 717
#define SQL_CALC_FOUND_ROWS 718
#define SQL_NO_CACHE_SYM 719
#define SQL_SMALL_RESULT 720
#define SQL_BUFFER_RESULT 721
#define ISSUER_SYM 722
#define CIPHER_SYM 723
#define BEFORE_SYM 724
#define NEG 725




/* Copy the first part of user declarations.  */
#line 19 "sql_yacc.yy"

/* thd is passed as an arg to yyparse(), and subsequently to yylex().
** The type will be void*, so it must be  cast to (THD*) when used.
** Use the YYTHD macro for this.
*/
#define YYPARSE_PARAM yythd
#define YYLEX_PARAM yythd
#define YYTHD ((THD *)yythd)

#define MYSQL_YACC
#define YYINITDEPTH 100
#define YYMAXDEPTH 3200				/* Because of 64K stack */
#define Lex (&(YYTHD->lex))
#define Select Lex->current_select
#include "mysql_priv.h"
#include "slave.h"
#include "sql_acl.h"
#include "lex_symbol.h"
#include "item_create.h"
#include <myisam.h>
#include <myisammrg.h>

int yylex(void *yylval, void *yythd);

#define yyoverflow(A,B,C,D,E,F) if (my_yyoverflow((B),(D),(int*) (F))) { yyerror((char*) (A)); return 2; }

inline Item *or_or_concat(THD *thd, Item* A, Item* B)
{
  return (thd->variables.sql_mode & MODE_PIPES_AS_CONCAT ?
          (Item*) new Item_func_concat(A,B) : (Item*) new Item_cond_or(A,B));
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#ifndef YYSTYPE
#line 52 "sql_yacc.yy"
typedef union {
  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  enum db_type db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
} yystype;
/* Line 193 of /usr/share/bison/yacc.c.  */
#line 1081 "y.tab.c"
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif

#ifndef YYLTYPE
typedef struct yyltype
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} yyltype;
# define YYLTYPE yyltype
# define YYLTYPE_IS_TRIVIAL 1
#endif

/* Copy the second part of user declarations.  */
#line 86 "sql_yacc.yy"

bool my_yyoverflow(short **a, YYSTYPE **b,int *yystacksize);


/* Line 213 of /usr/share/bison/yacc.c.  */
#line 1105 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];	\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  526
#define YYLAST   38587

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  489
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  457
/* YYNRULES -- Number of rules. */
#define YYNRULES  1613
/* YYNRULES -- Number of states. */
#define YYNSTATES  3010

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   725

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   483,     2,     2,     2,   476,   471,     2,
     480,   481,   474,   473,   482,   472,   486,   475,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   488,   487,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   479,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   484,   470,   485,   477,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   478
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    95,    96,   102,
     104,   108,   112,   116,   120,   124,   128,   132,   136,   140,
     144,   148,   152,   154,   158,   162,   166,   170,   171,   179,
     180,   192,   193,   200,   201,   211,   214,   217,   220,   225,
     230,   231,   236,   237,   238,   244,   245,   253,   254,   255,
     262,   263,   265,   266,   268,   270,   273,   277,   281,   282,
     284,   286,   289,   291,   292,   296,   297,   299,   301,   304,
     306,   309,   313,   317,   321,   325,   329,   333,   337,   341,
     345,   349,   353,   357,   361,   365,   369,   373,   379,   384,
     388,   393,   397,   401,   406,   411,   413,   415,   417,   419,
     421,   423,   425,   427,   429,   431,   433,   435,   437,   439,
     441,   443,   445,   447,   450,   453,   454,   456,   458,   460,
     462,   464,   468,   470,   472,   475,   478,   485,   494,   497,
     498,   501,   502,   505,   506,   511,   515,   519,   523,   526,
     528,   530,   536,   539,   544,   546,   551,   557,   562,   567,
     571,   573,   575,   577,   582,   584,   586,   589,   591,   593,
     595,   597,   599,   601,   603,   605,   607,   609,   612,   616,
     619,   623,   626,   629,   633,   637,   641,   642,   649,   650,
     657,   660,   662,   664,   666,   669,   672,   674,   677,   679,
     682,   686,   689,   691,   693,   695,   697,   699,   701,   703,
     706,   707,   711,   713,   719,   720,   722,   725,   727,   729,
     731,   733,   734,   738,   739,   741,   742,   744,   747,   749,
     751,   754,   757,   759,   763,   766,   768,   771,   774,   777,
     780,   782,   784,   786,   788,   790,   792,   794,   796,   798,
     800,   801,   804,   806,   808,   809,   811,   812,   814,   816,
     818,   820,   823,   824,   826,   827,   832,   834,   839,   843,
     845,   846,   848,   851,   853,   857,   861,   864,   867,   870,
     872,   874,   877,   880,   883,   887,   889,   891,   894,   896,
     899,   902,   906,   908,   910,   911,   913,   915,   917,   919,
     920,   922,   924,   926,   927,   930,   933,   935,   937,   939,
     944,   947,   949,   954,   955,   957,   958,   961,   963,   967,
     968,   975,   980,   981,   984,   987,   989,   993,   996,  1000,
    1003,  1008,  1009,  1016,  1017,  1018,  1027,  1032,  1036,  1041,
    1045,  1048,  1051,  1058,  1064,  1068,  1070,  1072,  1073,  1075,
    1076,  1078,  1079,  1081,  1083,  1084,  1087,  1089,  1090,  1092,
    1094,  1096,  1097,  1103,  1107,  1111,  1115,  1116,  1120,  1121,
    1124,  1126,  1130,  1131,  1133,  1135,  1136,  1139,  1141,  1145,
    1146,  1153,  1154,  1161,  1162,  1168,  1169,  1171,  1173,  1174,
    1181,  1182,  1184,  1186,  1189,  1191,  1193,  1195,  1196,  1203,
    1204,  1210,  1211,  1213,  1215,  1218,  1220,  1222,  1224,  1226,
    1228,  1229,  1236,  1237,  1239,  1241,  1242,  1247,  1249,  1253,
    1257,  1263,  1265,  1269,  1272,  1274,  1276,  1277,  1284,  1286,
    1290,  1294,  1295,  1298,  1299,  1304,  1305,  1308,  1310,  1313,
    1314,  1321,  1322,  1326,  1327,  1328,  1335,  1337,  1340,  1342,
    1344,  1347,  1350,  1359,  1360,  1362,  1365,  1367,  1369,  1371,
    1373,  1375,  1377,  1379,  1381,  1383,  1385,  1387,  1388,  1391,
    1396,  1400,  1402,  1404,  1409,  1410,  1411,  1413,  1415,  1416,
    1419,  1422,  1424,  1426,  1427,  1430,  1432,  1434,  1436,  1438,
    1440,  1442,  1444,  1446,  1448,  1450,  1456,  1463,  1467,  1472,
    1478,  1485,  1489,  1493,  1497,  1501,  1506,  1511,  1517,  1521,
    1526,  1530,  1535,  1539,  1543,  1548,  1552,  1556,  1560,  1564,
    1568,  1572,  1576,  1580,  1584,  1588,  1592,  1596,  1601,  1606,
    1612,  1619,  1623,  1627,  1631,  1635,  1640,  1645,  1651,  1655,
    1660,  1664,  1669,  1673,  1677,  1682,  1686,  1690,  1694,  1698,
    1702,  1706,  1710,  1714,  1718,  1722,  1726,  1730,  1735,  1740,
    1742,  1748,  1755,  1759,  1764,  1770,  1777,  1781,  1785,  1789,
    1794,  1799,  1805,  1809,  1814,  1818,  1823,  1827,  1831,  1836,
    1840,  1844,  1848,  1852,  1856,  1860,  1864,  1868,  1872,  1876,
    1880,  1884,  1889,  1894,  1896,  1899,  1901,  1905,  1907,  1909,
    1914,  1917,  1923,  1925,  1928,  1931,  1934,  1937,  1940,  1944,
    1950,  1957,  1960,  1962,  1967,  1975,  1980,  1983,  1990,  1997,
    2004,  2011,  2020,  2025,  2030,  2034,  2039,  2046,  2055,  2062,
    2071,  2076,  2083,  2088,  2093,  2098,  2103,  2108,  2115,  2118,
    2121,  2126,  2134,  2142,  2146,  2151,  2156,  2163,  2170,  2175,
    2182,  2189,  2196,  2201,  2208,  2213,  2220,  2229,  2240,  2253,
    2255,  2262,  2267,  2274,  2281,  2286,  2293,  2298,  2305,  2310,
    2317,  2322,  2331,  2342,  2347,  2349,  2353,  2358,  2365,  2370,
    2377,  2386,  2391,  2398,  2405,  2412,  2417,  2424,  2429,  2436,
    2443,  2452,  2457,  2462,  2469,  2474,  2479,  2484,  2491,  2496,
    2503,  2508,  2515,  2520,  2525,  2528,  2533,  2538,  2543,  2550,
    2555,  2562,  2567,  2574,  2579,  2586,  2591,  2595,  2604,  2611,
    2616,  2623,  2630,  2639,  2644,  2653,  2660,  2669,  2676,  2685,
    2690,  2695,  2702,  2707,  2715,  2723,  2731,  2738,  2745,  2752,
    2759,  2766,  2768,  2773,  2778,  2783,  2788,  2793,  2798,  2809,
    2813,  2818,  2822,  2825,  2828,  2831,  2836,  2843,  2848,  2853,
    2860,  2867,  2874,  2875,  2879,  2883,  2884,  2886,  2891,  2896,
    2901,  2906,  2912,  2917,  2918,  2919,  2927,  2938,  2943,  2948,
    2953,  2958,  2963,  2971,  2972,  2974,  2975,  2978,  2979,  2981,
    2982,  2986,  2987,  2989,  2993,  2996,  2998,  3001,  3003,  3006,
    3008,  3010,  3012,  3015,  3016,  3019,  3021,  3025,  3027,  3031,
    3032,  3035,  3037,  3041,  3042,  3044,  3045,  3048,  3049,  3052,
    3056,  3062,  3066,  3068,  3072,  3076,  3080,  3086,  3087,  3096,
    3104,  3105,  3116,  3123,  3131,  3132,  3143,  3150,  3155,  3157,
    3160,  3163,  3164,  3169,  3180,  3186,  3187,  3193,  3194,  3196,
    3197,  3200,  3203,  3206,  3207,  3213,  3214,  3216,  3220,  3222,
    3224,  3226,  3230,  3232,  3234,  3236,  3238,  3240,  3242,  3244,
    3246,  3248,  3250,  3252,  3254,  3256,  3258,  3260,  3262,  3264,
    3266,  3268,  3270,  3272,  3273,  3275,  3277,  3278,  3281,  3282,
    3284,  3285,  3288,  3289,  3290,  3294,  3297,  3298,  3299,  3304,
    3309,  3312,  3313,  3316,  3319,  3320,  3322,  3323,  3328,  3333,
    3336,  3337,  3339,  3341,  3342,  3344,  3345,  3347,  3350,  3352,
    3356,  3360,  3361,  3364,  3366,  3368,  3370,  3372,  3374,  3376,
    3378,  3380,  3382,  3384,  3385,  3386,  3393,  3394,  3396,  3400,
    3402,  3405,  3406,  3409,  3413,  3415,  3418,  3419,  3426,  3430,
    3433,  3434,  3438,  3445,  3446,  3453,  3458,  3462,  3463,  3468,
    3470,  3474,  3476,  3477,  3480,  3481,  3483,  3484,  3485,  3494,
    3495,  3496,  3497,  3505,  3506,  3508,  3510,  3512,  3514,  3516,
    3519,  3521,  3523,  3525,  3529,  3534,  3535,  3539,  3540,  3544,
    3547,  3551,  3553,  3556,  3559,  3560,  3564,  3565,  3571,  3575,
    3577,  3581,  3583,  3587,  3589,  3591,  3592,  3594,  3595,  3600,
    3601,  3603,  3607,  3609,  3611,  3613,  3614,  3615,  3622,  3623,
    3634,  3640,  3644,  3645,  3647,  3648,  3653,  3654,  3661,  3662,
    3668,  3669,  3676,  3678,  3682,  3686,  3692,  3693,  3696,  3697,
    3700,  3702,  3704,  3706,  3710,  3711,  3713,  3714,  3718,  3721,
    3725,  3730,  3735,  3742,  3759,  3762,  3765,  3766,  3773,  3778,
    3781,  3784,  3786,  3792,  3798,  3801,  3804,  3807,  3810,  3813,
    3817,  3820,  3823,  3826,  3828,  3832,  3837,  3841,  3844,  3847,
    3849,  3851,  3852,  3855,  3856,  3859,  3860,  3862,  3864,  3866,
    3867,  3870,  3871,  3874,  3875,  3880,  3881,  3886,  3888,  3890,
    3891,  3893,  3894,  3896,  3898,  3899,  3904,  3908,  3910,  3911,
    3915,  3920,  3923,  3925,  3927,  3929,  3931,  3933,  3935,  3937,
    3939,  3940,  3942,  3943,  3947,  3951,  3953,  3955,  3957,  3960,
    3961,  3965,  3969,  3972,  3975,  3978,  3981,  3982,  3998,  4004,
    4009,  4010,  4012,  4013,  4015,  4017,  4018,  4020,  4022,  4023,
    4026,  4029,  4031,  4035,  4040,  4044,  4048,  4049,  4052,  4055,
    4057,  4061,  4065,  4066,  4070,  4072,  4074,  4077,  4080,  4082,
    4084,  4086,  4088,  4090,  4092,  4094,  4096,  4098,  4100,  4102,
    4105,  4108,  4111,  4114,  4116,  4118,  4122,  4128,  4130,  4132,
    4136,  4141,  4147,  4149,  4153,  4156,  4158,  4162,  4165,  4167,
    4169,  4171,  4173,  4175,  4177,  4179,  4181,  4183,  4185,  4189,
    4191,  4193,  4195,  4197,  4199,  4201,  4203,  4205,  4207,  4209,
    4211,  4213,  4215,  4217,  4219,  4221,  4223,  4225,  4227,  4229,
    4231,  4233,  4235,  4237,  4239,  4241,  4243,  4245,  4247,  4249,
    4251,  4253,  4255,  4257,  4259,  4261,  4263,  4265,  4267,  4269,
    4271,  4273,  4275,  4277,  4279,  4281,  4283,  4285,  4287,  4289,
    4291,  4293,  4295,  4297,  4299,  4301,  4303,  4305,  4307,  4309,
    4311,  4313,  4315,  4317,  4319,  4321,  4323,  4325,  4327,  4329,
    4331,  4333,  4335,  4337,  4339,  4341,  4343,  4345,  4347,  4349,
    4351,  4353,  4355,  4357,  4359,  4361,  4363,  4365,  4367,  4369,
    4371,  4373,  4375,  4377,  4379,  4381,  4383,  4385,  4387,  4389,
    4391,  4393,  4395,  4397,  4399,  4401,  4403,  4405,  4407,  4409,
    4411,  4413,  4415,  4417,  4419,  4421,  4423,  4425,  4427,  4429,
    4431,  4433,  4435,  4437,  4439,  4441,  4443,  4445,  4447,  4449,
    4451,  4453,  4455,  4457,  4459,  4461,  4463,  4465,  4467,  4469,
    4471,  4473,  4475,  4477,  4479,  4481,  4483,  4485,  4487,  4489,
    4491,  4493,  4495,  4497,  4499,  4501,  4503,  4505,  4507,  4509,
    4511,  4513,  4515,  4517,  4519,  4521,  4523,  4525,  4527,  4529,
    4531,  4533,  4535,  4537,  4539,  4541,  4543,  4545,  4547,  4549,
    4551,  4553,  4555,  4557,  4559,  4561,  4563,  4565,  4567,  4569,
    4571,  4573,  4575,  4577,  4579,  4581,  4583,  4585,  4587,  4589,
    4591,  4593,  4595,  4596,  4601,  4602,  4604,  4607,  4612,  4613,
    4615,  4617,  4619,  4620,  4622,  4624,  4626,  4627,  4630,  4633,
    4636,  4641,  4645,  4652,  4657,  4660,  4664,  4668,  4674,  4676,
    4680,  4684,  4687,  4690,  4693,  4695,  4697,  4702,  4707,  4709,
    4711,  4713,  4715,  4717,  4718,  4723,  4725,  4727,  4729,  4733,
    4737,  4739,  4741,  4744,  4747,  4750,  4755,  4759,  4760,  4768,
    4770,  4773,  4775,  4777,  4779,  4781,  4783,  4785,  4786,  4792,
    4794,  4796,  4798,  4800,  4802,  4803,  4807,  4813,  4820,  4821,
    4831,  4833,  4836,  4838,  4840,  4844,  4845,  4849,  4850,  4854,
    4855,  4859,  4860,  4864,  4866,  4868,  4870,  4872,  4874,  4876,
    4878,  4880,  4882,  4884,  4886,  4889,  4892,  4894,  4898,  4901,
    4904,  4907,  4908,  4910,  4914,  4916,  4919,  4922,  4925,  4927,
    4931,  4935,  4937,  4939,  4943,  4948,  4954,  4956,  4957,  4961,
    4965,  4967,  4969,  4970,  4973,  4976,  4979,  4982,  4983,  4986,
    4989,  4991,  4994,  4997,  5000,  5003,  5004,  5008,  5009,  5011,
    5013,  5015,  5020,  5023,  5024,  5026,  5027,  5032,  5034,  5036,
    5037,  5038,  5041,  5044,  5046,  5047,  5049,  5053,  5055,  5059,
    5061,  5065,  5067,  5070
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     490,     0,    -1,     3,    -1,   491,     3,    -1,   589,    -1,
     624,    -1,   614,    -1,   924,    -1,   493,    -1,   626,    -1,
     616,    -1,   927,    -1,   498,    -1,   798,    -1,   822,    -1,
     755,    -1,   757,    -1,   828,    -1,   902,    -1,   892,    -1,
     492,    -1,   764,    -1,   842,    -1,   844,    -1,   885,    -1,
     631,    -1,   638,    -1,   642,    -1,   838,    -1,   634,    -1,
     619,    -1,   767,    -1,   834,    -1,   612,    -1,   899,    -1,
     928,    -1,   929,    -1,   650,    -1,   873,    -1,   811,    -1,
     602,    -1,   604,    -1,   809,    -1,   891,    -1,   794,    -1,
     843,    -1,    48,   870,    -1,    -1,    32,    55,   279,   494,
     495,    -1,   496,    -1,   495,   482,   496,    -1,   184,    10,
     867,    -1,   185,    10,   867,    -1,   188,    10,   867,    -1,
     189,    10,   742,    -1,   190,    10,   742,    -1,   192,    10,
     742,    -1,   193,    10,   867,    -1,   194,    10,   867,    -1,
     195,    10,   867,    -1,   196,    10,   867,    -1,   197,    10,
     867,    -1,   497,    -1,   186,    10,   867,    -1,   187,    10,
     743,    -1,   198,    10,   867,    -1,   199,    10,   742,    -1,
      -1,    37,   516,   274,   519,   865,   499,   503,    -1,    -1,
      37,   581,   159,   869,   582,   222,   865,   500,   480,   584,
     481,    -1,    -1,    37,   364,   519,   869,   501,   513,    -1,
      -1,    37,   529,   291,   866,   502,   289,   530,   290,   867,
      -1,   480,   504,    -1,   520,   506,    -1,   176,   865,    -1,
     480,   176,   865,   481,    -1,   531,   481,   520,   506,    -1,
      -1,   509,   481,   505,   933,    -1,    -1,    -1,   848,   512,
     509,   507,   930,    -1,    -1,   848,   512,   480,   509,   481,
     508,   933,    -1,    -1,    -1,    67,   510,   660,   664,   511,
     528,    -1,    -1,    86,    -1,    -1,   514,    -1,   515,    -1,
     514,   515,    -1,   566,   107,   565,    -1,   566,   558,   560,
      -1,    -1,   517,    -1,   518,    -1,   518,   517,    -1,   276,
      -1,    -1,   397,   217,   132,    -1,    -1,   522,    -1,   523,
      -1,   523,   521,    -1,   523,    -1,   523,   522,    -1,   523,
     482,   522,    -1,   283,   786,   524,    -1,   201,   786,   743,
      -1,   208,   786,   743,    -1,    89,   786,   742,    -1,   422,
     786,   867,    -1,    34,   786,   867,    -1,    88,   786,   743,
      -1,   232,   786,   742,    -1,   232,   786,   116,    -1,   104,
     786,   742,    -1,   118,   786,   742,    -1,   257,   786,   525,
      -1,   241,   786,   526,    -1,   242,   786,   742,    -1,   243,
     786,   742,    -1,   295,   786,   480,   760,   481,    -1,   116,
     558,   786,   560,    -1,   558,   786,   560,    -1,   116,   107,
     786,   565,    -1,   107,   786,   565,    -1,   398,   786,   527,
      -1,   115,   130,   786,   867,    -1,   159,   130,   786,   867,
      -1,   167,    -1,   209,    -1,   206,    -1,   151,    -1,   207,
      -1,    91,    -1,   163,    -1,   116,    -1,   137,    -1,   126,
      -1,   310,    -1,   240,    -1,   239,    -1,   742,    -1,   218,
      -1,   136,    -1,     6,    -1,   738,    -1,   141,    41,    -1,
     659,   663,    -1,    -1,    83,    -1,   340,    -1,   337,    -1,
     327,    -1,   532,    -1,   531,   482,   532,    -1,   533,    -1,
     534,    -1,   537,   535,    -1,   537,   569,    -1,   577,   586,
     582,   480,   584,   481,    -1,   536,   140,   170,   586,   480,
     584,   481,   569,    -1,   536,   535,    -1,    -1,   105,   671,
      -1,    -1,   112,   586,    -1,    -1,   864,   538,   539,   555,
      -1,   546,   553,   550,    -1,   547,   554,   550,    -1,   325,
     548,   550,    -1,    93,   553,    -1,    94,    -1,    95,    -1,
     542,   480,   220,   481,   567,    -1,   542,   567,    -1,   543,
     480,   220,   481,    -1,   543,    -1,    92,   480,   220,   481,
      -1,   544,   480,   220,   481,   567,    -1,   545,   480,   220,
     481,    -1,   349,   480,   220,   481,    -1,   456,   553,   550,
      -1,   320,    -1,   343,    -1,   342,    -1,   342,   480,   220,
     481,    -1,   319,    -1,   344,    -1,   315,   553,    -1,   326,
      -1,   388,    -1,   424,    -1,   418,    -1,   403,    -1,   417,
      -1,   426,    -1,   419,    -1,   331,    -1,   329,    -1,   182,
     349,    -1,   182,   544,   567,    -1,   346,   567,    -1,   341,
     553,   567,    -1,   333,   567,    -1,   330,   567,    -1,   321,
     548,   550,    -1,   334,   548,   550,    -1,   137,   548,   550,
      -1,    -1,   323,   540,   480,   588,   481,   567,    -1,    -1,
     260,   541,   480,   588,   481,   567,    -1,   182,   567,    -1,
     262,    -1,   316,    -1,   214,    -1,   211,   316,    -1,   542,
     351,    -1,   350,    -1,   211,   350,    -1,   216,    -1,   214,
     350,    -1,   211,   316,   351,    -1,   214,   351,    -1,   327,
      -1,   345,    -1,   339,    -1,   332,    -1,   314,    -1,   337,
      -1,   322,    -1,   322,   335,    -1,    -1,   480,   220,   481,
      -1,   549,    -1,   480,   220,   482,   220,   481,    -1,    -1,
     551,    -1,   551,   552,    -1,   552,    -1,   338,    -1,   348,
      -1,   352,    -1,    -1,   480,   220,   481,    -1,    -1,   549,
      -1,    -1,   556,    -1,   556,   557,    -1,   557,    -1,   219,
      -1,   217,   219,    -1,   116,   859,    -1,    88,    -1,   262,
     116,   301,    -1,   568,   170,    -1,   296,    -1,   296,   170,
      -1,    34,   867,    -1,   107,   563,    -1,   316,   260,    -1,
     103,    -1,   870,    -1,    92,    -1,   559,    -1,   116,    -1,
     870,    -1,    92,    -1,   561,    -1,   116,    -1,   870,    -1,
      -1,   107,   565,    -1,   563,    -1,   116,    -1,    -1,   116,
      -1,    -1,   313,    -1,    99,    -1,    92,    -1,   294,    -1,
     558,   559,    -1,    -1,   234,    -1,    -1,   246,   865,   570,
     571,    -1,   573,    -1,   480,   572,   481,   573,    -1,   572,
     482,   869,    -1,   869,    -1,    -1,   574,    -1,   574,   575,
      -1,   575,    -1,   222,    40,   576,    -1,   222,    81,   576,
      -1,   200,   142,    -1,   200,   233,    -1,   200,   265,    -1,
     254,    -1,   101,    -1,   260,   219,    -1,   218,    82,    -1,
     260,   116,    -1,   536,   234,   170,    -1,   578,    -1,   143,
      -1,   143,   578,    -1,   267,    -1,   267,   578,    -1,   536,
     296,    -1,   536,   296,   578,    -1,   170,    -1,   159,    -1,
      -1,   580,    -1,   169,    -1,   159,    -1,   160,    -1,    -1,
     296,    -1,   143,    -1,   267,    -1,    -1,   300,   583,    -1,
     283,   583,    -1,    97,    -1,   259,    -1,   150,    -1,   584,
     482,   585,   736,    -1,   585,   736,    -1,   869,    -1,   869,
     480,   220,   481,    -1,    -1,   864,    -1,    -1,   486,   869,
      -1,   857,    -1,   588,   482,   857,    -1,    -1,    26,   598,
     274,   865,   590,   591,    -1,    26,   364,   869,   513,    -1,
      -1,   123,   275,    -1,   158,   275,    -1,   593,    -1,   591,
     482,   593,    -1,    24,   597,    -1,   592,   533,   600,    -1,
      24,   534,    -1,   592,   480,   531,   481,    -1,    -1,    32,
     597,   864,   594,   537,   600,    -1,    -1,    -1,   412,   597,
     864,   595,   539,   555,   596,   600,    -1,    43,   597,   864,
     599,    -1,    43,   234,   170,    -1,    43,   140,   170,   586,
      -1,    43,   578,   864,    -1,   122,   169,    -1,   127,   169,
      -1,    26,   597,   864,   260,   116,   859,    -1,    26,   597,
     864,    43,   116,    -1,   249,   601,   865,    -1,   521,    -1,
     733,    -1,    -1,   110,    -1,    -1,   157,    -1,    -1,   254,
      -1,   101,    -1,    -1,    25,   869,    -1,   136,    -1,    -1,
     279,    -1,    10,    -1,    86,    -1,    -1,    71,    69,   606,
     603,   610,    -1,    74,    69,   606,    -1,    69,    71,   606,
      -1,    69,    74,   606,    -1,    -1,    71,   281,   605,    -1,
      -1,   607,   608,    -1,   609,    -1,   608,   482,   609,    -1,
      -1,    70,    -1,    50,    -1,    -1,    80,   611,    -1,   497,
      -1,   611,   482,   497,    -1,    -1,   253,   887,   613,   760,
     141,   867,    -1,    -1,    90,   887,   615,   760,   279,   867,
      -1,    -1,   104,   887,   617,   760,   618,    -1,    -1,   336,
      -1,   133,    -1,    -1,    61,   633,   887,   620,   760,   621,
      -1,    -1,   622,    -1,   623,    -1,   623,   622,    -1,   336,
      -1,   133,    -1,   298,    -1,    -1,    27,   633,   887,   625,
     760,   628,    -1,    -1,   105,   887,   627,   760,   628,    -1,
      -1,   629,    -1,   630,    -1,   630,   629,    -1,   336,    -1,
     324,    -1,   205,    -1,   133,    -1,   317,    -1,    -1,    59,
     633,   887,   632,   760,   628,    -1,    -1,   307,    -1,   178,
      -1,    -1,   249,   887,   635,   636,    -1,   637,    -1,   636,
     482,   637,    -1,   865,   279,   865,    -1,   100,   159,   639,
     165,   641,    -1,   640,    -1,   639,   482,   640,    -1,   865,
     646,    -1,   869,    -1,   116,    -1,    -1,    52,   159,   164,
     100,   643,   644,    -1,   645,    -1,   644,   482,   645,    -1,
     865,   646,   649,    -1,    -1,   647,   648,    -1,    -1,   579,
     480,   718,   481,    -1,    -1,   157,   173,    -1,   651,    -1,
      67,   653,    -1,    -1,   480,    67,   655,   481,   652,   933,
      -1,    -1,   655,   654,   930,    -1,    -1,    -1,   656,   660,
     664,   657,   658,   663,    -1,   738,    -1,   141,    41,    -1,
     753,    -1,   659,    -1,   753,   659,    -1,   659,   753,    -1,
     141,   704,   725,   729,   726,   732,   738,   744,    -1,    -1,
     661,    -1,   661,   662,    -1,   662,    -1,   271,    -1,   153,
      -1,   124,    -1,   465,    -1,   461,    -1,   466,    -1,   463,
      -1,   464,    -1,   462,    -1,    84,    -1,    -1,   383,    81,
      -1,    54,   165,   435,   411,    -1,   664,   482,   665,    -1,
     665,    -1,   474,    -1,   666,   668,   667,   669,    -1,    -1,
      -1,   861,    -1,   671,    -1,    -1,    86,   869,    -1,    86,
     867,    -1,   869,    -1,   867,    -1,    -1,   480,   481,    -1,
     674,    -1,   678,    -1,    10,    -1,    13,    -1,    14,    -1,
      15,    -1,    16,    -1,    17,    -1,    84,    -1,    28,    -1,
     671,   165,   480,   692,   481,    -1,   671,   217,   165,   480,
     692,   481,    -1,   671,   165,   942,    -1,   671,   217,   165,
     942,    -1,   671,   355,   676,    85,   671,    -1,   671,   217,
     355,   676,    85,   671,    -1,   671,   227,   671,    -1,   671,
     226,   671,    -1,   671,   309,   671,    -1,   671,    85,   671,
      -1,   671,    12,   176,   671,    -1,   671,   176,   678,   728,
      -1,   671,   217,   176,   678,   728,    -1,   671,   247,   671,
      -1,   671,   217,   247,   671,    -1,   671,    18,   219,    -1,
     671,    18,   217,   219,    -1,   671,    11,   671,    -1,   671,
     672,   671,    -1,   671,   672,   673,   942,    -1,   671,    20,
     671,    -1,   671,    21,   671,    -1,   671,   473,   671,    -1,
     671,   472,   671,    -1,   671,   474,   671,    -1,   671,   475,
     671,    -1,   671,     9,   671,    -1,   671,    19,   671,    -1,
     671,   470,   671,    -1,   671,   479,   671,    -1,   671,   471,
     671,    -1,   671,   476,   671,    -1,   671,   473,   677,   720,
      -1,   671,   472,   677,   720,    -1,   675,   355,   676,    85,
     671,    -1,   675,   217,   355,   676,    85,   671,    -1,   675,
     227,   671,    -1,   675,   226,   671,    -1,   675,   309,   671,
      -1,   675,    85,   671,    -1,   675,    12,   176,   671,    -1,
     675,   176,   678,   728,    -1,   675,   217,   176,   678,   728,
      -1,   675,   247,   671,    -1,   675,   217,   247,   671,    -1,
     675,    18,   219,    -1,   675,    18,   217,   219,    -1,   675,
      11,   671,    -1,   675,   672,   671,    -1,   675,   672,   673,
     942,    -1,   675,    20,   671,    -1,   675,    21,   671,    -1,
     675,   473,   671,    -1,   675,   472,   671,    -1,   675,   474,
     671,    -1,   675,   475,   671,    -1,   675,     9,   671,    -1,
     675,   470,   671,    -1,   675,   479,   671,    -1,   675,   471,
     671,    -1,   675,   476,   671,    -1,   675,    19,   671,    -1,
     675,   473,   677,   720,    -1,   675,   472,   677,   720,    -1,
     678,    -1,   676,   165,   480,   692,   481,    -1,   676,   217,
     165,   480,   692,   481,    -1,   676,   165,   942,    -1,   676,
     217,   165,   942,    -1,   676,   355,   676,    85,   671,    -1,
     676,   217,   355,   676,    85,   671,    -1,   676,   227,   671,
      -1,   676,   226,   671,    -1,   676,   309,   671,    -1,   676,
      12,   176,   671,    -1,   676,   176,   678,   728,    -1,   676,
     217,   176,   678,   728,    -1,   676,   247,   671,    -1,   676,
     217,   247,   671,    -1,   676,    18,   219,    -1,   676,    18,
     217,   219,    -1,   676,    11,   671,    -1,   676,   672,   671,
      -1,   676,   672,   673,   942,    -1,   676,    20,   671,    -1,
     676,    21,   671,    -1,   676,   473,   671,    -1,   676,   472,
     671,    -1,   676,   474,   671,    -1,   676,   475,   671,    -1,
     676,     9,   671,    -1,   676,   470,   671,    -1,   676,   479,
     671,    -1,   676,   471,   671,    -1,   676,   476,   671,    -1,
     676,    19,   671,    -1,   676,   473,   677,   720,    -1,   676,
     472,   677,   720,    -1,   678,    -1,   399,   671,    -1,   863,
      -1,   678,   107,   870,    -1,   859,    -1,   858,    -1,   487,
     870,    22,   671,    -1,   487,   870,    -1,   487,   487,   879,
     870,   587,    -1,   681,    -1,   473,   671,    -1,   472,   671,
      -1,   477,   671,    -1,   217,   671,    -1,   483,   671,    -1,
     480,   671,   481,    -1,   480,   671,   482,   692,   481,    -1,
     258,   480,   671,   482,   692,   481,    -1,   132,   940,    -1,
     938,    -1,   484,   869,   671,   485,    -1,   200,   695,   353,
     480,   671,   679,   481,    -1,   313,   480,   671,   481,    -1,
      92,   671,    -1,   102,   480,   671,    86,   691,   481,    -1,
     359,   699,   453,   701,   700,   459,    -1,   113,   480,   671,
     482,   691,   481,    -1,   113,   480,   671,   300,   559,   481,
      -1,   113,   480,   671,   482,   671,   482,   671,   481,    -1,
     116,   480,   863,   481,    -1,   302,   480,   863,   481,    -1,
     285,   480,   481,    -1,   286,   480,   671,   481,    -1,   287,
     480,   671,   482,   671,   481,    -1,   288,   480,   671,   482,
     671,   482,   671,   481,    -1,    76,   480,   671,   482,   671,
     481,    -1,    76,   480,   671,   482,   399,   671,   720,   481,
      -1,   354,   480,   671,   481,    -1,   354,   480,   671,   482,
     671,   481,    -1,   316,   480,   692,   481,    -1,   103,   480,
     671,   481,    -1,   318,   480,   692,   481,    -1,   108,   480,
     671,   481,    -1,   360,   480,   692,   481,    -1,   361,   480,
     671,   482,   692,   481,    -1,   362,   670,    -1,   363,   670,
      -1,   363,   480,   671,   481,    -1,   365,   480,   671,   482,
     677,   720,   481,    -1,   366,   480,   671,   482,   677,   720,
     481,    -1,   364,   480,   481,    -1,   320,   480,   671,   481,
      -1,   371,   480,   671,   481,    -1,   376,   480,   671,   482,
     692,   481,    -1,   405,   480,   671,   482,   692,   481,    -1,
     378,   480,   671,   481,    -1,   378,   480,   671,   482,   671,
     481,    -1,   372,   480,   671,   482,   868,   481,    -1,   377,
     480,   671,   482,   868,   481,    -1,   374,   480,   671,   481,
      -1,   374,   480,   671,   482,   671,   481,    -1,   373,   480,
     671,   481,    -1,   373,   480,   671,   482,   671,   481,    -1,
     379,   480,   671,   482,   671,   482,   671,   481,    -1,   379,
     480,   671,   482,   671,   482,   671,   482,   671,   481,    -1,
     379,   480,   671,   482,   671,   482,   671,   482,   671,   482,
     671,   481,    -1,   134,    -1,   382,   480,   671,   482,   220,
     481,    -1,   384,   480,   671,   481,    -1,   384,   480,   671,
     482,   671,   481,    -1,   381,   480,   671,   482,   692,   481,
      -1,   386,   480,   671,   481,    -1,   386,   480,   671,   482,
     671,   481,    -1,   387,   480,   671,   481,    -1,   387,   480,
     671,   482,   671,   481,    -1,   388,   480,   692,   481,    -1,
     391,   480,   721,   482,   671,   481,    -1,   395,   480,   671,
     481,    -1,   397,   480,   671,   482,   671,   482,   671,   481,
      -1,    49,   480,   671,   482,   671,   482,   671,   482,   671,
     481,    -1,   677,   720,   473,   671,    -1,   677,    -1,   400,
     480,   481,    -1,   400,   480,   671,   481,    -1,   401,   480,
     671,   482,   671,   481,    -1,   403,   480,   692,   481,    -1,
     404,   480,   671,   482,   671,   481,    -1,   404,   480,   671,
     482,   671,   482,   671,   481,    -1,   385,   480,   671,   481,
      -1,   385,   480,   671,   482,   671,   481,    -1,   147,   480,
     671,   482,   692,   481,    -1,   172,   480,   671,   482,   692,
     481,    -1,   179,   480,   671,   481,    -1,   179,   480,   671,
     482,   671,   481,    -1,   402,   480,   671,   481,    -1,   402,
     480,   671,   482,   671,   481,    -1,   406,   480,   671,   482,
     671,   481,    -1,   406,   480,   671,   482,   671,   482,   671,
     481,    -1,   407,   480,   671,   481,    -1,   410,   480,   671,
     481,    -1,    19,   480,   671,   482,   671,   481,    -1,   413,
     480,   671,   481,    -1,   417,   480,   692,   481,    -1,   414,
     480,   671,   481,    -1,   414,   480,   671,   482,   671,   481,
      -1,   415,   480,   671,   481,    -1,   415,   480,   671,   482,
     671,   481,    -1,   416,   480,   671,   481,    -1,   416,   480,
     671,   482,   671,   481,    -1,   418,   480,   692,   481,    -1,
     419,   480,   692,   481,    -1,   420,   670,    -1,   420,   480,
     671,   481,    -1,   422,   480,   671,   481,    -1,   421,   480,
     671,   481,    -1,   424,   480,   671,   482,   671,   481,    -1,
     423,   480,   671,   481,    -1,   423,   480,   671,   482,   671,
     481,    -1,   425,   480,   671,   481,    -1,   425,   480,   671,
     482,   671,   481,    -1,   426,   480,   692,   481,    -1,   427,
     480,   675,   165,   671,   481,    -1,   429,   480,   671,   481,
      -1,   429,   480,   481,    -1,   430,   480,   671,   482,   671,
     482,   671,   481,    -1,   431,   480,   671,   482,   671,   481,
      -1,   432,   480,   671,   481,    -1,   432,   480,   671,   482,
     671,   481,    -1,   436,   480,   671,   482,   671,   481,    -1,
     436,   480,   671,   482,   399,   671,   720,   481,    -1,   433,
     480,   671,   481,    -1,   437,   480,   671,   482,   671,   482,
     671,   481,    -1,   437,   480,   671,   482,   671,   481,    -1,
     437,   480,   671,   141,   671,   383,   671,   481,    -1,   437,
     480,   671,   141,   671,   481,    -1,   438,   480,   671,   482,
     671,   482,   671,   481,    -1,   343,   480,   671,   481,    -1,
     342,   480,   671,   481,    -1,   342,   480,   671,   482,   671,
     481,    -1,   439,   480,   671,   481,    -1,   439,   480,   171,
     671,   141,   671,   481,    -1,   439,   480,   280,   671,   141,
     671,   481,    -1,   439,   480,    96,   671,   141,   671,   481,
      -1,   439,   480,   171,   141,   671,   481,    -1,   439,   480,
     280,   141,   671,   481,    -1,   439,   480,    96,   141,   671,
     481,    -1,   439,   480,   671,   141,   671,   481,    -1,    78,
     480,   671,   482,   671,   481,    -1,   282,    -1,   440,   480,
     680,   481,    -1,   441,   480,   680,   481,    -1,   442,   480,
     680,   481,    -1,   443,   480,   680,   481,    -1,   444,   480,
     680,   481,    -1,   445,   480,   680,   481,    -1,   446,   480,
     856,   482,   220,   482,   220,   482,   692,   481,    -1,   447,
     480,   481,    -1,   447,   480,   671,   481,    -1,   448,   480,
     481,    -1,   449,   670,    -1,   450,   670,    -1,   451,   670,
      -1,   452,   480,   671,   481,    -1,   452,   480,   671,   482,
     671,   481,    -1,   456,   480,   671,   481,    -1,   457,   480,
     671,   481,    -1,   457,   480,   671,   482,   671,   481,    -1,
     458,   480,   742,   482,   671,   481,    -1,   380,   480,   720,
     141,   671,   481,    -1,    -1,   305,   238,    46,    -1,   165,
      95,   411,    -1,    -1,   692,    -1,    29,   480,   687,   481,
      -1,   356,   480,   687,   481,    -1,   357,   480,   687,   481,
      -1,   358,   480,   687,   481,    -1,    36,   480,   724,   474,
     481,    -1,    36,   480,   687,   481,    -1,    -1,    -1,    36,
     480,   124,   682,   692,   683,   481,    -1,   390,   480,   856,
     482,   220,   482,   220,   482,   687,   481,    -1,    57,   480,
     687,   481,    -1,    56,   480,   687,   481,    -1,    72,   480,
     687,   481,    -1,    73,   480,   687,   481,    -1,    75,   480,
     687,   481,    -1,   389,   480,   684,   692,   686,   685,   481,
      -1,    -1,   124,    -1,    -1,   261,   857,    -1,    -1,   733,
      -1,    -1,   724,   688,   671,    -1,    -1,    92,    -1,   316,
     553,   567,    -1,   214,   553,    -1,   338,    -1,   338,   327,
      -1,   348,    -1,   348,   327,    -1,   320,    -1,   343,    -1,
     319,    -1,   689,   690,    -1,    -1,   693,   694,    -1,   671,
      -1,   694,   482,   671,    -1,   696,    -1,   480,   696,   481,
      -1,    -1,   697,   698,    -1,   863,    -1,   698,   482,   863,
      -1,    -1,   671,    -1,    -1,   375,   671,    -1,    -1,   702,
     703,    -1,   671,   460,   671,    -1,   703,   453,   671,   460,
     671,    -1,   480,   704,   481,    -1,   709,    -1,   704,   482,
     704,    -1,   704,   708,   704,    -1,   704,   271,   704,    -1,
     704,   708,   704,   222,   671,    -1,    -1,   704,   708,   704,
     300,   705,   480,   719,   481,    -1,   704,   401,   713,   168,
     704,   222,   671,    -1,    -1,   704,   401,   713,   168,   704,
     706,   300,   480,   719,   481,    -1,   704,   212,   401,   713,
     168,   704,    -1,   704,   431,   713,   168,   704,   222,   671,
      -1,    -1,   704,   431,   713,   168,   704,   707,   300,   480,
     719,   481,    -1,   704,   212,   431,   713,   168,   704,    -1,
     704,   212,   168,   704,    -1,   168,    -1,   162,   168,    -1,
      38,   168,    -1,    -1,   710,   865,   723,   714,    -1,   484,
     869,   709,   401,   229,   168,   709,   222,   671,   485,    -1,
     480,    67,   711,   481,   723,    -1,    -1,   712,   660,   664,
     528,   933,    -1,    -1,   229,    -1,    -1,   299,   715,    -1,
     139,   715,    -1,   157,   715,    -1,    -1,   578,   716,   480,
     717,   481,    -1,    -1,   718,    -1,   718,   482,   869,    -1,
     869,    -1,   234,    -1,   869,    -1,   719,   482,   869,    -1,
     367,    -1,   368,    -1,   369,    -1,   370,    -1,   371,    -1,
     392,    -1,   393,    -1,   394,    -1,   395,    -1,   407,    -1,
     408,    -1,   409,    -1,   410,    -1,   413,    -1,   434,    -1,
     433,    -1,   455,    -1,   456,    -1,   320,    -1,   343,    -1,
     319,    -1,    -1,    86,    -1,    10,    -1,    -1,   722,   869,
      -1,    -1,    84,    -1,    -1,   304,   671,    -1,    -1,    -1,
     149,   727,   671,    -1,   131,   868,    -1,    -1,    -1,   148,
      98,   730,   731,    -1,   730,   482,   862,   736,    -1,   862,
     736,    -1,    -1,   305,    39,    -1,   305,    65,    -1,    -1,
     733,    -1,    -1,   228,    98,   734,   735,    -1,   735,   482,
     862,   736,    -1,   862,   736,    -1,    -1,    87,    -1,   119,
      -1,    -1,   739,    -1,    -1,   739,    -1,   328,   740,    -1,
     742,    -1,   742,   482,   742,    -1,   742,   221,   742,    -1,
      -1,   328,   743,    -1,   220,    -1,   181,    -1,   347,    -1,
     245,    -1,   138,    -1,   220,    -1,   347,    -1,   181,    -1,
     245,    -1,   138,    -1,    -1,    -1,   428,   869,   745,   480,
     746,   481,    -1,    -1,   747,    -1,   747,   482,   748,    -1,
     748,    -1,   666,   671,    -1,    -1,   750,   751,    -1,   751,
     482,   752,    -1,   752,    -1,   487,   870,    -1,    -1,   164,
     230,   867,   754,   849,   852,    -1,   164,   231,   867,    -1,
     164,   749,    -1,    -1,    42,   756,   790,    -1,    43,   763,
     887,   762,   760,   599,    -1,    -1,    43,   159,   869,   222,
     865,   758,    -1,    43,   364,   762,   869,    -1,    43,   291,
     866,    -1,    -1,    43,   448,   759,   915,    -1,   761,    -1,
     760,   482,   761,    -1,   865,    -1,    -1,   397,   132,    -1,
      -1,   276,    -1,    -1,    -1,    49,   765,   771,   598,   773,
     766,   775,   792,    -1,    -1,    -1,    -1,   430,   768,   772,
     773,   769,   775,   770,    -1,    -1,   183,    -1,   117,    -1,
     153,    -1,   797,    -1,   117,    -1,   164,   774,    -1,   774,
      -1,   761,    -1,   779,    -1,   480,   481,   779,    -1,   480,
     778,   481,   779,    -1,    -1,   260,   776,   783,    -1,    -1,
     480,   778,   481,    -1,   480,   481,    -1,   778,   482,   860,
      -1,   860,    -1,   302,   782,    -1,   301,   782,    -1,    -1,
     509,   780,   930,    -1,    -1,   480,   509,   481,   781,   933,
      -1,   782,   482,   787,    -1,   787,    -1,   783,   482,   784,
      -1,   784,    -1,   863,   785,   791,    -1,    10,    -1,    22,
      -1,    -1,   785,    -1,    -1,   480,   788,   789,   481,    -1,
      -1,   790,    -1,   790,   482,   791,    -1,   791,    -1,   671,
      -1,   116,    -1,    -1,    -1,   222,   125,   793,   170,    81,
     796,    -1,    -1,    81,   795,   797,   598,   704,   260,   796,
     725,   732,   741,    -1,   796,   482,   863,   785,   791,    -1,
     863,   785,   791,    -1,    -1,   183,    -1,    -1,    40,   799,
     807,   800,    -1,    -1,   141,   865,   801,   725,   732,   741,
      -1,    -1,   804,   802,   141,   704,   725,    -1,    -1,   141,
     804,   803,   300,   704,   725,    -1,   805,    -1,   804,   482,
     805,    -1,   869,   806,   723,    -1,   869,   486,   869,   806,
     723,    -1,    -1,   486,   474,    -1,    -1,   808,   807,    -1,
     336,    -1,   183,    -1,   157,    -1,    78,   810,   761,    -1,
      -1,   274,    -1,    -1,    68,   812,   813,    -1,   114,   817,
      -1,   273,   816,   817,    -1,   274,   270,   816,   817,    -1,
     223,   273,   816,   817,    -1,   818,   109,   819,   865,   816,
     817,    -1,   213,    55,   383,    69,   305,   186,    10,   867,
      85,   187,    10,   743,    85,   191,    10,   742,    -1,   815,
     180,    -1,    69,   154,    -1,    -1,    31,    44,   820,   821,
     814,   737,    -1,   580,   141,   865,   816,    -1,   110,   284,
      -1,   274,   284,    -1,   235,    -1,    36,   480,   474,   481,
     312,    -1,    36,   480,   474,   481,   311,    -1,   312,   737,
      -1,   311,   737,    -1,   270,   817,    -1,   163,   270,    -1,
     818,   237,    -1,   878,   303,   817,    -1,   558,   817,    -1,
     108,   817,    -1,    91,   180,    -1,   180,    -1,   146,   383,
     871,    -1,    37,   364,   519,   869,    -1,    37,   274,   865,
      -1,    55,   270,    -1,    69,   270,    -1,    55,    -1,    92,
      -1,    -1,   819,   869,    -1,    -1,   176,   857,    -1,    -1,
     142,    -1,   141,    -1,   165,    -1,    -1,   165,   867,    -1,
      -1,   141,   743,    -1,    -1,   825,   865,   823,   827,    -1,
      -1,   825,   826,   824,   650,    -1,   119,    -1,   120,    -1,
      -1,   133,    -1,    -1,   857,    -1,   869,    -1,    -1,    47,
     633,   829,   830,    -1,   830,   482,   831,    -1,   831,    -1,
      -1,   887,   832,   833,    -1,   273,   305,   244,    54,    -1,
     238,   100,    -1,   154,    -1,   235,    -1,   180,    -1,   270,
      -1,    69,    -1,    55,    -1,   121,    -1,   252,    -1,    -1,
     760,    -1,    -1,    63,   835,   836,    -1,   836,   482,   837,
      -1,   837,    -1,    69,    -1,    55,    -1,   238,   100,    -1,
      -1,    60,   839,   840,    -1,   815,   180,   841,    -1,   279,
     867,    -1,   469,   671,    -1,    51,   671,    -1,   299,   869,
      -1,    -1,    52,   115,   847,   846,   161,   867,   845,   848,
     164,   274,   865,   849,   852,   855,   777,    -1,    52,   274,
     865,   141,    55,    -1,    52,   115,   141,    55,    -1,    -1,
     178,    -1,    -1,   111,    -1,   183,    -1,    -1,   430,    -1,
     157,    -1,    -1,   109,   850,    -1,   850,   851,    -1,   851,
      -1,   277,    98,   857,    -1,   225,   128,    98,   857,    -1,
     128,    98,   857,    -1,   129,    98,   857,    -1,    -1,   177,
     853,    -1,   853,   854,    -1,   854,    -1,   277,    98,   857,
      -1,   269,    98,   857,    -1,    -1,   157,   220,   177,    -1,
     868,    -1,   215,    -1,   293,   278,    -1,   856,   868,    -1,
     868,    -1,   152,    -1,   488,    -1,   856,    -1,   220,    -1,
     181,    -1,   347,    -1,   245,    -1,   138,    -1,   219,    -1,
     152,    -1,   293,   152,    -1,   320,   856,    -1,   343,   856,
      -1,   342,   856,    -1,   863,    -1,   861,    -1,   869,   486,
     474,    -1,   869,   486,   869,   486,   474,    -1,   671,    -1,
     869,    -1,   869,   486,   869,    -1,   486,   869,   486,   869,
      -1,   869,   486,   869,   486,   869,    -1,   869,    -1,   869,
     486,   869,    -1,   486,   869,    -1,   869,    -1,   869,   486,
     869,    -1,   486,   869,    -1,   155,    -1,   156,    -1,   278,
      -1,   278,    -1,   866,    -1,   872,    -1,   869,    -1,   867,
      -1,   175,    -1,   870,    -1,   870,   487,   870,    -1,    82,
      -1,    76,    -1,    25,    -1,   353,    -1,    83,    -1,    28,
      -1,   313,    -1,    88,    -1,    89,    -1,    29,    -1,    90,
      -1,    30,    -1,    91,    -1,    31,    -1,    93,    -1,    94,
      -1,    95,    -1,    99,    -1,    97,    -1,   100,    -1,   317,
      -1,   103,    -1,   104,    -1,   468,    -1,    33,    -1,     4,
      -1,   108,    -1,    34,    -1,   106,    -1,    35,    -1,   310,
      -1,   111,    -1,    39,    -1,   115,    -1,   319,    -1,   320,
      -1,   371,    -1,   118,    -1,   121,    -1,   130,    -1,   123,
      -1,    42,    -1,    41,    -1,   231,    -1,   125,    -1,   126,
      -1,   459,    -1,   323,    -1,   311,    -1,   131,    -1,    44,
      -1,    45,    -1,    46,    -1,   133,    -1,   324,    -1,   122,
      -1,   127,    -1,   142,    -1,   135,    -1,   136,    -1,   137,
      -1,    47,    -1,   326,    -1,   388,    -1,   391,    -1,   146,
      -1,   144,    -1,     5,    -1,   150,    -1,   151,    -1,    48,
      -1,   154,    -1,   395,    -1,   396,    -1,   158,    -1,   160,
      -1,   166,    -1,   167,    -1,   467,    -1,   163,    -1,   398,
      -1,    50,    -1,     6,    -1,   173,    -1,   174,    -1,   403,
      -1,   178,    -1,    53,    -1,   180,    -1,   201,    -1,    55,
      -1,   184,    -1,   189,    -1,   186,    -1,   187,    -1,   185,
      -1,   188,    -1,   190,    -1,   192,    -1,   193,    -1,   194,
      -1,   195,    -1,   196,    -1,   197,    -1,   202,    -1,   203,
      -1,   204,    -1,   205,    -1,   206,    -1,   207,    -1,   407,
      -1,   410,    -1,   208,    -1,   412,    -1,   411,    -1,   413,
      -1,   417,    -1,   418,    -1,   419,    -1,   209,    -1,   210,
      -1,   211,    -1,   214,    -1,     7,    -1,   213,    -1,   218,
      -1,    58,    -1,   216,    -1,   221,    -1,   421,    -1,   223,
      -1,   232,    -1,   233,    -1,   422,    -1,   424,    -1,   426,
      -1,     8,    -1,   236,    -1,   237,    -1,   238,    -1,   336,
      -1,   239,    -1,   242,    -1,   243,    -1,   240,    -1,   241,
      -1,   198,    -1,   199,    -1,   248,    -1,    61,    -1,   250,
      -1,    62,    -1,    63,    -1,   252,    -1,   253,    -1,    64,
      -1,    65,    -1,   256,    -1,   257,    -1,   258,    -1,   259,
      -1,    66,    -1,   433,    -1,   262,    -1,   263,    -1,   264,
      -1,   338,    -1,   265,    -1,   435,    -1,   266,    -1,    69,
      -1,    12,    -1,   462,    -1,   466,    -1,   464,    -1,    70,
      -1,    71,    -1,   270,    -1,    74,    -1,   340,    -1,   436,
      -1,   272,    -1,    77,    -1,   275,    -1,   276,    -1,   341,
      -1,   281,    -1,    78,    -1,   342,    -1,   343,    -1,   283,
      -1,   291,    -1,   292,    -1,   294,    -1,    80,    -1,   448,
      -1,   298,    -1,   303,    -1,   301,    -1,   312,    -1,   454,
      -1,   308,    -1,   456,    -1,    -1,   260,   875,   874,   876,
      -1,    -1,   224,    -1,   877,   880,    -1,   876,   482,   877,
     880,    -1,    -1,   144,    -1,   178,    -1,   264,    -1,    -1,
     144,    -1,   178,    -1,   264,    -1,    -1,   144,   486,    -1,
     178,   486,    -1,   264,   486,    -1,   487,   870,   785,   671,
      -1,   881,   785,   884,    -1,   487,   487,   879,   881,   785,
     884,    -1,   281,   166,   174,   882,    -1,   558,   562,    -1,
     210,   560,   564,    -1,   422,   785,   883,    -1,   422,   383,
     871,   785,   883,    -1,   869,    -1,   869,   486,   869,    -1,
     116,   486,   869,    -1,   244,   292,    -1,   244,   106,    -1,
     250,   244,    -1,   263,    -1,   278,    -1,   422,   480,   278,
     481,    -1,   421,   480,   278,   481,    -1,   671,    -1,   116,
      -1,   222,    -1,    84,    -1,    92,    -1,    -1,    54,   887,
     886,   888,    -1,   274,    -1,   273,    -1,   889,    -1,   888,
     482,   889,    -1,   865,   723,   890,    -1,   244,    -1,   306,
      -1,   183,   306,    -1,   244,   178,    -1,    79,   887,    -1,
       5,   865,   223,   723,    -1,     5,   865,     4,    -1,    -1,
       5,   865,   244,   893,   894,   725,   738,    -1,   895,    -1,
     869,   896,    -1,   136,    -1,     7,    -1,   136,    -1,     7,
      -1,     8,    -1,     6,    -1,    -1,   898,   897,   480,   790,
     481,    -1,    10,    -1,    13,    -1,    15,    -1,    14,    -1,
      16,    -1,    -1,   255,   900,   901,    -1,   904,   222,   914,
     141,   915,    -1,    84,   235,   482,   145,   141,   915,    -1,
      -1,   145,   903,   904,   222,   914,   279,   915,   920,   921,
      -1,   905,    -1,    84,   235,    -1,    84,    -1,   906,    -1,
     905,   482,   906,    -1,    -1,    67,   907,   917,    -1,    -1,
      49,   908,   917,    -1,    -1,    81,   909,   917,    -1,    -1,
     246,   910,   917,    -1,    40,    -1,   297,    -1,   159,    -1,
      26,    -1,    37,    -1,    43,    -1,    45,    -1,   248,    -1,
     266,    -1,   236,    -1,   135,    -1,   145,   224,    -1,    68,
     114,    -1,    77,    -1,    37,   276,   273,    -1,    54,   273,
      -1,    62,    69,    -1,    62,    33,    -1,    -1,    85,    -1,
     913,   911,   912,    -1,   913,    -1,   272,   278,    -1,   467,
     278,    -1,   468,   278,    -1,   474,    -1,   869,   486,   474,
      -1,   474,   486,   474,    -1,   865,    -1,   916,    -1,   915,
     482,   916,    -1,   871,   396,    98,   278,    -1,   871,   396,
      98,   422,   278,    -1,   871,    -1,    -1,   480,   918,   481,
      -1,   918,   482,   919,    -1,   919,    -1,   869,    -1,    -1,
     251,   912,    -1,   251,   268,    -1,   251,   308,    -1,   251,
      58,    -1,    -1,   305,   922,    -1,   922,   923,    -1,   923,
      -1,   145,   224,    -1,   203,   742,    -1,   204,   742,    -1,
     202,   742,    -1,    -1,    30,   925,   926,    -1,    -1,   454,
      -1,    35,    -1,    64,    -1,    64,   279,    66,   869,    -1,
      66,   869,    -1,    -1,   931,    -1,    -1,   295,   937,   932,
     651,    -1,   931,    -1,   934,    -1,    -1,    -1,   935,   936,
      -1,   733,   737,    -1,   739,    -1,    -1,    84,    -1,   944,
     939,   945,    -1,   653,    -1,   944,   941,   945,    -1,   653,
      -1,   944,   943,   945,    -1,   653,    -1,   480,    67,    -1,
     481,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   727,   727,   742,   744,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
     771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   785,   786,   791,   803,   801,   812,
     814,   816,   821,   826,   831,   836,   841,   846,   850,   854,
     858,   862,   866,   870,   875,   891,   895,   907,   905,   934,
     933,   953,   952,   962,   961,   976,   978,   979,   985,   993,
     995,   995,   998,  1001,  1000,  1003,  1002,  1008,  1020,  1006,
    1027,  1029,  1031,  1033,  1035,  1037,  1039,  1042,  1046,  1048,
    1050,  1052,  1054,  1057,  1059,  1061,  1063,  1065,  1067,  1069,
    1071,  1072,  1074,  1076,  1077,  1078,  1079,  1080,  1081,  1082,
    1083,  1084,  1085,  1086,  1087,  1088,  1089,  1090,  1103,  1108,
    1113,  1118,  1123,  1124,  1126,  1128,  1130,  1131,  1132,  1133,
    1134,  1135,  1137,  1139,  1140,  1141,  1143,  1145,  1146,  1148,
    1150,  1151,  1153,  1155,  1156,  1158,  1160,  1162,  1164,  1165,
    1167,  1169,  1172,  1174,  1177,  1179,  1185,  1192,  1203,  1209,
    1211,  1214,  1216,  1220,  1218,  1239,  1241,  1242,  1243,  1245,
    1247,  1249,  1251,  1253,  1256,  1259,  1262,  1264,  1267,  1270,
    1271,  1272,  1273,  1280,  1282,  1283,  1285,  1287,  1290,  1293,
    1296,  1299,  1302,  1305,  1308,  1311,  1313,  1315,  1317,  1318,
    1319,  1320,  1321,  1322,  1324,  1326,  1328,  1328,  1334,  1334,
    1340,  1341,  1349,  1353,  1355,  1358,  1360,  1363,  1365,  1366,
    1367,  1368,  1371,  1373,  1374,  1375,  1376,  1378,  1381,  1382,
    1385,  1387,  1388,  1390,  1397,  1399,  1401,  1403,  1405,  1407,
    1408,  1410,  1412,  1414,  1416,  1418,  1420,  1422,  1424,  1426,
    1428,  1429,  1430,  1431,  1433,  1434,  1435,  1436,  1437,  1452,
    1454,  1457,  1466,  1469,  1471,  1474,  1484,  1487,  1489,  1491,
    1501,  1503,  1506,  1508,  1510,  1512,  1514,  1516,  1517,  1518,
    1519,  1527,  1529,  1531,  1536,  1534,  1546,  1548,  1550,  1552,
    1555,  1557,  1559,  1561,  1563,  1565,  1566,  1567,  1568,  1570,
    1572,  1573,  1574,  1575,  1577,  1579,  1580,  1581,  1582,  1583,
    1584,  1585,  1587,  1589,  1591,  1593,  1596,  1598,  1599,  1601,
    1603,  1604,  1605,  1608,  1610,  1611,  1613,  1615,  1616,  1618,
    1620,  1622,  1624,  1626,  1628,  1630,  1632,  1634,  1636,  1644,
    1642,  1670,  1678,  1679,  1680,  1681,  1682,  1684,  1687,  1689,
    1690,  1692,  1691,  1698,  1707,  1697,  1718,  1724,  1729,  1730,
    1737,  1738,  1739,  1745,  1751,  1757,  1758,  1760,  1762,  1764,
    1766,  1768,  1770,  1771,  1773,  1775,  1776,  1778,  1780,  1781,
    1782,  1791,  1789,  1800,  1806,  1812,  1822,  1821,  1827,  1826,
    1832,  1834,  1837,  1839,  1840,  1843,  1845,  1860,  1862,  1867,
    1865,  1877,  1875,  1887,  1885,  1895,  1897,  1898,  1903,  1901,
    1913,  1915,  1917,  1919,  1921,  1923,  1924,  1928,  1926,  1940,
    1938,  1949,  1951,  1953,  1955,  1957,  1959,  1960,  1961,  1962,
    1966,  1964,  1976,  1978,  1979,  1984,  1982,  1991,  1993,  1995,
    2007,  2016,  2018,  2020,  2033,  2035,  2040,  2038,  2048,  2050,
    2052,  2066,  2065,  2075,  2077,  2084,  2087,  2095,  2105,  2109,
    2107,  2131,  2129,  2150,  2160,  2149,  2165,  2167,  2171,  2172,
    2173,  2174,  2176,  2179,  2181,  2183,  2185,  2187,  2189,  2195,
    2196,  2197,  2198,  2204,  2210,  2211,  2215,  2218,  2220,  2226,
    2235,  2237,  2238,  2247,  2258,  2261,  2264,  2266,  2268,  2270,
    2271,  2272,  2273,  2276,  2278,  2281,  2283,  2286,  2287,  2288,
    2289,  2290,  2291,  2294,  2295,  2299,  2302,  2304,  2306,  2310,
    2312,  2314,  2315,  2316,  2317,  2318,  2323,  2325,  2327,  2328,
    2330,  2331,  2332,  2333,  2334,  2338,  2339,  2340,  2341,  2342,
    2343,  2344,  2345,  2346,  2347,  2348,  2349,  2350,  2352,  2357,
    2360,  2362,  2363,  2364,  2365,  2366,  2371,  2373,  2375,  2376,
    2378,  2379,  2380,  2381,  2382,  2386,  2387,  2388,  2389,  2390,
    2391,  2392,  2393,  2394,  2395,  2396,  2397,  2398,  2400,  2402,
    2405,  2408,  2410,  2412,  2416,  2418,  2420,  2421,  2422,  2423,
    2428,  2430,  2432,  2433,  2435,  2436,  2437,  2438,  2439,  2443,
    2444,  2445,  2446,  2447,  2448,  2449,  2450,  2451,  2452,  2453,
    2454,  2455,  2457,  2459,  2461,  2465,  2467,  2474,  2475,  2476,
    2481,  2486,  2491,  2492,  2493,  2494,  2495,  2496,  2497,  2498,
    2503,  2508,  2509,  2510,  2511,  2515,  2516,  2521,  2527,  2529,
    2535,  2537,  2539,  2541,  2543,  2545,  2547,  2549,  2551,  2553,
    2555,  2557,  2559,  2561,  2563,  2565,  2567,  2569,  2571,  2573,
    2575,  2580,  2582,  2584,  2589,  2591,  2593,  2595,  2597,  2602,
    2603,  2605,  2607,  2609,  2611,  2613,  2615,  2617,  2619,  2621,
    2623,  2625,  2627,  2631,  2633,  2635,  2637,  2639,  2641,  2645,
    2647,  2649,  2651,  2653,  2656,  2665,  2671,  2676,  2678,  2681,
    2683,  2685,  2687,  2689,  2691,  2693,  2695,  2697,  2699,  2701,
    2706,  2711,  2713,  2715,  2717,  2719,  2722,  2724,  2726,  2728,
    2730,  2732,  2734,  2737,  2740,  2742,  2744,  2750,  2752,  2754,
    2756,  2758,  2760,  2762,  2765,  2767,  2769,  2771,  2773,  2775,
    2777,  2778,  2780,  2782,  2784,  2786,  2788,  2790,  2792,  2794,
    2796,  2798,  2800,  2802,  2804,  2806,  2808,  2810,  2812,  2814,
    2816,  2818,  2820,  2827,  2834,  2841,  2848,  2855,  2862,  2866,
    2871,  2873,  2875,  2877,  2879,  2881,  2886,  2888,  2890,  2892,
    2894,  2899,  2902,  2904,  2905,  2908,  2910,  2912,  2915,  2917,
    2919,  2921,  2923,  2926,  2928,  2925,  2931,  2933,  2935,  2937,
    2939,  2941,  2943,  2950,  2952,  2954,  2956,  2959,  2965,  2977,
    2975,  2991,  2995,  2997,  2998,  2999,  3000,  3001,  3002,  3003,
    3004,  3005,  3008,  3013,  3012,  3017,  3019,  3021,  3023,  3026,
    3025,  3030,  3032,  3034,  3036,  3038,  3040,  3043,  3042,  3047,
    3054,  3061,  3063,  3064,  3065,  3066,  3068,  3072,  3070,  3080,
    3083,  3082,  3090,  3096,  3099,  3098,  3106,  3112,  3115,  3117,
    3118,  3122,  3121,  3138,  3140,  3161,  3160,  3180,  3182,  3184,
    3186,  3192,  3199,  3207,  3206,  3212,  3214,  3217,  3222,  3226,
    3231,  3241,  3248,  3250,  3251,  3252,  3253,  3254,  3255,  3256,
    3257,  3258,  3259,  3260,  3261,  3262,  3263,  3264,  3265,  3266,
    3268,  3270,  3271,  3273,  3275,  3276,  3278,  3280,  3283,  3285,
    3288,  3290,  3298,  3301,  3300,  3314,  3316,  3323,  3325,  3327,
    3330,  3333,  3335,  3348,  3365,  3367,  3371,  3369,  3384,  3387,
    3390,  3392,  3393,  3396,  3403,  3406,  3408,  3411,  3415,  3422,
    3428,  3437,  3443,  3446,  3448,  3449,  3450,  3451,  3453,  3455,
    3456,  3457,  3458,  3460,  3463,  3462,  3482,  3484,  3486,  3488,
    3490,  3503,  3502,  3512,  3514,  3517,  3527,  3525,  3539,  3551,
    3562,  3561,  3576,  3584,  3584,  3595,  3602,  3609,  3608,  3619,
    3621,  3623,  3631,  3633,  3636,  3638,  3646,  3654,  3644,  3664,
    3671,  3676,  3662,  3680,  3682,  3683,  3684,  3687,  3689,  3691,
    3693,  3695,  3704,  3706,  3707,  3709,  3708,  3717,  3719,  3720,
    3722,  3724,  3726,  3728,  3729,  3729,  3730,  3730,  3733,  3735,
    3737,  3739,  3742,  3751,  3752,  3755,  3757,  3762,  3760,  3773,
    3775,  3777,  3783,  3790,  3792,  3795,  3798,  3797,  3814,  3812,
    3829,  3835,  3841,  3843,  3849,  3847,  3860,  3858,  3868,  3867,
    3871,  3870,  3876,  3878,  3880,  3887,  3897,  3899,  3902,  3904,
    3906,  3908,  3909,  3911,  3921,  3923,  3928,  3927,  3937,  3940,
    3947,  3954,  3961,  3969,  3979,  3983,  3988,  3987,  3992,  4000,
    4005,  4010,  4015,  4017,  4019,  4021,  4023,  4025,  4027,  4029,
    4035,  4037,  4039,  4041,  4043,  4050,  4056,  4062,  4066,  4071,
    4073,  4075,  4077,  4079,  4081,  4083,  4085,  4087,  4089,  4091,
    4093,  4095,  4097,  4103,  4101,  4113,  4112,  4121,  4123,  4125,
    4127,  4130,  4132,  4133,  4141,  4139,  4150,  4152,  4155,  4154,
    4156,  4157,  4158,  4159,  4160,  4161,  4162,  4163,  4164,  4165,
    4167,  4169,  4173,  4171,  4180,  4182,  4184,  4186,  4187,  4191,
    4189,  4198,  4202,  4208,  4223,  4238,  4248,  4247,  4263,  4271,
    4277,  4279,  4281,  4283,  4284,  4287,  4289,  4290,  4292,  4294,
    4296,  4298,  4300,  4302,  4308,  4309,  4311,  4313,  4315,  4317,
    4319,  4321,  4323,  4325,  4330,  4336,  4338,  4340,  4344,  4347,
    4354,  4371,  4373,  4374,  4375,  4376,  4377,  4378,  4380,  4381,
    4389,  4390,  4391,  4397,  4399,  4401,  4407,  4416,  4419,  4428,
    4444,  4460,  4482,  4484,  4485,  4487,  4489,  4490,  4493,  4495,
    4506,  4518,  4531,  4533,  4541,  4543,  4544,  4546,  4556,  4566,
    4568,  4569,  4570,  4571,  4572,  4573,  4574,  4575,  4576,  4577,
    4578,  4579,  4580,  4581,  4582,  4583,  4584,  4585,  4586,  4587,
    4588,  4589,  4590,  4591,  4592,  4593,  4594,  4595,  4596,  4597,
    4598,  4599,  4600,  4601,  4602,  4603,  4604,  4605,  4606,  4607,
    4608,  4609,  4610,  4611,  4612,  4613,  4614,  4615,  4616,  4617,
    4618,  4619,  4620,  4621,  4622,  4623,  4624,  4625,  4626,  4627,
    4628,  4629,  4630,  4631,  4632,  4633,  4634,  4635,  4636,  4637,
    4638,  4639,  4640,  4641,  4642,  4643,  4644,  4645,  4646,  4647,
    4648,  4649,  4650,  4651,  4652,  4653,  4654,  4655,  4656,  4657,
    4658,  4659,  4660,  4661,  4662,  4663,  4664,  4665,  4666,  4667,
    4668,  4669,  4670,  4671,  4672,  4673,  4674,  4675,  4676,  4677,
    4678,  4679,  4680,  4681,  4682,  4683,  4684,  4685,  4686,  4687,
    4688,  4689,  4690,  4691,  4692,  4693,  4694,  4695,  4696,  4697,
    4698,  4699,  4700,  4701,  4702,  4703,  4704,  4705,  4706,  4707,
    4708,  4709,  4710,  4711,  4712,  4713,  4714,  4715,  4716,  4717,
    4718,  4719,  4720,  4721,  4722,  4723,  4724,  4725,  4726,  4727,
    4728,  4729,  4730,  4731,  4732,  4733,  4734,  4735,  4736,  4737,
    4738,  4739,  4740,  4741,  4742,  4743,  4744,  4745,  4746,  4747,
    4748,  4749,  4750,  4751,  4752,  4753,  4754,  4755,  4756,  4757,
    4758,  4759,  4760,  4761,  4762,  4763,  4764,  4765,  4766,  4767,
    4768,  4769,  4776,  4774,  4786,  4788,  4790,  4792,  4794,  4796,
    4797,  4798,  4801,  4803,  4804,  4805,  4808,  4810,  4811,  4812,
    4815,  4820,  4826,  4832,  4843,  4850,  4863,  4873,  4879,  4889,
    4899,  4912,  4914,  4915,  4916,  4919,  4921,  4928,  4936,  4938,
    4939,  4940,  4941,  4949,  4947,  4956,  4958,  4960,  4962,  4964,
    4972,  4974,  4975,  4976,  4979,  4988,  4996,  5004,  5003,  5016,
    5018,  5021,  5023,  5026,  5028,  5029,  5030,  5032,  5031,  5041,
    5043,  5044,  5045,  5046,  5053,  5051,  5068,  5071,  5080,  5078,
    5096,  5098,  5099,  5102,  5104,  5107,  5106,  5108,  5108,  5109,
    5109,  5110,  5110,  5111,  5112,  5113,  5114,  5115,  5116,  5117,
    5118,  5119,  5120,  5121,  5122,  5123,  5124,  5125,  5126,  5127,
    5128,  5132,  5134,  5137,  5139,  5142,  5153,  5163,  5175,  5188,
    5200,  5212,  5223,  5225,  5233,  5259,  5261,  5266,  5272,  5274,
    5276,  5278,  5300,  5301,  5305,  5309,  5313,  5319,  5321,  5323,
    5325,  5328,  5330,  5335,  5340,  5348,  5347,  5351,  5353,  5356,
    5359,  5364,  5369,  5381,  5383,  5388,  5386,  5409,  5411,  5414,
    5417,  5416,  5440,  5442,  5445,  5447,  5449,  5456,  5463,  5470,
    5477,  5484,  5490,  5505
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END_OF_INPUT", "CLOSE_SYM", "HANDLER_SYM", 
  "LAST_SYM", "NEXT_SYM", "PREV_SYM", "DIV_SYM", "EQ", "EQUAL_SYM", 
  "SOUNDS_SYM", "GE", "GT_SYM", "LE", "LT", "NE", "IS", "MOD_SYM", 
  "SHIFT_LEFT", "SHIFT_RIGHT", "SET_VAR", "ABORT_SYM", "ADD", "AFTER_SYM", 
  "ALTER", "ANALYZE_SYM", "ANY_SYM", "AVG_SYM", "BEGIN_SYM", "BINLOG_SYM", 
  "CHANGE", "CLIENT_SYM", "COMMENT_SYM", "COMMIT_SYM", "COUNT_SYM", 
  "CREATE", "CROSS", "CUBE_SYM", "DELETE_SYM", "DUAL_SYM", "DO_SYM", 
  "DROP", "EVENTS_SYM", "EXECUTE_SYM", "EXPANSION_SYM", "FLUSH_SYM", 
  "HELP_SYM", "INSERT", "RELAY_THREAD", "KILL_SYM", "LOAD", "LOCKS_SYM", 
  "LOCK_SYM", "MASTER_SYM", "MAX_SYM", "MIN_SYM", "NONE_SYM", "OPTIMIZE", 
  "PURGE", "REPAIR", "REPLICATION", "RESET_SYM", "ROLLBACK_SYM", 
  "ROLLUP_SYM", "SAVEPOINT_SYM", "SELECT_SYM", "SHOW", "SLAVE", 
  "SQL_THREAD", "START_SYM", "STD_SYM", "VARIANCE_SYM", "STOP_SYM", 
  "SUM_SYM", "ADDDATE_SYM", "SUPER_SYM", "TRUNCATE_SYM", "UNLOCK_SYM", 
  "UNTIL_SYM", "UPDATE_SYM", "ACTION", "AGGREGATE_SYM", "ALL", "AND", 
  "AS", "ASC", "AUTO_INC", "AVG_ROW_LENGTH", "BACKUP_SYM", 
  "BERKELEY_DB_SYM", "BINARY", "BIT_SYM", "BOOL_SYM", "BOOLEAN_SYM", 
  "BOTH", "BTREE_SYM", "BY", "BYTE_SYM", "CACHE_SYM", "CASCADE", 
  "CAST_SYM", "CHARSET", "CHECKSUM_SYM", "CHECK_SYM", "COMMITTED_SYM", 
  "COLLATE_SYM", "COLLATION_SYM", "COLUMNS", "COLUMN_SYM", "CONCURRENT", 
  "CONSTRAINT", "CONVERT_SYM", "DATABASES", "DATA_SYM", "DEFAULT", 
  "DELAYED_SYM", "DELAY_KEY_WRITE_SYM", "DESC", "DESCRIBE", 
  "DES_KEY_FILE", "DISABLE_SYM", "DISCARD", "DISTINCT", "DUPLICATE_SYM", 
  "DYNAMIC_SYM", "ENABLE_SYM", "ENCLOSED", "ESCAPED", "DIRECTORY_SYM", 
  "ESCAPE_SYM", "EXISTS", "EXTENDED_SYM", "FALSE_SYM", "FILE_SYM", 
  "FIRST_SYM", "FIXED_SYM", "FLOAT_NUM", "FORCE_SYM", "FOREIGN", "FROM", 
  "FULL", "FULLTEXT_SYM", "GLOBAL_SYM", "GRANT", "GRANTS", "GREATEST_SYM", 
  "GROUP", "HAVING", "HASH_SYM", "HEAP_SYM", "HEX_NUM", "HIGH_PRIORITY", 
  "HOSTS_SYM", "IDENT", "IDENT_QUOTED", "IGNORE_SYM", "IMPORT", "INDEX", 
  "INDEXES", "INFILE", "INNER_SYM", "INNOBASE_SYM", "INTO", "IN_SYM", 
  "ISOLATION", "ISAM_SYM", "JOIN_SYM", "KEYS", "KEY_SYM", "LEADING", 
  "LEAST_SYM", "LEAVES", "LEVEL_SYM", "LEX_HOSTNAME", "LIKE", "LINES", 
  "LOCAL_SYM", "LOG_SYM", "LOGS_SYM", "LONG_NUM", "LONG_SYM", 
  "LOW_PRIORITY", "MASTER_HOST_SYM", "MASTER_USER_SYM", 
  "MASTER_LOG_FILE_SYM", "MASTER_LOG_POS_SYM", "MASTER_PASSWORD_SYM", 
  "MASTER_PORT_SYM", "MASTER_CONNECT_RETRY_SYM", "MASTER_SERVER_ID_SYM", 
  "MASTER_SSL_SYM", "MASTER_SSL_CA_SYM", "MASTER_SSL_CAPATH_SYM", 
  "MASTER_SSL_CERT_SYM", "MASTER_SSL_CIPHER_SYM", "MASTER_SSL_KEY_SYM", 
  "RELAY_LOG_FILE_SYM", "RELAY_LOG_POS_SYM", "MATCH", "MAX_ROWS", 
  "MAX_CONNECTIONS_PER_HOUR", "MAX_QUERIES_PER_HOUR", 
  "MAX_UPDATES_PER_HOUR", "MEDIUM_SYM", "MERGE_SYM", "MEMORY_SYM", 
  "MIN_ROWS", "MYISAM_SYM", "NAMES_SYM", "NATIONAL_SYM", "NATURAL", 
  "NEW_SYM", "NCHAR_SYM", "NCHAR_STRING", "NVARCHAR_SYM", "NOT", "NO_SYM", 
  "NULL_SYM", "NUM", "OFFSET_SYM", "ON", "OPEN_SYM", "OPTION", 
  "OPTIONALLY", "OR", "OR_OR_CONCAT", "ORDER_SYM", "OUTER", "OUTFILE", 
  "DUMPFILE", "PACK_KEYS_SYM", "PARTIAL", "PRIMARY_SYM", "PRIVILEGES", 
  "PROCESS", "PROCESSLIST_SYM", "QUERY_SYM", "RAID_0_SYM", 
  "RAID_STRIPED_SYM", "RAID_TYPE", "RAID_CHUNKS", "RAID_CHUNKSIZE", 
  "READ_SYM", "REAL_NUM", "REFERENCES", "REGEXP", "RELOAD", "RENAME", 
  "REPEATABLE_SYM", "REQUIRE_SYM", "RESOURCES", "RESTORE_SYM", "RESTRICT", 
  "REVOKE", "ROWS_SYM", "ROW_FORMAT_SYM", "ROW_SYM", "RTREE_SYM", "SET", 
  "SEPARATOR_SYM", "SERIAL_SYM", "SERIALIZABLE_SYM", "SESSION_SYM", 
  "SIMPLE_SYM", "SHUTDOWN", "SPATIAL_SYM", "SSL_SYM", "STARTING", 
  "STATUS_SYM", "STRAIGHT_JOIN", "SUBJECT_SYM", "TABLES", "TABLE_SYM", 
  "TABLESPACE", "TEMPORARY", "TERMINATED", "TEXT_STRING", "TO_SYM", 
  "TRAILING", "TRANSACTION_SYM", "TRUE_SYM", "TYPE_SYM", "TYPES_SYM", 
  "FUNC_ARG0", "FUNC_ARG1", "FUNC_ARG2", "FUNC_ARG3", "UDF_RETURNS_SYM", 
  "UDF_SONAME_SYM", "UDF_SYM", "UNCOMMITTED_SYM", "UNDERSCORE_CHARSET", 
  "UNICODE_SYM", "UNION_SYM", "UNIQUE_SYM", "USAGE", "USE_FRM", "USE_SYM", 
  "USING", "VALUE_SYM", "VALUES", "VARIABLES", "WHERE", "WITH", 
  "WRITE_SYM", "NO_WRITE_TO_BINLOG", "X509_SYM", "XOR", "COMPRESSED_SYM", 
  "ERRORS", "WARNINGS", "ASCII_SYM", "BIGINT", "BLOB_SYM", "CHAR_SYM", 
  "CHANGED", "COALESCE", "DATETIME", "DATE_SYM", "DECIMAL_SYM", 
  "DOUBLE_SYM", "ENUM", "FAST_SYM", "FLOAT_SYM", "GEOMETRY_SYM", 
  "INT_SYM", "LIMIT", "LONGBLOB", "LONGTEXT", "MEDIUMBLOB", "MEDIUMINT", 
  "MEDIUMTEXT", "NUMERIC_SYM", "PRECISION", "QUICK", "REAL", "SIGNED_SYM", 
  "SMALLINT", "STRING_SYM", "TEXT_SYM", "TIMESTAMP", "TIME_SYM", 
  "TINYBLOB", "TINYINT", "TINYTEXT", "ULONGLONG_NUM", "UNSIGNED", 
  "VARBINARY", "VARCHAR", "VARYING", "ZEROFILL", "AGAINST", "ATAN", 
  "BETWEEN_SYM", "BIT_AND", "BIT_OR", "BIT_XOR", "CASE_SYM", "CONCAT", 
  "CONCAT_WS", "CURDATE", "CURTIME", "DATABASE", "DATE_ADD_INTERVAL", 
  "DATE_SUB_INTERVAL", "DAY_HOUR_SYM", "DAY_MICROSECOND_SYM", 
  "DAY_MINUTE_SYM", "DAY_SECOND_SYM", "DAY_SYM", "DECODE_SYM", 
  "DES_ENCRYPT_SYM", "DES_DECRYPT_SYM", "ELSE", "ELT_FUNC", "ENCODE_SYM", 
  "ENCRYPT", "EXPORT_SET", "EXTRACT_SYM", "FIELD_FUNC", "FORMAT_SYM", 
  "FOR_SYM", "FROM_UNIXTIME", "GEOMCOLLFROMTEXT", "GEOMFROMTEXT", 
  "GEOMFROMWKB", "GEOMETRYCOLLECTION", "GROUP_CONCAT_SYM", 
  "GROUP_UNIQUE_USERS", "GET_FORMAT", "HOUR_MICROSECOND_SYM", 
  "HOUR_MINUTE_SYM", "HOUR_SECOND_SYM", "HOUR_SYM", "IDENTIFIED_SYM", 
  "IF", "INSERT_METHOD", "INTERVAL_SYM", "LAST_INSERT_ID", "LEFT", 
  "LINEFROMTEXT", "LINESTRING", "LOCATE", "MAKE_SET_SYM", 
  "MASTER_POS_WAIT", "MICROSECOND_SYM", "MINUTE_MICROSECOND_SYM", 
  "MINUTE_SECOND_SYM", "MINUTE_SYM", "MODE_SYM", "MODIFY_SYM", 
  "MONTH_SYM", "MLINEFROMTEXT", "MPOINTFROMTEXT", "MPOLYFROMTEXT", 
  "MULTILINESTRING", "MULTIPOINT", "MULTIPOLYGON", "NOW_SYM", 
  "OLD_PASSWORD", "PASSWORD", "POINTFROMTEXT", "POINT_SYM", 
  "POLYFROMTEXT", "POLYGON", "POSITION_SYM", "PROCEDURE", "RAND", 
  "REPLACE", "RIGHT", "ROUND", "SECOND_SYM", "SECOND_MICROSECOND_SYM", 
  "SHARE_SYM", "SUBDATE_SYM", "SUBSTRING", "SUBSTRING_INDEX", "TRIM", 
  "UDA_CHAR_SUM", "UDA_FLOAT_SUM", "UDA_INT_SUM", "UDF_CHAR_FUNC", 
  "UDF_FLOAT_FUNC", "UDF_INT_FUNC", "UNIQUE_USERS", "UNIX_TIMESTAMP", 
  "USER", "UTC_DATE_SYM", "UTC_TIME_SYM", "UTC_TIMESTAMP_SYM", "WEEK_SYM", 
  "WHEN_SYM", "WORK_SYM", "YEAR_MONTH_SYM", "YEAR_SYM", "YEARWEEK", 
  "BENCHMARK_SYM", "END", "THEN_SYM", "SQL_BIG_RESULT", "SQL_CACHE_SYM", 
  "SQL_CALC_FOUND_ROWS", "SQL_NO_CACHE_SYM", "SQL_SMALL_RESULT", 
  "SQL_BUFFER_RESULT", "ISSUER_SYM", "CIPHER_SYM", "BEFORE_SYM", "'|'", 
  "'&'", "'-'", "'+'", "'*'", "'/'", "'%'", "'~'", "NEG", "'^'", "'('", 
  "')'", "','", "'!'", "'{'", "'}'", "'.'", "'@'", "'?'", "$accept", 
  "query", "verb_clause", "help", "change", "@1", "master_defs", 
  "master_def", "master_file_def", "create", "@2", "@3", "@4", "@5", 
  "create2", "create2a", "@6", "create3", "@7", "@8", "create_select", 
  "@9", "@10", "opt_as", "opt_create_database_options", 
  "create_database_options", "create_database_option", 
  "opt_table_options", "table_options", "table_option", 
  "opt_if_not_exists", "opt_create_table_options", 
  "create_table_options_space_separated", "create_table_options", 
  "create_table_option", "table_types", "row_types", "raid_types", 
  "merge_insert_types", "opt_select_from", "udf_func_type", "udf_type", 
  "field_list", "field_list_item", "column_def", "key_def", 
  "check_constraint", "opt_constraint", "field_spec", "@11", "type", 
  "@12", "@13", "char", "nchar", "varchar", "nvarchar", "int_type", 
  "real_type", "float_options", "precision", "field_options", 
  "field_opt_list", "field_option", "opt_len", "opt_precision", 
  "opt_attribute", "opt_attribute_list", "attribute", "charset", 
  "charset_name", "charset_name_or_default", "old_or_new_charset_name", 
  "old_or_new_charset_name_or_default", "collation_name", "opt_collate", 
  "collation_name_or_default", "opt_default", "opt_binary", "opt_primary", 
  "references", "@14", "opt_ref_list", "ref_list", "opt_on_delete", 
  "opt_on_delete_list", "opt_on_delete_item", "delete_option", "key_type", 
  "key_or_index", "opt_keys_or_index", "keys_or_index", 
  "opt_unique_or_fulltext", "key_alg", "opt_btree_or_rtree", "key_list", 
  "key_part", "opt_ident", "opt_component", "string_list", "alter", "@15", 
  "alter_list", "add_column", "alter_list_item", "@16", "@17", "@18", 
  "opt_column", "opt_ignore", "opt_restrict", "opt_place", "opt_to", 
  "slave", "@19", "start", "@20", "slave_thread_opts", "@21", 
  "slave_thread_opt_list", "slave_thread_opt", "slave_until", 
  "slave_until_opts", "restore", "@22", "backup", "@23", "checksum", 
  "@24", "opt_checksum_type", "repair", "@25", "opt_mi_repair_type", 
  "mi_repair_types", "mi_repair_type", "analyze", "@26", "check", "@27", 
  "opt_mi_check_type", "mi_check_types", "mi_check_type", "optimize", 
  "@28", "opt_no_write_to_binlog", "rename", "@29", "table_to_table_list", 
  "table_to_table", "keycache", "keycache_list", "assign_to_keycache", 
  "key_cache_name", "preload", "@30", "preload_list", "preload_keys", 
  "cache_keys_spec", "@31", "cache_key_list_or_empty", 
  "opt_ignore_leaves", "select", "select_init", "@32", "select_init2", 
  "@33", "select_part2", "@34", "@35", "select_into", "select_from", 
  "select_options", "select_option_list", "select_option", 
  "select_lock_type", "select_item_list", "select_item", "remember_name", 
  "remember_end", "select_item2", "select_alias", "optional_braces", 
  "expr", "comp_op", "all_or_any", "expr_expr", "no_in_expr", 
  "no_and_expr", "interval_expr", "simple_expr", "fulltext_options", 
  "udf_expr_list", "sum_expr", "@36", "@37", "opt_distinct", 
  "opt_gconcat_separator", "opt_gorder_clause", "in_sum_expr", "@38", 
  "cast_type_init", "cast_type_finalize", "cast_type", "expr_list", "@39", 
  "expr_list2", "ident_list_arg", "ident_list", "@40", "ident_list2", 
  "opt_expr", "opt_else", "when_list", "@41", "when_list2", 
  "join_table_list", "@42", "@43", "@44", "normal_join", "join_table", 
  "@45", "select_derived", "@46", "opt_outer", "opt_key_definition", 
  "key_usage_list", "@47", "key_list_or_empty", "key_usage_list2", 
  "using_list", "interval", "date_time_type", "table_alias", 
  "opt_table_alias", "opt_all", "where_clause", "having_clause", "@48", 
  "opt_escape", "group_clause", "group_list", "olap_opt", 
  "opt_order_clause", "order_clause", "@49", "order_list", "order_dir", 
  "opt_limit_clause_init", "opt_limit_clause", "limit_clause", 
  "limit_options", "delete_limit_clause", "ULONG_NUM", "ulonglong_num", 
  "procedure_clause", "@50", "procedure_list", "procedure_list2", 
  "procedure_item", "select_var_list_init", "@51", "select_var_list", 
  "select_var_ident", "into", "@52", "do", "@53", "drop", "@54", "@55", 
  "table_list", "table_name", "if_exists", "opt_temporary", "insert", 
  "@56", "@57", "replace", "@58", "@59", "@60", "insert_lock_option", 
  "replace_lock_option", "insert2", "insert_table", "insert_field_spec", 
  "@61", "opt_field_spec", "fields", "insert_values", "@62", "@63", 
  "values_list", "ident_eq_list", "ident_eq_value", "equal", "opt_equal", 
  "no_braces", "@64", "opt_values", "values", "expr_or_default", 
  "opt_insert_update", "@65", "update", "@66", "update_list", 
  "opt_low_priority", "delete", "@67", "single_multi", "@68", "@69", 
  "@70", "table_wild_list", "table_wild_one", "opt_wild", 
  "opt_delete_options", "opt_delete_option", "truncate", "opt_table_sym", 
  "show", "@71", "show_param", "@72", "master_or_binary", "opt_db", 
  "wild", "opt_full", "from_or_in", "binlog_in", "binlog_from", 
  "describe", "@73", "@74", "describe_command", "opt_extended_describe", 
  "opt_describe_column", "flush", "@75", "flush_options", "flush_option", 
  "@76", "opt_table_list", "reset", "@77", "reset_options", 
  "reset_option", "purge", "@78", "purge_options", "purge_option", "kill", 
  "use", "load", "@79", "opt_local", "load_data_lock", "opt_duplicate", 
  "opt_field_term", "field_term_list", "field_term", "opt_line_term", 
  "line_term_list", "line_term", "opt_ignore_lines", "text_literal", 
  "text_string", "param_marker", "literal", "insert_ident", "table_wild", 
  "order_ident", "simple_ident", "field_ident", "table_ident", 
  "IDENT_sys", "TEXT_STRING_sys", "TEXT_STRING_literal", "ident", 
  "ident_or_text", "user", "keyword", "set", "@80", "opt_option", 
  "option_value_list", "option_type", "opt_var_type", 
  "opt_var_ident_type", "option_value", "internal_variable_name", 
  "isolation_types", "text_or_password", "set_expr_or_default", "lock", 
  "@81", "table_or_tables", "table_lock_list", "table_lock", 
  "lock_option", "unlock", "handler", "@82", "handler_read_or_scan", 
  "handler_scan_function", "handler_rkey_function", "@83", 
  "handler_rkey_mode", "revoke", "@84", "revoke_command", "grant", "@85", 
  "grant_privileges", "grant_privilege_list", "grant_privilege", "@86", 
  "@87", "@88", "@89", "opt_and", "require_list", "require_list_element", 
  "opt_table", "user_list", "grant_user", "opt_column_list", 
  "column_list", "column_list_id", "require_clause", "grant_options", 
  "grant_option_list", "grant_option", "begin", "@90", "opt_work", 
  "commit", "rollback", "savepoint", "union_clause", "union_list", "@91", 
  "union_opt", "optional_order_or_limit", "@92", "order_or_limit", 
  "union_option", "singlerow_subselect", "singlerow_subselect_init", 
  "exists_subselect", "exists_subselect_init", "in_subselect", 
  "in_subselect_init", "subselect_start", "subselect_end", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     124,    38,    45,    43,    42,    47,    37,   126,   725,    94,
      40,    41,    44,    33,   123,   125,    46,    64,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   489,   490,   490,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   492,   494,   493,   495,
     495,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   497,   497,   497,   497,   499,   498,   500,
     498,   501,   498,   502,   498,   503,   503,   503,   503,   504,
     505,   504,   506,   507,   506,   508,   506,   510,   511,   509,
     512,   512,   513,   513,   514,   514,   515,   515,   516,   516,
     517,   517,   518,   519,   519,   520,   520,   521,   521,   522,
     522,   522,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   524,   524,   524,   524,   524,
     524,   524,   525,   525,   525,   525,   526,   526,   526,   527,
     527,   527,   528,   528,   528,   529,   529,   530,   530,   530,
     531,   531,   532,   532,   533,   533,   534,   534,   534,   535,
     535,   536,   536,   538,   537,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   540,   539,   541,   539,
     539,   539,   542,   543,   543,   544,   544,   545,   545,   545,
     545,   545,   546,   546,   546,   546,   546,   547,   547,   547,
     548,   548,   548,   549,   550,   550,   551,   551,   552,   552,
     552,   553,   553,   554,   554,   555,   555,   556,   556,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   558,
     558,   559,   559,   560,   560,   561,   561,   562,   562,   563,
     564,   564,   565,   565,   566,   566,   567,   567,   567,   567,
     567,   567,   568,   568,   570,   569,   571,   571,   572,   572,
     573,   573,   574,   574,   575,   575,   575,   575,   575,   576,
     576,   576,   576,   576,   577,   577,   577,   577,   577,   577,
     577,   577,   578,   578,   579,   579,   580,   580,   580,   581,
     581,   581,   581,   582,   582,   582,   583,   583,   583,   584,
     584,   585,   585,   586,   586,   587,   587,   588,   588,   590,
     589,   589,   591,   591,   591,   591,   591,   592,   593,   593,
     593,   594,   593,   595,   596,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   597,   597,   598,
     598,   599,   599,   599,   600,   600,   600,   601,   601,   601,
     601,   603,   602,   602,   602,   602,   605,   604,   607,   606,
     608,   608,   609,   609,   609,   610,   610,   611,   611,   613,
     612,   615,   614,   617,   616,   618,   618,   618,   620,   619,
     621,   621,   622,   622,   623,   623,   623,   625,   624,   627,
     626,   628,   628,   629,   629,   630,   630,   630,   630,   630,
     632,   631,   633,   633,   633,   635,   634,   636,   636,   637,
     638,   639,   639,   640,   641,   641,   643,   642,   644,   644,
     645,   647,   646,   648,   648,   649,   649,   650,   651,   652,
     651,   654,   653,   656,   657,   655,   658,   658,   658,   658,
     658,   658,   659,   660,   660,   661,   661,   662,   662,   662,
     662,   662,   662,   662,   662,   662,   662,   663,   663,   663,
     664,   664,   664,   665,   666,   667,   668,   668,   669,   669,
     669,   669,   669,   670,   670,   671,   671,   672,   672,   672,
     672,   672,   672,   673,   673,   674,   674,   674,   674,   674,
     674,   674,   674,   674,   674,   674,   674,   674,   674,   674,
     674,   674,   674,   674,   674,   674,   674,   674,   674,   674,
     674,   674,   674,   674,   674,   674,   674,   674,   674,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     675,   675,   675,   675,   675,   675,   675,   675,   675,   675,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,   676,   676,   677,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   678,   678,   678,   678,   678,   678,   678,   678,
     678,   678,   679,   679,   679,   680,   680,   681,   681,   681,
     681,   681,   681,   682,   683,   681,   681,   681,   681,   681,
     681,   681,   681,   684,   684,   685,   685,   686,   686,   688,
     687,   689,   690,   690,   690,   690,   690,   690,   690,   690,
     690,   690,   691,   693,   692,   694,   694,   695,   695,   697,
     696,   698,   698,   699,   699,   700,   700,   702,   701,   703,
     703,   704,   704,   704,   704,   704,   704,   705,   704,   704,
     706,   704,   704,   704,   707,   704,   704,   704,   708,   708,
     708,   710,   709,   709,   709,   712,   711,   713,   713,   714,
     714,   714,   714,   716,   715,   717,   717,   718,   718,   718,
     719,   719,   720,   720,   720,   720,   720,   720,   720,   720,
     720,   720,   720,   720,   720,   720,   720,   720,   720,   720,
     721,   721,   721,   722,   722,   722,   723,   723,   724,   724,
     725,   725,   726,   727,   726,   728,   728,   729,   729,   730,
     730,   731,   731,   731,   732,   732,   734,   733,   735,   735,
     736,   736,   736,   737,   737,   738,   738,   739,   740,   740,
     740,   741,   741,   742,   742,   742,   742,   742,   743,   743,
     743,   743,   743,   744,   745,   744,   746,   746,   747,   747,
     748,   750,   749,   751,   751,   752,   754,   753,   753,   753,
     756,   755,   757,   758,   757,   757,   757,   759,   757,   760,
     760,   761,   762,   762,   763,   763,   765,   766,   764,   768,
     769,   770,   767,   771,   771,   771,   771,   772,   772,   773,
     773,   774,   775,   775,   775,   776,   775,   777,   777,   777,
     778,   778,   779,   779,   780,   779,   781,   779,   782,   782,
     783,   783,   784,   785,   785,   786,   786,   788,   787,   789,
     789,   790,   790,   791,   791,   792,   793,   792,   795,   794,
     796,   796,   797,   797,   799,   798,   801,   800,   802,   800,
     803,   800,   804,   804,   805,   805,   806,   806,   807,   807,
     808,   808,   808,   809,   810,   810,   812,   811,   813,   813,
     813,   813,   813,   813,   813,   813,   814,   813,   813,   813,
     813,   813,   813,   813,   813,   813,   813,   813,   813,   813,
     813,   813,   813,   813,   813,   813,   813,   813,   813,   815,
     815,   816,   816,   817,   817,   818,   818,   819,   819,   820,
     820,   821,   821,   823,   822,   824,   822,   825,   825,   826,
     826,   827,   827,   827,   829,   828,   830,   830,   832,   831,
     831,   831,   831,   831,   831,   831,   831,   831,   831,   831,
     833,   833,   835,   834,   836,   836,   837,   837,   837,   839,
     838,   840,   841,   841,   842,   843,   845,   844,   844,   844,
     846,   846,   847,   847,   847,   848,   848,   848,   849,   849,
     850,   850,   851,   851,   851,   851,   852,   852,   853,   853,
     854,   854,   855,   855,   856,   856,   856,   856,   857,   857,
     858,   859,   859,   859,   859,   859,   859,   859,   859,   859,
     859,   859,   859,   860,   860,   861,   861,   862,   863,   863,
     863,   863,   864,   864,   864,   865,   865,   865,   866,   866,
     867,   868,   869,   869,   870,   870,   870,   871,   871,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   872,   872,   872,   872,   872,   872,   872,   872,
     872,   872,   874,   873,   875,   875,   876,   876,   877,   877,
     877,   877,   878,   878,   878,   878,   879,   879,   879,   879,
     880,   880,   880,   880,   880,   880,   880,   880,   881,   881,
     881,   882,   882,   882,   882,   883,   883,   883,   884,   884,
     884,   884,   884,   886,   885,   887,   887,   888,   888,   889,
     890,   890,   890,   890,   891,   892,   892,   893,   892,   894,
     894,   895,   895,   896,   896,   896,   896,   897,   896,   898,
     898,   898,   898,   898,   900,   899,   901,   901,   903,   902,
     904,   904,   904,   905,   905,   907,   906,   908,   906,   909,
     906,   910,   906,   906,   906,   906,   906,   906,   906,   906,
     906,   906,   906,   906,   906,   906,   906,   906,   906,   906,
     906,   911,   911,   912,   912,   913,   913,   913,   914,   914,
     914,   914,   915,   915,   916,   916,   916,   917,   917,   918,
     918,   919,   920,   920,   920,   920,   920,   921,   921,   922,
     922,   923,   923,   923,   923,   925,   924,   926,   926,   927,
     928,   928,   929,   930,   930,   932,   931,   933,   933,   934,
     935,   934,   936,   936,   937,   937,   938,   939,   940,   941,
     942,   943,   944,   945
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     5,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     0,     7,     0,
      11,     0,     6,     0,     9,     2,     2,     2,     4,     4,
       0,     4,     0,     0,     5,     0,     7,     0,     0,     6,
       0,     1,     0,     1,     1,     2,     3,     3,     0,     1,
       1,     2,     1,     0,     3,     0,     1,     1,     2,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     4,     3,
       4,     3,     3,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     2,     6,     8,     2,     0,
       2,     0,     2,     0,     4,     3,     3,     3,     2,     1,
       1,     5,     2,     4,     1,     4,     5,     4,     4,     3,
       1,     1,     1,     4,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     2,
       3,     2,     2,     3,     3,     3,     0,     6,     0,     6,
       2,     1,     1,     1,     2,     2,     1,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     3,     1,     5,     0,     1,     2,     1,     1,     1,
       1,     0,     3,     0,     1,     0,     1,     2,     1,     1,
       2,     2,     1,     3,     2,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     0,     1,     0,     1,     1,     1,
       1,     2,     0,     1,     0,     4,     1,     4,     3,     1,
       0,     1,     2,     1,     3,     3,     2,     2,     2,     1,
       1,     2,     2,     2,     3,     1,     1,     2,     1,     2,
       2,     3,     1,     1,     0,     1,     1,     1,     1,     0,
       1,     1,     1,     0,     2,     2,     1,     1,     1,     4,
       2,     1,     4,     0,     1,     0,     2,     1,     3,     0,
       6,     4,     0,     2,     2,     1,     3,     2,     3,     2,
       4,     0,     6,     0,     0,     8,     4,     3,     4,     3,
       2,     2,     6,     5,     3,     1,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     2,     1,     0,     1,     1,
       1,     0,     5,     3,     3,     3,     0,     3,     0,     2,
       1,     3,     0,     1,     1,     0,     2,     1,     3,     0,
       6,     0,     6,     0,     5,     0,     1,     1,     0,     6,
       0,     1,     1,     2,     1,     1,     1,     0,     6,     0,
       5,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       0,     6,     0,     1,     1,     0,     4,     1,     3,     3,
       5,     1,     3,     2,     1,     1,     0,     6,     1,     3,
       3,     0,     2,     0,     4,     0,     2,     1,     2,     0,
       6,     0,     3,     0,     0,     6,     1,     2,     1,     1,
       2,     2,     8,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     4,
       3,     1,     1,     4,     0,     0,     1,     1,     0,     2,
       2,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     6,     3,     4,     5,
       6,     3,     3,     3,     3,     4,     4,     5,     3,     4,
       3,     4,     3,     3,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     4,     5,
       6,     3,     3,     3,     3,     4,     4,     5,     3,     4,
       3,     4,     3,     3,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     4,     1,
       5,     6,     3,     4,     5,     6,     3,     3,     3,     4,
       4,     5,     3,     4,     3,     4,     3,     3,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     4,     1,     2,     1,     3,     1,     1,     4,
       2,     5,     1,     2,     2,     2,     2,     2,     3,     5,
       6,     2,     1,     4,     7,     4,     2,     6,     6,     6,
       6,     8,     4,     4,     3,     4,     6,     8,     6,     8,
       4,     6,     4,     4,     4,     4,     4,     6,     2,     2,
       4,     7,     7,     3,     4,     4,     6,     6,     4,     6,
       6,     6,     4,     6,     4,     6,     8,    10,    12,     1,
       6,     4,     6,     6,     4,     6,     4,     6,     4,     6,
       4,     8,    10,     4,     1,     3,     4,     6,     4,     6,
       8,     4,     6,     6,     6,     4,     6,     4,     6,     6,
       8,     4,     4,     6,     4,     4,     4,     6,     4,     6,
       4,     6,     4,     4,     2,     4,     4,     4,     6,     4,
       6,     4,     6,     4,     6,     4,     3,     8,     6,     4,
       6,     6,     8,     4,     8,     6,     8,     6,     8,     4,
       4,     6,     4,     7,     7,     7,     6,     6,     6,     6,
       6,     1,     4,     4,     4,     4,     4,     4,    10,     3,
       4,     3,     2,     2,     2,     4,     6,     4,     4,     6,
       6,     6,     0,     3,     3,     0,     1,     4,     4,     4,
       4,     5,     4,     0,     0,     7,    10,     4,     4,     4,
       4,     4,     7,     0,     1,     0,     2,     0,     1,     0,
       3,     0,     1,     3,     2,     1,     2,     1,     2,     1,
       1,     1,     2,     0,     2,     1,     3,     1,     3,     0,
       2,     1,     3,     0,     1,     0,     2,     0,     2,     3,
       5,     3,     1,     3,     3,     3,     5,     0,     8,     7,
       0,    10,     6,     7,     0,    10,     6,     4,     1,     2,
       2,     0,     4,    10,     5,     0,     5,     0,     1,     0,
       2,     2,     2,     0,     5,     0,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     0,     2,     0,     1,
       0,     2,     0,     0,     3,     2,     0,     0,     4,     4,
       2,     0,     2,     2,     0,     1,     0,     4,     4,     2,
       0,     1,     1,     0,     1,     0,     1,     2,     1,     3,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     6,     0,     1,     3,     1,
       2,     0,     2,     3,     1,     2,     0,     6,     3,     2,
       0,     3,     6,     0,     6,     4,     3,     0,     4,     1,
       3,     1,     0,     2,     0,     1,     0,     0,     8,     0,
       0,     0,     7,     0,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     4,     0,     3,     0,     3,     2,
       3,     1,     2,     2,     0,     3,     0,     5,     3,     1,
       3,     1,     3,     1,     1,     0,     1,     0,     4,     0,
       1,     3,     1,     1,     1,     0,     0,     6,     0,    10,
       5,     3,     0,     1,     0,     4,     0,     6,     0,     5,
       0,     6,     1,     3,     3,     5,     0,     2,     0,     2,
       1,     1,     1,     3,     0,     1,     0,     3,     2,     3,
       4,     4,     6,    16,     2,     2,     0,     6,     4,     2,
       2,     1,     5,     5,     2,     2,     2,     2,     2,     3,
       2,     2,     2,     1,     3,     4,     3,     2,     2,     1,
       1,     0,     2,     0,     2,     0,     1,     1,     1,     0,
       2,     0,     2,     0,     4,     0,     4,     1,     1,     0,
       1,     0,     1,     1,     0,     4,     3,     1,     0,     3,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     3,     3,     1,     1,     1,     2,     0,
       3,     3,     2,     2,     2,     2,     0,    15,     5,     4,
       0,     1,     0,     1,     1,     0,     1,     1,     0,     2,
       2,     1,     3,     4,     3,     3,     0,     2,     2,     1,
       3,     3,     0,     3,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     3,     5,     1,     1,     3,
       4,     5,     1,     3,     2,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     0,     1,     2,     4,     0,     1,
       1,     1,     0,     1,     1,     1,     0,     2,     2,     2,
       4,     3,     6,     4,     2,     3,     3,     5,     1,     3,
       3,     2,     2,     2,     1,     1,     4,     4,     1,     1,
       1,     1,     1,     0,     4,     1,     1,     1,     3,     3,
       1,     1,     2,     2,     2,     4,     3,     0,     7,     1,
       2,     1,     1,     1,     1,     1,     1,     0,     5,     1,
       1,     1,     1,     1,     0,     3,     5,     6,     0,     9,
       1,     2,     1,     1,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     3,     2,     2,
       2,     0,     1,     3,     1,     2,     2,     2,     1,     3,
       3,     1,     1,     3,     4,     5,     1,     0,     3,     3,
       1,     1,     0,     2,     2,     2,     2,     0,     2,     2,
       1,     2,     2,     2,     2,     0,     3,     0,     1,     1,
       1,     4,     2,     0,     1,     0,     4,     1,     1,     0,
       0,     2,     2,     1,     0,     1,     3,     1,     3,     1,
       3,     1,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       0,     2,     0,   379,   442,  1585,     0,  1589,    98,  1054,
     980,   994,   442,     0,   996,     0,     0,     0,   442,  1159,
     442,  1152,  1590,     0,   473,  1076,     0,     0,     0,  1074,
       0,  1048,     0,     0,     0,     0,  1127,  1128,  1518,     0,
       0,  1514,  1444,     0,   999,     0,     0,     0,    20,     8,
      12,     4,    40,    41,    33,     6,    10,    30,     5,     9,
      25,    29,    26,    27,    37,   467,    15,    16,    21,    31,
      44,    13,    42,    39,    14,  1129,    17,    32,    28,    22,
      45,    23,    38,    24,    43,    19,    34,    18,     7,    11,
      35,    36,  1264,  1306,  1321,  1362,  1375,  1410,  1241,  1244,
    1248,  1250,  1252,  1263,  1266,  1268,  1271,  1281,  1280,  1289,
    1290,  1291,  1300,  1309,  1320,  1326,  1329,  1365,  1388,  1390,
    1391,  1394,  1395,  1400,  1409,  1414,  1415,  1417,  1240,  1421,
    1426,  1433,  1239,  1243,  1246,  1247,  1249,  1251,  1253,  1254,
    1255,  1257,  1256,  1258,  1260,  1261,  1267,  1265,  1270,  1272,
    1276,  1277,  1294,  1279,  1283,  1284,  1295,  1278,  1288,  1292,
    1297,  1298,  1299,  1296,  1305,  1304,  1307,  1308,  1310,  1228,
    1229,  1313,  1314,  1318,  1315,  1316,  1322,  1323,  1325,  1327,
    1330,  1334,  1332,  1333,  1335,  1331,  1336,  1337,  1338,  1339,
    1340,  1341,  1342,  1385,  1386,  1328,  1343,  1344,  1345,  1346,
    1347,  1348,  1351,  1358,  1359,  1360,  1363,  1361,  1366,  1364,
    1367,  1369,  1282,  1370,  1371,  1376,  1377,  1378,  1380,  1383,
    1384,  1381,  1382,  1387,  1389,  1392,  1393,  1396,  1397,  1398,
    1399,  1402,  1403,  1404,  1406,  1408,  1416,  1420,  1422,  1423,
    1425,  1429,  1430,  1431,  1432,  1435,  1437,  1436,  1440,  1269,
    1287,  1438,  1245,  1259,  1273,  1274,  1286,  1293,  1301,  1379,
    1405,  1418,  1424,  1427,  1428,  1242,  1275,  1302,  1303,  1311,
    1312,  1319,  1324,  1349,  1350,  1353,  1352,  1354,  1355,  1356,
    1357,  1368,  1372,  1373,  1374,  1401,  1407,  1419,  1434,  1439,
    1441,  1285,  1411,  1413,  1412,  1317,  1262,     0,     0,  1232,
    1225,  1233,   380,     0,     0,   444,   443,     0,  1587,     0,
     156,   331,   332,   102,   330,   103,     0,    99,   100,     0,
       0,  1068,     0,     0,   995,     0,   992,   987,     0,  1134,
    1236,  1230,  1235,  1234,    46,  1003,     0,  1248,     0,     0,
       0,     0,     0,     0,     0,  1240,  1426,     0,     0,  1260,
    1265,     0,     0,     0,   689,  1206,     0,  1208,     0,     0,
    1203,   839,  1195,     0,  1207,  1202,  1205,  1398,  1231,   771,
       0,     0,     0,     0,     0,     0,  1245,     0,     0,  1274,
    1427,  1428,  1204,     0,     0,     0,     0,   843,     0,     0,
     513,   513,     0,     0,     0,  1275,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1302,     0,     0,  1303,  1311,     0,     0,     0,     0,     0,
    1324,     0,     0,     0,  1349,  1350,  1354,     0,     0,     0,
    1355,  1356,  1357,   513,  1368,  1372,     0,  1373,     0,  1374,
       0,     0,     0,     0,     0,  1401,  1419,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1434,   513,
     513,   513,     0,  1441,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1200,  1164,   515,   704,   516,   632,
    1201,   628,   627,   625,  1194,  1218,   642,   473,  1172,     0,
       0,  1486,  1485,  1483,     0,     0,     0,     0,     0,  1592,
     468,   471,   483,  1115,   398,   398,   398,   396,   398,  1075,
       0,  1494,  1052,   411,     0,   413,   429,     0,   445,   409,
       0,  1445,  1442,  1165,  1052,   473,     1,     3,  1292,  1125,
    1123,  1227,  1496,   913,  1497,     0,   284,     0,   427,  1588,
    1586,    47,     0,     0,   103,   101,     0,     0,  1072,  1071,
    1070,     0,  1068,  1044,  1043,   981,  1042,     0,   986,     0,
       0,     0,   992,     0,  1005,  1006,  1004,   379,     0,   918,
     918,     0,   918,   918,   918,   918,   918,     0,     0,   646,
       0,     0,     0,     0,     0,     0,   641,   473,     0,     0,
       0,   839,     0,   837,     0,   636,     0,     0,     0,     0,
       0,  1209,  1196,     0,     0,   833,   833,     0,     0,  1210,
       0,  1212,     0,  1211,     0,   918,   918,   918,   844,     0,
     833,     0,     0,   668,     0,   669,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   833,   813,     0,     0,     0,     0,
     624,     0,     0,     0,   833,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   833,   833,   833,     0,   734,     0,
       0,     0,     0,     0,   833,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   833,   833,   833,   833,   833,
     833,     0,     0,     0,   782,   783,   784,     0,     0,     0,
       0,   634,   633,   635,  1612,     0,   637,     0,     0,  1456,
     630,     0,   517,     0,     0,   518,   519,   520,   521,   522,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   892,   893,   894,   895,   896,   897,   898,   899,
     900,   901,   902,   903,   904,   905,   907,   906,   908,   909,
       0,     0,  1197,     0,  1607,     0,  1173,     0,  1174,  1170,
       0,     0,     0,   440,  1109,  1110,     0,  1160,   418,  1157,
    1156,     0,  1153,  1155,     0,  1593,   496,   489,   488,   487,
     491,   495,   493,   494,   490,   492,   504,   484,   486,     0,
       0,     0,  1109,     0,     0,   270,  1113,     0,  1113,  1116,
    1453,     0,   327,   328,     0,   326,  1454,  1103,     0,     0,
    1091,  1455,  1113,  1111,     0,   943,   943,     0,  1113,     0,
    1077,     0,     0,     0,   394,   402,   395,   391,   397,   393,
    1073,   991,  1053,   379,     0,     0,   451,   461,     0,     0,
    1536,  1537,  1533,  1538,  1539,  1527,     0,     0,  1525,     0,
    1546,  1529,  1522,  1543,     0,  1535,  1542,  1531,  1540,  1541,
    1534,     0,  1520,  1523,     0,     0,  1522,  1515,     0,  1448,
    1008,     0,  1007,     0,     0,  1131,   915,   914,     0,  1495,
       0,  1226,   285,   351,   284,    94,     0,   349,     0,     0,
       0,    71,     0,    73,   333,     0,  1055,  1058,  1062,  1066,
    1069,     0,     0,   993,   985,  1237,  1566,   988,  1562,     0,
    1147,  1146,  1148,  1142,  1144,  1143,     0,  1149,  1145,  1486,
    1135,  1137,  1138,     0,     0,   919,     0,   819,   803,     0,
     819,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1609,     0,     0,     0,     0,     0,
       0,   840,   841,     0,   654,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     847,     0,     0,   514,     0,   673,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   814,   833,     0,   912,   910,   911,
       0,     0,     0,   705,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   589,   746,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   796,     0,     0,     0,     0,     0,     0,
     779,     0,   781,     0,     0,     0,   957,   954,   953,   956,
     955,     0,   638,   833,     0,     0,     0,     0,     0,     0,
       0,   551,   542,     0,     0,   540,   552,   545,   546,   534,
     833,   527,   473,   926,     0,     0,     0,     0,   532,   531,
     538,   533,     0,   623,   553,   555,   548,   704,   547,   704,
     549,   550,   556,   554,  1244,   523,   543,     0,     0,   626,
    1219,  1613,  1606,  1169,  1171,     0,   456,     0,   913,  1484,
    1487,     0,     0,     0,  1158,     0,  1591,  1604,   472,  1594,
     502,   474,   501,     0,   485,  1119,     0,     0,   103,  1107,
    1085,  1108,  1102,     0,  1101,  1089,  1078,     0,  1097,     0,
    1111,  1096,  1117,  1118,  1113,     0,  1111,  1090,     0,  1095,
     944,  1094,   269,  1100,     0,  1084,     0,  1098,  1113,   404,
     403,   399,   400,   405,   871,     0,   989,     0,     0,   453,
     463,   415,   431,     0,  1567,  1548,  1550,  1549,  1567,  1545,
    1567,  1521,  1544,  1567,     0,     0,   446,   447,     0,     0,
    1521,     0,  1449,  1450,  1451,  1443,     0,     0,  1011,  1000,
    1010,   469,  1126,  1199,  1124,  1132,  1198,  1133,   917,  1362,
    1298,     0,   920,  1499,    95,     0,     0,   352,   431,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,    62,   104,   284,    67,
       0,     0,     0,     0,  1060,  1056,  1066,     0,     0,     0,
     913,  1041,   983,     0,     0,     0,   381,  1141,     0,     0,
    1150,   997,     0,   797,     0,   833,   802,     0,     0,   808,
     807,   809,   810,   811,     0,     0,   821,   663,   665,     0,
     821,   652,  1608,   833,   833,   715,     0,   838,     0,     0,
     833,   655,     0,     0,   653,   645,   662,   835,   834,   664,
     674,   760,     0,   759,   660,     0,   798,   799,   800,   845,
       0,   666,   833,   670,     0,     0,   675,     0,   684,     0,
     682,     0,   833,     0,   678,     0,     0,     0,   833,     0,
     691,     0,   711,     0,   694,     0,   696,     0,   698,   817,
       0,     0,   700,     0,   706,     0,   717,     0,   708,     0,
     833,     0,   721,   722,   724,   726,     0,   728,     0,   730,
       0,   725,   732,   733,   735,   737,   736,   739,     0,     0,
     741,     0,   743,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   745,     0,
       0,   749,     0,   753,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   762,   772,   773,   774,   775,
     776,   777,     0,   780,   785,     0,   787,   788,     0,     0,
       0,   643,  1220,  1457,  1458,  1459,   345,   629,   535,   541,
       0,  1611,     0,     0,   536,   833,   528,   926,   539,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   558,   557,   544,   703,     0,
       0,     0,  1168,     0,     0,   431,     0,     0,  1161,   420,
    1154,  1605,  1595,   504,   945,   505,   507,   506,  1218,     0,
    1121,     0,  1106,     0,  1114,  1104,     0,  1113,  1079,  1112,
    1113,   947,   948,  1111,     0,  1099,   402,     0,   392,   871,
       0,     0,   852,     0,     0,     0,   455,   450,   454,   452,
       0,   325,   462,   417,   416,   414,   438,   437,   439,   436,
     435,   430,   432,   433,  1547,     0,  1528,  1526,  1530,  1532,
    1558,  1561,  1225,     0,  1524,     0,     0,     0,     0,     0,
    1448,   270,     0,  1359,  1425,  1372,     0,     0,  1468,  1446,
       0,  1009,     0,  1599,  1506,  1504,  1505,  1509,  1510,  1512,
    1511,  1513,  1503,  1500,  1507,     0,   945,   283,   282,    96,
     279,   272,   274,   273,    97,   271,   377,   377,   377,  1035,
     377,  1035,  1035,  1035,  1035,     0,     0,  1035,     0,     0,
       0,     0,     0,  1035,  1035,     0,  1035,  1035,  1035,  1035,
     387,  1035,  1035,  1035,  1035,   377,  1035,   375,   107,  1035,
     350,     0,   355,   376,   428,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,   105,     0,   336,   338,   337,   335,   334,     0,
       0,   920,     0,  1063,   871,  1067,  1066,  1064,   984,  1238,
       0,  1563,   383,   382,   982,     0,  1136,  1151,  1139,     0,
       0,   820,   804,   801,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   792,   842,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   848,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   815,   818,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   581,   572,     0,     0,   570,   586,   575,   576,   564,
       0,   926,     0,     0,     0,   562,   561,   568,   563,     0,
     582,   584,   578,   704,   577,   704,   579,   580,   585,   583,
     573,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   639,     0,   631,   525,  1610,   925,     0,   537,     0,
     615,   606,     0,     0,   604,   620,   609,   610,   529,   833,
     592,   926,     0,     0,     0,     0,   597,   596,   602,   598,
       0,   616,   618,   612,   704,   611,   704,   613,   614,   619,
     617,   607,     0,  1221,  1166,   457,   458,   461,     0,  1490,
    1491,  1489,  1488,   441,  1162,  1163,   425,   426,   424,   419,
     421,   422,     0,   500,   871,   971,   497,   479,   476,   946,
     478,   508,     0,  1120,     0,  1086,     0,  1105,     0,  1081,
    1080,     0,     0,  1088,  1111,   401,   407,   406,   875,     0,
     871,     0,     0,   868,     0,     0,   871,   877,   877,   871,
     871,   913,   412,   990,     0,   434,  1571,     0,  1570,     0,
       0,     0,   448,   449,   410,     0,     0,     0,     0,   280,
       0,  1033,  1034,     0,     0,  1456,     0,   276,   278,   277,
    1464,   275,     0,     0,    87,  1015,     0,     0,     0,  1024,
    1001,  1012,  1597,   470,  1598,     0,     0,   921,  1498,   378,
     343,   316,   323,   322,   318,   359,   169,   343,   315,   357,
       0,     0,  1036,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1035,  1035,  1035,     0,   370,   353,   371,   354,
    1035,     0,     0,   936,     0,     0,     0,     0,   389,   390,
     388,     0,     0,     0,     0,     0,     0,     0,   108,     0,
       0,   171,     0,   384,   169,   173,  1222,    51,    52,    63,
     962,   960,   958,   961,   959,    64,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    65,    66,    50,     0,   171,
      68,  1175,   106,   109,   159,   158,   157,     0,    69,   871,
     934,  1066,   920,     0,   913,  1564,     0,  1140,  1045,   723,
       0,     0,   624,   658,   770,   822,   251,   251,   831,   829,
     825,   830,   827,   832,   647,   650,     0,   649,   713,   714,
     716,     0,     0,     0,   640,   656,     0,   836,   761,   661,
     846,   648,     0,     0,   667,     0,     0,   680,   685,   683,
     676,   681,   679,     0,   791,   693,   690,   692,   712,   695,
     697,     0,     0,     0,   699,     0,   707,   718,   709,     0,
     677,   719,     0,   727,   729,   731,   740,   738,   742,   565,
     571,   744,   566,   926,   569,     0,     0,   588,   587,   574,
       0,   748,   750,   624,   751,     0,   757,   755,     0,     0,
     768,     0,   766,     0,   767,     0,   769,     0,   786,   789,
     790,   346,   526,   530,   599,   605,     0,   600,   833,   593,
     926,   603,     0,     0,   622,   621,   608,  1175,     0,   465,
    1492,  1493,   423,  1596,   477,   920,     0,     0,   979,     0,
       0,     0,   475,   481,   871,   480,     0,   503,   512,   511,
    1215,  1219,  1122,   943,  1093,  1092,     0,   950,   949,  1113,
       0,     0,   483,   851,     0,     0,   870,   869,   871,   877,
     877,   920,     0,   855,   878,     0,     0,   853,   854,   879,
     889,     0,   888,  1568,     0,  1560,  1559,  1572,     0,  1516,
    1447,  1470,     0,  1465,     0,     0,  1475,     0,     0,  1466,
       0,     0,  1469,  1481,  1482,  1479,  1480,  1478,  1461,   483,
       0,  1037,  1023,  1029,  1022,     0,     0,     0,  1021,  1214,
    1213,  1593,  1002,   943,  1603,  1601,     0,   172,   344,   317,
     319,     0,     0,     0,   320,   168,   333,     0,   361,   117,
     343,   367,   369,   381,   118,   115,   121,   131,     0,     0,
       0,   122,     0,   113,   114,     0,   120,   119,   147,   146,
     124,   148,   125,   126,   374,   142,   144,   143,   145,   123,
     140,   138,   141,   135,   137,   139,   136,   112,     0,   151,
     150,   149,   132,   363,   116,   129,   356,     0,   160,   162,
     163,  1224,     0,   386,   358,     0,   164,   165,     0,     0,
      77,     0,    75,     0,     0,  1177,  1176,    76,    90,     0,
     110,     0,     0,   920,   951,   935,  1059,  1065,  1565,     0,
     998,   805,     0,     0,     0,   824,   286,   826,   828,     0,
       0,     0,   644,     0,   849,     0,   671,   672,     0,   816,
     812,     0,     0,     0,     0,   567,     0,   559,     0,     0,
       0,     0,     0,   765,   763,   764,     0,   590,     0,   601,
       0,   594,     0,   459,     0,   460,   927,   976,   978,     0,
     972,   974,     0,   498,   510,   509,     0,  1087,     0,  1082,
     408,   913,   504,     0,   867,     0,     0,     0,   934,     0,
     871,   871,     0,   857,     0,     0,     0,   872,   464,     0,
    1569,     0,  1577,  1517,   281,     0,     0,  1474,  1463,     0,
       0,     0,     0,  1460,   504,  1016,  1031,     0,  1039,     0,
       0,  1013,  1026,     0,     0,  1025,  1602,     0,   170,   343,
     314,   321,     0,     0,     0,     0,   368,   366,   133,   130,
     128,   134,  1217,   937,   940,     0,     0,   360,   171,   385,
     294,     0,   251,   179,   180,   240,   286,     0,   223,   228,
     218,   221,   236,   251,   222,   194,   190,   240,   238,   216,
     240,   197,   232,   206,   286,   205,   235,   286,   240,   237,
     234,   251,   192,   191,   195,   233,   286,     0,   226,   198,
     201,   202,   200,   204,   199,   203,   251,   255,   286,   184,
       0,     0,   251,   253,  1223,     0,    80,   105,    91,     0,
     111,    74,     0,  1061,     0,  1057,  1046,     0,   659,     0,
     289,   288,   290,   287,     0,   823,   651,   794,   793,   657,
       0,   686,     0,   918,   701,   710,   720,   560,   747,   752,
     756,   754,   758,   833,   591,   595,     0,   466,     0,   922,
    1178,   975,     0,     0,  1216,     0,   874,   945,     0,   871,
     871,     0,   951,  1051,   860,   864,   856,     0,   883,   881,
     882,   880,   887,  1576,  1574,     0,  1575,     0,     0,  1573,
    1551,     0,  1519,  1472,  1471,  1473,  1467,     0,     0,     0,
      88,     0,     0,     0,  1040,  1028,  1599,  1014,  1020,  1508,
       0,     0,   373,     0,   384,     0,   941,   942,   939,   127,
     255,   161,   300,     0,   178,     0,   244,   242,   222,   207,
       0,   286,   220,   224,   227,   229,   231,     0,   196,   244,
     239,     0,   244,   212,   211,   244,   286,     0,   209,     0,
     244,     0,   262,     0,     0,     0,   259,   293,     0,   265,
     174,   256,   258,     0,   225,     0,   182,     0,     0,     0,
     244,     0,   254,   244,    78,  1600,  1175,     0,    83,     0,
     940,   341,   952,     0,     0,   252,   291,   850,     0,     0,
       0,     0,     0,   923,   934,     0,  1186,   973,   499,     0,
     871,  1600,   497,   152,   871,   862,   866,     0,  1049,     0,
       0,     0,     0,     0,     0,  1555,  1556,  1557,  1552,     0,
       0,     0,     0,     0,  1578,  1580,  1477,  1476,  1462,   945,
    1030,  1032,  1038,  1027,     0,     0,     0,     0,     0,   372,
     362,   940,   364,     0,     0,     0,   295,   296,   301,   303,
       0,     0,   248,   249,   250,   215,   245,   247,   208,   230,
       0,   213,     0,   177,   214,   210,     0,     0,   189,   267,
     268,   261,   260,     0,   266,   257,   264,     0,     0,     0,
       0,   175,     0,   176,    81,    79,     0,  1593,    70,     0,
     340,     0,     0,   702,   687,     0,   806,   778,  1178,   931,
     940,     0,   945,     0,     0,     0,     0,  1179,  1181,     0,
     977,     0,   153,   876,   154,     0,  1050,   859,     0,   863,
       0,     0,   890,   885,  1553,  1581,  1584,  1582,  1583,  1579,
      89,     0,   166,   938,   384,   306,   307,   308,     0,     0,
       0,   299,   302,   185,   241,     0,   246,     0,   347,     0,
     193,   188,   263,   286,   183,   286,   187,    85,    84,   940,
       0,     0,     0,  1186,     0,     0,   928,   930,   924,   963,
       0,     0,     0,     0,  1180,     0,     0,  1187,  1189,     0,
       0,     0,     0,   858,     0,     0,   886,     0,   365,   310,
       0,   309,     0,   304,   305,   300,     0,     0,   286,     0,
     286,   181,   186,  1600,   339,   342,  1047,   688,  1192,   932,
     933,   940,     0,   482,  1184,  1185,     0,  1182,     0,     0,
    1188,     0,     0,     0,     0,   891,   884,   167,   312,   313,
     311,   297,   298,   243,   219,   348,   217,    86,     0,  1017,
     929,   964,  1183,  1191,  1190,     0,   873,   861,   865,     0,
       0,  1167,     0,     0,  1193,  1019,     0,   504,     0,  1018,
       0,     0,   967,   969,     0,   970,   965,   504,  1083,   968
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    46,    47,    48,    49,   899,  1254,  1255,  1256,    50,
    1672,  2362,  1258,  1260,  2040,  2352,  2715,  2357,  2827,  2943,
    1949,  2259,  2769,  2559,   893,   894,   895,   316,   317,   318,
     543,  2041,  1647,  2042,  2043,  2327,  2319,  2310,  2332,  2741,
     319,  2047,  2337,  2338,  2339,  2340,  2285,  1966,  2014,  2348,
    2547,  2681,  2677,  2548,  2549,  2550,  2551,  2552,  2553,  2666,
    2667,  2795,  2796,  2797,  2375,  2713,  2700,  2701,  2702,  2574,
    1613,  1614,  1939,  1940,  1608,  2243,  1609,   896,  2575,  2703,
    2347,  2662,  2786,  2880,  2787,  2788,  2789,  2933,  1967,  1968,
    1550,   829,   320,  1263,  1677,  2719,  2720,  2277,  1813,  2887,
      51,  1237,  1650,  1651,  1652,  2485,  2496,  2874,  1969,   304,
    1694,  2344,  2001,    52,  1183,    53,   838,   834,   835,  1181,
    1182,  1538,  1897,    54,   875,    55,   844,    56,   848,  1555,
      57,  1133,  1869,  1870,  1871,    58,   898,    59,   849,  1561,
    1562,  1563,    60,  1131,   307,    61,   874,  1206,  1207,    62,
     845,   846,  1547,    63,  1501,  1855,  1856,  1189,  1190,  1552,
    2415,    64,    65,  1593,   500,   785,   501,   502,  1514,  1876,
    2742,   796,   797,   798,  2192,  1141,  1142,  1143,  1881,  1515,
    2197,   623,   554,   741,  1117,   476,  1037,  1102,   477,   478,
    2083,  1052,   479,  1285,  2060,  1005,  2112,  1745,   936,  1284,
    1708,  2073,  1709,  1053,   971,  1318,   592,   593,   594,   961,
     619,  1725,  1329,  1330,  1727,  2185,  2617,  2750,  2752,  1910,
    1542,  1543,  2211,  2212,  2225,  2447,  2619,  2754,  2925,  2231,
    2861,   760,  1010,   888,   889,   937,  1606,  2734,  2841,  1464,
    2599,  2839,  2906,  2364,  2365,  2305,  2493,  2658,  1169,  2743,
    1879,  1531,  2565,  1071,  2025,  2953,  2992,  3001,  3002,  3003,
    2188,  2189,  2420,  2421,  1880,  2600,    66,   322,    67,  1688,
     561,  1185,  1186,   560,   328,    68,   335,  1699,    69,   524,
    1592,  2272,   567,   881,  1219,  1220,  1950,  2260,  2991,  2267,
    1951,  2271,  2646,  2262,  2465,  2466,  1972,  1973,  2263,  2468,
    2643,   555,   556,  2370,  2723,    70,   512,  2221,   843,    71,
     321,   906,  1681,  1268,  1680,   907,   908,  1270,   551,   552,
      72,   510,    73,   503,   830,  2203,   776,  1164,  1154,   832,
    1165,  1520,  1885,    74,   885,   884,    75,   529,  1224,    76,
     563,   930,   931,  1280,  1698,    77,   497,   782,   783,    78,
     495,   777,  1508,    79,    80,    81,  2177,  1125,   769,  2358,
    2736,  2847,  2848,  2850,  2917,  2918,  2979,   480,  2888,   481,
     482,  2268,  2269,  2494,   483,  2015,   841,   299,   332,   484,
     485,   915,   916,   301,    82,   879,   522,  1215,  1216,   833,
    1079,  1589,  1590,  2458,  2249,  2258,    83,   772,   932,  1129,
    1130,  1861,    84,    85,   890,  1232,  1233,  1603,  1956,  1604,
      86,   520,   877,    87,   517,   871,   872,   873,  1198,  1194,
    1200,  1203,  2759,  2629,  2630,  1573,   917,   918,  1566,  1917,
    1918,  2452,  2632,  2764,  2765,    88,   308,   540,    89,    90,
      91,  1138,  1952,  1872,  1953,  1954,  1955,  2275,  1512,   486,
     765,   586,   955,  1091,  1462,   487,  1122
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2509
static const int yypact[] =
{
    1684, -2509, 16656,   103,    47, -2509,   210, -2509,   716, -2509,
   -2509,   328,    47, 33735, -2509, 10066,   558,   715,    47, -2509,
      47, -2509,    -3, 37295, -2509, -2509,   557,   152,   254,    20,
     715, -2509,   715,   187,   715,   715, -2509, -2509, -2509,   715,
     715, -2509,   258, 37295, -2509,   499,   657,   606, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, 17121, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, 37295,   311, -2509,
     194, -2509, -2509, 37295,   439, -2509, -2509,   715,   309,   490,
   -2509, -2509, -2509, -2509, -2509,   397,   583, -2509,   562,   552,
     757,   407, 10551, 37295, -2509,   847,   472, -2509,   715, -2509,
   -2509, -2509, -2509, -2509, -2509,   136,   455,   461,   484,   492,
     515,   520,   526,   529,   538,   542,   550, 10066,   553,   555,
     563,   565,   570,   577, -2509, -2509,   592, -2509,   599,   615,
   -2509,   621, -2509, 10066, -2509, -2509, -2509,   635, -2509, -2509,
     640,   647,   650,   666,    64,   669,   674,   676,   681,     3,
      72,    99, -2509,   686,   688,   700,   717, 10066,   718,   728,
     733,   739,   741,   742,   743,   745,   751,   755,   764,   767,
     771,   773,   774,   775,   777,   778,   779,   781,   782,   783,
     784,   788,   792,   796,   797,   799, 10066,   801,   802,   803,
     806,   808,   809,   813,   814,   815,   816,   818,   821,   822,
     823,   824,   825,   827,   828,   832,   833,   835,   840,   841,
     844,   845,   846,   849,   851,   852,   854,   855,   856,   857,
     859,   861,   863,   864,   866,   869,   870,   871,   872,   733,
     733,   733,   873,   874,   875,   876, 10066, 10066, 10066,  5701,
   10066, 37295, 37295, 12006, -2509, 30951, -2509,  1235,   930, -2509,
     787, -2509, -2509, -2509, -2509,   574, -2509, -2509,   121,   923,
   16656, -2509, -2509, -2509,   715,   242,   715,   548,  1042, -2509,
   -2509, -2509,   130, 38271, -2509, -2509, -2509, -2509, -2509, -2509,
   16656, -2509,   987, -2509, 16656, -2509, -2509,  1385, -2509, -2509,
    1757, -2509, -2509, -2509,   505, -2509, -2509, -2509,    29, -2509,
   -2509, -2509, -2509,   695, -2509, 37295,   224, 16656, -2509, -2509,
   -2509, -2509,   973, 37295,   397, -2509,   847, 37295, -2509, -2509,
   -2509, 35070,   407,   570, 30951,   730, -2509,   998, -2509,  1134,
   37295, 33735,   472,  1095, -2509, -2509, -2509,  1135, 10066,  1225,
     186, 10066,  1225,  1225,  1225,  1225,  1225, 10066, 10066,    65,
   10066, 10066, 10066, 10066, 17586,  1260, -2509, -2509, 10066, 10066,
   10066, -2509,  1004, -2509, 17586,    65, 10066,   877, 10066, 10066,
   10066, -2509, -2509, 17586, 10066, -2509, -2509,  1082, 10066,   787,
   10066,   787, 10066,   787, 10066,  1225,  1225,  1225, 30951,   908,
   -2509, 10066,   881, -2509,  6186, -2509,   882, 10066, 10066, 10066,
   10066, 10066, 10066, 10066, 10066, 10066, 10066,  1235, 10066, 10066,
   10066, 10066, 10066, 10066, -2509,  1240,   643,   627, 10066, 10066,
   30951,  6671, 10066, 10066, -2509, 10066, 10066, 10066, 10066, 10066,
   10066, 10066, 10066, 10066, -2509, -2509, -2509,  6186, -2509, 10066,
   10066, 10066, 10066, 10066, -2509, 10066,  7156, 10066, 10066, 10066,
   10066, 10066, 10066, 10066,  4731,   885,   885,   885,   885,   885,
     885,   643,  7641,   886, -2509, -2509, -2509, 10066, 10066, 10066,
     449,    65,    65,    65, -2509,  2721,    65, 10066,   884,   463,
    1350, 10066, -2509, 10066,  1197, -2509, -2509, -2509, -2509, -2509,
     597, 10066, 10066, 10066, 10066,   894, 10066,   448, 10066, 10066,
   10066, 10066, 10066, 10066, 10066, 10066, 10066, 10066, 10066, 10066,
   10066,  8126, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
     903, 33735, -2509, 37295, -2509,   896, -2509,  1325, -2509,  1203,
    1282,  1245, 16656, -2509, -2509, -2509,  1209, -2509, -2509, -2509,
   -2509,  1290,   909, -2509, 37295,  1099, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509,   921,   130, -2509,  1353,
     919,   347,  1131,   427,  1222, -2509,  1227,  1121,  1227, -2509,
   -2509,  1023, -2509, -2509,  1142, -2509, -2509, -2509,  1358,  1141,
   -2509, -2509,  1227,   114,   545,  1089,  1089,  1158,  1227,  1278,
   -2509,  1241,    80,  1117, -2509,   604, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509,  1135, 16656,   -57, -2509, -2509, 16656, 16656,
   -2509,  1147, -2509, -2509, -2509, -2509,  1151,   239, -2509,  1313,
   -2509, -2509,  1194, -2509,  1207, -2509, -2509, -2509, -2509, -2509,
   -2509,  1210,   951, -2509, 16656, 16656,  1201, -2509,  1215,   589,
   -2509, 14796, -2509,   957,    42, 34180, -2509, -2509, 37295, -2509,
   37740, -2509, -2509, -2509,   580, -2509,   221, -2509, 16656,  2066,
    1308, -2509, 16656, -2509,   571, 16656, -2509,   959, -2509,   956,
   -2509, 10551, 16656, -2509, -2509,   958,  1047,   964, -2509, 16656,
   -2509, -2509, -2509, -2509, -2509, -2509,  1349, -2509, -2509,  1145,
     972, -2509, -2509, 14796, 19482, -2509,   974, -2509, -2509,   975,
     985, 19495,   979,   980,   982,   984,   986, 19625, 19797, 30429,
   22887, 23055,  2779,   989, -2509,   896, 19810, 19978,  3130,   991,
     988,   992, -2509, 19991, -2509, 23068, 20159, 20172,   994, 23191,
     995, 10066,   996, 23249,  3416, 23372,  3493,   997,  1000,  1001,
   -2509,  1002, 20340, -2509, 23385, -2509, 20353, 20521, 23430, 20534,
    3506,  3525, 20702, 20715,  3538, 20883,  1332, 20896, 21064,  3853,
    3930,  4028,  4116,  1003, -2509, -2509,   -88, -2509, -2509, -2509,
    1008, 23469, 21077, -2509, 23553, 21245,  4203,  1005, 21258, 21426,
   21439, 23566, 23734, 23747, 18396, 18415, 18583,  1010,  1012,  1014,
   23870, 23915, 24051, 18636, 21607, 18676,  1017, 31008,   930, -2509,
   24109, 21620, 21788, 18766, 24154, 21801, 18896, 21969,  8611,  9096,
    9581, 22706,  1019, -2509,  1020,  1022,  1025,  1027,  1030,   -17,
   -2509, 24232, -2509, 18949, 24290, 19005, -2509, -2509, -2509, -2509,
   -2509,  1028, -2509, -2509,  1687, 37295,   993,   999,  1018, 33735,
   10066,    65,   163, 10066,  1286, -2509,    65,   126,   126,  2747,
    1260, -2509, -2509,   159,  1033, 10066, 10066, 10066,   192,   192,
     163,    69, 31229,   930,   351,   486,   211,  1235,   211,  1235,
      65,    65,    65,   205,  1035, -2509,   163,   577, 10066, -2509,
    1032, -2509, -2509, -2509, -2509,  1362, -2509,  1469,   109,  1044,
   -2509, 16656,   -15, 16656, -2509,   548, -2509,  1443, -2509, -2509,
   -2509,  1046, -2509, 10066, -2509,  1364,  1059, 16656,   397, -2509,
   -2509, -2509, -2509,   132, -2509, -2509, -2509, 33735, -2509,  1156,
     114, -2509, -2509, -2509,  1227, 37295,   114, -2509,   449, -2509,
   -2509, -2509, -2509, -2509, 16656, -2509,   114, -2509,  1227, -2509,
   -2509,  1052, -2509,  1465,   409,  -106, -2509, 35515, 16656, -2509,
      17,   -16,   106,  1273,  1068, -2509, -2509, -2509,  1068, -2509,
    1068, -2509, -2509,  1068, 15261,  2068,  1067, -2509,  1271,   -42,
    1069, 15261, -2509, -2509, -2509,  1070, 12471, 16656, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,    98,
     148,   961,  1249, -2509, -2509, 32845, 31955,  2178,   106,  1544,
    1545,  1547,  1548,  1549,  1550,  1551,  1552,  1555,  1556,  1557,
    1558,  1561,  1562,  1565,  1094, -2509, -2509, -2509,   224, -2509,
    1288,   585,   585,  1356,   959, -2509,    71, 37295,  1438, 28670,
      56, -2509, -2509, 33735,  1482, 33735,     2, -2509,  1338,  1095,
   16656, -2509, 10066, -2509, 10066, -2509, -2509,  1102, 10066, -2509,
   -2509, -2509, -2509, -2509, 11036, 10066, -2509, -2509, -2509, 33290,
   10066, -2509, -2509, -2509, -2509, -2509, 10066, -2509, 10066, 17586,
   -2509, -2509, 10066, 10066, -2509, -2509, -2509, 30951,  1104, -2509,
   -2509, -2509, 10066, -2509, -2509, 10066, -2509, -2509, -2509,  1212,
   10066, -2509, -2509, -2509,  1192,  1192, -2509,   787, -2509, 10066,
   -2509, 10066, -2509,   787, -2509, 10066, 10066, 10066, -2509,  1372,
   -2509, 10066, -2509, 10066, -2509, 10066, -2509, 10066, -2509,  1367,
    1376, 10066, -2509, 10066, -2509, 10066, -2509, 10066, -2509, 10066,
   -2509, 10066, -2509, -2509, -2509, -2509, 10066, -2509, 10066, -2509,
   10066, -2509, -2509, -2509, -2509, -2509, -2509, -2509, 10066, 10066,
   -2509, 10066, -2509, 10066, 10066,  1421,   690, 10066, 10066, 10066,
   10066, 10066, 10066,    12, 10066, 10066, 10066, 10066, 10066, 10066,
   10066, 10066, 10066, 10066, 10066, 10066, 10066,  8126, -2509, 10066,
   10066, -2509, 10066, -2509, 11521, 10066, 10066, 10066, 10066, 30536,
   10066, 30650, 10066, 30731, 10066, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509,  1378, -2509, -2509, 10066, -2509, -2509, 10066, 10066,
    1118, -2509, -2509, -2509, -2509, -2509,  1114, 30951,   163, -2509,
    1120, -2509,   896,   787, -2509,  1260, -2509,   159,   163, 31310,
   10066, 10066,  1431,   709, 10066, 10066, 10066, 10066,  1128, 10066,
     453, 10066, 10066, 10066, 10066, 10066, 10066, 10066, 10066, 10066,
   10066, 10066, 10066, 10066,  8126, -2509, -2509, -2509,   211, 37295,
    1333, 16656, -2509,   535, 16656,   106,  1333, 10066, -2509,   -31,
   -2509, -2509, -2509, -2509,   162, -2509, 30951, -2509,  1124,  1333,
    1471,  1132, -2509, 37295, -2509, -2509,  1546,  1227, -2509, -2509,
    1227, -2509,   -50,   114, 16656, -2509,   604,   812, -2509,     1,
   37295,   481, -2509, 16656,  1333, 16656, -2509, -2509, -2509, -2509,
    1140, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509,   575, -2509, 37295, -2509, -2509, -2509, -2509,
    1136, -2509,  1137,  1335, -2509, 16656, 16656,  1333,  1479,  1484,
     589,    57,  1146, 31955,  1460,    90, 12936, 32400,  1149, -2509,
     662, -2509,    31,   609, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, 10066,  1089, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509,    88,  1526,  1526,   662,
     868,   662,   662,   662,   662,  1508,   245,   662,  1470,  1365,
    1472,  1371,  1517,   662,   662,  1554,   662,   662,   662,   662,
     164,   662,   662,   662,   662,  1526,   662, -2509,  2811,   662,
    1168, 15726, -2509, -2509, -2509,  1333,  1333,  1333,   489,  1333,
     449,   449,   449,  1333,  1333,  1333,  1333,  1333,  1333,   449,
    2066, -2509,   916,   568, -2509, -2509, -2509, -2509, -2509, 16656,
    1354,  1249, 28670, -2509,   409, -2509,  1167, -2509, -2509, -2509,
     -86, -2509, -2509, -2509, -2509,  1601, -2509,  1174, -2509,    31,
   24421, 30951, -2509, -2509, 21982, 10066, 24474, 24551,   862,  1176,
    1177, 22150,  1178,  1179,  1180, 24660, 30837, -2509,  1181, 24791,
   22163, 10066, 24828, 24921, 10066,  1204, 30821,  1213,  1184,  1235,
    1235,  1189, 24964, 25095,  1190,  1191, 25140, 22331, 25184,  1193,
    1195, 25238, 25361, 25457, 25501,  1412, -2509,  1196, 25676, 22344,
   25720, 25769, 19084,  1198, 19117, 25783, 25896, 26084, 26161, 26197,
   26214,    65,   163, 10066,  1456, -2509,    65,   126,   126,  2747,
   26257,   159, 10066, 10066, 10066,   192,   192,   163,    69, 31323,
     351,   486,   211,  1235,   211,  1235,    65,    65,    65,   205,
     163,   577, 22512, 26304, 26479, 10066, 26526, 22874, 19306, 22525,
   26569, 10066, 26699, 10066, 26746, 10066, 26809,  1199, 26886, 26919,
   27187, -2509, 37295, -2509, -2509, -2509, -2509,  1205, -2509, 10066,
      65,   163, 10066,  1466, -2509,    65,   126,   126,  2747,  1260,
   -2509,   159,  1208, 10066, 10066, 10066,   192,   192,   163,    69,
   31422,   351,   486,   211,  1235,   211,  1235,    65,    65,    65,
     205,   163,   577, -2509, -2509,  1202, -2509, -2509,  1387,  1516,
   -2509, -2509, -2509, -2509, -2509, 30951, -2509, -2509, -2509, -2509,
   -2509,    37,    42, -2509,    46,   786,    66,  1531, -2509, -2509,
    1568, 34625, 29135, -2509,   489, -2509,   714, -2509,  1407, -2509,
   -2509,   449,   449, -2509,   114, -2509, -2509,  1231, -2509,   177,
     414,  1560,  1566, -2509,    61, 17586,   409,  1486,  1486,   409,
     409,  1236, -2509, -2509, 35960, -2509, -2509,   573, -2509,  1246,
   29600, 33735, -2509, -2509, -2509,  1581, 33735, 12471, 37295,  1616,
    1563, -2509, -2509, 33735,   226,   463,   662, -2509, -2509, -2509,
   -2509, -2509, 37295,  5216, -2509, -2509,  1250,  1250, 14331, -2509,
   -2509, -2509, -2509, -2509, -2509,   318,  1259, 30951, -2509, -2509,
   18051,   569, -2509, -2509,   569, -2509,   117, 18051, -2509, -2509,
   18051, 18051, -2509,  1333,  1559,  1572, 18051, 18051,   489,   449,
     449, 32845,   662,   662,   662,   449, -2509, -2509, -2509, -2509,
     662,   489,   489, -2509,   459,   693,   449,   449, -2509, -2509,
   -2509, 16656,   447,  1078,  1266,   193, 18051,  1333, -2509, 31955,
   28368, 13866, 37295,   201,   253, -2509,  1239, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, 16656, 13401,
   -2509,    83, -2509,  1974, -2509, -2509, -2509,  1459, -2509,   409,
    1367,    79,   374,  1280,    56, -2509,  1478, -2509,  1535, -2509,
    1279, 10066, 30410, -2509, -2509, -2509,  1281,  1281, -2509, -2509,
    1432, -2509,  1437, -2509, -2509, -2509, 10066, -2509, -2509, -2509,
   -2509,   -19,  1528,  1287, -2509, -2509, 10066, 30951, -2509, -2509,
   30951, -2509, 10066, 10066, -2509,  1289,  1292, -2509, -2509, -2509,
   -2509, -2509, -2509, 10066, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509,   132,  1294,  1567, -2509, 10066, -2509, -2509, -2509, 10066,
   -2509, -2509, 10066, -2509, -2509, -2509, -2509, -2509, -2509,   163,
   -2509, -2509, -2509,   159,   163, 31449, 10066, -2509, -2509, -2509,
   10066, -2509, -2509, 30410, -2509, 10066, -2509, -2509, 10066, 10066,
   -2509, 27234, -2509, 27247, -2509, 27283, -2509,  1570, -2509, -2509,
   -2509, -2509, -2509,  2747,   163, -2509,  1295, -2509,  1260, -2509,
     159,   163, 31503, 10066, -2509, -2509, -2509,   -34, 16656,  1610,
   -2509, -2509, -2509, -2509, -2509,   374,  1333,  1333, -2509,  1284,
    1604,  1696, -2509, -2509,   409, -2509, 36405, -2509, -2509, -2509,
   -2509,  1293, -2509,  1089, -2509, -2509,  1592, -2509, -2509,  1227,
     812,  1299,   130, -2509,  1714,  1381, -2509, -2509,   409,  1486,
    1486,  -113,   662,   829, -2509,  1617,  1618,   829,   225,   417,
   -2509,   608, -2509, -2509, 37295, -2509, -2509,  -103, 33735,   964,
   -2509, -2509, 32845, -2509,   475,   662, -2509,  1311,  1312, -2509,
   36850, 10066, -2509, -2509, 10066,   570, -2509, 30951, -2509,   130,
   17586, -2509,  1314, -2509,  1314,    60,  1317,   612, -2509, -2509,
   -2509,  1099, -2509,  1089, -2509, -2509, 10551, -2509, -2509, -2509,
   -2509, 10066,  1623,  1625,   569, -2509,   571,   138, -2509, -2509,
   18051, -2509, -2509,    77, -2509, -2509, -2509, -2509,  1333, 32845,
   31955, -2509,  1333, -2509, -2509, 10066, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, 16656, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509,   623, -2509, -2509,
   -2509, -2509, 37295, -2509, -2509, 16656, -2509, -2509, 38002, 37295,
   -2509, 16656, -2509,  1318,   625, -2509, -2509, -2509,  1715,  2811,
   -2509,  1333,  1327,   374,  1477, -2509, -2509, -2509, -2509,  1683,
   -2509, -2509, 22693,  1328,  1593, -2509,   607, -2509, -2509, 27361,
    1401,  1768, -2509, 27549, 30951, 30914, -2509, -2509, 19385, -2509,
   -2509,  1334, 27602, 27662, 27680, -2509, 10066,  2747, 27725,  1336,
   27964, 28027, 28042, -2509, -2509, -2509,  1339, -2509,  1337, -2509,
   10066,  2747,  1651, -2509,  1647, -2509,  1674, -2509, -2509, 33735,
    1341, -2509,  1391, -2509, -2509, -2509, 30065, -2509,  1817, -2509,
   -2509,  1088,   921,  1599,   829,  1662,  1663, 17586,  1367, 10551,
     409,   409, 10066, -2509,   569,   569,   569, -2509, -2509, 37295,
   -2509,   342,  1527,   964, -2509,   113,  1589, -2509, -2509,   226,
    1564,  1569,   662, 30951,   921,  1355, -2509,   662, 10551,  1250,
    1769, -2509, -2509,    60, 17586, -2509, -2509,   628, 30951, 18051,
   -2509, -2509,  1359,  1719,  1727, 18051, -2509, -2509, -2509, -2509,
   -2509, -2509, 30951,  1366,   564,   632, 38002, -2509, 13866, -2509,
   -2509,  1369,  1281, -2509, -2509,  1370,  1029,   -38,   768, -2509,
   -2509, -2509, -2509,  1281, -2509, -2509, -2509,  1370,  1509, -2509,
    1370, -2509, -2509, -2509,   607, -2509, -2509,   607,  1370, -2509,
   -2509,  1281,  1373, -2509, -2509, -2509,   607,  1375, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509,  1281,   732,   477,  1377,
    1382,  1384,  1281,  1386, -2509,  1380, -2509,  2811, -2509,    43,
   -2509, -2509, 37295, -2509,   489, -2509, -2509, 10066, -2509,  1388,
   -2509, -2509, -2509, -2509, 33290, -2509, -2509, -2509, -2509, -2509,
   10066, -2509, 10066,  1225, -2509, -2509, -2509,  2747, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509,  2747,  1577, -2509,  1748,  1707,
    1756, -2509,  1284,  1457, -2509,  1333, -2509,   -48,  1699,   409,
     409,   662,  1477, -2509,   702,   817, 30951,  1390, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509,  1594, -2509,  1595,  1596, -2509,
     111,   740, -2509, -2509, -2509, -2509, -2509,  1394,  1395,  5216,
    1046, 17586, 10551,  1396,   730, -2509,   609, -2509, -2509, -2509,
    1398, 37295, -2509,  1702,   201, 10066, -2509, -2509, -2509, -2509,
     732, -2509,   -35,  1661, -2509,  1664,   268, -2509,  1158, -2509,
    1520,   607, -2509,  1534, -2509, -2509, -2509,  1402, -2509,   268,
   -2509,  1406,   268, -2509, -2509,   268,   607,  1667, -2509,  1668,
     268,  1333, -2509, 33735,  1702,  1670, -2509, -2509,  1774,  1721,
   -2509,   732, -2509,  1723, -2509,  1675, -2509,  1676,  1678,  1679,
     268,  1680, -2509,   268, -2509,   149,    83,  1769, -2509,   641,
     564,  1414, -2509,  1731, 28075, -2509, -2509, 30951, 19440,  1422,
    1424, 16656, 10066, -2509,  1367,   620,  1729, -2509, -2509,  1822,
      48,     5,    66, -2509,   414,   829,   829, 10551, -2509, 10066,
    1608, 10066,  1609, 37295,  1430, -2509, -2509, -2509, -2509,    26,
    1691,   449,   449,   449,   740, -2509, -2509, -2509, -2509,    19,
   -2509, -2509, -2509, -2509, 37295,   653,   643,   643,   643, -2509,
   -2509,   564, -2509,   539,   212, 37295, -2509, -2509,    51, -2509,
    1439,   655, -2509, -2509, -2509, -2509,   268, -2509, -2509, -2509,
     132, -2509,   132, -2509, -2509, -2509,  1442,  1446, -2509, -2509,
   -2509, -2509, -2509,  1627, -2509, -2509, -2509,  1448,  1449,  1451,
    1454, -2509,  1429, -2509, -2509, -2509,  1455,  1099, -2509, 37295,
   -2509,  1718,  1860, -2509, -2509, 10066, -2509, -2509,  1756,    36,
     564, 10066,  1089,  1844,  1845,  1820,  1847,   620, -2509,   679,
   -2509,  1762, -2509, -2509, -2509,  1728, -2509, 30951,  1473, 30951,
    1474,   658, -2509, 35960, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509,   670, -2509, -2509,   201, -2509, -2509, -2509,    84,    84,
     694, -2509, -2509, -2509, -2509,  1732, -2509,   707, -2509,   710,
   -2509, -2509, -2509,   607, -2509,   607, -2509, -2509, -2509,   564,
    1475, 17586, 28215,  1729,   209, 10066, -2509, -2509, 30951,  1523,
     132,   132,  1857,   132, -2509,  1859,  1861,   679, -2509,  1950,
   10066, 37295, 37295, -2509, 37295,  1480,  1481,  1716, -2509, -2509,
    1882, -2509,   495, -2509, -2509,    51, 37295,  1485,   607,   132,
     607, -2509, -2509,   149, -2509, -2509,  1488, -2509,  1810, -2509,
   -2509,   564, 37295, -2509, -2509, -2509,   132, -2509,   132,   132,
   -2509,   489,  2501,   712,   722, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,  1751,  1492,
   -2509, -2509, -2509, -2509, -2509,  1888, -2509, -2509, -2509,  1799,
   16191, -2509,  1497,  1787, -2509, -2509,   725,  1500,  1972, -2509,
   10066,  1503,  1504, -2509,   449, 30951, -2509, -2509, -2509, -2509
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -2509, -2509, -2509, -2509, -2509, -2509, -2509,   315, -1481, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509,  -729, -2509, -2509,
   -1898, -2509, -2509, -2509,   731, -2509,  1097, -2509,  1682, -2509,
    -493,  -565,   346, -1932, -1192, -2509, -2509, -2509, -2509,  -772,
   -2509, -2509,   -41,  -497,   355,   386,    -1, -2509,  -474, -2509,
    -484, -2509, -2509,  -491, -2509,  -489, -2509, -2509, -2509, -1598,
    -535, -1689, -2509,  -776, -1992, -2509,  -641, -2509,  -680,  -501,
   -1283, -1545, -2509, -2509,  -669, -2509, -1824, -2509, -2218, -2509,
    -899, -2509, -2509, -2509,  -910, -2509,  -758,  -848, -2509, -1583,
   -2509,   842, -2509,  -253,   785, -2383,  -794, -1902, -2509,  -763,
   -2509, -2509, -2509, -2509,    30, -2509, -2509, -2509,  -665,  -414,
    -252, -2492, -2509, -2509, -2509, -2509, -2509,   476, -2509, -2509,
     507, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509,   175, -2509, -2509, -2509, -2509, -2509, -1084,
     485, -2509, -2509, -2509,  1024, -2509, -2509, -2509,   478, -2509,
   -2509,   878, -2509, -2509, -2509, -2509,  -126,   200, -2509, -2509,
   -2509,  1175,   188, -2509,  -448, -2509,  1533, -2509, -2509, -2509,
   -1420, -1974, -2509,  1264,  -677, -1599,   556, -2116, -2509, -2509,
   -2509,   554,  1975, -1019, -1181, -2509, -2509, -1044,  -611,  -595,
   -2509,   395, -2509, -2509, -2509, -2509, -2509, -2509,  -545, -2509,
   -2509, -2509,   770,  -559, -2509, -2509, -2509,  1476, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509, -1122, -2509, -2509, -2509, -2509,
   -1876, -2509, -2509, -2509, -1741, -2509, -1302, -2509, -2509,  -795,
   -1726,  -618, -2509, -2509, -1114,  1501, -1632, -2509, -2509, -1412,
   -2509, -2509, -2509, -2320, -1193, -2509, -2509, -2149,  -816, -1502,
    -793, -2509,  -539, -1145, -1862, -2509, -2509, -2509, -2509,  -931,
   -2509, -2509, -2509,  -523,   203, -2509, -2509, -2509, -2509, -2509,
   -2509,  -806,  -475,  1521, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509,  1152,   865,   385, -2509, -2509,  -904,
   -2107, -2509, -2509,   140, -2509,  -553, -1533,  -575,  -378, -2509,
   -2509, -2082,  -902, -2509, -2509, -2509, -2509,  -808,  1571, -2509,
   -2509, -2509, -2509, -2509, -2509,  1211,   830, -1596,  1573, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509,  1597, -1102,  -774, -2509,
     920, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509,   819, -2509, -2509, -2509, -2509, -2509,   966, -2509,
   -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,   -78,
    -736, -2509,  -744,  -799, -2509,  -811, -2509,  -375,  -884, -2509,
   -2041,  -367,   967, -2508,  -577, -1827,    13,  -197, -1422,  -477,
      -2,     7, -1121, -2509, -2509, -2509, -2509, -2509,   532, -2509,
     174,   191,  -135, -2509,  -339,  -520, -2509, -2509,   129, -2509,
     617, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -2509, -2509,  1603, -2509,   922, -2509, -2509,
   -2509, -2509, -2509,  -635, -2509,   915, -1800,   853,  -147, -2509,
    -105, -2509, -2509, -2509,  -633, -2509, -2509, -2509, -2509, -2509,
   -2509, -2212,  -777, -2509, -2466, -2509, -2509, -2509, -2509, -2509,
   -2509, -2509, -2509, -1054, -2509,  -340,  -895
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -1601
static const short yytable[] =
{
     300,  1225,   828,   762,   609,   611,   613,   953,  1139,  1271,
    1171,   333,  1878,   587,  1503,   298,  1710,   962,  1417,   996,
     334,   499,  2202,  1532,  2215,   939,   968,   942,   943,   944,
     945,   946,  1170,  1170,  1156,   840,  1525,  1976,  1929,   764,
    1466,   523,  1191,  1192,  1653,  1648,   970,   972,  1161,  2050,
    2266,   902,  1934,  1469,  1173,  1818,  1896,  1943,  1527,  2475,
    1302,   981,  1541,  1497,  1530,  2286,   886, -1260,  1898,  1209,
     977,   978,   979,   300, -1225,  2376,  2380,   714,  1854, -1260,
    1038,   714, -1226,  1494,  1864,  1003,   -82,  2184,   530,  2852,
    2054,  -171,  1238,  2740,  1877,  1017, -1130,  1883,  1944,  1577,
    1931, -1502,  1866,  1692,  1958,  1027,  1028,  1029,  1187,    24,
    1944,  2360,  1932,  1276, -1554,  1036,  2294,  1553,  2612,   886,
    2190,  2237,  1912,  2355,  1107,  1109,  2239,  1944,   558,  2303,
    2304,  1093,   762,  2278,   762,   711,   762,  1103,   714,   954,
    2278,  2353,   887,  2287,  2288,   721,   493,  2781,  2451,  2292,
    2293, -1501, -1599,   933,  1654,  1924,  1687,  2297,  2471,   511,
    2740,   513,  2780,   515,   516,  2783,  1746,  2226,   518,   519,
    1866,  1891,   711,  1544,  1998,   714,   812,   813,  1692,  2333,
    2773,  2483,   721,   722,   723,  2929,   815,  2784,  1772,  1176,
     368,  1605,  2055,  -171,  2477,   887,  2758,  -916,  1959,  2329,
    1960,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,   786,  1901,   601,   714,   362,  2633,
     711,   506,  2281,   714,  2840,   305,  2342,   -92,  -171,  2218,
     721,  1961,   766,  2017,  2018,  2019,  1791,  2026,  2432,  1556,
    2355,  2030,  2031,  2032,  2033,  2034,  2035,  1962,  2949,  2824,
    1999,  2783,  2878,   564,   787,  1162,  1693,  2282,  1963,  1773,
     302,   368,   767,  1901,  1506,   309,   761,  1867,  2775,  1524,
     935,  1006,  1196,  2784,  2950,  2853,   498,   724,  2673,  1163,
    1168,   368,   727,   788,  1223,  2464,   727,   362,  2672,   565,
    1463,  1945,  -916,  2879,   509,   531,   607,   774,  2625, -1225,
    1137,   536,  2930,  1874,   768,  1868,  2683, -1226,  1197,  2684,
     938,  1557,  2674,  1852,   362,   532,  1059,  1177,  2688,   566,
    1554,   557,  -171,   508,   805,  1505,  1875,  1509,  1235,  2330,
    2706,  1693,  1946,  1947,   775,  1867,  2056,  2343,  2931,  1902,
     892,  2904,   602,   727,  2932,  1903,   514,  1168,   805,   903,
     368,  2283,  1983,  -916,   306,  1964,  -916,   725,  2281,  2132,
     711,  1946,  1947,   714,  1779,   607,  2647,  1774,   726,  2437,
     721,   722,   723,  1868,   731, -1225,  1545,   368,  2279,  1275,
     727,  2280,  2928, -1226,  -171,  1092,  2644,  1902,  2486,  1904,
    1528,  2871,   607,  1903,  1360,  1236,  2356,  2951,  2484, -1225,
    2623,   789, -1502,  2251,  1535,  2634,  1218, -1226,  1226,   727,
     368,  2331,  1901,  2284,  2842,  -916, -1554,  1899,  2454,  2167,
    2366,  1863,   727,  1558,  1830,  1188, -1502,  2560,   727,  1184,
    1559,  1893,  1892,   507,  1513,   731,   538,  1904,  2453,   730,
    1545,  1840,  1560,  2000,  1137,  2785,  1359,  2442,  1906,  2191,
    1494,  1545, -1501,  2798,  1507,  2054,  1648,   562,  1218,  2198,
    2195,  1090,  2219,  2278,  2335,  1442,  1545,   303,  2805,   707,
     708,   333,   731,  1933,  1697,  2489, -1501,  2977,  2435,  2436,
     710,  1539,   521,   608,  1545,  1540, -1599,   323,   300,  1495,
    1168,  1496,  2220,  2627,  2628,   711,  1906,  -324,   714,  2345,
    1467,   731,  1103,   771,  2246,   721,   722,   723,   300, -1130,
    2664,  1948,   300,  2356,  1450,  2027,  2028,  2029,  2905,  1901,
     731,  2678,    45,  2717,  2036,  2443,  1539,   847,  1539,   762,
    1540,  1460,  1540,   891,   533,   300,  1902,   827,  -916,  2686,
    2470,   901,  1903, -1260,   740,   904,  1635,   732,   740,   909,
     897,  2289,   610,  2416,  2690,   534,  2444,  1682,   914,   333,
    2710,   827,  2052,  2315,   548,  2053,   525,  1815,   727,  2570,
    -171,  2830,  2266,  2316,  2445,  2306,  2571,  2650,  1907,   612,
     805,  1150,   762,   -93,  2317,  2334,  1904,  1066,  1545,  2438,
     549,   790,   791,   792,   793,   794,   795,  1066,   735,   736,
     737,   738,   739,   779,   324,   740,  2792,  1076,  1908,   527,
    2624,  2969,  2779,  1094,  2625,  2898,  2793,   780,  1832,   325,
    2794,  1147,   880,   773,  1095,   778,  1907,  2020,   504,  1833,
    1067,   505,  2873,   733,   734,   735,   736,   737,   738,   739,
    1067,  1077,   740,  1902,  1461,  1906,  1168,  2247,  2248,  1903,
    2626,  2656,  2278,  2811,  1179,  1523,  1908,   526,  2213,  1909,
     731,  2718,   733,   734,   735,   736,   737,   738,   739,  1068,
    2021,   740,  1931,   488,  1180,  2941,  1226,  2942,  1605,  1068,
     535,  2875,  1674,  2657,  1932,   737,   738,   739,   842,  2439,
     740,  2907,   326,  1904,  1069,  1096,   892,  1151,  -916,  2570,
    1834,  2481,  2722,   727,  1069,   886,  2571,  1909,  1556,  2022,
     805,  1148,  2459,   537,  2970,  1587,  2446,   489,  1858,  2455,
    2974,  2395,  2976,  1729,  1730,  2456,  1702,  1078,  1962,  2430,
    2135,  2563,  1717,  1212,  2023,  1675,  1649,  2139,  2457,  1963,
    1901,  1905,  1218,   550,  1713,  1714,  2207,  2208,  2843,  2844,
    2944,  1718,  1906,  1889,  1092,  2490,  1890,  2318,  2409,   333,
    1494,  1120,  2273,   539,  2417,  2418,  2691,  1213,  1119,   541,
     300,  2572,  2876,  1728,  2424,  1907,   327,  1092,  2169,  1859,
    1557,   887,  1136,  1734,  2223,  1128,   781,  2227,  2228,  1739,
    2573,  2172,  2209,   827,   542,   731,  1070,  2229,  2176,   310,
    1783,  1785,  2980,  1097,  2877,  1908,  1070,  1771,  1835,  2627,
    2628,  1753,  2245,  1103,  1084,  1166,  1085,  1653,  1648,  2826,
    2692,  1494,   734,   735,   736,   737,   738,   739,  2704,  1167,
     740,  1066,   490,  2607,  2295,  2296,  2024, -1600,   313,  2693,
    2301,  1860,   300,   546,  1676,  2845,   300,   300,  2694,  2307,
    2311,  2312,  2313,  1214,  1261,  1901,  1909,   544,   362,   311,
    1731,  2618,  2618,  2618,  1902,  2640,  1735,  1901,  2855,   559,
    1903,  1262,   300,   300,  1067,  -329,  2488,  1844,  1846,   300,
    2491,  3000,  1907,  1227,  1831,  2760,  1228,  1208,  1231,  1539,
    1103,  3000,  1558,  1540,  2214,  2044,   300,  2846,  1540,  1559,
     300,  2572,  -292,  1266,  1137,  2045,  1817,  1764,  2046,  1765,
     300,  1560,  1908,  1068,  1904,  1259,   547,   300,  1265,  2679,
    2573,   368,  2682,   827,  2749,  1272,  1823,  2363,  1824,  2639,
    2685,   300,  2308,  2309,  2642,   568,   607, -1600,  1069,  2561,
    2367,   569,  2761,  2762,  2763,   625,  1007,  1008,  2915,  2695,
    1619,  2696,  1970,  1971,  2065,  1977,  2916,  2705,   735,   736,
     737,   738,   739,  1909,   570,   740,  2697,  1594,  1595,  1596,
    1009,  1597,   571,  1906,  1598,  1599,  1600,  1601,  1959,  1902,
    2006,   836,   837,   312,   839,  1903,  1816,   668,   491,   492,
    2801,  1902,   313,  2803,  2698,   572,  2804,  1903,  1241,  1242,
     573,  2808,   169,   170,  1621,  1622,   574,  -155,  1974,   575,
    1252,  1253,   314,   694,   695,   696,  2186,  2187,   576,   805,
    1623,  2821,   577,  1624,  2823,  2204,  2205,  1962,  2699,  1904,
     578,  1625,  1626,   580,  1627,   581,   329,   761,  1963,  2751,
    1070,  1904,   494,   582,   496,   583,  1978,  1979,  1980,  1981,
     584,  1567,  1985,  1568,  2233,  2234,  1569,   585,  1991,  1992,
     763,  1994,  1995,  1996,  1997,   368,  2002,  2003,  2004,  2005,
    1913,  2007,   588,  1452,  2009,  1632,  2066,   333,  2747,   589,
     315,  1054,  1055,  1056,  1057,  1058,  1456,   770,  1906,  2448,
    2449,  -916,  2038,  2473,  2474,   590,  2434,  1602,   886,  2985,
    1906,   591,  1975,  1907,  2497,  2498,  2557,  2498,   784,  2649,
     911,  2095,  2096,  2659,  1545,   596,  1494,  1633,  2675,  2676,
     597,  2570,  2828,  2829,  1634,  1984,  -916,   598,  2571,   300,
     599,   300,   805,  1908,  2872,  2829,  2884,  2885,  1092,  2923,
    2924,  1518,  -916,  2620,  2621,   300,   600,  1649,  1636,   603,
     920,  2927,  2829,  1494,   604,   333,   605,  1637,  1638,  1639,
    1522,   606,  2274,  1529,   921,  2137,   614,  2138,   615,  2320,
     842,  1649,   300,  1641,   887,  2935,  2936,  2133,  2067,  1103,
     616,  2068,  2069,  2739,  1909,  1548,   300,  1533,  2938,  2939,
     900,  2940,  2939,  2987,  2924,  2963,  2964,   617,   620,  1642,
    2070,   847,  1572,  2988,  2924,  2071,  2999,  2474,   621,  1572,
    2072,  1643,   911,   622,  1588,   300,   922,  1571,  1907,   624,
     912,   626,   627,   628,  1571,   629,  2174,  2389,  2175,  2321,
    1907,   630,   827,   333,   333,   631,  -916,  -916,  2170,  -916,
    1103,  2322,  1610,  1615,   632,  2323,   886,   633,  1908,   923,
    -916,   634,  -916,   635,   636,   637,  -916,   638,   639,   640,
    1908,   641,   642,   643,   644,   909,   913,  1686,   645,  2809,
    2166,   333,   646,   333,  -916,   924,   647,   648,   300,   649,
    1689,   651,   652,   653,  2324,  2325,   654,  2326,   655,   656,
    -916,  2726,   302,   657,   658,   659,   660,   333,   661,  1909,
    -916,   662,   663,   664,   665,   666,  1615,   667,   669,   935,
    -916,  1909,   670,   671,  1644,   672,  -916,  2606,  2614,  2615,
     673,   674,   887,  2572,   675,   676,   677,   704,  2222,   678,
     925,   679,   680,   926,   681,   682,   683,   684,  1646,   685,
    2909,   686,  2573,   687,   688,  2668,   689,   927,  -916,   690,
     691,   692,   693,   697,   698,   699,   700,   960,   964,  -916,
     602,   980,   983,   985,  1004,   928,  -795,  1062,   929,   492,
    1075,  2270,  1080,  1083,  1090,  -916,  1118,  1121,  2669,  2538,
    1123,  1124,  1126,  -916,  -916,  -916,  1127,  2427,  -916,  1132,
    1134,  1135,  -916,  -916,  1137,  1140,  2039,  1145,  -916,  1146,
    -916,  1149,  1152,  1153,  -916,  1155,  1157,  2298,  2299,  2300,
    1170,   850,  1158,  1159,  1160,  2302,  -916,  1168,  1172,  1174,
    1178,  1175,   851,  1193,  1195,   852,  1587,  1199,   853,  1201,
     854,  1202,  1204,  1205,   855,  2429,  1210,  1211,  1221,   856,
    1257,  1267,  1269,  1274,  2373,  1273,  1275,   857,  -916,  1277,
    1278,  1092,   858,   859,  1279,  1283,  1286,  2476,  -916,  1287,
    1289,  1290,   860,  1291,  -916,  1292,   861,  1293,  1308,   862,
    1301,  -916,  1307,  1347,  1309,  1314,  1316,  1319,  1326,  1453,
    1170,  1327,  1328,  1331,  1358,  1454,  1368,  2745,  2746,  -916,
    1361,  1381,  1092,  1382,  1139,  1383,  -916,  1853,  1392,   300,
    1436,  1437,   300,  1438,  1455,  1459,  1439,  -916,  1440,  1649,
    1449,  1441,  1092,  1465,  1857,  -524,  -916,  1128,  1499,  -916,
     863,  1887,  2495,  1500,  1502,  2399,  1504,  1511,  1513,  1519,
     864,  -916,   300,  1521,  1536,  -916,  -916,  2613,  1900,  1526,
    -916,   300,  1649,   300,   865,  1537,  1564,  1894,  1565,  1575,
    1576,  1578,  1580,  1605,  1655,  1656,  1911,  1657,  1658,  1659,
    1660,  1661,  1662,  1916,  -916,  1663,  1664,  1665,  1666,  -916,
    -916,  1667,  1668,   300,   300,  1669,  1670,  1673,  1679,  1684,
    1690,   333,  1695,  1703,   333,   333,  1721,  1724,  1208,  1923,
    1615,   416,  1740,  1936,  1941,  1635,  1747,  1763,  1807,  1811,
    1812,  1814,   742,   743,   744,   745,   746,  1822,  1829,  2408,
    1882,   331,  1884,  1886,  1921,  1888,  2866,  2867,  2868,  -916,
    1914,   866,  1919,  1920,  1925,  1926,  1930,   747,   748,   749,
     750,   867,  1928,   868,  1226,  1942,  1959,  -916,  1982,  1986,
    1987,  1988,   751,   752,   753,   754,  1989,  1990,   755,  2016,
    2010,   869,  1993,  2053,  2049,  2057,  1545,  2074,  2075,  2077,
    2078,  2079,  2084,  2091,  -916,  2094,  2093,  -916,   756,   757,
    2097,  2100,  2101,  2111,  2105,  2130,  2106,   300,  2113,  2120,
    2051,  2157,   870,  2467,  2178,  2165,  2162,     1,  2168,     2,
     758,   759,  2048,  2180,  2181,  1875,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,  2194,
       3,     4,  2206,  2210,     5,  2224,     6,  -916,  -916,     7,
    2235,     8,  2238,  2242,     9,  2349,    10,    11,  2216,  2290,
    2261,    12,    13,    14,  2217,    15,    16,  2244,    17,  2276,
    2771,  1092,  2291,    18,    19,    20,  2328,    21,    22,  2361,
      23,    24,    25,    26,  1685,    27,  2368,  2369,    28,  2377,
    2371,  2374,    29,    30,  2378,    31,  2381,  2414,  2382,  2422,
    2386,  2419,   724,  2387,    32,  2390,  2407,  2423,  2428,  2426,
    2431,  1898,  2433,   850,    33,  2440,  2441,  2391,    34,    35,
    2406,  2460,  2461,  2479,   851,  2480,  2469,   852,  2472,  2556,
     853,  2558,   854,    36,    37,  2564,   855,  2562,  2566,  2568,
    2161,   856,  2577,  2569,  2578,  2596,  2583,  2589,  2594,   857,
    2597,  2593,  2598,  2602,   858,   859,  2603,  2605,  2608,    38,
    2609,  2610,  2631,  2635,   860,  2652,  1944,  2641,   861,  2651,
     355,   876,  2637,  2653,  2680,  2856,  2732,  2638,  2655,  2663,
    2665,  2731,   725,  2687,   357,  2689,  2733,  2707,  1649,  3008,
    2611,  2714,  2708,   726,  2709,  2735,  2711,  2744,  2738,  2725,
    2753,  2704,  2755,  2756,  2757,  2766,  2767,  2772,  2774,  2199,
    2201,  2790,  2800,   360,  2791,  2799,  2802,  2806,  2807,  2812,
    2813,  2814,   863,  2816,  2831,  2817,  2818,  2270,  2819,  2820,
    2822,  2832,   864,  2836,   727,  2837,  2849,  2851,  2858,  2860,
    2863,  2885,  2232,   728,   729,  2865,   865,   362,   891,   333,
    2883,   364,   365,  2890,   333,  1588,  2241,  2891,  2892,  2893,
    2894,   333,  2895,    39,   730,  2896,  2897,    40,  2900,    41,
    2252,  2901,  2910,  2911,    42,  2913,  1518,   366,  2912,  2919,
    2920,  2952,  2937,  2921,  2922,  2956,  2945,  2958,  2016,  2959,
    2961,  2966,  2345,  2449,  2968,  2016,  2973,  2978,  2016,  2016,
    2437,  2989,  2990,  2993,  2016,  2016,  2994,  2997,  2998,   333,
     368,  -966,  3004,    43,  3006,  2037,  3007,  2825,  1610,  1671,
     475,  1234,  2716,   866,  2008,   374,   731,  2870,  2354,   300,
     545,  2661,  1965,   867,  2016,   868,  2013,   333,  1619,  2016,
    2341,  2654,  2660,  2346,  2314,  2670,  1615,  2671,  2712,  2782,
    2886,  2815,  2776,   869,  2810,  2971,  2954,  2955,  2967,  2957,
    2882,  2934,  1551,  2482,  2730,  2899,   300,  2016,  2729,  2889,
    2336,  2487,   732,  1895,  2777,  2778,  2182,  1678,  1915,   382,
    1139,  2350,  2413,  1922,   870,  2975,  1649,  2179,   883,  1222,
    2183,  1144,  1621,  1622,  2467,  2854,  1549,   959,  2926,  1873,
    1712,   940,  2982,  2748,  2983,  2984,  3009,   805,  1623,  2737,
    2193,  1624,  1591,   919,  2058,  1281,  2996,  2264,  2770,  1625,
    1626,  2645,  1627,  2946,   850,   882,  1534,  1683,  1696,  2412,
     831,  1510,  2903,  2914,  2948,   851,  2960,  2648,   852,  2250,
    1517,   853,  1927,   854,    44,  2462,  1264,   855,  2240,  2768,
    2636,  1862,   856,   878,  2864,   910,  1579,  1574,  1691,  2450,
     857,  2869,     0,  1632,     0,   858,   859,     0,     0,     0,
       0,     0,     0,     0,     0,   860,     0,     0,     0,   861,
       0,     0,     0,     0,     0,     0,     0,   733,   734,   735,
     736,   737,   738,   739,    45,     0,   740,     0,     0,     0,
       0,     0,  1451,     0,     0,  1633,   300,     0,     0,     0,
       0,     0,  1634,     0,     0,     0,     0,     0,     0,     0,
       0,  1857,     0,     0,  2425,     0,     0,     0,     0,     0,
       0,     0,  1616,   863,  1617,     0,  1636,     0,     0,     0,
    1618,     0,  1619,   864,     0,  1637,  1638,  1639,     0,     0,
       0,  1620,     0,     0,     0,     0,     0,   865,     0,     0,
       0,  1641,  1916,     0,     0,     0,   333,     0,     0,     0,
     333,     0,     0,     0,     0,     0,     0,     0,  1588,  1610,
    1239,  1240,  1241,  1242,  1243,  1244,  1245,  1642,  1246,  1247,
    1248,  1249,  1250,  1251,  1252,  1253,  1621,  1622,     0,  1643,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   805,  1623,     0,     0,  1624,     0,     0,  2016,     0,
     827,     0,     0,  1625,  1626,     0,  1627,   333,   333,     0,
    1628,  1629,     0,     0,   866,  1630,  1610,  1615,     0,     0,
       0,     0,     0,     0,   867,     0,   868,     0,     0,     0,
       0,     0,   579,  1226,  2222,  1226,   300,     0,     0,     0,
       0,     0,     0,     0,   869,     0,  1631,  1632,   595,     0,
    2499,     0,     0,   300,     0,     0,     0,  2554,     0,   300,
       0,     0,     0,     0,     0,     0,     0,     0,  2500,     0,
       0,     0,   618,     0,  2555,   870,     0,     0,     0,     0,
       0,     0,  1644,     0,     0,     0,     0,     0,     0,  1633,
       0,     0,     0,     0,     0,     0,  1634,     0,     0,     0,
       0,   650,     0,     0,     0,     0,  1646,     0,     0,     0,
       0,   609,   611,   613,     0,     0,  1635,     0,     0,     0,
    1636,     0,     0,  2270,     0,     0,     0,   333,     0,  1637,
    1638,  1639,     0,     0,  1853,     0,  2601,  1640,     0,     0,
       0,     0,     0,  1226,  1226,  1641,  1226,     0,     0,     0,
       0,   701,   702,   703,   705,   706,     0,  2622,     0,     0,
       0,     0,     0,     0,     0,     0,  2359,     0,     0,     0,
       0,  1642,  1226,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1518,  1643,     0,     0,     0,  2016,     0,  1226,
       0,  1226,  1226,  2016,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   827,     0,  2016,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   934,     0,     0,   941,     0,     0,     0,
       0,     0,   947,   948,     0,   949,   950,   951,   952,     0,
    2721,     0,     0,   956,   957,   958,     0,     0,     0,     0,
       0,   963,   333,   965,   966,   967,  1644,     0,     0,   969,
       0,  1615,     0,   973,     0,   974,   724,   975,     0,   976,
    1645,     0,     0,     0,     0,     0,   982,     0,     0,   984,
    1646,     0,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,     0,   997,   998,   999,  1000,  1001,  1002,     0,
       0,     0,     0,  1011,  1012,     0,  1014,  1015,  1016,     0,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,     0,
       0,     0,  1030,     0,  1031,  1032,  1033,  1034,  1035,  2721,
       0,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1051,
       0,     0,     0,     0,     0,     0,   725,  1061,     0,     0,
       0,     0,  1063,  1064,  1065,     0,     0,   726,     0,     0,
       0,     0,  1074,     0,     0,     0,  1081,     0,  1082,     0,
       0,   333,     0,     0,     0,     0,  1086,  1087,  1088,  1089,
    1610,     0,     0,  1098,  1099,  1100,  1101,     0,  1104,  1105,
    1106,  1108,  1110,  1111,  1112,  1113,  1116,     0,   727,     0,
       0,     0,     0,     0,     0,     0,     0,   728,   729,   300,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,  2838,     0,     0,     0,   730,     0,
       0,  2862,     0,     0,     0,     0,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,     0,
       0,     0,  2721,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2881,     0,     0,     0,     0,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,     0,     0,     0,     0,   724,     0,     0,     0,
     731,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2721,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1619,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   732,     0,     0,     0,
       0,  2232,     0,     0,   724,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   725,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   726,     0,  1621,
    1622,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   725,     0,   805,  1623,     0,     0,  1624,  2862,
    2862,     0,  2965,   726,     0,     0,  1625,  1626,     0,  1627,
       0,     0,     0,     0,  2972,     0,     0,     0,   727,     0,
       0,     0,     0,     0,   725,     0,  1317,   728,   729,     0,
    2981,     0,     0,     0,     0,   726,     0,     0,     0,     0,
       0,     0,     0,     0,   727,     0,     0,     0,   730,     0,
    1632,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,     0,     0,     0,     0,     0,  2986,     0,  1518,     0,
       0,     0,     0,     0,   730,     0,   727,     0,     0,     0,
       0,     0,     0,     0,     0,   728,   729,     0,     0,     0,
       0,     0,  1633,     0,     0,     0,     0,     0,     0,  1634,
       0,     0,     0,  1429,  1431,  1433,   730,     0,     0,     0,
     731,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1636,     0,     0,     0,     0,     0,     0,
       0,     0,  1637,  1638,  1639,  1457,   731,     0,  1458,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1641,     0,
       0,  1468,     0,     0,     0,     0,   732,     0,     0,  1299,
       0,     0,     0,     0,     0,     0,     0,     0,   731,     0,
       0,     0,     0,  1498,  1642,     0,     0,     0,     0,     0,
       0,     0,   732,     0,     0,     0,  1643,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1516,     0,
       0,     0,     0,     0,     0,     0,     0,   827,     0,     0,
       0,     0,     0,     0,   732,     0,     0,     0,     0,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,     0,  1072,  1073,     0,     0,     0,     0,     0,  1644,
       0,     0,     0,     0,     0,   724,     0,   733,   734,   735,
     736,   737,   738,   739,     0,     0,   740,     0,     0,     0,
       0,     0,     0,  1646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   733,
     734,   735,   736,   737,   738,   739,     0,  1700,   740,  1701,
       0,  1300,     0,  1704,     0,     0,     0,     0,     0,  1706,
    1707,     0,     0,     0,     0,  1711,     0,     0,     0,     0,
       0,  1715,     0,  1716,     0,     0,     0,  1719,  1720,     0,
       0,     0,     0,     0,     0,   725,     0,  1722,     0,     0,
    1723,     0,     0,     0,     0,  1726,   726,     0,     0,     0,
       0,     0,     0,     0,  1732,     0,  1733,     0,     0,     0,
    1736,  1737,  1738,     0,     0,     0,  1741,     0,  1742,     0,
    1743,     0,  1744,     0,     0,     0,  1748,     0,  1749,     0,
    1750,     0,  1751,     0,  1752,     0,  1754,   727,     0,     0,
       0,  1755,     0,  1756,     0,  1757,   728,   729,     0,     0,
       0,     0,     0,  1758,  1759,     0,  1760,     0,  1761,  1762,
       0,     0,  1766,  1767,  1768,  1769,  1770,   730,     0,  1775,
    1776,  1777,  1778,     0,  1780,  1781,  1782,  1784,  1786,  1787,
    1788,  1789,  1790,     0,  1792,  1793,     0,  1794,     0,  1796,
    1797,  1798,  1799,  1800,     0,  1802,     0,  1804,     0,  1806,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1808,     0,     0,  1809,  1810,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,   731,
       0,     0,     0,     0,     0,  1820,  1821,     0,     0,  1825,
    1826,  1827,  1828,     0,     0,     0,  1836,  1837,  1838,  1839,
       0,  1841,  1842,  1843,  1845,  1847,  1848,  1849,  1850,  1851,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1865,     0,     0,   732,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,     0,     0,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   724,     0,
    1957,   725,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,   726,     0,     0,     0,     0,     0,     0,     0,
     733,   734,   735,   736,   737,   738,   739,     0,     0,   740,
     724,  1305,  1306,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   724,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   727,     0,     0,     0,     0,     0,     0,
       0,     0,   728,   729,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   725,     0,
       0,     0,     0,   730,     0,     0,     0,     0,     0,   726,
       0,   725,     0,     0,     0,     0,     0,     0,     0,     0,
    2062,     0,   726,     0,     0,     0,     0,     0,     0,     0,
     725,     0,     0,     0,     0,     0,  2087,     0,     0,  2090,
       0,   726,     0,   725,     0,     0,     0,     0,     0,     0,
     727,     0,     0,     0,   726,     0,     0,     0,     0,   728,
     729,     0,     0,   727,     0,   731,     0,     0,     0,     0,
       0,     0,   728,   729,     0,     0,     0,     0,  2129,     0,
     730,     0,   727,     0,     0,     0,     0,     0,  2134,     0,
       0,   728,   729,   730,     0,   727,     0,     0,     0,     0,
       0,     0,     0,     0,   728,   729,     0,     0,     0,     0,
    2143,   732,   730,     0,     0,     0,  2151,     0,  2153,     0,
    2155,     0,     0,     0,     0,   730,     0,     0,     0,     0,
       0,     0,     0,     0,  2163,     0,     0,  2164,     0,     0,
       0,     0,   731,     0,     0,     0,     0,     0,     0,  2171,
       0,     0,     0,     0,     0,   731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   731,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   731,   732,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   732,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,     0,     0,     0,     0,     0,
     732,     0,     0,     0,     0,     0,   733,   734,   735,   736,
     737,   738,   739,   732,     0,   740,     0,  1321,  1322,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2257,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   724,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   733,   734,   735,   736,   737,   738,   739,
       0,     0,   740,     0,  1324,  1325,   733,   734,   735,   736,
     737,   738,   739,     0,     0,   740,     0,  1338,  1339,     0,
       0,     0,     0,     0,     0,   733,   734,   735,   736,   737,
     738,   739,     0,     0,   740,     0,  1340,  1341,   733,   734,
     735,   736,   737,   738,   739,   724,     0,   740,   725,  1344,
    1345,     0,     0,     0,     0,     0,     0,     0,     0,   726,
       0,     0,     0,     0,     0,     0,  2372,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
       0,  2379,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2383,     0,     0,     0,     0,     0,  2384,  2385,     0,
     727,     0,     0,     0,     0,     0,     0,     0,  2388,   728,
     729,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2392,     0,     0,     0,  2393,   725,     0,  2394,     0,     0,
     730,     0,     0,     0,     0,     0,   726,     0,     0,     0,
       0,  2397,     0,   724,     0,  2398,     0,     0,     0,     0,
    2400,     0,     0,  2401,  2402,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   727,  2411,     0,
       0,     0,     0,     0,     0,     0,   728,   729,     0,     0,
       0,     0,   731,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   730,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   725,     0,     0,     0,     0,     0,     0,
       0,   724,     0,     0,   726,     0,     0,     0,   732,     0,
       0,     0,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,     0,  2463,     0,     0,   579,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   731,
       0,     0,     0,     0,     0,   727,     0,     0,     0,     0,
       0,     0,     0,     0,   728,   729,  2478,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   730,     0,     0,     0,     0,
    2492,   725,     0,     0,     0,   732,     0,     0,   724,     0,
       0,     0,   726,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   733,   734,   735,   736,   737,   738,   739,
       0,     0,   740,   727,  1350,  1351,     0,   731,     0,     0,
       0,     0,   728,   729,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   730,     0,     0,     0,     0,   725,     0,
       0,  2587,     0,     0,     0,     0,     0,     0,     0,   726,
       0,     0,     0,   732,     0,  2595,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     733,   734,   735,   736,   737,   738,   739,     0,     0,   740,
       0,  1352,  1353,     0,     0,     0,     0,  2616,     0,     0,
     727,     0,     0,     0,     0,   731,     0,     0,     0,   728,
     729,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     730,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   732,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   733,   734,
     735,   736,   737,   738,   739,     0,     0,   740,     0,  1354,
    1355,     0,   731,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2727,     0,  2728,   732,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   733,   734,   735,   736,
     737,   738,   739,     0,     0,   740,     0,  1356,  1357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2257,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2492,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   733,   734,   735,   736,   737,   738,   739,
       0,     0,   740,     0,  1366,  1367,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2492,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2857,     0,  2859,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     337,   101,   102,     0,   103,   104,   105,   338,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
     339,   114,     0,     0,   115,     0,   116,   340,   341,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,   342,   343,   127,   344,   345,   129,   346,
    2902,   131,     0,   132,   133,     0,  2908,     0,     0,   134,
     135,   136,   137,   347,   138,   139,   140,  1048,   141,     0,
     142,   143,     0,   348,   349,   145,     0,   146,     0,   350,
       0,     0,   148,     0,   351,     0,   149,   352,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,   353,   159,   354,   160,   161,   162,   355,
       0,     0,     0,   163,     0,   164,     0,   165,   356,     0,
    2492,   166,   167,   357,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,  2962,     0,   174,   175,     0,
       0,     0,  1049,   358,   176,   177,     0,     0,     0,   178,
     359,   179,   360,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   361,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,   362,   208,   363,   209,
     364,   365,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,  3005,   366,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   367,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,   368,
       0,  1050,   240,   369,   241,     0,   370,   371,   372,   373,
       0,     0,   242,   243,   374,   244,     0,     0,     0,   245,
       0,     0,   246,   375,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   376,     0,     0,   377,   253,   378,
     254,   379,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   380,   381,     0,     0,     0,   382,     0,
       0,     0,     0,     0,   265,   383,     0,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,   395,   396,   397,   398,     0,   399,   400,   401,
     402,   403,   404,   405,     0,   406,   407,   408,   409,   410,
     411,   412,   413,     0,     0,     0,   414,   270,   415,   271,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,   425,   275,   276,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,     0,
     441,   442,   443,   444,   445,     0,   286,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   289,     0,   463,   464,   465,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
       0,     0,     0,   466,   467,     0,     0,     0,   468,     0,
       0,   469,     0,     0,   470,   471,     0,   472,   473,   474,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,   336,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   337,   101,   102,     0,   103,
     104,   105,   338,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,   339,   114,     0,     0,   115,
       0,   116,   340,   341,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,   342,   343,
     127,   344,   345,   129,   346,     0,   131,     0,   132,   133,
    2253,     0,     0,     0,   134,   135,   136,   137,  2254,   138,
     139,   140,     0,   141,     0,   142,   143,     0,   348,   349,
     145,     0,   146,     0,   350,     0,     0,   148,     0,   351,
       0,   149,  2255,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,   353,   159,
     354,   160,   161,   162,   355,     0,     0,     0,   163,     0,
     164,     0,   165,   356,     0,     0,   166,   167,   357,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,   358,   176,
     177,     0,     0,     0,   178,   359,   179,   360,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   361,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,   362,   208,   363,   209,   364,   365,   210,  2256,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,   366,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   367,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,   368,     0,     0,   240,   369,   241,
       0,   370,   371,   372,   373,     0,     0,   242,   243,   374,
     244,     0,     0,     0,   245,     0,     0,   246,   375,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   376,
       0,     0,   377,   253,   378,   254,   379,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   380,   381,
       0,     0,     0,   382,     0,     0,     0,     0,     0,   265,
     383,     0,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,   395,   396,   397,
     398,     0,   399,   400,   401,   402,   403,   404,   405,     0,
     406,   407,   408,   409,   410,   411,   412,   413,     0,     0,
       0,   414,   270,   415,   271,   416,   417,   418,   419,   420,
     421,   422,   423,   424,     0,     0,   425,   275,   276,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     0,   441,   442,   443,   444,   445,
       0,   286,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,     0,
     289,     0,   463,   464,   465,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,     0,     0,     0,   466,   467,
       0,     0,     0,   468,     0,     0,   469,     0,     0,   470,
     471,     0,   472,   473,   474,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     337,   101,   102,     0,   103,   104,   105,   338,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
     339,   114,     0,     0,   115,     0,   116,   340,   341,   117,
       0,     0,   118,   119,   120,   121,   122,   123,   704,     0,
     124,   125,   126,   342,   343,   127,   344,   345,   129,   346,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,   347,   138,   139,   140,     0,   141,     0,
     142,   143,     0,   348,   349,   145,     0,   146,     0,   350,
       0,     0,   148,     0,   351,     0,   149,   352,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,   353,   159,   354,   160,   161,   162,   355,
       0,     0,     0,   163,     0,   164,     0,   165,   356,     0,
       0,   166,   167,   357,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,   358,   176,   177,     0,     0,     0,   178,
     359,   179,   360,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   361,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,   362,   208,   363,   209,
     364,   365,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,   366,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   367,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,   368,
       0,     0,   240,   369,   241,     0,   370,   371,   372,   373,
       0,     0,   242,   243,   374,   244,     0,     0,     0,   245,
       0,     0,   246,   375,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   376,     0,     0,   377,   253,   378,
     254,   379,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   380,   381,     0,     0,     0,   382,     0,
       0,     0,     0,     0,   265,   383,     0,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,   395,   396,   397,   398,     0,   399,   400,   401,
     402,   403,   404,   405,     0,   406,   407,   408,   409,   410,
     411,   412,   413,     0,     0,     0,   414,   270,   415,   271,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,   425,   275,   276,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,     0,
     441,   442,   443,   444,   445,     0,   286,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   289,     0,   463,   464,   465,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
       0,     0,     0,   466,   467,     0,     0,     0,   468,     0,
       0,   469,     0,     0,   470,   471,     0,   472,   473,   474,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,   336,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   337,   101,   102,     0,   103,
     104,   105,   338,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,   339,   114,     0,     0,   115,
       0,   116,   340,   341,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,   342,   343,
     127,   344,   345,   129,   346,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,   347,   138,
     139,   140,     0,   141,     0,   142,   143,     0,   348,   349,
     145,     0,   146,     0,   350,     0,     0,   148,     0,   351,
       0,   149,   352,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,   353,   159,
     354,   160,   161,   162,   355,     0,     0,     0,   163,     0,
     164,     0,   165,   356,     0,     0,   166,   167,   357,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,   358,   176,
     177,     0,     0,     0,   178,   359,   179,   360,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   361,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,   362,   208,   363,   209,   364,   365,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,   366,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   367,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,   368,     0,     0,   240,   369,   241,
       0,   370,   371,   372,   373,     0,     0,   242,   243,   374,
     244,     0,     0,     0,   245,     0,     0,   246,   375,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   376,
       0,     0,   377,   253,   378,   254,   379,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   380,   381,
       0,     0,     0,   382,     0,     0,     0,     0,     0,   265,
     383,     0,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,   395,   396,   397,
     398,     0,   399,   400,   401,   402,   403,   404,   405,     0,
     406,   407,   408,   409,   410,   411,   412,   413,     0,     0,
       0,   414,   270,   415,   271,   416,   417,   418,   419,   420,
     421,   422,   423,   424,     0,     0,   425,   275,   276,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     0,   441,   442,   443,   444,   445,
       0,   286,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,     0,
     289,     0,   463,   464,   465,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,     0,     0,     0,   466,   467,
       0,     0,     0,   468,     0,     0,   469,   983,     0,   470,
     471,     0,   472,   473,   474,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     337,   101,   102,     0,   103,   104,   105,   338,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
     339,   114,     0,     0,   115,     0,   116,   340,   341,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,   342,   343,   127,   344,   345,   129,   346,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,   347,   138,   139,   140,     0,   141,     0,
     142,   143,     0,   348,   349,   145,     0,   146,     0,   350,
       0,     0,   148,     0,   351,     0,   149,   352,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,   353,   159,   354,   160,   161,   162,   355,
       0,     0,     0,   163,     0,   164,     0,   165,   356,     0,
       0,   166,   167,   357,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,   358,   176,   177,     0,     0,     0,   178,
     359,   179,   360,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   361,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,   362,   208,   363,   209,
     364,   365,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,   366,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   367,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,   368,
       0,     0,   240,   369,   241,     0,   370,   371,   372,   373,
       0,     0,   242,   243,   374,   244,     0,     0,     0,   245,
       0,     0,   246,   375,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   376,     0,     0,   377,   253,   378,
     254,   379,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   380,   381,     0,     0,     0,   382,     0,
       0,     0,     0,     0,   265,   383,     0,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,   395,   396,   397,   398,     0,   399,   400,   401,
     402,   403,   404,   405,     0,   406,   407,   408,   409,   410,
     411,   412,   413,     0,     0,     0,   414,   270,   415,   271,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,   425,   275,   276,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,     0,
     441,   442,   443,   444,   445,     0,   286,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   289,     0,   463,   464,   465,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
       0,     0,     0,   466,   467,     0,     0,     0,   468,     0,
       0,   469,  1013,     0,   470,   471,     0,   472,   473,   474,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,   336,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   337,   101,   102,     0,   103,
     104,   105,   338,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,   339,   114,     0,     0,   115,
       0,   116,   340,   341,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,   342,   343,
     127,   344,   345,   129,   346,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,   347,   138,
     139,   140,     0,   141,     0,   142,   143,     0,   348,   349,
     145,     0,   146,     0,   350,     0,     0,   148,     0,   351,
       0,   149,   352,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,   353,   159,
     354,   160,   161,   162,   355,     0,     0,     0,   163,     0,
     164,     0,   165,   356,     0,     0,   166,   167,   357,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,   358,   176,
     177,     0,     0,     0,   178,   359,   179,   360,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   361,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,   362,   208,   363,   209,   364,   365,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,   366,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   367,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,   368,     0,     0,   240,   369,   241,
       0,   370,   371,   372,   373,     0,     0,   242,   243,   374,
     244,     0,     0,     0,   245,     0,     0,   246,   375,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   376,
       0,     0,   377,   253,   378,   254,   379,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   380,   381,
       0,     0,     0,   382,     0,     0,     0,     0,     0,   265,
     383,     0,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,   395,   396,   397,
     398,     0,   399,   400,   401,   402,   403,   404,   405,     0,
     406,   407,   408,   409,   410,   411,   412,   413,     0,     0,
       0,   414,   270,   415,   271,   416,   417,   418,   419,   420,
     421,   422,   423,   424,     0,     0,   425,   275,   276,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     0,   441,   442,   443,   444,   445,
       0,   286,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,     0,
     289,     0,   463,   464,   465,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,     0,     0,     0,   466,   467,
       0,     0,     0,   468,     0,     0,   469,  1039,     0,   470,
     471,     0,   472,   473,   474,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     337,   101,   102,     0,   103,   104,   105,   338,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
     339,   114,     0,     0,   115,     0,   116,   340,   341,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,   342,   343,   127,   344,   345,   129,   346,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,   347,   138,   139,   140,     0,   141,     0,
     142,   143,     0,   348,   349,   145,     0,   146,     0,   350,
       0,     0,   148,     0,   351,     0,   149,   352,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,   353,   159,   354,   160,   161,   162,   355,
       0,     0,     0,   163,     0,   164,     0,   165,   356,     0,
       0,   166,   167,   357,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,   358,   176,   177,     0,     0,     0,   178,
     359,   179,   360,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   361,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,   362,   208,   363,   209,
     364,   365,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,   366,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   367,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,   368,
       0,     0,   240,   369,   241,     0,   370,   371,   372,   373,
       0,     0,   242,   243,   374,   244,     0,     0,     0,   245,
       0,     0,   246,   375,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   376,     0,     0,   377,   253,   378,
     254,   379,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   380,   381,     0,     0,     0,   382,     0,
       0,     0,     0,     0,   265,   383,     0,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,   395,   396,   397,   398,     0,   399,   400,   401,
     402,   403,   404,   405,     0,   406,   407,   408,   409,   410,
     411,   412,   413,     0,     0,     0,   414,   270,   415,   271,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,   425,   275,   276,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,     0,
     441,   442,   443,   444,   445,     0,   286,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   289,     0,   463,   464,   465,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
       0,     0,     0,   466,   467,     0,     0,     0,   468,     0,
       0,   469,  1060,     0,   470,   471,     0,   472,   473,   474,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,   336,     0,     0,     0,     0,
       0,    98,     0,     0,  1114,   337,   101,   102,     0,   103,
     104,   105,   338,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,   339,   114,     0,     0,   115,
       0,   116,   340,   341,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,   342,   343,
     127,   344,   345,   129,   346,     0,   131,     0,   132,   133,
    1115,     0,     0,     0,   134,   135,   136,   137,   347,   138,
     139,   140,     0,   141,     0,   142,   143,     0,   348,   349,
     145,     0,   146,     0,   350,     0,     0,   148,     0,   351,
       0,   149,   352,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,   353,   159,
     354,   160,   161,   162,   355,     0,     0,     0,   163,     0,
     164,     0,   165,   356,     0,     0,   166,   167,   357,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,   358,   176,
     177,     0,     0,     0,   178,   359,   179,   360,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   361,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,   362,   208,   363,   209,   364,   365,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,   366,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   367,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,   368,     0,     0,   240,   369,   241,
       0,   370,   371,   372,   373,     0,     0,   242,   243,   374,
     244,     0,     0,     0,   245,     0,     0,   246,   375,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   376,
       0,     0,   377,   253,   378,   254,   379,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   380,   381,
       0,     0,     0,   382,     0,     0,     0,     0,     0,   265,
     383,     0,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,   395,   396,   397,
     398,     0,   399,   400,   401,   402,   403,   404,   405,     0,
     406,   407,   408,   409,   410,   411,   412,   413,     0,     0,
       0,   414,   270,   415,   271,   416,   417,   418,   419,   420,
     421,   422,   423,   424,     0,     0,   425,   275,   276,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     0,   441,   442,   443,   444,   445,
       0,   286,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,     0,
     289,     0,   463,   464,   465,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,     0,     0,     0,   466,   467,
       0,     0,     0,   468,     0,     0,   469,     0,     0,   470,
     471,     0,   472,   473,   474,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     337,   101,   102,     0,   103,   104,   105,   338,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
     339,   114,     0,     0,   115,     0,   116,   340,   341,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,   342,   343,   127,   344,   345,   129,   346,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,   347,   138,   139,   140,     0,   141,     0,
     142,   143,     0,   348,   349,   145,     0,   146,     0,   350,
       0,     0,   148,     0,   351,     0,   149,   352,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,   353,   159,   354,   160,   161,   162,   355,
       0,     0,  1428,   163,     0,   164,     0,   165,   356,     0,
       0,   166,   167,   357,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,   358,   176,   177,     0,     0,     0,   178,
     359,   179,   360,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   361,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,   362,   208,   363,   209,
     364,   365,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,   366,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   367,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,   368,
       0,     0,   240,   369,   241,     0,   370,   371,   372,   373,
       0,     0,   242,   243,   374,   244,     0,     0,     0,   245,
       0,     0,   246,   375,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   376,     0,     0,   377,   253,   378,
     254,   379,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   380,   381,     0,     0,     0,   382,     0,
       0,     0,     0,     0,   265,   383,     0,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,   395,   396,   397,   398,     0,   399,   400,   401,
     402,   403,   404,   405,     0,   406,   407,   408,   409,   410,
     411,   412,   413,     0,     0,     0,   414,   270,   415,   271,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,   425,   275,   276,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,     0,
     441,   442,   443,   444,   445,     0,   286,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   289,     0,   463,   464,   465,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
       0,     0,     0,   466,   467,     0,     0,     0,   468,     0,
       0,   469,     0,     0,   470,   471,     0,   472,   473,   474,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,   336,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   337,   101,   102,     0,   103,
     104,   105,   338,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,   339,   114,     0,     0,   115,
       0,   116,   340,   341,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,   342,   343,
     127,   344,   345,   129,   346,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,   347,   138,
     139,   140,     0,   141,     0,   142,   143,     0,   348,   349,
     145,     0,   146,     0,   350,     0,     0,   148,     0,   351,
       0,   149,   352,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,   353,   159,
     354,   160,   161,   162,   355,     0,     0,  1430,   163,     0,
     164,     0,   165,   356,     0,     0,   166,   167,   357,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,   358,   176,
     177,     0,     0,     0,   178,   359,   179,   360,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   361,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,   362,   208,   363,   209,   364,   365,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,   366,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   367,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,   368,     0,     0,   240,   369,   241,
       0,   370,   371,   372,   373,     0,     0,   242,   243,   374,
     244,     0,     0,     0,   245,     0,     0,   246,   375,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   376,
       0,     0,   377,   253,   378,   254,   379,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   380,   381,
       0,     0,     0,   382,     0,     0,     0,     0,     0,   265,
     383,     0,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,   395,   396,   397,
     398,     0,   399,   400,   401,   402,   403,   404,   405,     0,
     406,   407,   408,   409,   410,   411,   412,   413,     0,     0,
       0,   414,   270,   415,   271,   416,   417,   418,   419,   420,
     421,   422,   423,   424,     0,     0,   425,   275,   276,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     0,   441,   442,   443,   444,   445,
       0,   286,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,     0,
     289,     0,   463,   464,   465,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,     0,     0,     0,   466,   467,
       0,     0,     0,   468,     0,     0,   469,     0,     0,   470,
     471,     0,   472,   473,   474,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     337,   101,   102,     0,   103,   104,   105,   338,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
     339,   114,     0,     0,   115,     0,   116,   340,   341,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,   342,   343,   127,   344,   345,   129,   346,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,   347,   138,   139,   140,     0,   141,     0,
     142,   143,     0,   348,   349,   145,     0,   146,     0,   350,
       0,     0,   148,     0,   351,     0,   149,   352,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,   353,   159,   354,   160,   161,   162,   355,
       0,     0,  1432,   163,     0,   164,     0,   165,   356,     0,
       0,   166,   167,   357,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,   358,   176,   177,     0,     0,     0,   178,
     359,   179,   360,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   361,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,   362,   208,   363,   209,
     364,   365,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,   366,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   367,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,   368,
       0,     0,   240,   369,   241,     0,   370,   371,   372,   373,
       0,     0,   242,   243,   374,   244,     0,     0,     0,   245,
       0,     0,   246,   375,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   376,     0,     0,   377,   253,   378,
     254,   379,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   380,   381,     0,     0,     0,   382,     0,
       0,     0,     0,     0,   265,   383,     0,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,   395,   396,   397,   398,     0,   399,   400,   401,
     402,   403,   404,   405,     0,   406,   407,   408,   409,   410,
     411,   412,   413,     0,     0,     0,   414,   270,   415,   271,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,   425,   275,   276,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,     0,
     441,   442,   443,   444,   445,     0,   286,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   289,     0,   463,   464,   465,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
       0,     0,     0,   466,   467,     0,     0,     0,   468,     0,
       0,   469,     0,     0,   470,   471,     0,   472,   473,   474,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,   336,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   337,   101,   102,     0,   103,
     104,   105,   338,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,   339,   114,     0,     0,   115,
       0,   116,   340,   341,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,   342,   343,
     127,   344,   345,   129,   346,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,   347,   138,
     139,   140,     0,   141,     0,   142,   143,     0,   348,   349,
     145,     0,   146,     0,   350,     0,     0,   148,     0,   351,
       0,   149,   352,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,   353,   159,
     354,   160,   161,   162,   355,     0,     0,     0,   163,     0,
     164,     0,   165,   356,     0,     0,   166,   167,   357,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,   358,   176,
     177,     0,     0,     0,   178,   359,   179,   360,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   361,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,   362,   208,   363,   209,   364,   365,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,   366,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   367,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,   368,     0,     0,   240,   369,   241,
       0,   370,   371,   372,   373,     0,     0,   242,   243,   374,
     244,     0,     0,     0,   245,     0,     0,   246,   375,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   376,
       0,     0,   377,   253,   378,   254,   379,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   380,   381,
       0,     0,     0,   382,     0,     0,     0,     0,     0,   265,
     383,     0,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,   395,   396,   397,
     398,     0,   399,   400,   401,   402,   403,   404,   405,     0,
     406,   407,   408,   409,   410,   411,   412,   413,     0,     0,
       0,   414,   270,   415,   271,   416,   417,   418,   419,   420,
     421,   422,   423,   424,     0,     0,   425,   275,   276,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     0,   441,   442,   443,   444,   445,
       0,   286,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,     0,
     289,     0,   463,   464,   465,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,     0,     0,     0,   466,   467,
       0,     0,     0,   468,     0,     0,   469,     0,     0,   470,
     471,     0,   472,   473,   474,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     337,   101,   102,     0,   103,   104,   105,   338,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
     339,   114,     0,     0,   115,     0,   116,   340,   341,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,   342,   343,   127,   344,   345,   129,   346,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,   347,   138,   139,   140,     0,   141,     0,
     142,   143,     0,   348,   349,   145,     0,   146,     0,   350,
       0,     0,   148,     0,   351,     0,   149,   553,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,   353,   159,   354,   160,   161,   162,   355,
       0,     0,     0,   163,     0,   164,     0,   165,   356,     0,
       0,   166,   167,   357,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,   358,   176,   177,     0,     0,     0,   178,
     359,   179,   360,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   361,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,   362,   208,   363,   209,
     364,   365,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,   366,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   367,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,   368,
       0,     0,   240,   369,   241,     0,   370,   371,   372,   373,
       0,     0,   242,   243,   374,   244,     0,     0,     0,   245,
       0,     0,   246,   375,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   376,     0,     0,   377,   253,   378,
     254,   379,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   380,   381,     0,     0,     0,   382,     0,
       0,     0,     0,     0,   265,   383,     0,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,   395,   396,   397,   398,     0,   399,   400,   401,
     402,   403,   404,   405,     0,   406,   407,   408,   409,   410,
     411,   412,   413,     0,     0,     0,   414,   270,   415,   271,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,   425,   275,   276,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,     0,
     441,   442,   443,   444,   445,     0,   286,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   289,     0,   463,   464,   465,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
       0,     0,     0,   466,   467,     0,     0,     0,   468,     0,
       0,   469,     0,     0,   470,   471,     0,   472,   473,   474,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,   336,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   337,   101,   102,     0,   103,
     104,   105,   338,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,   339,   114,     0,     0,   115,
       0,   116,   340,   341,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,   342,   343,
     127,   344,   345,   129,   346,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,   347,   138,
     139,   140,     0,   141,     0,   142,   143,     0,   348,   349,
     145,     0,   146,     0,   350,     0,     0,   148,     0,   351,
       0,   149,   352,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,   353,   159,
     354,   160,   161,   162,   355,     0,     0,     0,   163,     0,
     164,     0,   165,   356,     0,     0,   166,   167,   357,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,   358,   176,
     177,     0,     0,     0,   178,   359,   179,   360,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   361,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,   362,   208,   363,   209,   364,   365,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,   366,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   367,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,   368,     0,     0,   240,   369,   241,
       0,   370,   371,   372,   373,     0,     0,   242,   243,   374,
     244,     0,     0,     0,   245,     0,     0,   246,   375,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   376,
       0,     0,   377,   253,   378,   254,   379,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   380,   381,
       0,     0,     0,   382,     0,     0,     0,     0,     0,   265,
     383,     0,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,     0,     0,     0,     0,   395,   396,   397,
     398,     0,   399,   400,   401,   402,   403,   404,   405,     0,
     406,   407,   408,   409,   410,   411,   412,   413,     0,     0,
       0,   414,   270,   415,   271,  1705,   417,   418,   419,   420,
     421,   422,   423,   424,     0,     0,   425,   275,   276,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     0,   441,   442,   443,   444,   445,
       0,   286,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,     0,
     289,     0,   463,   464,   465,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,     0,     0,     0,   466,   467,
       0,     0,     0,   468,     0,     0,   469,     0,     0,   470,
     471,     0,   472,   473,   474,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,    98,     0,     0,    99,
     337,   101,   102,     0,   103,   104,   105,   338,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
     339,   114,     0,     0,   115,     0,   116,   340,   341,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,   342,   343,   127,   344,   345,   129,   346,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,   347,   138,   139,   140,     0,   141,     0,
     142,   143,     0,   348,   349,   145,     0,   146,     0,   350,
       0,     0,   148,     0,   351,     0,   149,   352,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,   353,   159,   354,   160,   161,   162,   355,
       0,     0,     0,   163,     0,   164,     0,   165,   356,     0,
       0,   166,   167,   357,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,   358,   176,   177,     0,     0,     0,   178,
     359,   179,   360,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   361,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,   362,   208,   363,   209,
     364,   365,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,   366,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   367,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,   368,
       0,     0,   240,   369,   241,     0,   370,   371,   372,   373,
       0,     0,   242,   243,   374,   244,     0,     0,     0,   245,
       0,     0,   246,   375,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   376,     0,     0,   377,   253,   378,
     254,   379,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   380,   381,     0,     0,     0,   382,     0,
       0,     0,     0,     0,   265,   383,     0,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,     0,     0,
       0,     0,   395,   396,   397,   398,     0,   399,   400,   401,
     402,   403,   404,   405,     0,   406,   407,   408,   409,   410,
     411,   412,   413,     0,     0,     0,   414,   270,   415,   271,
    1795,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,   425,   275,   276,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,     0,
     441,   442,   443,   444,   445,     0,   286,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,     0,   289,     0,   463,   464,   465,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
       0,     0,     0,   466,   467,     0,     0,     0,   468,     0,
       0,   469,     0,     0,   470,   471,     0,   472,   473,   474,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,     0,     0,    99,   100,   101,   102,     0,   103,
     104,   105,     0,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,     0,   114,     0,     0,   115,
       0,   116,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,     0,     0,
     127,     0,   128,   129,   130,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,     0,   142,   143,     0,     0,   144,
     145,     0,   146,     0,   147,     0,     0,   148,     0,     0,
       0,   149,     0,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,     0,   159,
       0,   160,   161,   162,     0,     0,     0,     0,   163,     0,
     164,     0,   165,     0,     0,     0,   166,   167,     0,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,     0,   176,
     177,   330,     0,     0,   178,     0,   179,     0,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,     0,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,     0,   208,     0,   209,     0,     0,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   229,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,   331,     0,     0,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,   242,   243,     0,
     244,     0,     0,     0,   245,     0,     0,   246,     0,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   252,
       0,     0,     0,   253,     0,   254,   255,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   263,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,   268,     0,     0,
       0,   269,   270,     0,   271,     0,     0,     0,     0,   272,
       0,     0,     0,   273,     0,     0,   274,   275,   276,   277,
       0,     0,     0,   278,   279,   280,     0,   281,   282,     0,
     283,     0,   284,     0,     0,     0,     0,     0,     0,   285,
       0,   286,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,     0,   290,     0,     0,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   709,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,   103,   104,   105,     0,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
       0,   114,     0,     0,   115,     0,   116,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,     0,     0,   127,     0,   128,   129,   130,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   141,     0,
     142,   143,     0,     0,  1581,   145,     0,   146,     0,   147,
       0,     0,   148,     0,     0,     0,   149,  1582,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,     0,   159,     0,   160,   161,   162,     0,
       0,     0,     0,   163,     0,   164,     0,   165,     0,     0,
       0,   166,   167,     0,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,     0,   176,   177,     0,     0,     0,   178,
       0,   179,     0,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   195,   196,   197,   198,   199,   200,   201,   202,
     203,  1583,   205,     0,   206,   207,     0,   208,     0,   209,
       0,     0,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   229,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,     0,
       0,     0,  1584,     0,   241,     0,     0,     0,     0,     0,
       0,     0,   242,   243,     0,   244,     0,     0,     0,   245,
       0,     0,   246,     0,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   252,     0,     0,   827,   253,     0,
     254,   255,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   263,   264,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
       0,     0,   268,     0,     0,     0,   269,   270,     0,   271,
       0,     0,     0,     0,   272,     0,     0,     0,   273,     0,
       0,   274,   275,   276,   277,     0,     0,     0,   278,   279,
     280,     0,   281,  1585,     0,   283,     0,   284,     0,     0,
       0,     0,     0,     0,   285,     0,   286,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
       0,     0,     0,     0,     0,   289,     0,   290,     0,     0,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1586,     0,
       0,    98,     0,     0,    99,   100,   101,   102,     0,   103,
     104,   105,     0,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,     0,   114,     0,     0,   115,
       0,   116,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,     0,     0,
     127,     0,   128,   129,   130,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,     0,   142,   143,     0,     0,   144,
     145,     0,   146,     0,   147,     0,     0,   148,     0,     0,
       0,   149,     0,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,     0,   159,
       0,   160,   161,   162,     0,     0,     0,     0,   163,     0,
     164,     0,   165,     0,     0,     0,   166,   167,     0,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,     0,   176,
     177,   330,     0,     0,   178,     0,   179,     0,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,     0,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,     0,   208,     0,   209,     0,     0,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   229,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,   331,     0,     0,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,   242,   243,     0,
     244,     0,     0,     0,   245,     0,     0,   246,     0,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   252,
       0,     0,     0,   253,     0,   254,   255,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   263,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,   268,     0,     0,
       0,   269,   270,     0,   271,     0,     0,     0,     0,   272,
       0,     0,     0,   273,     0,     0,   274,   275,   276,   277,
       0,     0,     0,   278,   279,   280,     0,   281,   282,     0,
     283,     0,   284,     0,     0,     0,     0,     0,     0,   285,
       0,   286,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,     0,   290,     0,     0,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1935,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,   103,   104,   105,     0,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
       0,   114,     0,     0,   115,     0,   116,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,  1944,     0,
     124,   125,   126,     0,     0,   127,     0,   128,   129,   130,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   141,     0,
     142,   143,     0,     0,   144,   145,     0,   146,     0,   147,
       0,     0,   148,  1960,     0,     0,   149,     0,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,     0,   159,     0,   160,   161,   162,     0,
       0,     0,     0,   163,  1961,   164,     0,   165,     0,     0,
       0,   166,   167,     0,     0,   168,   169,   170,     0,   171,
    1962,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,  1963,     0,     0,   176,   177,     0,  2351,     0,   178,
       0,   179,     0,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,     0,   208,     0,   209,
       0,     0,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   229,
     230,     0,     0,   231,   232,   233,   234,   235,  1964,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,     0,
       0,     0,   240,     0,   241,     0,     0,     0,     0,     0,
       0,     0,   242,   243,     0,   244,     0,     0,     0,   245,
       0,     0,   246,     0,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   252,     0,     0,     0,   253,     0,
     254,   255,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   263,   264,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
       0,     0,   268,     0,     0,     0,   269,   270,     0,   271,
       0,     0,     0,     0,   272,     0,     0,     0,   273,     0,
       0,   274,   275,   276,   277,     0,     0,     0,   278,   279,
     280,     0,   281,   282,     0,   283,     0,   284,     0,     0,
       0,     0,     0,     0,   285,     0,   286,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
       0,     0,     0,     0,     0,   289,     0,   290,     0,     0,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,  2012,     0,     0,
       0,    98,     0,     0,    99,   100,   101,   102,     0,   103,
     104,   105,     0,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,     0,   114,     0,     0,   115,
       0,   116,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,     0,     0,
     127,     0,   128,   129,   130,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,     0,   142,   143,     0,     0,   144,
     145,     0,   146,     0,   147,     0,     0,   148,  1960,     0,
       0,   149,     0,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,     0,   159,
       0,   160,   161,   162,     0,     0,     0,     0,   163,  1961,
     164,     0,   165,     0,     0,     0,   166,   167,     0,     0,
     168,   169,   170,     0,   171,  1962,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,  1963,     0,     0,   176,
     177,     0,     0,     0,   178,     0,   179,     0,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,     0,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,     0,   208,     0,   209,     0,     0,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   229,   230,     0,     0,   231,   232,
     233,   234,   235,  1964,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,     0,     0,     0,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,   242,   243,     0,
     244,     0,     0,     0,   245,     0,     0,   246,     0,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   252,
       0,     0,     0,   253,     0,   254,   255,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   263,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,   268,     0,     0,
       0,   269,   270,     0,   271,     0,     0,     0,     0,   272,
       0,     0,     0,   273,     0,     0,   274,   275,   276,   277,
       0,     0,     0,   278,   279,   280,     0,   281,   282,     0,
     283,     0,   284,     0,     0,     0,     0,     0,     0,   285,
       0,   286,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,     0,   290,     0,     0,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,  2012,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,   103,   104,   105,     0,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
       0,   114,     0,     0,   115,     0,   116,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,  1944,     0,
     124,   125,   126,     0,     0,   127,     0,   128,   129,   130,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   141,     0,
     142,   143,     0,     0,   144,   145,     0,   146,     0,   147,
       0,     0,   148,     0,     0,     0,   149,     0,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,     0,   159,     0,   160,   161,   162,     0,
       0,     0,     0,   163,     0,   164,     0,   165,     0,     0,
       0,   166,   167,     0,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,     0,   176,   177,     0,     0,     0,   178,
       0,   179,     0,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,     0,   208,     0,   209,
       0,     0,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   229,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,     0,
       0,     0,   240,     0,   241,     0,     0,     0,     0,     0,
       0,     0,   242,   243,     0,   244,     0,     0,     0,   245,
       0,     0,   246,     0,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   252,     0,     0,     0,   253,     0,
     254,   255,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   263,   264,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
       0,     0,   268,     0,     0,     0,   269,   270,     0,   271,
       0,     0,     0,     0,   272,     0,     0,     0,   273,     0,
       0,   274,   275,   276,   277,     0,     0,     0,   278,   279,
     280,     0,   281,   282,     0,   283,     0,   284,     0,     0,
       0,     0,     0,     0,   285,     0,   286,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
       0,     0,     0,     0,     0,   289,     0,   290,     0,     0,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,  2265,     0,     0,     0,     0,   472,     0,     0,
       0,    98,     0,     0,    99,   100,   101,   102,     0,   103,
     104,   105,     0,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,     0,   114,     0,     0,   115,
       0,   116,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,     0,     0,
     127,     0,   128,   129,   130,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,     0,   142,   143,     0,     0,   144,
     145,     0,   146,     0,   147,     0,     0,   148,     0,     0,
       0,   149,     0,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,     0,   159,
       0,   160,   161,   162,     0,     0,     0,     0,   163,     0,
     164,     0,   165,     0,     0,     0,   166,   167,     0,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
    1217,     0,   174,   175,     0,     0,     0,     0,     0,   176,
     177,     0,     0,     0,   178,     0,   179,     0,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,     0,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,     0,   208,     0,   209,     0,     0,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   229,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,     0,     0,     0,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,   242,   243,     0,
     244,     0,     0,     0,   245,     0,     0,   246,     0,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   252,
       0,     0,     0,   253,     0,   254,   255,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   263,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,   268,     0,     0,
       0,   269,   270,     0,   271,     0,     0,     0,     0,   272,
       0,     0,     0,   273,     0,     0,   274,   275,   276,   277,
       0,     0,     0,   278,   279,   280,     0,   281,   282,     0,
     283,     0,   284,     0,     0,     0,     0,     0,     0,   285,
       0,   286,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,     0,   290,     0,     0,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,   297,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,   103,   104,   105,     0,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
       0,   114,     0,     0,   115,     0,   116,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,     0,     0,   127,     0,   128,   129,   130,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   141,     0,
     142,   143,     0,     0,   144,   145,     0,   146,     0,   147,
       0,     0,   148,     0,     0,     0,   149,     0,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,     0,   159,     0,   160,   161,   162,     0,
       0,     0,     0,   163,     0,   164,     0,   165,     0,     0,
       0,   166,   167,     0,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,     0,   176,   177,     0,     0,     0,   178,
       0,   179,     0,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,     0,   208,     0,   209,
       0,     0,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   229,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,     0,
       0,     0,   240,     0,   241,     0,     0,     0,     0,     0,
       0,     0,   242,   243,     0,   244,     0,     0,     0,   245,
       0,     0,   246,     0,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   252,     0,     0,     0,   253,     0,
     254,   255,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   263,   264,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
       0,     0,   268,     0,     0,     0,   269,   270,     0,   271,
       0,     0,     0,     0,   272,     0,     0,     0,   273,     0,
       0,   274,   275,   276,   277,     0,     0,     0,   278,   279,
     280,     0,   281,   282,     0,   283,     0,   284,     0,     0,
       0,     0,     0,     0,   285,     0,   286,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
       0,     0,     0,     0,     0,   289,     0,   290,     0,     0,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
      92,    93,    94,    95,    96,  1570,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,   297,     0,     0,
       0,    98,     0,     0,    99,   100,   101,   102,     0,   103,
     104,   105,     0,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,     0,   114,     0,     0,   115,
       0,   116,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,     0,     0,
     127,     0,   128,   129,   130,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,     0,   142,   143,     0,     0,   144,
     145,     0,   146,     0,   147,     0,     0,   148,     0,     0,
       0,   149,     0,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,     0,   159,
       0,   160,   161,   162,     0,     0,     0,     0,   163,     0,
     164,     0,   165,     0,     0,     0,   166,   167,     0,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,     0,   176,
     177,     0,     0,     0,   178,     0,   179,     0,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,     0,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,     0,   208,     0,   209,     0,     0,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   229,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,     0,     0,     0,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,   242,   243,     0,
     244,     0,     0,     0,   245,     0,     0,   246,     0,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   252,
       0,     0,     0,   253,     0,   254,   255,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   263,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,   268,     0,     0,
       0,   269,   270,     0,   271,     0,     0,     0,     0,   272,
       0,     0,     0,   273,     0,     0,   274,   275,   276,   277,
       0,     0,     0,   278,   279,   280,     0,   281,   282,     0,
     283,     0,   284,     0,     0,     0,     0,     0,     0,   285,
       0,   286,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,     0,   290,     0,     0,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,  2011,     0,     0,     0,
       0,     0,  2012,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,   103,   104,   105,     0,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
       0,   114,     0,     0,   115,     0,   116,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,     0,     0,   127,     0,   128,   129,   130,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   141,     0,
     142,   143,     0,     0,   144,   145,     0,   146,     0,   147,
       0,     0,   148,     0,     0,     0,   149,     0,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,     0,   159,     0,   160,   161,   162,     0,
       0,     0,     0,   163,     0,   164,     0,   165,     0,     0,
       0,   166,   167,     0,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,     0,   176,   177,     0,     0,     0,   178,
       0,   179,     0,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,     0,   208,     0,   209,
       0,     0,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   229,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,     0,
       0,     0,   240,     0,   241,     0,     0,     0,     0,     0,
       0,     0,   242,   243,     0,   244,     0,     0,     0,   245,
       0,     0,   246,     0,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   252,     0,     0,     0,   253,     0,
     254,   255,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   263,   264,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
       0,     0,   268,     0,     0,     0,   269,   270,     0,   271,
       0,     0,     0,     0,   272,     0,     0,     0,   273,     0,
       0,   274,   275,   276,   277,     0,     0,     0,   278,   279,
     280,     0,   281,   282,     0,   283,     0,   284,     0,     0,
       0,     0,     0,     0,   285,     0,   286,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
       0,     0,     0,     0,     0,   289,     0,   290,     0,     0,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,  2995,     0,     0,     0,     0,   472,     0,     0,
       0,    98,     0,     0,    99,   100,   101,   102,     0,   103,
     104,   105,     0,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,     0,   114,     0,     0,   115,
       0,   116,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,     0,     0,
     127,     0,   128,   129,   130,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,     0,   142,   143,     0,     0,   144,
     145,     0,   146,     0,   147,     0,     0,   148,     0,     0,
       0,   149,     0,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,     0,   159,
       0,   160,   161,   162,     0,     0,     0,     0,   163,     0,
     164,     0,   165,     0,     0,     0,   166,   167,     0,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,     0,   176,
     177,     0,     0,     0,   178,     0,   179,     0,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,     0,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,     0,   208,     0,   209,     0,     0,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   229,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,     0,     0,     0,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,   242,   243,     0,
     244,     0,     0,     0,   245,     0,     0,   246,     0,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   252,
       0,     0,     0,   253,     0,   254,   255,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   263,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,   268,     0,     0,
       0,   269,   270,     0,   271,     0,     0,     0,     0,   272,
       0,     0,     0,   273,     0,     0,   274,   275,   276,   277,
       0,     0,     0,   278,   279,   280,     0,   281,   282,     0,
     283,     0,   284,     0,     0,     0,     0,     0,     0,   285,
       0,   286,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,     0,   290,     0,     0,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,   297,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,   103,   104,   105,     0,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
       0,   114,     0,     0,   115,     0,   116,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,     0,     0,   127,     0,   128,   129,   130,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   141,     0,
     142,   143,     0,     0,   144,   145,     0,   146,     0,   147,
       0,     0,   148,     0,     0,     0,   149,     0,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,     0,   528,     0,   160,   161,   162,     0,
       0,     0,     0,   163,     0,   164,     0,   165,     0,     0,
       0,   166,   167,     0,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,     0,   176,   177,     0,     0,     0,   178,
       0,   179,     0,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,     0,   208,     0,   209,
       0,     0,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   229,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,     0,
       0,     0,   240,     0,   241,     0,     0,     0,     0,     0,
       0,     0,   242,   243,     0,   244,     0,     0,     0,   245,
       0,     0,   246,     0,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   252,     0,     0,     0,   253,     0,
     254,   255,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   263,   264,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
       0,     0,   268,     0,     0,     0,   269,   270,     0,   271,
       0,     0,     0,     0,   272,     0,     0,     0,   273,     0,
       0,   274,   275,   276,   277,     0,     0,     0,   278,   279,
     280,     0,   281,   282,     0,   283,     0,   284,     0,     0,
       0,     0,     0,     0,   285,     0,   286,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
       0,     0,     0,     0,     0,   289,     0,   290,     0,     0,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
      92,    93,    94,    95,    96,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,   297,     0,     0,
       0,    98,     0,     0,    99,   100,   101,   102,     0,   103,
     104,   105,     0,     0,     0,   106,     0,   107,   108,     0,
     109,   110,   111,   112,   113,     0,   114,     0,     0,   115,
       0,   116,     0,     0,   117,     0,     0,   118,   119,   120,
     121,   122,   123,     0,     0,   124,   125,   126,     0,     0,
     127,     0,   128,   129,   130,     0,   131,     0,   132,   133,
       0,     0,     0,     0,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,     0,   142,   143,     0,     0,   144,
     145,     0,   146,     0,   147,     0,     0,   148,     0,     0,
       0,   149,     0,     0,   150,     0,     0,   151,   152,   153,
       0,   154,   155,   156,     0,     0,   157,   158,     0,   159,
       0,   160,   161,   162,     0,     0,     0,     0,   163,     0,
     164,     0,   165,     0,     0,     0,   166,   167,     0,     0,
     168,   169,   170,     0,   171,     0,   172,     0,     0,   173,
       0,     0,   174,   175,     0,     0,     0,     0,     0,   176,
     177,     0,     0,     0,   178,     0,   179,     0,     0,     0,
     180,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,   191,   192,   193,   194,     0,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,     0,   208,     0,   209,     0,     0,   210,     0,   211,
       0,     0,     0,     0,     0,     0,     0,   212,   213,   214,
       0,     0,   215,   216,   217,   218,   219,   220,   221,   222,
       0,     0,     0,     0,   223,     0,   224,     0,   225,   226,
       0,     0,   227,   228,   229,   230,     0,     0,   231,   232,
     233,   234,   235,     0,     0,     0,   236,     0,   237,     0,
       0,   238,   239,     0,     0,     0,     0,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,   242,   243,     0,
     244,     0,     0,     0,   245,     0,     0,   246,     0,   247,
       0,     0,     0,     0,   248,     0,   249,   250,   251,   252,
       0,     0,     0,   253,     0,   254,   255,     0,     0,   256,
     257,     0,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,   260,     0,   261,   262,   263,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,     0,     0,   268,     0,     0,
       0,   269,   270,     0,   271,     0,     0,     0,     0,   272,
       0,     0,     0,   273,     0,     0,   274,   275,   276,   277,
       0,     0,     0,   278,   279,   280,     0,   281,   282,     0,
     283,     0,   284,     0,     0,     0,     0,     0,     0,   285,
       0,   286,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,     0,   290,     0,     0,   291,     0,     0,   292,     0,
     293,     0,   294,   295,   296,    92,    93,    94,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,   472,     0,     0,     0,    98,     0,     0,    99,
     100,   101,   102,     0,   103,   104,   105,     0,     0,     0,
     106,     0,   107,   108,     0,   109,   110,   111,   112,   113,
       0,   114,     0,     0,   115,     0,   116,     0,     0,   117,
       0,     0,   118,   119,   120,   121,   122,   123,     0,     0,
     124,   125,   126,     0,     0,   127,     0,   128,   129,   130,
       0,   131,     0,   132,   133,     0,     0,     0,     0,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   141,     0,
     142,   143,     0,     0,   144,   145,     0,   146,     0,   147,
       0,     0,   148,     0,     0,     0,   149,     0,     0,   150,
       0,     0,   151,   152,   153,     0,   154,   155,   156,     0,
       0,   157,   158,     0,   159,     0,   160,   161,   162,     0,
       0,     0,     0,   163,     0,   164,     0,   165,     0,     0,
       0,   166,   167,     0,     0,   168,   169,   170,     0,   171,
       0,   172,     0,     0,   173,     0,     0,   174,   175,     0,
       0,     0,     0,     0,   176,   177,     0,     0,     0,   178,
       0,   179,     0,     0,     0,   180,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,   191,   192,   193,
     194,     0,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,     0,   208,     0,   209,
       0,     0,   210,     0,   211,     0,     0,     0,     0,     0,
       0,     0,   212,   213,   214,     0,     0,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,   223,
       0,   224,     0,   225,   226,     0,     0,   227,   228,   229,
     230,     0,     0,   231,   232,   233,   234,   235,     0,     0,
       0,   236,     0,   237,     0,     0,   238,   239,     0,     0,
       0,     0,   240,     0,   241,     0,     0,     0,     0,     0,
       0,     0,   242,   243,     0,   244,     0,     0,     0,   245,
       0,     0,   246,     0,   247,     0,     0,     0,     0,   248,
       0,   249,   250,   251,   252,     0,     0,     0,   253,     0,
     254,   255,     0,     0,   256,   257,     0,   258,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,   260,
       0,   261,   262,   263,   264,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,   266,     0,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,     0,     0,   267,
       0,     0,   268,     0,     0,     0,   269,   270,     0,   271,
       0,     0,     0,     0,   272,     0,     0,     0,   273,     0,
       0,   274,   275,   276,   277,     0,     0,     0,   278,   279,
     280,     0,   281,   282,     0,   283,     0,   284,     0,     0,
       0,   724,     0,     0,   285,     0,   286,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
     724,     0,     0,     0,     0,   289,     0,   290,     0,     0,
     291,     0,     0,   292,     0,   293,     0,   294,   295,   296,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2012,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   725,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   726,     0,     0,     0,     0,     0,     0,     0,
     725,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   726,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,     0,     0,     0,     0,     0,
       0,     0,     0,   727,     0,     0,     0,     0,     0,     0,
       0,     0,   728,   729,     0,     0,     0,     0,     0,     0,
       0,     0,   727,     0,     0,     0,     0,     0,     0,     0,
       0,   728,   729,   730,     0,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,   730,     0,     0,     0,     0,     0,   724,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,     0,     0,     0,   731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,     0,     0,   731,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   725,     0,
       0,   732,     0,     0,     0,     0,     0,     0,     0,   726,
       0,   724,     0,     0,     0,     0,     0,     0,     0,     0,
     732,     0,     0,     0,     0,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     727,   725,     0,     0,     0,     0,     0,     0,     0,   728,
     729,     0,   726,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     730,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   725,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,   726,   727,     0,     0,     0,     0,     0,     0,
       0,     0,   728,   729,     0,     0,   733,   734,   735,   736,
     737,   738,   739,     0,     0,   740,     0,  1375,  1376,     0,
       0,     0,     0,   730,     0,   733,   734,   735,   736,   737,
     738,   739,   731,   727,   740,     0,  1377,  1378,     0,     0,
       0,     0,   728,   729,     0,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,     0,   730,     0,     0,     0,     0,     0,     0,
       0,   725,     0,     0,     0,     0,     0,     0,   732,     0,
       0,     0,   726,     0,     0,   731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,     0,   727,     0,   731,     0,     0,     0,     0,
       0,   732,   728,   729,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   730,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,     0,     0,     0,
       0,   732,     0,     0,   724,     0,     0,  1425,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   733,   734,   735,   736,   737,   738,   739,
       0,   725,   740,     0,  1379,  1380,     0,     0,     0,     0,
       0,     0,   726,     0,     0,   731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     724,     0,     0,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   733,   734,   735,   736,
     737,   738,   739,   727,   725,   740,     0,  1387,  1388,     0,
       0,   732,   728,   729,     0,   726,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,     0,
       0,     0,     0,   730,     0,     0,   733,   734,   735,   736,
     737,   738,   739,     0,     0,   740,     0,  1390,  1391,     0,
       0,     0,     0,     0,     0,     0,   727,     0,     0,   724,
     725,     0,     0,     0,     0,   728,   729,     0,     0,     0,
       0,   726,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   730,     0,     0,     0,
       0,     0,   724,     0,     0,   731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   727,     0,     0,     0,     0,     0,     0,     0,
       0,   728,   729,     0,     0,     0,   733,   734,   735,   736,
     737,   738,   739,     0,     0,   740,     0,  1421,  1422,   725,
       0,   732,   730,     0,     0,     0,     0,     0,   731,     0,
     726,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   725,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   726,     0,     0,     0,     0,     0,     0,
       0,   727,     0,     0,   732,     0,     0,     0,     0,     0,
     728,   729,     0,     0,   731,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,   730,     0,     0,   727,     0,     0,     0,     0,     0,
       0,     0,     0,   728,   729,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     732,     0,     0,     0,   730,     0,   733,   734,   735,   736,
     737,   738,   739,     0,     0,   740,     0,     0,  1426,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,     0,   731,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   733,
     734,   735,   736,   737,   738,   739,   731,     0,   740,     0,
    1444,  1445,     0,     0,     0,     0,     0,     0,     0,   732,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,     0,     0,     0,     0,
     724,   725,   732,     0,     0,   733,   734,   735,   736,   737,
     738,   739,   726,     0,   740,     0,  1447,  1448,     0,     0,
       0,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,     0,     0,     0,
       0,     0,     0,   727,     0,   724,     0,     0,     0,     0,
       0,     0,   728,   729,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     725,     0,     0,   730,   733,   734,   735,   736,   737,   738,
     739,   726,     0,   740,     0,  2118,  2119,   724,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     724,     0,     0,     0,     0,     0,     0,   733,   734,   735,
     736,   737,   738,   739,     0,     0,   740,     0,  2121,  2122,
       0,     0,   727,     0,     0,   725,     0,     0,     0,     0,
       0,   728,   729,     0,     0,   731,   726,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   730,     0,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   725,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   727,   726,     0,
     725,   732,     0,     0,     0,     0,   728,   729,     0,     0,
       0,   726,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   730,     0,     0,
       0,     0,     0,     0,   731,     0,     0,     0,     0,   727,
       0,     0,     0,     0,     0,     0,     0,     0,   728,   729,
     724,     0,   727,     0,     0,     0,     0,     0,     0,     0,
       0,   728,   729,     0,     0,     0,     0,     0,     0,   730,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     732,     0,   730,     0,     0,     0,     0,     0,     0,   731,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   733,   734,   735,   736,
     737,   738,   739,     0,     0,   740,     0,  2147,  2148,     0,
     725,   731,     0,     0,     0,   732,     0,     0,     0,     0,
       0,   726,     0,     0,   731,     0,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,     0,   732,     0,     0,
       0,     0,   727,     0,     0,     0,     0,     0,     0,     0,
     732,   728,   729,     0,     0,   733,   734,   735,   736,   737,
     738,   739,     0,     0,   740,     0,  2581,  2582,     0,     0,
       0,     0,   730,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   724,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     733,   734,   735,   736,   737,   738,   739,     0,     0,   740,
       0,  2834,  2835,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   731,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   733,   734,   735,   736,   737,   738,   739,     0,
       0,   740,   725,     0,  1282,   733,   734,   735,   736,   737,
     738,   739,     0,   726,   740,   725,     0,  1288,     0,     0,
     732,     0,     0,     0,     0,     0,   726,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,   727,     0,     0,     0,     0,     0,
       0,     0,     0,   728,   729,     0,     0,   727,     0,     0,
       0,     0,     0,     0,     0,     0,   728,   729,     0,     0,
       0,     0,     0,     0,   730,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   730,     0,     0,
       0,     0,     0,   724,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   724,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   733,   734,   735,   736,   737,
     738,   739,     0,     0,   740,     0,   731,  1294,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   731,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   725,     0,     0,     0,     0,     0,     0,
       0,     0,   732,     0,   726,     0,   725,     0,     0,     0,
       0,     0,     0,     0,     0,   732,     0,   726,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,     0,   727,     0,     0,     0,     0,
       0,     0,     0,     0,   728,   729,     0,     0,   727,     0,
       0,     0,     0,     0,     0,     0,     0,   728,   729,     0,
       0,     0,     0,     0,     0,   730,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   730,     0,
       0,     0,     0,     0,   724,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   724,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   733,   734,   735,
     736,   737,   738,   739,     0,     0,   740,     0,     0,  1295,
     733,   734,   735,   736,   737,   738,   739,   731,     0,   740,
       0,     0,  1303,     0,     0,     0,     0,     0,     0,     0,
     731,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   725,     0,     0,     0,     0,     0,
       0,     0,     0,   732,     0,   726,     0,   725,     0,     0,
       0,     0,     0,     0,     0,     0,   732,     0,   726,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,     0,   727,     0,     0,     0,
       0,     0,     0,     0,     0,   728,   729,     0,     0,   727,
       0,     0,     0,     0,     0,     0,     0,     0,   728,   729,
       0,     0,     0,     0,     0,     0,   730,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   730,
       0,     0,     0,     0,     0,   724,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   724,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   733,   734,
     735,   736,   737,   738,   739,     0,     0,   740,     0,     0,
    1304,   733,   734,   735,   736,   737,   738,   739,   731,     0,
     740,     0,     0,  1310,     0,     0,     0,     0,     0,     0,
       0,   731,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   725,     0,     0,     0,     0,
       0,     0,     0,     0,   732,     0,   726,     0,   725,     0,
       0,     0,     0,     0,     0,     0,     0,   732,     0,   726,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,     0,   727,     0,     0,
       0,     0,     0,     0,     0,     0,   728,   729,     0,     0,
     727,     0,     0,     0,     0,     0,     0,     0,     0,   728,
     729,     0,     0,     0,     0,     0,     0,   730,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     730,     0,     0,     0,     0,     0,   724,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   724,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   733,
     734,   735,   736,   737,   738,   739,     0,     0,   740,     0,
       0,  1312,   733,   734,   735,   736,   737,   738,   739,   731,
       0,   740,     0,     0,  1313,     0,     0,     0,     0,     0,
       0,     0,   731,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   725,     0,     0,     0,
       0,     0,     0,     0,     0,   732,     0,   726,     0,   725,
       0,     0,     0,     0,     0,     0,     0,     0,   732,     0,
     726,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,     0,   727,     0,
       0,     0,     0,     0,     0,     0,     0,   728,   729,     0,
       0,   727,     0,     0,     0,     0,     0,     0,     0,     0,
     728,   729,     0,     0,     0,     0,     0,     0,   730,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,   724,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     724,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     733,   734,   735,   736,   737,   738,   739,     0,     0,   740,
       0,     0,  1332,   733,   734,   735,   736,   737,   738,   739,
     731,     0,   740,     0,     0,  1334,     0,     0,     0,     0,
       0,     0,     0,   731,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   725,     0,     0,
       0,     0,     0,     0,     0,     0,   732,     0,   726,     0,
     725,     0,     0,     0,     0,     0,     0,     0,     0,   732,
       0,   726,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,   727,
       0,     0,     0,     0,     0,     0,     0,     0,   728,   729,
       0,     0,   727,     0,     0,     0,     0,     0,     0,     0,
       0,   728,   729,     0,     0,     0,     0,     0,     0,   730,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   730,     0,     0,     0,     0,     0,   724,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,     0,     0,  1335,   733,   734,   735,   736,   737,   738,
     739,   731,     0,   740,     0,     0,  1337,     0,     0,     0,
       0,     0,     0,     0,   731,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   725,     0,
       0,     0,     0,     0,     0,     0,     0,   732,     0,   726,
       0,   725,     0,     0,     0,     0,     0,     0,     0,     0,
     732,     0,   726,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,     0,
     727,     0,     0,     0,     0,     0,     0,     0,     0,   728,
     729,     0,     0,   727,     0,     0,     0,     0,     0,     0,
       0,     0,   728,   729,     0,     0,     0,     0,     0,     0,
     730,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   730,     0,     0,     0,     0,     0,   724,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   733,   734,   735,   736,   737,   738,   739,     0,
       0,   740,     0,     0,  1342,   733,   734,   735,   736,   737,
     738,   739,   731,     0,   740,     0,     0,  1343,     0,     0,
       0,     0,     0,     0,     0,   731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   725,
       0,     0,     0,     0,     0,     0,     0,     0,   732,     0,
     726,     0,   725,     0,     0,     0,     0,     0,     0,     0,
       0,   732,     0,   726,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
       0,   727,     0,     0,     0,     0,     0,     0,     0,     0,
     728,   729,     0,     0,   727,     0,     0,     0,     0,     0,
       0,     0,     0,   728,   729,     0,     0,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   730,     0,     0,     0,     0,     0,
     724,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   724,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   733,   734,   735,   736,   737,   738,   739,
       0,     0,   740,     0,     0,  1346,   733,   734,   735,   736,
     737,   738,   739,   731,     0,   740,     0,     0,  1348,     0,
       0,     0,     0,     0,     0,     0,   731,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     725,     0,     0,     0,     0,     0,     0,     0,     0,   732,
       0,   726,     0,   725,     0,     0,     0,     0,     0,     0,
       0,     0,   732,     0,   726,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,   727,     0,     0,     0,     0,     0,     0,     0,
       0,   728,   729,     0,     0,   727,     0,     0,     0,     0,
       0,     0,     0,     0,   728,   729,     0,     0,     0,     0,
       0,     0,   730,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   730,     0,     0,     0,     0,
       0,   724,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   724,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   733,   734,   735,   736,   737,   738,
     739,     0,     0,   740,     0,     0,  1349,   733,   734,   735,
     736,   737,   738,   739,   731,     0,   740,     0,     0,  1363,
       0,     0,     0,     0,     0,     0,     0,   731,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   725,     0,     0,     0,     0,     0,     0,     0,     0,
     732,     0,   726,     0,   725,     0,     0,     0,     0,     0,
       0,     0,     0,   732,     0,   726,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,   727,     0,     0,     0,     0,     0,     0,
       0,     0,   728,   729,     0,     0,   727,     0,     0,     0,
       0,     0,     0,     0,     0,   728,   729,     0,     0,     0,
       0,     0,     0,   730,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   730,     0,     0,     0,
       0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   724,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   733,   734,   735,   736,   737,
     738,   739,     0,     0,   740,     0,     0,  1365,   733,   734,
     735,   736,   737,   738,   739,   731,     0,   740,     0,     0,
    1369,     0,     0,     0,     0,     0,     0,     0,   731,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   725,     0,     0,     0,     0,     0,     0,     0,
       0,   732,     0,   726,     0,   725,     0,     0,     0,     0,
       0,     0,     0,     0,   732,     0,   726,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,   727,     0,     0,     0,     0,     0,
       0,     0,     0,   728,   729,     0,     0,   727,     0,     0,
       0,     0,     0,     0,     0,     0,   728,   729,     0,     0,
       0,     0,     0,     0,   730,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   730,     0,     0,
       0,     0,     0,   724,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   724,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   733,   734,   735,   736,
     737,   738,   739,     0,     0,   740,     0,     0,  1370,   733,
     734,   735,   736,   737,   738,   739,   731,     0,   740,     0,
       0,  1371,     0,     0,     0,     0,     0,     0,     0,   731,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   725,     0,     0,     0,     0,     0,     0,
       0,     0,   732,     0,   726,     0,   725,     0,     0,     0,
       0,     0,     0,     0,     0,   732,     0,   726,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,     0,   727,     0,     0,     0,     0,
       0,     0,     0,     0,   728,   729,     0,     0,   727,     0,
       0,     0,     0,     0,     0,     0,     0,   728,   729,     0,
       0,     0,     0,     0,     0,   730,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   730,     0,
       0,     0,     0,     0,   724,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   724,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   733,   734,   735,
     736,   737,   738,   739,     0,     0,   740,     0,     0,  1389,
     733,   734,   735,   736,   737,   738,   739,   731,     0,   740,
       0,     0,  1419,     0,     0,     0,     0,     0,     0,     0,
     731,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   725,     0,     0,     0,     0,     0,
       0,     0,     0,   732,     0,   726,     0,   725,     0,     0,
       0,     0,     0,     0,     0,     0,   732,     0,   726,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,     0,   727,     0,     0,     0,
       0,     0,     0,     0,     0,   728,   729,     0,     0,   727,
       0,     0,     0,     0,     0,     0,     0,     0,   728,   729,
       0,     0,     0,     0,     0,     0,   730,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   730,
       0,     0,     0,     0,     0,   724,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   724,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   733,   734,
     735,   736,   737,   738,   739,     0,     0,   740,     0,     0,
    1420,   733,   734,   735,   736,   737,   738,   739,   731,     0,
     740,     0,     0,  1424,     0,     0,     0,     0,     0,     0,
       0,   731,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   725,     0,     0,     0,     0,
       0,     0,     0,     0,   732,     0,   726,     0,   725,     0,
       0,     0,     0,     0,     0,     0,     0,   732,     0,   726,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,     0,   727,     0,     0,
       0,     0,     0,     0,     0,     0,   728,   729,     0,     0,
     727,     0,     0,     0,     0,     0,     0,     0,     0,   728,
     729,     0,     0,     0,     0,     0,     0,   730,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     730,     0,     0,     0,     0,     0,   724,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   724,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   733,
     734,   735,   736,   737,   738,   739,     0,     0,   740,     0,
       0,  1427,   733,   734,   735,   736,   737,   738,   739,   731,
       0,   740,     0,     0,  2061,     0,     0,     0,     0,     0,
       0,     0,   731,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   725,     0,     0,     0,
       0,     0,     0,     0,     0,   732,     0,   726,     0,   725,
       0,     0,     0,     0,     0,     0,     0,     0,   732,     0,
     726,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,     0,   727,     0,
       0,     0,     0,     0,     0,     0,     0,   728,   729,     0,
       0,   727,     0,     0,     0,     0,     0,     0,     0,     0,
     728,   729,     0,     0,     0,     0,     0,     0,   730,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,   724,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     724,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     733,   734,   735,   736,   737,   738,   739,     0,     0,   740,
       0,     0,  2076,   733,   734,   735,   736,   737,   738,   739,
     731,     0,   740,     0,     0,  2086,     0,     0,     0,     0,
       0,     0,     0,   731,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   725,     0,     0,
       0,     0,     0,     0,     0,     0,   732,     0,   726,     0,
     725,     0,     0,     0,     0,     0,     0,     0,     0,   732,
       0,   726,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,   727,
       0,     0,     0,     0,     0,     0,     0,     0,   728,   729,
       0,     0,   727,     0,     0,     0,     0,     0,     0,     0,
       0,   728,   729,     0,     0,     0,     0,     0,     0,   730,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   730,     0,     0,     0,     0,     0,   724,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,     0,     0,  2103,   733,   734,   735,   736,   737,   738,
     739,   731,     0,   740,     0,     0,  2115,     0,     0,     0,
       0,     0,     0,     0,   731,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1434,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   725,     0,
       0,     0,     0,     0,     0,     0,     0,   732,     0,   726,
       0,   725,     0,     0,     0,     0,     0,     0,     0,     0,
     732,     0,   726,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,     0,
     727,     0,     0,     0,     0,     0,     0,     0,     0,   728,
     729,     0,     0,   727,     0,     0,     0,     0,     0,     0,
       0,     0,   728,   729,     0,     0,     0,     0,     0,     0,
     730,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   730,     0,     0,     0,     0,     0,   724,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   733,   734,   735,   736,   737,   738,   739,     0,
       0,   740,     0,     0,  2140,   733,   734,   735,   736,   737,
     738,   739,   731,     0,   740,     0,     0,  2149,     0,     0,
       0,     0,     0,     0,     0,   731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   725,
       0,     0,     0,     0,     0,     0,     0,     0,   732,     0,
     726,     0,   725,     0,     0,     0,     0,     0,     0,     0,
       0,   732,     0,   726,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
       0,   727,     0,     0,     0,     0,     0,     0,     0,     0,
     728,   729,     0,     0,   727,     0,     0,     0,     0,     0,
       0,     0,     0,   728,   729,     0,     0,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   730,     0,     0,     0,     0,     0,
     724,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   724,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   733,   734,   735,   736,   737,   738,   739,
       0,     0,   740,     0,     0,  2567,   733,   734,   735,   736,
     737,   738,   739,   731,     0,   740,     0,  1435,     0,     0,
       0,     0,     0,     0,     0,     0,   731,     0,     0,     0,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,     0,     0,     0,     0,     0,     0,
     725,     0,     0,     0,     0,     0,     0,     0,     0,   732,
       0,   726,     0,   725,     0,     0,     0,     0,     0,     0,
       0,     0,   732,     0,   726,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2145,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,   727,     0,     0,     0,   724,     0,     0,     0,
       0,   728,   729,     0,     0,   727,     0,     0,     0,     0,
       0,     0,     0,     0,   728,   729,     0,     0,     0,     0,
       0,     0,   730,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   730,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   724,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   733,   734,   735,   736,   737,   738,
     739,     0,     0,   740,     0,  2146,   725,   733,   734,   735,
     736,   737,   738,   739,   731,     0,   740,   726,  1297,     0,
       0,     0,     0,     0,     0,     0,     0,   731,     0,     0,
       0,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,     0,   727,     0,
     732,     0,     0,     0,   725,     0,     0,   728,   729,     0,
       0,     0,     0,   732,     0,   726,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   730,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,     0,   724,     0,     0,
       0,     0,     0,     0,     0,     0,   727,     0,     0,     0,
     724,     0,     0,     0,     0,   728,   729,     0,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,     0,     0,     0,     0,   730,     0,     0,     0,
     731,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   724,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   733,   734,   735,   736,   737,
     738,   739,     0,     0,   740,     0,  1298,   725,   733,   734,
     735,   736,   737,   738,   739,     0,   732,   740,   726,  1311,
     725,     0,     0,     0,   724,     0,     0,     0,   731,     0,
       0,   726,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,   727,
       0,     0,     0,     0,     0,   725,     0,     0,   728,   729,
       0,     0,   727,     0,   732,     0,   726,     0,     0,     0,
       0,   728,   729,     0,     0,     0,     0,     0,     0,   730,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   730,     0,   725,     0,     0,     0,   724,     0,
       0,     0,     0,     0,     0,   726,     0,   727,     0,     0,
       0,   724,     0,     0,     0,     0,   728,   729,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,     0,  1315,     0,     0,     0,     0,   730,     0,     0,
       0,   731,     0,     0,     0,     0,   727,     0,     0,     0,
       0,     0,     0,     0,   731,   728,   729,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   730,     0,   725,   733,
     734,   735,   736,   737,   738,   739,     0,   732,   740,   726,
    1320,   725,     0,     0,     0,     0,     0,     0,     0,   731,
     732,     0,   726,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,     0,
     727,     0,     0,     0,     0,     0,     0,     0,   731,   728,
     729,     0,     0,   727,     0,   732,     0,     0,     0,     0,
       0,     0,   728,   729,     0,     0,     0,     0,     0,     0,
     730,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   730,     0,     0,     0,     0,     0,   724,
       0,     0,     0,     0,   732,     0,     0,     0,     0,     0,
       0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   733,   734,   735,   736,   737,   738,   739,     0,
       0,   740,     0,  1323,     0,   733,   734,   735,   736,   737,
     738,   739,   731,     0,   740,     0,  1333,     0,     0,     0,
       0,     0,     0,     0,     0,   731,     0,     0,     0,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,     0,     0,     0,   725,
     733,   734,   735,   736,   737,   738,   739,     0,   732,   740,
     726,  1336,   725,     0,     0,     0,     0,     0,     0,     0,
       0,   732,     0,   726,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,     0,     0,   733,
     734,   735,   736,   737,   738,   739,     0,     0,   740,     0,
    1362,   727,     0,     0,     0,   724,     0,     0,     0,     0,
     728,   729,     0,     0,   727,     0,     0,     0,     0,     0,
       0,     0,     0,   728,   729,     0,     0,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   730,     0,     0,     0,     0,     0,
     724,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   733,   734,   735,   736,   737,   738,   739,
       0,     0,   740,     0,  1364,   725,   733,   734,   735,   736,
     737,   738,   739,   731,     0,   740,   726,  1372,     0,     0,
       0,     0,     0,     0,     0,     0,   731,     0,     0,     0,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,     0,     0,     0,     0,     0,     0,
     725,     0,     0,     0,     0,     0,     0,   727,     0,   732,
       0,   726,     0,     0,     0,     0,   728,   729,     0,     0,
       0,     0,   732,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   730,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,   727,     0,     0,     0,   724,     0,     0,     0,
       0,   728,   729,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   730,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,     0,     0,     0,   731,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   724,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   733,   734,   735,   736,   737,   738,
     739,     0,     0,   740,     0,  1373,   725,   733,   734,   735,
     736,   737,   738,   739,   731,   732,   740,   726,  1374,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   724,
       0,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   727,     0,
     732,     0,     0,     0,   725,     0,     0,   728,   729,     0,
       0,     0,     0,     0,     0,   726,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   730,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,     0,   724,     0,   725,
       0,     0,     0,     0,     0,     0,   727,     0,     0,     0,
     726,     0,     0,     0,     0,   728,   729,     0,     0,     0,
     733,   734,   735,   736,   737,   738,   739,     0,     0,   740,
       0,  1384,     0,     0,     0,     0,   730,     0,     0,     0,
     731,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   727,     0,     0,     0,   724,     0,     0,     0,     0,
     728,   729,     0,     0,     0,   733,   734,   735,   736,   737,
     738,   739,     0,     0,   740,     0,  1385,   725,     0,     0,
       0,   730,     0,     0,     0,     0,   732,     0,   726,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   731,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,     0,     0,     0,     0,     0,   727,
       0,     0,     0,     0,     0,   725,     0,     0,   728,   729,
       0,     0,     0,   731,   732,     0,   726,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   730,
       0,     0,     0,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   724,   727,     0,   732,
       0,     0,     0,     0,     0,     0,   728,   729,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,     0,  1386,     0,     0,     0,     0,   730,     0,     0,
       0,   731,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   724,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,     0,     0,     0,     0,     0,   733,
     734,   735,   736,   737,   738,   739,   725,   732,   740,     0,
    1418,     0,     0,     0,     0,     0,     0,   726,     0,   731,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   733,   734,   735,   736,   737,   738,
     739,     0,     0,   740,     0,  1423,   724,     0,   727,   725,
       0,     0,     0,     0,     0,   732,     0,   728,   729,     0,
     726,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   730,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   727,     0,     0,     0,     0,     0,     0,     0,     0,
     728,   729,   733,   734,   735,   736,   737,   738,   739,     0,
       0,   740,     0,  1443,     0,     0,   725,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,   726,     0,     0,
     731,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   724,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     733,   734,   735,   736,   737,   738,   739,     0,   727,   740,
       0,  1446,     0,     0,     0,     0,   732,   728,   729,     0,
       0,     0,     0,   731,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   730,     0,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   725,     0,     0,     0,   732,
       0,     0,     0,     0,     0,     0,   726,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     731,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   724,   727,     0,     0,
       0,     0,     0,     0,     0,     0,   728,   729,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,     0,  2059,     0,     0,     0,   732,   730,     0,     0,
       0,     0,     0,   724,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,   733,   734,   735,   736,   737,   738,
     739,     0,     0,   740,     0,  2063,   725,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   726,     0,   731,
       0,     0,     0,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,     0,     0,     0,     0,
       0,     0,     0,   725,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   726,     0,   724,     0,   727,     0,
       0,     0,     0,     0,     0,   732,     0,   728,   729,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,     0,  2064,     0,     0,     0,     0,     0,   730,     0,
       0,     0,     0,     0,     0,   727,     0,     0,     0,   724,
       0,     0,     0,     0,   728,   729,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   730,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   725,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   726,     0,     0,
     731,     0,     0,     0,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   725,
     733,   734,   735,   736,   737,   738,   739,   731,   727,   740,
     726,  2080,     0,     0,     0,     0,   732,   728,   729,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,     0,     0,   730,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     724,   727,     0,   732,     0,     0,     0,     0,     0,     0,
     728,   729,     0,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,     0,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   724,     0,     0,     0,     0,
     731,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
     725,   733,   734,   735,   736,   737,   738,   739,     0,   724,
     740,   726,  2085,   731,     0,     0,   732,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   733,   734,
     735,   736,   737,   738,   739,   725,     0,   740,     0,  2088,
       0,     0,   727,     0,     0,     0,   726,     0,     0,   732,
       0,   728,   729,   724,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   730,     0,     0,     0,     0,     0,     0,   725,
       0,     0,     0,     0,     0,     0,     0,   727,     0,     0,
     726,     0,     0,     0,     0,     0,   728,   729,     0,     0,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,     0,     0,     0,   730,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,   727,  2089,   725,   731,     0,     0,     0,     0,     0,
     728,   729,     0,     0,   726,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   730,     0,     0,   733,   734,   735,   736,   737,   738,
     739,     0,     0,   740,     0,  2098,   724,     0,     0,   731,
     732,     0,     0,     0,     0,   727,     0,     0,     0,     0,
       0,     0,     0,     0,   728,   729,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,     0,
       0,     0,     0,     0,     0,   730,     0,     0,     0,     0,
       0,     0,     0,   731,     0,   732,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,     0,     0,   725,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   726,     0,   732,
       0,     0,   724,     0,     0,     0,     0,   731,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   733,   734,   735,   736,   737,
     738,   739,     0,     0,   740,     0,  2099,     0,   727,     0,
       0,     0,     0,     0,     0,     0,   724,   728,   729,     0,
       0,     0,     0,   732,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   730,     0,
     733,   734,   735,   736,   737,   738,   739,     0,     0,   740,
       0,  2102,   725,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   726,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   733,   734,   735,   736,   737,   738,
     739,     0,     0,   740,     0,  2104,   725,     0,     0,     0,
     731,     0,     0,     0,   727,     0,     0,   726,     0,     0,
       0,     0,     0,   728,   729,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,     0,     0,   730,     0,     0,     0,   733,   734,
     735,   736,   737,   738,   739,     0,   732,   740,   727,  2107,
       0,     0,     0,     0,     0,     0,     0,   728,   729,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,     0,     0,   730,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,     0,     0,     0,     0,   731,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,   724,     0,     0,     0,     0,
     731,     0,   732,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,   725,  2108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   726,     0,   724,     0,   732,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   724,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   725,     0,     0,     0,     0,
       0,     0,     0,   727,     0,     0,   726,     0,     0,     0,
       0,     0,   728,   729,     0,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,     0,   730,     0,     0,     0,   733,   734,   735,
     736,   737,   738,   739,   725,     0,   740,   727,  2109,     0,
       0,     0,     0,     0,     0,   726,   728,   729,   725,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   726,
       0,     0,     0,     0,     0,     0,     0,   730,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,   724,  2110,     0,     0,   731,   727,     0,     0,     0,
       0,     0,     0,     0,     0,   728,   729,     0,     0,     0,
     727,     0,     0,     0,     0,     0,     0,     0,     0,   728,
     729,     0,     0,     0,     0,     0,   730,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   731,
     730,   732,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   725,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   726,     0,     0,   732,     0,     0,   731,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   731,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,     0,     0,     0,     0,
       0,     0,     0,   727,     0,     0,     0,     0,     0,     0,
       0,     0,   728,   729,   732,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   732,     0,
       0,     0,     0,   730,     0,     0,   733,   734,   735,   736,
     737,   738,   739,     0,     0,   740,     0,  2114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   724,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,     0,     0,     0,     0,     0,     0,
     733,   734,   735,   736,   737,   738,   739,     0,     0,   740,
       0,  2116,     0,     0,     0,   731,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,     0,
       0,     0,     0,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,     0,     0,     0,   733,
     734,   735,   736,   737,   738,   739,   724,     0,   740,   725,
    2117,   732,     0,   733,   734,   735,   736,   737,   738,   739,
     726,     0,   740,     0,  2123,     0,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,     0,
       0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   724,
       0,   727,     0,     0,     0,     0,     0,     0,     0,     0,
     728,   729,     0,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   725,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,   726,     0,     0,
       0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   725,     0,     0,     0,   733,   734,   735,   736,
     737,   738,   739,   726,     0,   740,     0,  2124,   727,   725,
       0,     0,     0,     0,     0,     0,     0,   728,   729,   724,
     726,     0,     0,   731,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   730,     0,
       0,     0,     0,     0,   727,     0,     0,     0,     0,     0,
       0,     0,   725,   728,   729,     0,     0,     0,     0,     0,
       0,   727,     0,   726,     0,     0,     0,     0,     0,   732,
     728,   729,     0,     0,   730,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,     0,     0,   725,
     731,     0,     0,     0,   727,     0,     0,     0,     0,     0,
     726,     0,     0,   728,   729,     0,     0,     0,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,     0,     0,   730,     0,   731,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   732,     0,     0,     0,
       0,   727,     0,   731,     0,     0,     0,     0,     0,     0,
     728,   729,     0,     0,     0,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,   730,   732,     0,   733,   734,   735,   736,   737,   738,
     739,     0,     0,   740,   724,  2125,   731,     0,     0,   732,
       0,     0,     0,     0,     0,     0,     0,     0,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,   732,   731,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,     0,  2126,     0,   725,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   724,   726,     0,     0,     0,   732,
       0,     0,     0,     0,     0,     0,     0,   733,   734,   735,
     736,   737,   738,   739,     0,     0,   740,     0,  2127,     0,
       0,     0,     0,     0,   733,   734,   735,   736,   737,   738,
     739,   725,     0,   740,     0,  2128,   727,     0,     0,     0,
       0,     0,   726,     0,     0,   728,   729,     0,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,     0,     0,     0,     0,   730,   733,   734,   735,
     736,   737,   738,   739,   725,     0,   740,     0,  2131,     0,
       0,     0,     0,   727,     0,   726,     0,     0,     0,     0,
       0,     0,   728,   729,     0,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,     0,   730,   733,   734,   735,   736,   737,   738,
     739,     0,     0,   740,   724,  2141,   727,     0,   731,     0,
       0,     0,     0,     0,     0,   728,   729,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   730,     0,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,   724,     0,     0,   732,   731,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   725,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,     0,   731,     0,
       0,   732,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   724,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,   725,     0,     0,     0,     0,   727,     0,     0,     0,
       0,     0,   726,     0,   732,   728,   729,     0,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,     0,     0,     0,     0,   730,     0,     0,   733,
     734,   735,   736,   737,   738,   739,     0,     0,   740,     0,
    2142,     0,     0,   727,     0,     0,     0,     0,     0,     0,
       0,   724,   728,   729,   725,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,     0,     0,     0,
       0,     0,     0,   730,     0,     0,   733,   734,   735,   736,
     737,   738,   739,     0,   724,   740,     0,  2144,   731,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   727,     0,     0,     0,
       0,     0,     0,     0,     0,   728,   729,     0,     0,   733,
     734,   735,   736,   737,   738,   739,     0,     0,   740,     0,
    2150,   725,     0,     0,   732,   731,   730,     0,     0,     0,
       0,     0,   726,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   725,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,     0,     0,     0,
       0,   732,     0,   727,     0,     0,     0,     0,     0,     0,
       0,     0,   728,   729,     0,     0,     0,     0,   731,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   730,     0,     0,   727,     0,     0,     0,
       0,     0,     0,     0,     0,   728,   729,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   732,     0,   730,     0,     0,   733,
     734,   735,   736,   737,   738,   739,     0,     0,   740,     0,
    2152,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   731,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,     0,
       0,     0,     0,     0,     0,     0,   733,   734,   735,   736,
     737,   738,   739,     0,     0,   740,     0,  2154,   731,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   732,     0,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,     0,
       0,     0,   724,     0,   732,     0,     0,     0,     0,   733,
     734,   735,   736,   737,   738,   739,     0,     0,   740,     0,
    2156,     0,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   724,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   725,     0,     0,     0,   733,   734,   735,   736,
     737,   738,   739,   726,     0,   740,     0,  2158,   724,     0,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,     0,     0,     0,     0,     0,   733,
     734,   735,   736,   737,   738,   739,     0,     0,   740,   725,
    2159,     0,     0,     0,   727,     0,     0,     0,     0,     0,
     726,     0,   725,   728,   729,     0,     0,     0,     0,     0,
       0,     0,     0,   726,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   730,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   724,     0,   725,     0,
       0,   727,     0,     0,     0,     0,     0,     0,     0,   726,
     728,   729,     0,     0,   727,     0,     0,     0,     0,     0,
       0,     0,     0,   728,   729,     0,     0,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   730,     0,   731,     0,     0,     0,
     727,     0,     0,     0,     0,     0,     0,     0,     0,   728,
     729,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   725,     0,     0,     0,
     730,     0,     0,     0,     0,     0,     0,   726,     0,     0,
       0,     0,   732,   731,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   731,     0,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,     0,     0,     0,     0,     0,     0,   727,     0,
       0,     0,     0,     0,     0,     0,     0,   728,   729,   732,
       0,     0,   731,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   732,     0,     0,     0,     0,     0,   730,     0,
       0,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   724,     0,     0,     0,   732,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   733,   734,   735,
     736,   737,   738,   739,     0,     0,   740,     0,  2160,     0,
     731,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,     0,     0,     0,   724,     0,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,   733,   734,   735,   736,   737,   738,
     739,     0,     0,   740,   725,  2403,   732,   733,   734,   735,
     736,   737,   738,   739,     0,   726,   740,     0,  2404,     0,
       0,     0,     0,     0,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   724,     0,     0,
       0,     0,     0,   733,   734,   735,   736,   737,   738,   739,
       0,     0,   740,     0,  2405,   724,   727,   725,     0,     0,
       0,     0,     0,     0,     0,   728,   729,     0,   726,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   730,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     724,     0,     0,     0,     0,     0,     0,     0,     0,   727,
       0,     0,     0,     0,     0,     0,     0,   725,   728,   729,
       0,   733,   734,   735,   736,   737,   738,   739,   726,     0,
     740,     0,  2576,     0,     0,   725,     0,     0,     0,   730,
       0,     0,     0,     0,     0,     0,   726,     0,   731,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   727,
       0,     0,     0,     0,     0,     0,     0,     0,   728,   729,
     725,     0,     0,     0,     0,     0,     0,   727,     0,     0,
       0,   726,     0,     0,   732,     0,   728,   729,     0,   730,
       0,   731,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   730,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   727,     0,     0,     0,     0,     0,     0,     0,
       0,   728,   729,     0,     0,     0,     0,   732,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   731,   730,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,     0,     0,     0,   731,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   732,     0,   733,
     734,   735,   736,   737,   738,   739,     0,     0,   740,     0,
    2579,     0,     0,     0,   731,   732,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
       0,   711,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,     0,     0,     0,     0,     0,     0,
       0,     0,   733,   734,   735,   736,   737,   738,   739,     0,
     732,   740,     0,  2584,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   724,     0,   725,
       0,     0,   733,   734,   735,   736,   737,   738,   739,     0,
     726,   740,     0,  2585,     0,     0,     0,     0,     0,     0,
     733,   734,   735,   736,   737,   738,   739,     0,     0,   740,
     724,  2586,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   727,     0,     0,     0,     0,     0,     0,     0,     0,
     728,   729,   725,     0,     0,   733,   734,   735,   736,   737,
     738,   739,     0,   726,   740,     0,  2588,   725,     0,     0,
       0,   730,     0,     0,     0,     0,     0,     0,   726,     0,
       0,     0,     0,     0,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,     0,     0,     0,
     725,     0,     0,     0,   727,     0,     0,     0,     0,     0,
       0,   726,     0,   728,   729,     0,     0,     0,     0,   727,
       0,     0,     0,     0,     0,     0,     0,     0,   728,   729,
       0,     0,     0,   731,   730,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   730,
       0,     0,   727,     0,     0,     0,     0,     0,     0,     0,
     724,   728,   729,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   732,
       0,     0,   730,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   731,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   731,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     725,     0,   732,     0,   731,     0,     0,     0,     0,     0,
       0,   726,  1616,     0,  1617,     0,     0,   732,     0,     0,
    1618,     0,  1619,     0,     0,     0,     0,     0,     0,     0,
       0,  1620,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     732,     0,   727,     0,   733,   734,   735,   736,   737,   738,
     739,   728,   729,   740,     0,  2590,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1621,  1622,     0,     0,
       0,     0,   730,     0,     0,     0,     0,     0,     0,     0,
       0,   805,  1623,     0,     0,  1624,     0,     0,     0,     0,
       0,     0,     0,  1625,  1626,     0,  1627,     0,     0,     0,
    1628,     0,     0,     0,     0,  1630,     0,   733,   734,   735,
     736,   737,   738,   739,     0,     0,   740,     0,  2591,     0,
       0,     0,   733,   734,   735,   736,   737,   738,   739,     0,
       0,   740,     0,  2592,   731,     0,     0,  1632,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   733,   734,   735,   736,   737,
     738,   739,     0,     0,   740,     0,  2833,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1633,
     732,     0,     0,     0,     0,     0,  1634,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1635,     0,     0,     0,
    1636,     0,     0,     0,     0,     0,     0,     0,     0,  1637,
    1638,  1639,     0,     0,     0,     0,     0,  1640,     0,     0,
       0,     0,     0,     0,     0,  1641,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1642,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1643,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,     0,    97,     0,   827,   733,   734,   735,   736,   737,
     738,   739,     0,     0,   740,    98,  2947,     0,    99,   100,
     101,   102,     0,   103,   104,   105,     0,     0,     0,   106,
       0,   107,   108,     0,   109,   110,   111,   112,   113,     0,
     114,     0,     0,   115,     0,   116,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,     0,     0,   124,
     125,   126,     0,     0,   127,     0,   128,   129,   130,     0,
     131,     0,   132,   133,     0,     0,     0,     0,   134,   135,
     136,   137,     0,   138,   139,   140,  1644,   141,     0,   142,
     143,     0,     0,   144,   145,     0,   146,     0,   147,     0,
    1645,   148,     0,     0,     0,   149,     0,     0,   150,     0,
    1646,   151,   152,   153,     0,   154,   155,   156,     0,     0,
     157,   158,     0,   159,     0,   160,   161,   162,     0,     0,
       0,     0,   163,     0,   164,     0,   165,     0,     0,     0,
     166,   167,     0,     0,   168,   169,   170,     0,   171,     0,
     172,     0,     0,   173,     0,     0,   174,   175,     0,     0,
       0,     0,     0,   176,   177,     0,     0,     0,   178,     0,
     179,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   207,     0,   208,     0,   209,     0,
       0,   210,     0,   211,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   214,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,   223,     0,
     224,     0,   225,   226,     0,     0,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,     0,     0,     0,
     236,     0,   237,     0,     0,   238,   239,     0,     0,     0,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   242,   243,     0,   244,     0,     0,     0,   245,     0,
       0,   246,     0,   247,     0,     0,     0,     0,   248,     0,
     249,   250,   251,   252,     0,     0,     0,   253,     0,   254,
     255,     0,     0,   256,   257,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,     0,   260,     0,
     261,   262,   263,   264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,   268,     0,     0,     0,   269,   270,     0,   271,     0,
       0,     0,     0,   272,     0,     0,     0,   273,     0,     0,
     274,   275,   276,   277,     0,     0,     0,   278,   279,   280,
       0,   281,   282,     0,   283,     0,   284,     0,     0,     0,
       0,     0,     0,   285,     0,   286,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,     0,
       0,     0,     0,     0,   289,     0,   290,     0,     0,   291,
       0,     0,   292,     0,   293,     0,   294,   295,   296,    92,
      93,    94,    95,    96,  1685,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,   102,     0,   103,   104,
     105,     0,     0,     0,   106,     0,   107,   108,     0,   109,
     110,   111,   112,   113,     0,   114,     0,     0,   115,     0,
     116,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,     0,     0,   124,   125,   126,     0,     0,   127,
       0,   128,   129,   130,     0,   131,     0,   132,   133,     0,
       0,     0,     0,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   141,     0,   142,   143,     0,     0,   144,   145,
       0,   146,     0,   147,     0,     0,   148,     0,     0,     0,
     149,     0,     0,   150,     0,     0,   151,   152,   153,     0,
     154,   155,   156,     0,     0,   157,   158,     0,   159,     0,
     160,   161,   162,     0,     0,     0,     0,   163,     0,   164,
       0,   165,     0,     0,     0,   166,   167,     0,     0,   168,
     169,   170,     0,   171,     0,   172,     0,     0,   173,     0,
       0,   174,   175,     0,     0,     0,     0,     0,   176,   177,
       0,     0,     0,   178,     0,   179,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   207,
       0,   208,     0,   209,     0,     0,   210,     0,   211,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,     0,
       0,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,   223,     0,   224,     0,   225,   226,     0,
       0,   227,   228,   229,   230,     0,     0,   231,   232,   233,
     234,   235,     0,     0,     0,   236,     0,   237,     0,     0,
     238,   239,     0,     0,     0,     0,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,   242,   243,     0,   244,
       0,     0,     0,   245,     0,     0,   246,     0,   247,     0,
       0,     0,     0,   248,     0,   249,   250,   251,   252,     0,
       0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,   260,     0,   261,   262,   263,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,   268,     0,     0,     0,
     269,   270,     0,   271,     0,     0,     0,     0,   272,     0,
       0,     0,   273,     0,     0,   274,   275,   276,   277,     0,
       0,     0,   278,   279,   280,     0,   281,   282,     0,   283,
       0,   284,     0,     0,     0,     0,     0,     0,   285,     0,
     286,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,     0,     0,     0,     0,     0,   289,
       0,   290,     0,     0,   291,     0,     0,   292,     0,   293,
       0,   294,   295,   296,    92,    93,    94,    95,    96,  2200,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,     0,     0,    99,   100,
     101,   102,     0,   103,   104,   105,     0,     0,     0,   106,
       0,   107,   108,     0,   109,   110,   111,   112,   113,     0,
     114,     0,     0,   115,     0,   116,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,     0,     0,   124,
     125,   126,     0,     0,   127,     0,   128,   129,   130,     0,
     131,     0,   132,   133,     0,     0,     0,     0,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   141,     0,   142,
     143,     0,     0,   144,   145,     0,   146,     0,   147,     0,
       0,   148,     0,     0,     0,   149,     0,     0,   150,     0,
       0,   151,   152,   153,     0,   154,   155,   156,     0,     0,
     157,   158,     0,   159,     0,   160,   161,   162,     0,     0,
       0,     0,   163,     0,   164,     0,   165,     0,     0,     0,
     166,   167,     0,     0,   168,   169,   170,     0,   171,     0,
     172,     0,     0,   173,     0,     0,   174,   175,     0,     0,
       0,     0,     0,   176,   177,     0,     0,     0,   178,     0,
     179,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   207,     0,   208,     0,   209,     0,
       0,   210,     0,   211,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   214,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,   223,     0,
     224,     0,   225,   226,     0,     0,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,     0,     0,     0,
     236,     0,   237,     0,     0,   238,   239,     0,     0,     0,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   242,   243,     0,   244,     0,     0,     0,   245,     0,
       0,   246,     0,   247,     0,     0,     0,     0,   248,     0,
     249,   250,   251,   252,     0,     0,     0,   253,     0,   254,
     255,     0,     0,   256,   257,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,     0,   260,     0,
     261,   262,   263,   264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,   268,     0,     0,     0,   269,   270,     0,   271,     0,
       0,     0,     0,   272,     0,     0,     0,   273,     0,     0,
     274,   275,   276,   277,     0,     0,     0,   278,   279,   280,
       0,   281,   282,     0,   283,     0,   284,     0,     0,     0,
       0,     0,     0,   285,     0,   286,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,     0,
       0,     0,     0,     0,   289,     0,   290,     0,     0,   291,
       0,     0,   292,     0,   293,     0,   294,   295,   296,    92,
      93,    94,    95,    96,  2236,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,     0,     0,    99,   100,   101,   102,     0,   103,   104,
     105,     0,     0,     0,   106,     0,   107,   108,     0,   109,
     110,   111,   112,   113,     0,   114,     0,     0,   115,     0,
     116,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,     0,     0,   124,   125,   126,     0,     0,   127,
       0,   128,   129,   130,     0,   131,     0,   132,   133,     0,
       0,     0,     0,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   141,     0,   142,   143,     0,     0,   144,   145,
       0,   146,     0,   147,     0,     0,   148,     0,     0,     0,
     149,     0,     0,   150,     0,     0,   151,   152,   153,     0,
     154,   155,   156,     0,     0,   157,   158,     0,   159,     0,
     160,   161,   162,     0,     0,     0,     0,   163,     0,   164,
       0,   165,     0,     0,     0,   166,   167,     0,     0,   168,
     169,   170,     0,   171,     0,   172,     0,     0,   173,     0,
       0,   174,   175,     0,     0,     0,     0,     0,   176,   177,
       0,     0,     0,   178,     0,   179,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   207,
       0,   208,     0,   209,     0,     0,   210,     0,   211,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,     0,
       0,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,   223,     0,   224,     0,   225,   226,     0,
       0,   227,   228,   229,   230,     0,     0,   231,   232,   233,
     234,   235,     0,     0,     0,   236,     0,   237,     0,     0,
     238,   239,     0,     0,     0,     0,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,   242,   243,     0,   244,
       0,     0,     0,   245,     0,     0,   246,     0,   247,     0,
       0,     0,     0,   248,     0,   249,   250,   251,   252,     0,
       0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,   260,     0,   261,   262,   263,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,   266,     0,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
     723,     0,     0,   267,     0,     0,   268,     0,     0,     0,
     269,   270,     0,   271,     0,     0,     0,     0,   272,     0,
       0,     0,   273,     0,     0,   274,   275,   276,   277,     0,
       0,     0,   278,   279,   280,     0,   281,   282,     0,   283,
       0,   284,     0,     0,     0,   724,     0,     0,   285,     0,
     286,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,   724,  1296,     0,     0,     0,   289,
       0,   290,     0,     0,   291,     0,     0,   292,     0,   293,
       0,   294,   295,   296,     0,     0,     0,     0,     0,  2604,
       0,     0,     0,     0,     0,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   725,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   726,     0,     0,     0,
       0,     0,     0,     0,   725,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,     0,     0,     0,     0,     0,   727,     0,     0,
       0,     0,     0,     0,     0,     0,   728,   729,     0,     0,
       0,     0,     0,     0,     0,     0,   727,     0,     0,     0,
       0,     0,     0,     0,     0,   728,   729,   730,     0,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
     722,   723,     0,     0,     0,     0,   730,  1801,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   725,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   726,     0,     0,     0,     0,     0,     0,   731,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   724,     0,     0,   731,     0,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,   727,     0,     0,     0,     0,     0,     0,
       0,     0,   728,   729,     0,   732,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   742,   743,   744,
     745,   746,     0,   730,   732,     0,     0,     0,     0,     0,
       0,  1803,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   747,   748,   749,   750,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   725,   724,   751,   752,   753,
     754,     0,     0,   755,     0,     0,   726,     0,     0,     0,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,   756,   757,   731,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,     0,
       0,     0,     0,     0,     0,   758,   759,   727,     0,     0,
       0,     0,  1805,     0,     0,     0,   728,   729,     0,     0,
     733,   734,   735,   736,   737,   738,   739,     0,     0,   740,
       0,   732,     0,     0,     0,     0,   725,   730,     0,   733,
     734,   735,   736,   737,   738,   739,   724,   726,   740,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   724,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   727,     0,
       0,     0,     0,     0,     0,     0,     0,   728,   729,   731,
     711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     721,   722,   723,     0,     0,     0,     0,     0,   730,     0,
       0,     0,     0,     0,     0,     0,   725,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   726,     0,   724,
       0,     0,  2081,     0,     0,   732,   733,   734,   735,   736,
     737,   738,   739,   726,     0,   740,     0,  1393,   712,  1394,
    1395,   715,   716,   717,   718,   719,  1396,  1397,  1398,  1399,
       0,     0,     0,     0,     0,     0,   724,     0,   727,     0,
     731,     0,     0,     0,     0,     0,     0,   728,   729,     0,
       0,     0,     0,     0,   727,     0,     0,     0,     0,     0,
       0,     0,     0,   728,   729,     0,     0,     0,   730,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   725,
       0,     0,     0,     0,   730,     0,   732,     0,     0,     0,
     726,     0,     0,  1400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   725,     0,     0,     0,
     733,   734,   735,   736,   737,   738,   739,   726,     0,   740,
     731,   727,     0,     0,     0,     0,     0,     0,     0,     0,
     728,   729,  2082,     0,     0,     0,   731,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   730,     0,     0,     0,     0,     0,     0,   727,     0,
       0,     0,     0,  1401,     0,     0,   732,   728,   729,     0,
       0,     0,     0,     0,  1402,     0,     0,     0,     0,     0,
       0,     0,   732,     0,     0,     0,     0,     0,   730,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   731,     0,  1403,     0,     0,     0,     0,
       0,     0,     0,     0,  1404,  1405,     0,     0,  1470,   712,
    1471,  1472,   715,   716,   717,   718,   719,  1473,  1474,  1475,
    1476,     0,     0,     0,     0,  1406,     0,     0,     0,     0,
     731,     0,     0,     0,     0,     0,     0,     0,     0,   732,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2092,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,     0,     0,     0,     0,     0,   732,   733,   734,   735,
     736,   737,   738,   739,  1477,     0,   740,  1407,     0,  1470,
     712,  1471,  1472,   715,   716,   717,   718,   719,  1473,  1474,
    1475,  1476,  1470,   712,  1471,  1472,   715,   716,   717,   718,
     719,  1473,  1474,  1475,  1476,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1408,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2580,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   733,   734,   735,   736,   737,   738,
     739,     0,     0,   740,  1478,  1819,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1479,     0,     0,  2136,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   733,   734,   735,   736,   737,   738,   739,     0,     0,
     740,  1470,   712,  1471,  1472,   715,   716,   717,   718,   719,
    1473,  1474,  1475,  1476,     0,     0,  1480,     0,     0,     0,
       0,     0,     0,     0,     0,  1481,  1482,     0,  1470,   712,
    1471,  1472,   715,   716,   717,   718,   719,  1473,  1474,  1475,
    1476,     0,     0,     0,     0,  1478,  1483,     0,  1409,  1410,
    1411,  1412,  1413,  1414,  1415,     0,  1479,  1416,  1478,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1479,
       0,     0,     0,     0,     0,     0,     0,  2173,     0,     0,
       0,     0,  1470,   712,  1471,  1472,   715,   716,   717,   718,
     719,  1473,  1474,  1475,  1476,     0,     0,  1480,     0,     0,
       0,     0,     0,     0,  2396,     0,  1481,  1482,  1484,     0,
    1480,     0,     0,     0,     0,     0,     0,     0,     0,  1481,
    1482,     0,     0,     0,     0,     0,     0,  1483,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1483,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1485,     0,     0,  1478,  2410,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1479,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1478,     0,     0,     0,     0,  1484,
       0,     0,     0,     0,     0,  1479,     0,     0,     0,     0,
       0,     0,  1484,     0,     0,     0,     0,     0,     0,  1480,
       0,     0,     0,     0,     0,     0,     0,     0,  1481,  1482,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1485,  1480,     0,  1478,  1483,
       0,     0,     0,     0,     0,  1481,  1482,     0,  1485,  1479,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1483,     0,     0,  1486,
    1487,  1488,  1489,  1490,  1491,  1492,     0,     0,  1493,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1480,     0,     0,     0,     0,     0,     0,     0,     0,  1481,
    1482,  1484,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1483,     0,     0,     0,     0,     0,     0,     0,  1484,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1485,     0,     0,
    1486,  1487,  1488,  1489,  1490,  1491,  1492,     0,     0,  1493,
       0,     0,     0,  1486,  1487,  1488,  1489,  1490,  1491,  1492,
       0,     0,  1493,     0,  1485,     0,     0,     0,     0,     0,
       0,     0,  1484,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1485,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1486,  1487,  1488,  1489,  1490,  1491,  1492,     0,
       0,  1493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1486,
    1487,  1488,  1489,  1490,  1491,  1492,     0,     0,  1493,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      93,    94,    95,    96,     0,     0,     0,    97,     0,     0,
       0,     0,     0,  1486,  1487,  1488,  1489,  1490,  1491,  1492,
      98,     0,  1493,    99,   100,   101,   102,     0,   103,   104,
     105,     0,     0,     0,   106,     0,   107,   108,     0,   109,
     110,   111,   112,   113,     0,   114,     0,     0,   115,     0,
     116,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,     0,     0,   124,   125,   126,     0,     0,   127,
       0,   128,   129,   130,     0,   131,     0,   132,   133,     0,
       0,     0,     0,   134,   135,   136,   137,  1611,   138,   139,
     140,     0,   141,     0,   142,   143,     0,     0,   144,   145,
       0,   146,     0,   147,     0,     0,   148,     0,     0,     0,
     149,  1612,     0,   150,     0,     0,   151,   152,   153,     0,
     154,   155,   156,     0,     0,   157,   158,     0,   159,     0,
     160,   161,   162,     0,     0,     0,     0,   163,     0,   164,
       0,   165,     0,     0,     0,   166,   167,     0,     0,   168,
     169,   170,     0,   171,     0,   172,     0,     0,   173,     0,
       0,   174,   175,     0,     0,     0,     0,     0,   176,   177,
     330,     0,     0,   178,     0,   179,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   207,
       0,   208,     0,   209,     0,     0,   210,     0,   211,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,     0,
       0,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,   223,     0,   224,     0,   225,   226,     0,
       0,   227,   228,   229,   230,     0,     0,   231,   232,   233,
     234,   235,     0,     0,     0,   236,     0,   237,     0,     0,
     238,   239,     0,   331,     0,     0,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,   242,   243,     0,   244,
       0,     0,     0,   245,     0,     0,   246,     0,   247,     0,
       0,     0,     0,   248,     0,   249,   250,   251,   252,     0,
       0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,   260,     0,   261,   262,   263,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,   268,     0,     0,     0,
     269,   270,     0,   271,     0,     0,     0,     0,   272,     0,
       0,     0,   273,     0,     0,   274,   275,   276,   277,     0,
       0,     0,   278,   279,   280,     0,   281,   282,     0,   283,
       0,   284,     0,     0,     0,     0,     0,     0,   285,     0,
     286,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,    92,    93,    94,    95,    96,   289,
       0,   290,    97,     0,   291,     0,     0,   292,     0,   293,
       0,   294,   295,   296,     0,    98,     0,     0,    99,   100,
     101,   102,     0,   103,   104,   105,     0,     0,     0,   106,
       0,   107,   108,     0,   109,   110,   111,   112,   113,     0,
     114,     0,     0,   115,     0,   116,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,     0,     0,   124,
     125,   126,     0,     0,   127,     0,   128,   129,   130,     0,
     131,     0,   132,   133,     0,     0,     0,     0,   134,   135,
     136,   137,  1937,   138,   139,   140,     0,   141,     0,   142,
     143,     0,     0,   144,   145,     0,   146,     0,   147,     0,
       0,   148,     0,     0,     0,   149,  1938,     0,   150,     0,
       0,   151,   152,   153,     0,   154,   155,   156,     0,     0,
     157,   158,     0,   159,     0,   160,   161,   162,     0,     0,
       0,     0,   163,     0,   164,     0,   165,     0,     0,     0,
     166,   167,     0,     0,   168,   169,   170,     0,   171,     0,
     172,     0,     0,   173,     0,     0,   174,   175,     0,     0,
       0,     0,     0,   176,   177,   330,     0,     0,   178,     0,
     179,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   207,     0,   208,     0,   209,     0,
       0,   210,     0,   211,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   214,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,   223,     0,
     224,     0,   225,   226,     0,     0,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,     0,     0,     0,
     236,     0,   237,     0,     0,   238,   239,     0,   331,     0,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   242,   243,     0,   244,     0,     0,     0,   245,     0,
       0,   246,     0,   247,     0,     0,     0,     0,   248,     0,
     249,   250,   251,   252,     0,     0,     0,   253,     0,   254,
     255,     0,     0,   256,   257,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,     0,   260,     0,
     261,   262,   263,   264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,   268,     0,     0,     0,   269,   270,     0,   271,     0,
       0,     0,     0,   272,     0,     0,     0,   273,     0,     0,
     274,   275,   276,   277,     0,     0,     0,   278,   279,   280,
       0,   281,   282,     0,   283,     0,   284,     0,     0,     0,
       0,     0,     0,   285,     0,   286,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,    92,
      93,    94,    95,    96,   289,     0,   290,    97,     0,   291,
       0,     0,   292,     0,   293,     0,   294,   295,   296,     0,
      98,     0,     0,    99,   100,   101,   102,     0,   103,   104,
     105,     0,     0,     0,   106,     0,   107,   108,     0,   109,
     110,   111,   112,   113,     0,   114,     0,     0,   115,     0,
     116,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,     0,     0,   124,   125,   126,     0,     0,   127,
       0,   128,   129,   130,     0,   131,     0,   132,   133,     0,
       0,     0,     0,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   141,     0,   142,   143,     0,     0,   144,   145,
       0,   146,     0,   147,     0,     0,   148,     0,     0,     0,
     149,  1607,     0,   150,     0,     0,   151,   152,   153,     0,
     154,   155,   156,     0,     0,   157,   158,     0,   159,     0,
     160,   161,   162,     0,     0,     0,     0,   163,     0,   164,
       0,   165,     0,     0,     0,   166,   167,     0,     0,   168,
     169,   170,     0,   171,     0,   172,     0,     0,   173,     0,
       0,   174,   175,     0,     0,     0,     0,     0,   176,   177,
     330,     0,     0,   178,     0,   179,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   207,
       0,   208,     0,   209,     0,     0,   210,     0,   211,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,     0,
       0,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,   223,     0,   224,     0,   225,   226,     0,
       0,   227,   228,   229,   230,     0,     0,   231,   232,   233,
     234,   235,     0,     0,     0,   236,     0,   237,     0,     0,
     238,   239,     0,   331,     0,     0,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,   242,   243,     0,   244,
       0,     0,     0,   245,     0,     0,   246,     0,   247,     0,
       0,     0,     0,   248,     0,   249,   250,   251,   252,     0,
       0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,   260,     0,   261,   262,   263,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,   268,     0,     0,     0,
     269,   270,     0,   271,     0,     0,     0,     0,   272,     0,
       0,     0,   273,     0,     0,   274,   275,   276,   277,     0,
       0,     0,   278,   279,   280,     0,   281,   282,     0,   283,
       0,   284,     0,     0,     0,     0,     0,     0,   285,     0,
     286,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,    92,    93,    94,    95,    96,   289,
       0,   290,    97,     0,   291,     0,     0,   292,     0,   293,
       0,   294,   295,   296,     0,    98,     0,     0,    99,   100,
     101,   102,     0,   103,   104,   105,     0,     0,     0,   106,
       0,   107,   108,     0,   109,   110,   111,   112,   113,     0,
     114,     0,     0,   115,     0,   116,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,     0,     0,   124,
     125,   126,     0,     0,   127,     0,   128,   129,   130,     0,
     131,     0,   132,   133,     0,     0,     0,     0,   134,   135,
     136,   137,  1611,   138,   139,   140,     0,   141,     0,   142,
     143,     0,     0,   144,   145,     0,   146,     0,   147,     0,
       0,   148,     0,     0,     0,   149,     0,     0,   150,     0,
       0,   151,   152,   153,     0,   154,   155,   156,     0,     0,
     157,   158,     0,   159,     0,   160,   161,   162,     0,     0,
       0,     0,   163,     0,   164,     0,   165,     0,     0,     0,
     166,   167,     0,     0,   168,   169,   170,     0,   171,     0,
     172,     0,     0,   173,     0,     0,   174,   175,     0,     0,
       0,     0,     0,   176,   177,   330,     0,     0,   178,     0,
     179,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   207,     0,   208,     0,   209,     0,
       0,   210,     0,   211,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   214,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,   223,     0,
     224,     0,   225,   226,     0,     0,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,     0,     0,     0,
     236,     0,   237,     0,     0,   238,   239,     0,   331,     0,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   242,   243,     0,   244,     0,     0,     0,   245,     0,
       0,   246,     0,   247,     0,     0,     0,     0,   248,     0,
     249,   250,   251,   252,     0,     0,     0,   253,     0,   254,
     255,     0,     0,   256,   257,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,     0,   260,     0,
     261,   262,   263,   264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,   268,     0,     0,     0,   269,   270,     0,   271,     0,
       0,     0,     0,   272,     0,     0,     0,   273,     0,     0,
     274,   275,   276,   277,     0,     0,     0,   278,   279,   280,
       0,   281,   282,     0,   283,     0,   284,     0,     0,     0,
       0,     0,     0,   285,     0,   286,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,    92,
      93,    94,    95,    96,   289,     0,   290,    97,     0,   291,
       0,     0,   292,     0,   293,     0,   294,   295,   296,     0,
      98,     0,     0,    99,   100,   101,   102,     0,   103,   104,
     105,     0,     0,     0,   106,     0,   107,   108,     0,   109,
     110,   111,   112,   113,     0,   114,     0,     0,   115,     0,
     116,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,     0,     0,   124,   125,   126,     0,     0,   127,
       0,   128,   129,   130,     0,   131,     0,   132,   133,     0,
       0,     0,     0,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   141,     0,   142,   143,     0,     0,   144,   145,
       0,   146,     0,   147,     0,     0,   148,     0,     0,     0,
     149,     0,     0,   150,     0,     0,   151,   152,   153,     0,
     154,   155,   156,     0,     0,   157,   158,     0,   159,     0,
     160,   161,   162,     0,     0,     0,     0,   163,     0,   164,
       0,   165,     0,     0,     0,   166,   167,     0,     0,   168,
     169,   170,     0,   171,     0,   172,     0,     0,   173,     0,
       0,   174,   175,     0,     0,     0,     0,     0,   176,   177,
     330,     0,     0,   178,     0,   179,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   207,
       0,   208,     0,   209,     0,     0,   210,     0,   211,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,     0,
       0,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,   223,     0,   224,     0,   225,   226,     0,
       0,   227,   228,   229,   230,     0,     0,   231,   232,   233,
     234,   235,     0,     0,     0,   236,     0,   237,     0,     0,
     238,   239,     0,   331,     0,     0,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,   242,   243,     0,   244,
       0,     0,     0,   245,     0,     0,   246,     0,   247,     0,
       0,     0,     0,   248,     0,   249,   250,   251,   252,     0,
       0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,   260,     0,   261,   262,   263,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,   268,     0,     0,     0,
     269,   270,     0,   271,     0,     0,     0,     0,   272,     0,
       0,     0,   273,     0,     0,   274,   275,   276,   277,     0,
       0,     0,   278,   279,   280,     0,   281,   282,     0,   283,
       0,   284,     0,     0,     0,     0,     0,     0,   285,     0,
     286,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,    92,    93,    94,    95,    96,   289,
       0,   290,    97,     0,   291,     0,     0,   292,     0,   293,
       0,   294,   295,   296,     0,    98,     0,     0,    99,   100,
     101,   102,     0,   103,   104,   105,     0,     0,     0,   106,
       0,   107,   108,     0,   109,   110,   111,   112,   113,     0,
     114,     0,     0,   115,     0,   116,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,     0,     0,   124,
     125,   126,     0,     0,   127,     0,   128,   129,   130,     0,
     131,     0,   132,   133,     0,     0,     0,     0,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   141,     0,   142,
     143,     0,     0,   144,   145,     0,   146,     0,   147,     0,
       0,   148,     0,     0,     0,   149,     0,     0,   150,     0,
       0,   151,   152,   153,     0,   154,   155,   156,     0,     0,
     157,   158,     0,   159,     0,   160,   161,   162,     0,     0,
       0,     0,   163,     0,   164,     0,   165,     0,     0,     0,
     166,   167,  1223,     0,   168,   169,   170,     0,   171,     0,
     172,     0,     0,   173,     0,     0,   174,   175,     0,     0,
       0,     0,     0,   176,   177,     0,     0,     0,   178,     0,
     179,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   207,     0,   208,     0,   209,     0,
       0,   210,     0,   211,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   214,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,   223,     0,
     224,     0,   225,   226,     0,     0,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,     0,     0,     0,
     236,     0,   237,     0,     0,   238,   239,     0,   368,     0,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   242,   243,     0,   244,     0,     0,     0,   245,     0,
       0,   246,     0,   247,     0,     0,     0,     0,   248,     0,
     249,   250,   251,   252,     0,     0,     0,   253,     0,   254,
     255,     0,     0,   256,   257,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,     0,   260,     0,
     261,   262,   263,   264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,   268,     0,     0,     0,   269,   270,     0,   271,     0,
       0,     0,     0,   272,     0,     0,     0,   273,     0,     0,
     274,   275,   276,   277,     0,     0,     0,   278,   279,   280,
       0,   281,   282,     0,   283,     0,   284,     0,     0,     0,
       0,     0,     0,   285,     0,   286,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,    92,
      93,    94,    95,    96,   289,     0,   290,    97,     0,   291,
       0,     0,   292,     0,   293,     0,   294,   295,   296,     0,
      98,     0,     0,    99,   100,   101,   102,     0,   103,   104,
     105,     0,     0,     0,   106,     0,   107,   108,     0,   109,
     110,   111,   112,   113,     0,   114,     0,     0,   115,     0,
     116,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,     0,     0,   124,   125,   126,     0,     0,   127,
       0,   128,   129,   130,     0,   131,     0,   132,   133,     0,
       0,  2196,     0,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   141,     0,   142,   143,     0,     0,   144,   145,
       0,   146,     0,   147,     0,     0,   148,     0,     0,     0,
     149,     0,     0,   150,     0,     0,   151,   152,   153,     0,
     154,   155,   156,     0,     0,   157,   158,     0,   159,     0,
     160,   161,   162,     0,     0,     0,     0,   163,     0,   164,
       0,   165,     0,     0,     0,   166,   167,     0,     0,   168,
     169,   170,     0,   171,     0,   172,     0,     0,   173,     0,
       0,   174,   175,     0,     0,     0,     0,     0,   176,   177,
       0,     0,     0,   178,     0,   179,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   207,
       0,   208,     0,   209,     0,     0,   210,     0,   211,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,     0,
       0,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,   223,     0,   224,     0,   225,   226,     0,
       0,   227,   228,   229,   230,     0,     0,   231,   232,   233,
     234,   235,     0,     0,     0,   236,     0,   237,     0,     0,
     238,   239,     0,   331,     0,     0,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,   242,   243,     0,   244,
       0,     0,     0,   245,     0,     0,   246,     0,   247,     0,
       0,     0,     0,   248,     0,   249,   250,   251,   252,     0,
       0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,   260,     0,   261,   262,   263,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,   268,     0,     0,     0,
     269,   270,     0,   271,     0,     0,     0,     0,   272,     0,
       0,     0,   273,     0,     0,   274,   275,   276,   277,     0,
       0,     0,   278,   279,   280,     0,   281,   282,     0,   283,
       0,   284,     0,     0,     0,     0,     0,     0,   285,     0,
     286,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,    92,    93,    94,    95,    96,   289,
       0,   290,    97,     0,   291,     0,     0,   292,     0,   293,
       0,   294,   295,   296,     0,    98,     0,     0,    99,   100,
     101,   102,     0,   103,   104,   105,     0,     0,     0,   106,
       0,   107,   108,     0,   109,   110,   111,   112,   113,     0,
     114,     0,     0,   115,     0,   116,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,     0,     0,   124,
     125,   126,     0,     0,   127,     0,   128,   129,   130,     0,
     131,     0,   132,   133,     0,     0,     0,     0,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   141,     0,   142,
     143,     0,     0,   144,   145,     0,   146,     0,   147,     0,
       0,   148,     0,     0,     0,   149,     0,     0,   150,     0,
       0,   151,   152,   153,     0,   154,   155,   156,     0,     0,
     157,   158,     0,   159,     0,   160,   161,   162,     0,     0,
       0,   905,   163,     0,   164,     0,   165,     0,     0,     0,
     166,   167,     0,     0,   168,   169,   170,     0,   171,     0,
     172,     0,     0,   173,     0,     0,   174,   175,     0,     0,
       0,     0,     0,   176,   177,     0,     0,     0,   178,     0,
     179,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   207,     0,   208,     0,   209,     0,
       0,   210,     0,   211,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   214,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,   223,     0,
     224,     0,   225,   226,     0,     0,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,     0,     0,     0,
     236,     0,   237,     0,     0,   238,   239,     0,     0,     0,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   242,   243,     0,   244,     0,     0,     0,   245,     0,
       0,   246,     0,   247,     0,     0,     0,     0,   248,     0,
     249,   250,   251,   252,     0,     0,     0,   253,     0,   254,
     255,     0,     0,   256,   257,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,     0,   260,     0,
     261,   262,   263,   264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,   268,     0,     0,     0,   269,   270,     0,   271,     0,
       0,     0,     0,   272,     0,     0,     0,   273,     0,     0,
     274,   275,   276,   277,     0,     0,     0,   278,   279,   280,
       0,   281,   282,     0,   283,     0,   284,     0,     0,     0,
       0,     0,     0,   285,     0,   286,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,    92,
      93,    94,    95,    96,   289,     0,   290,    97,     0,   291,
       0,     0,   292,     0,   293,     0,   294,   295,   296,     0,
      98,     0,     0,    99,   100,   101,   102,     0,   103,   104,
     105,     0,     0,     0,   106,     0,   107,   108,     0,   109,
     110,   111,   112,   113,     0,   114,     0,     0,   115,     0,
     116,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,     0,     0,   124,   125,   126,     0,     0,   127,
       0,   128,   129,   130,     0,   131,     0,   132,   133,     0,
       0,     0,     0,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   141,     0,   142,   143,     0,     0,   144,   145,
       0,   146,     0,   147,     0,     0,   148,     0,     0,     0,
     149,  1546,     0,   150,     0,     0,   151,   152,   153,     0,
     154,   155,   156,     0,     0,   157,   158,     0,   159,     0,
     160,   161,   162,     0,     0,     0,     0,   163,     0,   164,
       0,   165,     0,     0,     0,   166,   167,     0,     0,   168,
     169,   170,     0,   171,     0,   172,     0,     0,   173,     0,
       0,   174,   175,     0,     0,     0,     0,     0,   176,   177,
       0,     0,     0,   178,     0,   179,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   207,
       0,   208,     0,   209,     0,     0,   210,     0,   211,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,     0,
       0,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,   223,     0,   224,     0,   225,   226,     0,
       0,   227,   228,   229,   230,     0,     0,   231,   232,   233,
     234,   235,     0,     0,     0,   236,     0,   237,     0,     0,
     238,   239,     0,     0,     0,     0,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,   242,   243,     0,   244,
       0,     0,     0,   245,     0,     0,   246,     0,   247,     0,
       0,     0,     0,   248,     0,   249,   250,   251,   252,     0,
       0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,   260,     0,   261,   262,   263,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,   268,     0,     0,     0,
     269,   270,     0,   271,     0,     0,     0,     0,   272,     0,
       0,     0,   273,     0,     0,   274,   275,   276,   277,     0,
       0,     0,   278,   279,   280,     0,   281,   282,     0,   283,
       0,   284,     0,     0,     0,     0,     0,     0,   285,     0,
     286,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,    92,    93,    94,    95,    96,   289,
       0,   290,    97,     0,   291,     0,     0,   292,     0,   293,
       0,   294,   295,   296,     0,    98,     0,     0,    99,   100,
     101,   102,     0,   103,   104,   105,     0,     0,     0,   106,
       0,   107,   108,     0,   109,   110,   111,   112,   113,     0,
     114,     0,     0,   115,     0,   116,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,     0,     0,   124,
     125,   126,     0,     0,   127,     0,   128,   129,   130,     0,
     131,     0,   132,   133,     0,     0,     0,     0,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   141,     0,   142,
     143,     0,     0,   144,   145,     0,   146,     0,   147,     0,
       0,   148,     0,     0,     0,   149,     0,     0,   150,     0,
       0,   151,   152,   153,     0,   154,   155,   156,     0,     0,
     157,   158,     0,   159,     0,   160,   161,   162,     0,     0,
       0,     0,   163,     0,   164,     0,   165,     0,     0,     0,
     166,   167,     0,     0,   168,   169,   170,     0,   171,     0,
     172,     0,     0,   173,     0,     0,   174,   175,     0,     0,
       0,     0,     0,   176,   177,     0,     0,     0,   178,     0,
     179,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   207,     0,   208,     0,   209,     0,
       0,   210,     0,   211,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   214,  2230,     0,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,   223,     0,
     224,     0,   225,   226,     0,     0,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,     0,     0,     0,
     236,     0,   237,     0,     0,   238,   239,     0,     0,     0,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   242,   243,     0,   244,     0,     0,     0,   245,     0,
       0,   246,     0,   247,     0,     0,     0,     0,   248,     0,
     249,   250,   251,   252,     0,     0,     0,   253,     0,   254,
     255,     0,     0,   256,   257,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,     0,   260,     0,
     261,   262,   263,   264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,   268,     0,     0,     0,   269,   270,     0,   271,     0,
       0,     0,     0,   272,     0,     0,     0,   273,     0,     0,
     274,   275,   276,   277,     0,     0,     0,   278,   279,   280,
       0,   281,   282,     0,   283,     0,   284,     0,     0,     0,
       0,     0,     0,   285,     0,   286,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,    92,
      93,    94,    95,    96,   289,     0,   290,    97,     0,   291,
       0,     0,   292,     0,   293,     0,   294,   295,   296,     0,
      98,     0,     0,    99,   100,   101,   102,     0,   103,   104,
     105,     0,     0,     0,   106,     0,   107,   108,     0,   109,
     110,   111,   112,   113,     0,   114,     0,     0,   115,     0,
     116,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,     0,     0,   124,   125,   126,     0,     0,   127,
       0,   128,   129,   130,     0,   131,     0,   132,   133,     0,
       0,     0,     0,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   141,     0,   142,   143,     0,     0,   144,   145,
       0,   146,     0,   147,     0,     0,   148,     0,     0,     0,
     149,     0,     0,   150,     0,     0,   151,   152,   153,     0,
     154,   155,   156,     0,     0,   157,   158,     0,   159,     0,
     160,   161,   162,     0,     0,     0,     0,   163,     0,   164,
       0,   165,     0,     0,     0,   166,   167,     0,     0,   168,
     169,   170,     0,   171,     0,   172,     0,     0,   173,     0,
       0,   174,   175,     0,     0,     0,     0,     0,   176,   177,
       0,     0,     0,   178,     0,   179,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   207,
       0,   208,     0,   209,     0,     0,   210,     0,   211,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,     0,
       0,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,   223,     0,   224,     0,   225,   226,     0,
       0,   227,   228,   229,   230,     0,     0,   231,   232,   233,
     234,   235,     0,     0,     0,   236,     0,   237,     0,     0,
     238,   239,     0,   331,     0,     0,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,   242,   243,     0,   244,
       0,     0,     0,   245,     0,     0,   246,     0,   247,     0,
       0,     0,     0,   248,     0,   249,   250,   251,   252,     0,
       0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,   260,     0,   261,   262,   263,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,   268,     0,     0,     0,
     269,   270,     0,   271,     0,     0,     0,     0,   272,     0,
       0,     0,   273,     0,     0,   274,   275,   276,   277,     0,
       0,     0,   278,   279,   280,     0,   281,   282,     0,   283,
       0,   284,     0,     0,     0,     0,     0,     0,   285,     0,
     286,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,    92,    93,    94,    95,    96,   289,
       0,   290,    97,     0,   291,     0,     0,   292,     0,   293,
       0,   294,   295,   296,     0,    98,     0,     0,    99,   100,
     101,   102,     0,   103,   104,   105,     0,     0,     0,   106,
       0,   107,   108,     0,   109,   110,   111,   112,   113,     0,
     114,     0,     0,   115,     0,   116,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,     0,     0,   124,
     125,   126,     0,     0,   127,     0,   128,   129,   130,     0,
     131,     0,   132,   133,     0,     0,     0,     0,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   141,     0,   142,
     143,     0,     0,   144,   145,     0,   146,     0,   147,     0,
       0,   148,     0,     0,     0,   149,  1582,     0,   150,     0,
       0,   151,   152,   153,     0,   154,   155,   156,     0,     0,
     157,   158,     0,   159,     0,   160,   161,   162,     0,     0,
       0,     0,   163,     0,   164,     0,   165,     0,     0,     0,
     166,   167,     0,     0,   168,   169,   170,     0,   171,     0,
     172,     0,     0,   173,     0,     0,   174,   175,     0,     0,
       0,     0,     0,   176,   177,     0,     0,     0,   178,     0,
     179,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   207,     0,   208,     0,   209,     0,
       0,   210,     0,   211,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   214,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,   223,     0,
     224,     0,   225,   226,     0,     0,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,     0,     0,     0,
     236,     0,   237,     0,     0,   238,   239,     0,     0,     0,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   242,   243,     0,   244,     0,     0,     0,   245,     0,
       0,   246,     0,   247,     0,     0,     0,     0,   248,     0,
     249,   250,   251,   252,     0,     0,     0,   253,     0,   254,
     255,     0,     0,   256,   257,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,     0,   260,     0,
     261,   262,   263,   264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,   268,     0,     0,     0,   269,   270,     0,   271,     0,
       0,     0,     0,   272,     0,     0,     0,   273,     0,     0,
     274,   275,   276,   277,     0,     0,     0,   278,   279,   280,
       0,   281,   282,     0,   283,     0,   284,     0,     0,     0,
       0,     0,     0,   285,     0,   286,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   288,    92,
      93,    94,    95,    96,   289,     0,   290,    97,     0,   291,
       0,     0,   292,     0,   293,     0,   294,   295,   296,     0,
      98,     0,     0,    99,   100,   101,   102,     0,   103,   104,
     105,     0,     0,     0,   106,     0,   107,   108,     0,   109,
     110,   111,   112,   113,     0,   114,     0,     0,   115,     0,
     116,     0,     0,   117,     0,     0,   118,   119,   120,   121,
     122,   123,     0,     0,   124,   125,   126,     0,     0,   127,
       0,   128,   129,   130,     0,   131,     0,   132,   133,     0,
       0,     0,     0,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   141,     0,   142,   143,     0,     0,   144,   145,
       0,   146,     0,   147,     0,     0,   148,     0,     0,     0,
     149,     0,     0,   150,     0,     0,   151,   152,   153,     0,
     154,   155,   156,     0,     0,   157,   158,     0,   159,     0,
     160,   161,   162,     0,     0,     0,     0,   163,     0,   164,
       0,   165,     0,     0,     0,   166,   167,     0,     0,   168,
     169,   170,     0,   171,     0,   172,     0,     0,   173,     0,
       0,   174,   175,     0,     0,     0,     0,     0,   176,   177,
       0,     0,     0,   178,     0,   179,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,   191,   192,   193,   194,     0,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   207,
       0,   208,     0,   209,     0,     0,   210,     0,   211,     0,
       0,     0,     0,     0,     0,     0,   212,   213,   214,     0,
       0,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,     0,     0,   223,     0,   224,     0,   225,   226,     0,
       0,   227,   228,   229,   230,     0,     0,   231,   232,   233,
     234,   235,     0,     0,     0,   236,     0,   237,     0,     0,
     238,   239,     0,     0,     0,     0,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,   242,   243,     0,   244,
       0,     0,     0,   245,     0,     0,   246,     0,   247,     0,
       0,     0,     0,   248,     0,   249,   250,   251,   252,     0,
       0,     0,   253,     0,   254,   255,     0,     0,   256,   257,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,     0,   260,     0,   261,   262,   263,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,   268,     0,     0,     0,
     269,   270,     0,   271,     0,     0,     0,     0,   272,     0,
       0,     0,   273,     0,     0,   274,   275,   276,   277,     0,
       0,     0,   278,   279,   280,     0,   281,   282,     0,   283,
       0,   284,     0,     0,     0,     0,     0,     0,   285,     0,
     286,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   288,    92,    93,    94,  1229,    96,   289,
       0,   290,    97,     0,   291,     0,     0,   292,     0,   293,
       0,   294,   295,   296,     0,    98,     0,     0,    99,   100,
     101,   102,     0,   103,   104,   105,     0,     0,     0,   106,
       0,   107,   108,     0,   109,   110,   111,   112,   113,     0,
     114,     0,     0,   115,     0,   116,     0,     0,   117,     0,
       0,   118,   119,   120,   121,   122,   123,     0,     0,   124,
     125,   126,     0,     0,   127,     0,   128,   129,   130,     0,
     131,     0,   132,   133,     0,     0,     0,     0,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   141,     0,   142,
     143,     0,     0,   144,   145,     0,   146,     0,   147,     0,
       0,   148,     0,     0,     0,   149,     0,     0,   150,     0,
       0,   151,   152,   153,     0,   154,   155,   156,     0,     0,
     157,   158,     0,   159,     0,   160,  1230,   162,     0,     0,
       0,     0,   163,     0,   164,     0,   165,     0,     0,     0,
     166,   167,     0,     0,   168,   169,   170,     0,   171,     0,
     172,     0,     0,   173,     0,     0,   174,   175,     0,     0,
       0,     0,     0,   176,   177,     0,     0,     0,   178,     0,
     179,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,   191,   192,   193,   194,
       0,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   207,     0,   208,     0,   209,     0,
       0,   210,     0,   211,     0,     0,     0,     0,     0,     0,
       0,   212,   213,   214,     0,     0,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,   223,     0,
     224,     0,   225,   226,     0,     0,   227,   228,   229,   230,
       0,     0,   231,   232,   233,   234,   235,     0,     0,     0,
     236,     0,   237,     0,     0,   238,   239,     0,     0,     0,
       0,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,   242,   243,     0,   244,     0,     0,     0,   245,     0,
       0,   246,     0,   247,     0,     0,     0,     0,   248,     0,
     249,   250,   251,   252,     0,     0,     0,   253,     0,   254,
     255,     0,     0,   256,   257,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   259,     0,   260,     0,
     261,   262,   263,   264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,  2501,  2502,  2503,  2504,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,   268,     0,     0,     0,   269,   270,     0,   271,  2505,
       0,     0,     0,   272,     0,     0,     0,   273,     0,     0,
     274,   275,   276,   277,     0,     0,     0,   278,   279,   280,
       0,   281,   282,     0,   283,     0,   284,     0,     0,     0,
       0,     0,     0,   285,     0,   286,   287,     0,     0,     0,
       0,     0,     0,     0,  2506,     0,     0,     0,   288,     0,
       0,     0,     0,     0,   289,     0,   290,     0,     0,   291,
       0,     0,   292,     0,   293,     0,   294,   295,   296,     0,
       0,     0,     0,  2507,     0,     0,  2508,     0,  2509,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2510,     0,  2511,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   799,     0,     0,     0,     0,   800,   801,     0,
       0,     0,     0,     0,     0,     0,  2512,  2513,  2514,     0,
       0,  2515,  2516,  2517,  2518,  2519,   802,  2520,  2521,  2522,
       0,  2523,  2524,  2525,  2526,  2527,  2528,     0,     0,  2529,
     803,  2530,     0,  2531,  2532,  2533,  2534,  2535,  2536,     0,
       0,  2537,  2538,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   804,   775,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   805,     0,     0,     0,     0,   806,
       0,   807,     0,     0,     0,   808,     0,     0,     0,     0,
    2539,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2540,     0,     0,     0,     0,
       0,     0,     0,   809,     0,   810,     0,   811,     0,  2541,
    2542,  2543,     0,     0,     0,     0,  2544,     0,  2545,     0,
     812,   813,     0,     0,   814,     0,     0,     0,     0,     0,
     815,     0,     0,     0,     0,     0,     0,     0,     0,   816,
       0,   817,     0,     0,     0,     0,     0,     0,  2546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   818,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   819,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   820,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   821,     0,     0,     0,     0,
       0,   822,     0,     0,   823,   824,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1452,     0,     0,     0,     0,     0,
       0,     0,   825,   826,     0,     0,     0,   827
};

static const short yycheck[] =
{
       2,   885,   503,   480,   379,   380,   381,   584,   785,   911,
     826,    13,  1514,   353,  1128,     2,  1299,   594,  1037,   637,
      13,    23,  1884,  1168,  1900,   570,   603,   572,   573,   574,
     575,   576,   825,   826,   808,   510,  1157,  1620,  1583,   487,
    1094,    43,   848,   849,  1237,  1237,   605,   606,   822,  1681,
    1948,   544,  1585,  1097,   828,  1467,  1537,  1590,  1160,  2271,
     955,   620,  1184,  1117,  1166,  1967,    10,    10,    67,   875,
     615,   616,   617,    75,     3,  2067,    95,    12,  1500,    22,
     675,    12,     3,  1102,  1506,   644,     3,    41,    75,    41,
    1686,     3,   898,   141,  1514,   654,    67,  1519,    67,   141,
      10,     3,   133,   101,  1606,   664,   665,   666,   165,    67,
      67,  2043,    22,   919,     3,   674,  1978,   133,  2438,    10,
      54,  1921,  1544,   157,   735,   736,  1926,    67,   325,  1991,
    1992,   726,   609,  1960,   611,     9,   613,   732,    12,   587,
    1967,  2039,    86,  1970,  1971,    19,    17,  2655,   251,  1976,
    1977,     3,     3,   567,  1238,  1577,  1270,  1981,  2265,    30,
     141,    32,  2654,    34,    35,   200,  1359,  1908,    39,    40,
     133,   221,     9,   279,    10,    12,   159,   160,   101,  2006,
    2646,    43,    19,    20,    21,   101,   169,   222,   176,   109,
     278,   304,   278,   105,  2276,    86,    85,   141,   110,     6,
     112,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    84,    38,   152,    12,   215,   106,
       9,    69,   105,    12,  2732,   178,    25,     3,   140,   168,
      19,   143,   111,  1655,  1656,  1657,  1417,  1659,  2212,   133,
     157,  1663,  1664,  1665,  1666,  1667,  1668,   159,    39,  2715,
      86,   200,    40,   117,   124,   141,   254,   140,   170,   247,
     157,   278,   141,    38,   279,    55,   107,   298,  2651,  1153,
      84,   646,    33,   222,    65,  2741,   279,    85,   316,   165,
     328,   278,   217,   153,   152,  2259,   217,   215,  2506,   153,
     131,   260,   183,    81,   274,   297,   293,    55,   272,   228,
     295,   303,   218,   141,   183,   336,  2524,   228,    69,  2527,
     124,   205,   350,  1494,   215,     4,   691,   237,  2536,   183,
     336,   323,   234,    69,   103,  1131,   164,  1133,   107,   136,
    2548,   254,   301,   302,    92,   298,   422,   136,   254,   162,
     116,   305,   278,   217,   260,   168,   159,   328,   103,   546,
     278,   234,   107,   244,   307,   267,   300,   165,   105,  1771,
       9,   301,   302,    12,  1408,   293,  2473,   355,   176,   482,
      19,    20,    21,   336,   309,   304,   482,   278,  1961,   482,
     217,  1964,  2874,   304,   296,   725,  2468,   162,  2290,   212,
    1164,  2774,   293,   168,   482,   896,   430,  2905,   260,   328,
      58,   271,   304,  1936,  1178,   292,   881,   328,   885,   217,
     278,   218,    38,   296,  2734,   306,   305,  1539,  2242,  1831,
    2052,  1505,   217,   317,  1478,   482,   328,  2359,   217,   843,
     324,  1533,   482,   281,   482,   309,   307,   212,  2238,   247,
     482,  1485,   336,   279,   295,   480,  1005,   222,   271,   383,
    1469,   482,   304,  2671,   469,  2051,  1648,   328,   933,  1881,
    1880,   480,   401,  2290,  2009,   482,   482,   364,  2686,   471,
     472,   473,   309,   383,  1280,  2299,   328,  2943,  2219,  2220,
     473,   480,   224,   480,   482,   484,   481,   159,   490,  1107,
     328,  1109,   431,   467,   468,     9,   271,   480,    12,   246,
    1095,   309,  1097,   490,   278,    19,    20,    21,   510,   480,
    2502,   480,   514,   430,  1073,  1660,  1661,  1662,   482,    38,
     309,  2513,   480,   480,  1669,   300,   480,   514,   480,  1006,
     484,  1090,   484,   535,   223,   537,   162,   316,   482,  2531,
     480,   543,   168,   486,   479,   547,   228,   355,   479,   551,
     537,  1973,   480,  2185,  2546,   244,   139,   486,   560,   561,
    2552,   316,  1684,   116,   157,   486,    67,  1462,   217,    92,
     482,  2720,  2470,   126,   157,   116,    99,  2479,   401,   480,
     103,   154,  1059,     3,   137,  2007,   212,   138,   482,  2221,
     183,   461,   462,   463,   464,   465,   466,   138,   472,   473,
     474,   475,   476,    55,   276,   479,   338,   144,   431,     3,
     268,   116,  2653,   165,   272,  2827,   348,    69,   165,   291,
     352,   274,   117,   494,   176,   496,   401,   138,    71,   176,
     181,    74,  2781,   470,   471,   472,   473,   474,   475,   476,
     181,   178,   479,   162,  1092,   271,   328,   421,   422,   168,
     308,    87,  2479,  2694,    50,  1148,   431,     0,   481,   482,
     309,  2559,   470,   471,   472,   473,   474,   475,   476,   220,
     181,   479,    10,   115,    70,  2893,  1153,  2895,   304,   220,
     486,   142,    97,   119,    22,   474,   475,   476,   183,  2222,
     479,  2840,   364,   212,   245,   247,   116,   270,     3,    92,
     247,  2284,  2564,   217,   245,    10,    99,   482,   133,   220,
     103,   364,  2245,   274,   219,  1216,   299,   159,   183,   244,
    2938,  2133,  2940,  1334,  1335,   250,  1285,   264,   159,  2210,
    1774,  2363,  1309,   144,   245,   150,  1237,  1791,   263,   170,
      38,   260,  1217,   336,  1303,  1304,  1891,  1892,   128,   129,
    2899,  1310,   271,  1527,  1094,  2300,  1530,   310,  2170,   761,
    1779,   763,  1955,   454,  2186,  2187,    34,   178,   761,   279,
     772,   294,   233,  1332,  2196,   401,   448,  1117,  1832,   244,
     205,    86,   784,  1342,  1906,   772,   238,  1909,  1910,  1348,
     313,  1835,  1894,   316,   397,   309,   347,  1911,  1852,    83,
    1411,  1412,  2951,   355,   265,   431,   347,  1402,   355,   467,
     468,  1370,  1933,  1408,   217,   270,   219,  2010,  2010,  2717,
      88,  1840,   471,   472,   473,   474,   475,   476,   351,   284,
     479,   138,   274,  2432,  1979,  1980,   347,   228,   276,   107,
    1985,   306,   844,   291,   259,   225,   848,   849,   116,  1994,
    1995,  1996,  1997,   264,   283,    38,   482,   274,   215,   143,
    1337,  2444,  2445,  2446,   162,  2464,  1343,    38,  2744,   397,
     168,   300,   874,   875,   181,   159,  2298,  1488,  1489,   881,
    2302,  2997,   401,   885,  1479,   145,   888,   874,   890,   480,
    1485,  3007,   317,   484,   480,   327,   898,   277,   484,   324,
     902,   294,   170,   905,   295,   337,  1465,   217,   340,   219,
     912,   336,   431,   220,   212,   902,   159,   919,   905,  2517,
     313,   278,  2520,   316,   222,   912,   217,  2049,   219,  2462,
    2528,   933,   239,   240,  2467,   480,   293,   328,   245,  2361,
    2054,   480,   202,   203,   204,   391,   319,   320,   269,   217,
      34,   219,  1617,  1618,    92,  1620,   277,   480,   472,   473,
     474,   475,   476,   482,   480,   479,   234,     6,     7,     8,
     343,    10,   480,   271,    13,    14,    15,    16,   110,   162,
    1645,   505,   506,   267,   508,   168,  1463,   433,   273,   274,
    2679,   162,   276,  2682,   262,   480,  2685,   168,   186,   187,
     480,  2690,   155,   156,    88,    89,   480,   291,   140,   480,
     198,   199,   296,   459,   460,   461,   230,   231,   480,   103,
     104,  2710,   480,   107,  2713,   311,   312,   159,   296,   212,
     480,   115,   116,   480,   118,   480,    12,   107,   170,   222,
     347,   212,    18,   480,    20,   480,  1621,  1622,  1623,  1624,
     480,  1198,  1627,  1200,   481,   482,  1203,   480,  1633,  1634,
     486,  1636,  1637,  1638,  1639,   278,  1641,  1642,  1643,  1644,
    1545,  1646,   480,  1075,  1649,   159,   214,  1079,  2611,   480,
     364,   686,   687,   688,   689,   690,  1079,   164,   271,   481,
     482,     3,   176,   481,   482,   480,  2218,   136,    10,  2961,
     271,   480,   234,   401,   481,   482,   481,   482,    66,   481,
     482,  1729,  1730,   481,   482,   480,  2135,   201,   350,   351,
     480,    92,   481,   482,   208,  1626,    38,   480,    99,  1131,
     480,  1133,   103,   431,   481,   482,   481,   482,  1478,   481,
     482,  1143,    54,  2445,  2446,  1147,   480,  1648,   232,   480,
      55,   481,   482,  2172,   480,  1157,   480,   241,   242,   243,
    1147,   480,  1955,  1165,    69,  1783,   480,  1785,   480,    91,
     183,  1672,  1174,   257,    86,   481,   482,  1772,   316,  1774,
     480,   319,   320,  2605,   482,  1187,  1188,  1174,   481,   482,
     217,   481,   482,   481,   482,  2921,  2922,   480,   480,   283,
     338,  1188,  1204,   481,   482,   343,   481,   482,   480,  1211,
     348,   295,   482,   480,  1216,  1217,   121,  1204,   401,   480,
     222,   480,   480,   480,  1211,   480,  1844,  2111,  1846,   151,
     401,   480,   316,  1235,  1236,   480,   148,   149,  1833,     3,
    1835,   163,  1235,  1236,   480,   167,    10,   480,   431,   154,
     162,   480,   164,   480,   480,   480,   168,   480,   480,   480,
     431,   480,   480,   480,   480,  1267,   132,  1269,   480,  2691,
    1829,  1273,   480,  1275,    38,   180,   480,   480,  1280,   480,
    1273,   480,   480,   480,   206,   207,   480,   209,   480,   480,
      54,  2574,   157,   480,   480,   480,   480,  1299,   480,   482,
     212,   480,   480,   480,   480,   480,  1299,   480,   480,    84,
     222,   482,   480,   480,   398,   480,   228,  2431,  2440,  2441,
     480,   480,    86,   294,   480,   480,   480,    67,  1905,   480,
     235,   480,   480,   238,   480,   480,   480,   480,   422,   480,
    2842,   480,   313,   480,   480,   316,   480,   252,   260,   480,
     480,   480,   480,   480,   480,   480,   480,   353,   481,   271,
     278,   453,   481,   481,   124,   270,   481,   481,   273,   274,
     486,  1948,    22,   176,   480,   139,   473,   481,   349,   350,
      55,   178,   100,   295,   148,   149,   141,  2203,   300,   180,
     100,   482,   304,   157,   295,   474,   480,    44,   162,   480,
     164,   270,   180,   176,   168,   284,   383,  1982,  1983,  1984,
    2203,    26,   270,    55,   273,  1990,   328,   328,   260,   141,
     303,   180,    37,   276,   273,    40,  1927,   114,    43,   235,
      45,   224,   222,   482,    49,  2209,   235,   222,   481,    54,
     132,   482,   486,   396,  2062,   487,   482,    62,   212,   100,
     305,  1791,    67,    68,   482,   481,   481,  2273,   222,   474,
     481,   481,    77,   481,   228,   481,    81,   481,   480,    84,
     481,   383,   481,   141,   482,   481,   481,   481,   481,   486,
    2273,   481,   481,   481,   481,   486,   481,  2609,  2610,   401,
     482,   481,  1832,   481,  2271,   481,   260,  1499,   481,  1501,
     481,   481,  1504,   481,   486,   219,   481,   271,   481,  2010,
     482,   481,  1852,   480,  1501,   480,   428,  1504,   486,   431,
     135,  1523,  2328,   161,    55,  2143,   482,    84,   482,   165,
     145,   295,  1534,   474,   482,   299,   300,  2439,  1540,   383,
     304,  1543,  2043,  1545,   159,    80,   273,  1534,   480,   482,
     279,   482,   482,   304,    10,    10,  1543,    10,    10,    10,
      10,    10,    10,  1565,   328,    10,    10,    10,    10,   481,
     482,    10,    10,  1575,  1576,    10,   482,   289,   222,   141,
      98,  1583,   244,   481,  1586,  1587,   482,   375,  1575,  1576,
    1583,   399,   220,  1586,  1587,   228,   220,   176,   220,   481,
     486,   481,   367,   368,   369,   370,   371,   176,   480,  2168,
     486,   278,   141,   481,   279,    69,  2761,  2762,  2763,   383,
     480,   236,   486,   486,   145,   141,   166,   392,   393,   394,
     395,   246,   486,   248,  2111,   486,   110,   401,   130,   169,
     275,   169,   407,   408,   409,   410,   275,   130,   413,  1651,
     482,   266,    98,   486,   300,    54,   482,   481,   481,   481,
     481,   481,   481,   459,   428,   481,   453,   431,   433,   434,
     481,   481,   481,   261,   481,   219,   481,  1679,   482,   481,
    1682,   482,   297,  2260,   482,   219,   481,     3,   480,     5,
     455,   456,  1679,   306,   178,   164,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   141,
      26,    27,   305,   482,    30,   229,    32,   481,   482,    35,
     474,    37,   141,   107,    40,   486,    42,    43,   168,   170,
     480,    47,    48,    49,   168,    51,    52,   174,    54,   480,
    2642,  2081,   170,    59,    60,    61,   480,    63,    64,   290,
      66,    67,    68,    69,   474,    71,   278,   222,    74,   327,
     481,   480,    78,    79,   327,    81,   238,   157,   481,   165,
     481,   487,    85,   481,    90,   481,   481,    81,   186,   486,
     481,    67,   401,    26,   100,   168,   168,   220,   104,   105,
     220,   480,   480,   170,    37,   170,   482,    40,   481,   481,
      43,    86,    45,   119,   120,   328,    49,   480,   125,   481,
    1812,    54,   411,   220,    46,   164,   482,   481,   481,    62,
     173,   482,   148,   482,    67,    68,   435,    10,   229,   145,
     168,   168,   305,   244,    77,   116,    67,   482,    81,   480,
     138,    84,   278,   116,   335,  2747,    98,   278,   482,   480,
     480,   274,   165,   480,   152,   480,   149,   480,  2359,  3004,
    2437,   481,   480,   176,   480,   109,   480,   168,   411,   481,
     480,   351,   278,   278,   278,   481,   481,   481,   480,  1881,
    1882,   220,   480,   181,   220,   351,   480,   220,   220,   219,
     116,   170,   135,   170,   480,   220,   220,  2474,   220,   220,
     220,   170,   145,   481,   217,   481,   177,    85,   300,   300,
     480,   482,  1914,   226,   227,   224,   159,   215,  1920,  1921,
     481,   219,   220,   481,  1926,  1927,  1928,   481,   301,   481,
     481,  1933,   481,   249,   247,   481,   481,   253,   220,   255,
    1942,    81,    98,    98,   260,    98,  1948,   245,   128,   187,
     222,   428,   220,   480,   480,    98,   481,    98,  1960,    98,
      10,   481,   246,   482,    82,  1967,   481,   157,  1970,  1971,
     482,   220,   480,    85,  1976,  1977,   177,   480,   191,  1981,
     278,   481,    10,   299,   481,  1670,   482,  2716,  1981,  1258,
      15,   894,  2557,   236,  1648,   293,   309,  2769,  2039,  2001,
     318,  2498,  1616,   246,  2006,   248,  1651,  2009,    34,  2011,
    2012,  2485,  2496,  2014,  2001,  2506,  2009,  2506,  2553,  2660,
    2796,  2701,   320,   266,  2693,  2935,  2910,  2911,  2927,  2913,
    2788,  2879,  1190,  2286,  2593,  2829,  2038,  2039,  2583,  2802,
    2010,  2293,   355,  1536,   342,   343,  1871,  1262,  1563,   347,
    2827,  2038,  2178,  1575,   297,  2939,  2557,  1857,   525,   884,
    1872,   797,    88,    89,  2641,  2742,  1188,   591,  2863,  1513,
    1300,   570,  2956,  2612,  2958,  2959,  3007,   103,   104,  2602,
    1877,   107,  1217,   562,  1699,   933,  2990,  1947,  2641,   115,
     116,  2469,   118,  2901,    26,   524,  1176,  1267,  1279,  2177,
     503,  1135,  2838,  2847,  2903,    37,  2917,  2474,    40,  1935,
    1143,    43,  1580,    45,   430,  2250,   905,    49,  1927,  2639,
    2459,  1504,    54,   520,  2759,   552,  1211,  1205,  1275,  2234,
      62,  2764,    -1,   159,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,   471,   472,
     473,   474,   475,   476,   480,    -1,   479,    -1,    -1,    -1,
      -1,    -1,   485,    -1,    -1,   201,  2178,    -1,    -1,    -1,
      -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2178,    -1,    -1,  2196,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,   135,    26,    -1,   232,    -1,    -1,    -1,
      32,    -1,    34,   145,    -1,   241,   242,   243,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
      -1,   257,  2234,    -1,    -1,    -1,  2238,    -1,    -1,    -1,
    2242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2250,  2242,
     184,   185,   186,   187,   188,   189,   190,   283,   192,   193,
     194,   195,   196,   197,   198,   199,    88,    89,    -1,   295,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,   104,    -1,    -1,   107,    -1,    -1,  2290,    -1,
     316,    -1,    -1,   115,   116,    -1,   118,  2299,  2300,    -1,
     122,   123,    -1,    -1,   236,   127,  2299,  2300,    -1,    -1,
      -1,    -1,    -1,    -1,   246,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   347,  2800,  2901,  2802,  2328,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   266,    -1,   158,   159,   363,    -1,
    2342,    -1,    -1,  2345,    -1,    -1,    -1,  2349,    -1,  2351,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2345,    -1,
      -1,    -1,   387,    -1,  2351,   297,    -1,    -1,    -1,    -1,
      -1,    -1,   398,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,
      -1,   416,    -1,    -1,    -1,    -1,   422,    -1,    -1,    -1,
      -1,  2776,  2777,  2778,    -1,    -1,   228,    -1,    -1,    -1,
     232,    -1,    -1,  2990,    -1,    -1,    -1,  2419,    -1,   241,
     242,   243,    -1,    -1,  2426,    -1,  2419,   249,    -1,    -1,
      -1,    -1,    -1,  2910,  2911,   257,  2913,    -1,    -1,    -1,
      -1,   466,   467,   468,   469,   470,    -1,  2449,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   482,    -1,    -1,    -1,
      -1,   283,  2939,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2474,   295,    -1,    -1,    -1,  2479,    -1,  2956,
      -1,  2958,  2959,  2485,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   316,    -1,  2498,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   568,    -1,    -1,   571,    -1,    -1,    -1,
      -1,    -1,   577,   578,    -1,   580,   581,   582,   583,    -1,
    2562,    -1,    -1,   588,   589,   590,    -1,    -1,    -1,    -1,
      -1,   596,  2574,   598,   599,   600,   398,    -1,    -1,   604,
      -1,  2574,    -1,   608,    -1,   610,    85,   612,    -1,   614,
     412,    -1,    -1,    -1,    -1,    -1,   621,    -1,    -1,   624,
     422,    -1,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,    -1,   638,   639,   640,   641,   642,   643,    -1,
      -1,    -1,    -1,   648,   649,    -1,   651,   652,   653,    -1,
     655,   656,   657,   658,   659,   660,   661,   662,   663,    -1,
      -1,    -1,   667,    -1,   669,   670,   671,   672,   673,  2651,
      -1,   676,   677,   678,   679,   680,   681,   682,   683,   684,
      -1,    -1,    -1,    -1,    -1,    -1,   165,   692,    -1,    -1,
      -1,    -1,   697,   698,   699,    -1,    -1,   176,    -1,    -1,
      -1,    -1,   707,    -1,    -1,    -1,   711,    -1,   713,    -1,
      -1,  2693,    -1,    -1,    -1,    -1,   721,   722,   723,   724,
    2693,    -1,    -1,   728,   729,   730,   731,    -1,   733,   734,
     735,   736,   737,   738,   739,   740,   741,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,  2731,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,  2731,    -1,    -1,    -1,   247,    -1,
      -1,  2753,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,  2774,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2785,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2829,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,    -1,
      -1,  2863,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    88,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,   103,   104,    -1,    -1,   107,  2921,
    2922,    -1,  2924,   176,    -1,    -1,   115,   116,    -1,   118,
      -1,    -1,    -1,    -1,  2936,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,   165,    -1,   971,   226,   227,    -1,
    2952,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,   247,    -1,
     159,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    -1,    -1,    -1,    -1,    -1,   485,    -1,  2990,    -1,
      -1,    -1,    -1,    -1,   247,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,   208,
      -1,    -1,    -1,  1048,  1049,  1050,   247,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   241,   242,   243,  1080,   309,    -1,  1083,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,
      -1,  1096,    -1,    -1,    -1,    -1,   355,    -1,    -1,   300,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    -1,    -1,  1118,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   355,    -1,    -1,    -1,   295,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,
      -1,    -1,    -1,    -1,   355,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    -1,   481,   482,    -1,    -1,    -1,    -1,    -1,   398,
      -1,    -1,    -1,    -1,    -1,    85,    -1,   470,   471,   472,
     473,   474,   475,   476,    -1,    -1,   479,    -1,    -1,    -1,
      -1,    -1,    -1,   422,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,  1282,   479,  1284,
      -1,   482,    -1,  1288,    -1,    -1,    -1,    -1,    -1,  1294,
    1295,    -1,    -1,    -1,    -1,  1300,    -1,    -1,    -1,    -1,
      -1,  1306,    -1,  1308,    -1,    -1,    -1,  1312,  1313,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,  1322,    -1,    -1,
    1325,    -1,    -1,    -1,    -1,  1330,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1339,    -1,  1341,    -1,    -1,    -1,
    1345,  1346,  1347,    -1,    -1,    -1,  1351,    -1,  1353,    -1,
    1355,    -1,  1357,    -1,    -1,    -1,  1361,    -1,  1363,    -1,
    1365,    -1,  1367,    -1,  1369,    -1,  1371,   217,    -1,    -1,
      -1,  1376,    -1,  1378,    -1,  1380,   226,   227,    -1,    -1,
      -1,    -1,    -1,  1388,  1389,    -1,  1391,    -1,  1393,  1394,
      -1,    -1,  1397,  1398,  1399,  1400,  1401,   247,    -1,  1404,
    1405,  1406,  1407,    -1,  1409,  1410,  1411,  1412,  1413,  1414,
    1415,  1416,  1417,    -1,  1419,  1420,    -1,  1422,    -1,  1424,
    1425,  1426,  1427,  1428,    -1,  1430,    -1,  1432,    -1,  1434,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1445,    -1,    -1,  1448,  1449,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,   309,
      -1,    -1,    -1,    -1,    -1,  1470,  1471,    -1,    -1,  1474,
    1475,  1476,  1477,    -1,    -1,    -1,  1481,  1482,  1483,  1484,
      -1,  1486,  1487,  1488,  1489,  1490,  1491,  1492,  1493,  1494,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1507,    -1,    -1,   355,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
    1605,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,   479,
      85,   481,   482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   176,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1705,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,    -1,  1721,    -1,    -1,  1724,
      -1,   176,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     217,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,   226,
     227,    -1,    -1,   217,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,  1763,    -1,
     247,    -1,   217,    -1,    -1,    -1,    -1,    -1,  1773,    -1,
      -1,   226,   227,   247,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,
    1795,   355,   247,    -1,    -1,    -1,  1801,    -1,  1803,    -1,
    1805,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1819,    -1,    -1,  1822,    -1,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,  1834,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   355,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
     355,    -1,    -1,    -1,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,   355,    -1,   479,    -1,   481,   482,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1943,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   470,   471,   472,   473,   474,   475,   476,
      -1,    -1,   479,    -1,   481,   482,   470,   471,   472,   473,
     474,   475,   476,    -1,    -1,   479,    -1,   481,   482,    -1,
      -1,    -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,
     475,   476,    -1,    -1,   479,    -1,   481,   482,   470,   471,
     472,   473,   474,   475,   476,    85,    -1,   479,   165,   481,
     482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,  2061,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,  2076,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2086,    -1,    -1,    -1,    -1,    -1,  2092,  2093,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2103,   226,
     227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2115,    -1,    -1,    -1,  2119,   165,    -1,  2122,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,
      -1,  2136,    -1,    85,    -1,  2140,    -1,    -1,    -1,    -1,
    2145,    -1,    -1,  2148,  2149,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,  2173,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,   176,    -1,    -1,    -1,   355,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,  2251,    -1,    -1,  2254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,  2281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
    2305,   165,    -1,    -1,    -1,   355,    -1,    -1,    85,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   470,   471,   472,   473,   474,   475,   476,
      -1,    -1,   479,   217,   481,   482,    -1,   309,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   165,    -1,
      -1,  2396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,    -1,   355,    -1,  2410,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,   479,
      -1,   481,   482,    -1,    -1,    -1,    -1,  2442,    -1,    -1,
     217,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,   226,
     227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,   471,
     472,   473,   474,   475,   476,    -1,    -1,   479,    -1,   481,
     482,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2567,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2580,    -1,  2582,   355,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,    -1,    -1,   479,    -1,   481,   482,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2639,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2655,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   470,   471,   472,   473,   474,   475,   476,
      -1,    -1,   479,    -1,   481,   482,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2732,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2749,    -1,  2751,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
    2835,    80,    -1,    82,    83,    -1,  2841,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      99,   100,    -1,   102,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,   147,    -1,
    2905,   150,   151,   152,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,  2920,    -1,   166,   167,    -1,
      -1,    -1,   171,   172,   173,   174,    -1,    -1,    -1,   178,
     179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,  3000,   245,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,   278,
      -1,   280,   281,   282,   283,    -1,   285,   286,   287,   288,
      -1,    -1,   291,   292,   293,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,   302,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,   316,   317,   318,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,   353,   354,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,    -1,    -1,
      -1,    -1,   371,   372,   373,   374,    -1,   376,   377,   378,
     379,   380,   381,   382,    -1,   384,   385,   386,   387,   388,
     389,   390,   391,    -1,    -1,    -1,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,    -1,
      -1,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,    -1,
     429,   430,   431,   432,   433,    -1,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,    -1,   454,    -1,   456,   457,   458,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
      -1,    -1,    -1,   472,   473,    -1,    -1,    -1,   477,    -1,
      -1,   480,    -1,    -1,   483,   484,    -1,   486,   487,   488,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    82,    83,
      84,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,   102,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,   113,
      -1,   115,   116,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,   147,    -1,    -1,   150,   151,   152,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,   172,   173,
     174,    -1,    -1,    -1,   178,   179,   180,   181,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,   245,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,   278,    -1,    -1,   281,   282,   283,
      -1,   285,   286,   287,   288,    -1,    -1,   291,   292,   293,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,   302,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,   316,   317,   318,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,   353,
     354,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,    -1,    -1,    -1,    -1,   371,   372,   373,
     374,    -1,   376,   377,   378,   379,   380,   381,   382,    -1,
     384,   385,   386,   387,   388,   389,   390,   391,    -1,    -1,
      -1,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,    -1,    -1,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,    -1,   429,   430,   431,   432,   433,
      -1,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,    -1,
     454,    -1,   456,   457,   458,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,    -1,    -1,    -1,   472,   473,
      -1,    -1,    -1,   477,    -1,    -1,   480,    -1,    -1,   483,
     484,    -1,   486,   487,   488,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,   102,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,   147,    -1,
      -1,   150,   151,   152,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,   172,   173,   174,    -1,    -1,    -1,   178,
     179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,   245,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,   278,
      -1,    -1,   281,   282,   283,    -1,   285,   286,   287,   288,
      -1,    -1,   291,   292,   293,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,   302,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,   316,   317,   318,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,   353,   354,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,    -1,    -1,
      -1,    -1,   371,   372,   373,   374,    -1,   376,   377,   378,
     379,   380,   381,   382,    -1,   384,   385,   386,   387,   388,
     389,   390,   391,    -1,    -1,    -1,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,    -1,
      -1,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,    -1,
     429,   430,   431,   432,   433,    -1,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,    -1,   454,    -1,   456,   457,   458,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
      -1,    -1,    -1,   472,   473,    -1,    -1,    -1,   477,    -1,
      -1,   480,    -1,    -1,   483,   484,    -1,   486,   487,   488,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,   102,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,   113,
      -1,   115,   116,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,   147,    -1,    -1,   150,   151,   152,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,   172,   173,
     174,    -1,    -1,    -1,   178,   179,   180,   181,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,   245,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,   278,    -1,    -1,   281,   282,   283,
      -1,   285,   286,   287,   288,    -1,    -1,   291,   292,   293,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,   302,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,   316,   317,   318,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,   353,
     354,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,    -1,    -1,    -1,    -1,   371,   372,   373,
     374,    -1,   376,   377,   378,   379,   380,   381,   382,    -1,
     384,   385,   386,   387,   388,   389,   390,   391,    -1,    -1,
      -1,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,    -1,    -1,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,    -1,   429,   430,   431,   432,   433,
      -1,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,    -1,
     454,    -1,   456,   457,   458,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,    -1,    -1,    -1,   472,   473,
      -1,    -1,    -1,   477,    -1,    -1,   480,   481,    -1,   483,
     484,    -1,   486,   487,   488,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,   102,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,   147,    -1,
      -1,   150,   151,   152,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,   172,   173,   174,    -1,    -1,    -1,   178,
     179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,   245,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,   278,
      -1,    -1,   281,   282,   283,    -1,   285,   286,   287,   288,
      -1,    -1,   291,   292,   293,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,   302,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,   316,   317,   318,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,   353,   354,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,    -1,    -1,
      -1,    -1,   371,   372,   373,   374,    -1,   376,   377,   378,
     379,   380,   381,   382,    -1,   384,   385,   386,   387,   388,
     389,   390,   391,    -1,    -1,    -1,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,    -1,
      -1,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,    -1,
     429,   430,   431,   432,   433,    -1,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,    -1,   454,    -1,   456,   457,   458,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
      -1,    -1,    -1,   472,   473,    -1,    -1,    -1,   477,    -1,
      -1,   480,   481,    -1,   483,   484,    -1,   486,   487,   488,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,   102,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,   113,
      -1,   115,   116,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,   147,    -1,    -1,   150,   151,   152,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,   172,   173,
     174,    -1,    -1,    -1,   178,   179,   180,   181,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,   245,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,   278,    -1,    -1,   281,   282,   283,
      -1,   285,   286,   287,   288,    -1,    -1,   291,   292,   293,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,   302,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,   316,   317,   318,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,   353,
     354,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,    -1,    -1,    -1,    -1,   371,   372,   373,
     374,    -1,   376,   377,   378,   379,   380,   381,   382,    -1,
     384,   385,   386,   387,   388,   389,   390,   391,    -1,    -1,
      -1,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,    -1,    -1,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,    -1,   429,   430,   431,   432,   433,
      -1,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,    -1,
     454,    -1,   456,   457,   458,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,    -1,    -1,    -1,   472,   473,
      -1,    -1,    -1,   477,    -1,    -1,   480,   481,    -1,   483,
     484,    -1,   486,   487,   488,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,   102,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,   147,    -1,
      -1,   150,   151,   152,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,   172,   173,   174,    -1,    -1,    -1,   178,
     179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,   245,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,   278,
      -1,    -1,   281,   282,   283,    -1,   285,   286,   287,   288,
      -1,    -1,   291,   292,   293,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,   302,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,   316,   317,   318,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,   353,   354,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,    -1,    -1,
      -1,    -1,   371,   372,   373,   374,    -1,   376,   377,   378,
     379,   380,   381,   382,    -1,   384,   385,   386,   387,   388,
     389,   390,   391,    -1,    -1,    -1,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,    -1,
      -1,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,    -1,
     429,   430,   431,   432,   433,    -1,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,    -1,   454,    -1,   456,   457,   458,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
      -1,    -1,    -1,   472,   473,    -1,    -1,    -1,   477,    -1,
      -1,   480,   481,    -1,   483,   484,    -1,   486,   487,   488,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    82,    83,
      84,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,   102,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,   113,
      -1,   115,   116,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,   147,    -1,    -1,   150,   151,   152,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,   172,   173,
     174,    -1,    -1,    -1,   178,   179,   180,   181,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,   245,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,   278,    -1,    -1,   281,   282,   283,
      -1,   285,   286,   287,   288,    -1,    -1,   291,   292,   293,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,   302,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,   316,   317,   318,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,   353,
     354,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,    -1,    -1,    -1,    -1,   371,   372,   373,
     374,    -1,   376,   377,   378,   379,   380,   381,   382,    -1,
     384,   385,   386,   387,   388,   389,   390,   391,    -1,    -1,
      -1,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,    -1,    -1,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,    -1,   429,   430,   431,   432,   433,
      -1,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,    -1,
     454,    -1,   456,   457,   458,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,    -1,    -1,    -1,   472,   473,
      -1,    -1,    -1,   477,    -1,    -1,   480,    -1,    -1,   483,
     484,    -1,   486,   487,   488,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,   102,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,   141,   142,    -1,   144,    -1,   146,   147,    -1,
      -1,   150,   151,   152,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,   172,   173,   174,    -1,    -1,    -1,   178,
     179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,   245,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,   278,
      -1,    -1,   281,   282,   283,    -1,   285,   286,   287,   288,
      -1,    -1,   291,   292,   293,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,   302,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,   316,   317,   318,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,   353,   354,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,    -1,    -1,
      -1,    -1,   371,   372,   373,   374,    -1,   376,   377,   378,
     379,   380,   381,   382,    -1,   384,   385,   386,   387,   388,
     389,   390,   391,    -1,    -1,    -1,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,    -1,
      -1,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,    -1,
     429,   430,   431,   432,   433,    -1,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,    -1,   454,    -1,   456,   457,   458,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
      -1,    -1,    -1,   472,   473,    -1,    -1,    -1,   477,    -1,
      -1,   480,    -1,    -1,   483,   484,    -1,   486,   487,   488,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,   102,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,   113,
      -1,   115,   116,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,   141,   142,    -1,
     144,    -1,   146,   147,    -1,    -1,   150,   151,   152,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,   172,   173,
     174,    -1,    -1,    -1,   178,   179,   180,   181,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,   245,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,   278,    -1,    -1,   281,   282,   283,
      -1,   285,   286,   287,   288,    -1,    -1,   291,   292,   293,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,   302,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,   316,   317,   318,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,   353,
     354,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,    -1,    -1,    -1,    -1,   371,   372,   373,
     374,    -1,   376,   377,   378,   379,   380,   381,   382,    -1,
     384,   385,   386,   387,   388,   389,   390,   391,    -1,    -1,
      -1,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,    -1,    -1,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,    -1,   429,   430,   431,   432,   433,
      -1,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,    -1,
     454,    -1,   456,   457,   458,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,    -1,    -1,    -1,   472,   473,
      -1,    -1,    -1,   477,    -1,    -1,   480,    -1,    -1,   483,
     484,    -1,   486,   487,   488,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,   102,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,   141,   142,    -1,   144,    -1,   146,   147,    -1,
      -1,   150,   151,   152,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,   172,   173,   174,    -1,    -1,    -1,   178,
     179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,   245,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,   278,
      -1,    -1,   281,   282,   283,    -1,   285,   286,   287,   288,
      -1,    -1,   291,   292,   293,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,   302,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,   316,   317,   318,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,   353,   354,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,    -1,    -1,
      -1,    -1,   371,   372,   373,   374,    -1,   376,   377,   378,
     379,   380,   381,   382,    -1,   384,   385,   386,   387,   388,
     389,   390,   391,    -1,    -1,    -1,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,    -1,
      -1,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,    -1,
     429,   430,   431,   432,   433,    -1,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,    -1,   454,    -1,   456,   457,   458,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
      -1,    -1,    -1,   472,   473,    -1,    -1,    -1,   477,    -1,
      -1,   480,    -1,    -1,   483,   484,    -1,   486,   487,   488,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,   102,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,   113,
      -1,   115,   116,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,   147,    -1,    -1,   150,   151,   152,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,   172,   173,
     174,    -1,    -1,    -1,   178,   179,   180,   181,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,   245,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,   278,    -1,    -1,   281,   282,   283,
      -1,   285,   286,   287,   288,    -1,    -1,   291,   292,   293,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,   302,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,   316,   317,   318,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,   353,
     354,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,    -1,    -1,    -1,    -1,   371,   372,   373,
     374,    -1,   376,   377,   378,   379,   380,   381,   382,    -1,
     384,   385,   386,   387,   388,   389,   390,   391,    -1,    -1,
      -1,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,    -1,    -1,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,    -1,   429,   430,   431,   432,   433,
      -1,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,    -1,
     454,    -1,   456,   457,   458,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,    -1,    -1,    -1,   472,   473,
      -1,    -1,    -1,   477,    -1,    -1,   480,    -1,    -1,   483,
     484,    -1,   486,   487,   488,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,   102,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,   147,    -1,
      -1,   150,   151,   152,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,   172,   173,   174,    -1,    -1,    -1,   178,
     179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,   245,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,   278,
      -1,    -1,   281,   282,   283,    -1,   285,   286,   287,   288,
      -1,    -1,   291,   292,   293,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,   302,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,   316,   317,   318,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,   353,   354,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,    -1,    -1,
      -1,    -1,   371,   372,   373,   374,    -1,   376,   377,   378,
     379,   380,   381,   382,    -1,   384,   385,   386,   387,   388,
     389,   390,   391,    -1,    -1,    -1,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,    -1,
      -1,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,    -1,
     429,   430,   431,   432,   433,    -1,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,    -1,   454,    -1,   456,   457,   458,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
      -1,    -1,    -1,   472,   473,    -1,    -1,    -1,   477,    -1,
      -1,   480,    -1,    -1,   483,   484,    -1,   486,   487,   488,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    57,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,   102,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,   113,
      -1,   115,   116,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,   147,    -1,    -1,   150,   151,   152,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,   172,   173,
     174,    -1,    -1,    -1,   178,   179,   180,   181,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,   215,   216,   217,   218,   219,   220,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,   245,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,   278,    -1,    -1,   281,   282,   283,
      -1,   285,   286,   287,   288,    -1,    -1,   291,   292,   293,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,   302,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,   316,   317,   318,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,   353,
     354,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,    -1,    -1,    -1,    -1,   371,   372,   373,
     374,    -1,   376,   377,   378,   379,   380,   381,   382,    -1,
     384,   385,   386,   387,   388,   389,   390,   391,    -1,    -1,
      -1,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,    -1,    -1,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,    -1,   429,   430,   431,   432,   433,
      -1,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   451,   452,    -1,
     454,    -1,   456,   457,   458,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,    -1,    -1,    -1,   472,   473,
      -1,    -1,    -1,   477,    -1,    -1,   480,    -1,    -1,   483,
     484,    -1,   486,   487,   488,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    -1,    -1,    53,    -1,    55,    56,    57,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,   102,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,   113,    -1,   115,   116,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,   147,    -1,
      -1,   150,   151,   152,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,   172,   173,   174,    -1,    -1,    -1,   178,
     179,   180,   181,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,   215,   216,   217,   218,
     219,   220,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,   245,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,   278,
      -1,    -1,   281,   282,   283,    -1,   285,   286,   287,   288,
      -1,    -1,   291,   292,   293,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,   302,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,   316,   317,   318,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,   353,   354,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,    -1,    -1,
      -1,    -1,   371,   372,   373,   374,    -1,   376,   377,   378,
     379,   380,   381,   382,    -1,   384,   385,   386,   387,   388,
     389,   390,   391,    -1,    -1,    -1,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,    -1,
      -1,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,    -1,
     429,   430,   431,   432,   433,    -1,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,    -1,   454,    -1,   456,   457,   458,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
      -1,    -1,    -1,   472,   473,    -1,    -1,    -1,   477,    -1,
      -1,   480,    -1,    -1,   483,   484,    -1,   486,   487,   488,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    53,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    -1,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,    -1,   133,
      -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,
     174,   175,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,    -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,   278,    -1,    -1,   281,    -1,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,
      -1,   395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,
      -1,    -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,
      -1,    -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,
     424,    -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,
     454,    -1,   456,    -1,    -1,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   487,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    -1,    -1,    74,    -1,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    -1,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,    -1,    -1,   115,   116,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,    -1,   133,    -1,   135,   136,   137,    -1,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,
      -1,   150,   151,    -1,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,
      -1,   180,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,    -1,   216,    -1,   218,
      -1,    -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,   316,   317,    -1,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,
      -1,    -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,
      -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,
      -1,   410,   411,   412,   413,    -1,    -1,    -1,   417,   418,
     419,    -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,
      -1,    -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,
      -1,    -1,    -1,    -1,    -1,   454,    -1,   456,    -1,    -1,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    53,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    -1,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,    -1,   133,
      -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,
     174,   175,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,    -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,   278,    -1,    -1,   281,    -1,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,
      -1,   395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,
      -1,    -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,
      -1,    -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,
     424,    -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,
     454,    -1,   456,    -1,    -1,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   487,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    -1,    -1,    74,    -1,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    -1,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,   112,    -1,    -1,   115,    -1,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,    -1,   133,    -1,   135,   136,   137,    -1,
      -1,    -1,    -1,   142,   143,   144,    -1,   146,    -1,    -1,
      -1,   150,   151,    -1,    -1,   154,   155,   156,    -1,   158,
     159,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,   170,    -1,    -1,   173,   174,    -1,   176,    -1,   178,
      -1,   180,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,    -1,   216,    -1,   218,
      -1,    -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,   267,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,
      -1,    -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,
      -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,
      -1,   410,   411,   412,   413,    -1,    -1,    -1,   417,   418,
     419,    -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,
      -1,    -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,
      -1,    -1,    -1,    -1,    -1,   454,    -1,   456,    -1,    -1,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    53,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    -1,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,
      -1,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,    -1,   133,
      -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,   143,
     144,    -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,
     154,   155,   156,    -1,   158,   159,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,   170,    -1,    -1,   173,
     174,    -1,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,    -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,   267,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,    -1,    -1,    -1,   281,    -1,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,
      -1,   395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,
      -1,    -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,
      -1,    -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,
     424,    -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,
     454,    -1,   456,    -1,    -1,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   486,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    -1,    -1,    74,    -1,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    -1,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,    -1,   133,    -1,   135,   136,   137,    -1,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,
      -1,   150,   151,    -1,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,
      -1,   180,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,    -1,   216,    -1,   218,
      -1,    -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,
      -1,    -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,
      -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,
      -1,   410,   411,   412,   413,    -1,    -1,    -1,   417,   418,
     419,    -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,
      -1,    -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,
      -1,    -1,    -1,    -1,    -1,   454,    -1,   456,    -1,    -1,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,   481,    -1,    -1,    -1,    -1,   486,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    53,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    -1,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,    -1,   133,
      -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
     164,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,
     174,    -1,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,    -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,    -1,    -1,    -1,   281,    -1,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,
      -1,   395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,
      -1,    -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,
      -1,    -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,
     424,    -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,
     454,    -1,   456,    -1,    -1,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   486,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    -1,    -1,    74,    -1,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    -1,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,    -1,   133,    -1,   135,   136,   137,    -1,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,
      -1,   150,   151,    -1,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,
      -1,   180,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,    -1,   216,    -1,   218,
      -1,    -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,
      -1,    -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,
      -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,
      -1,   410,   411,   412,   413,    -1,    -1,    -1,   417,   418,
     419,    -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,
      -1,    -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,
      -1,    -1,    -1,    -1,    -1,   454,    -1,   456,    -1,    -1,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
       4,     5,     6,     7,     8,   474,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    53,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    -1,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,    -1,   133,
      -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,
     174,    -1,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,    -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,    -1,    -1,    -1,   281,    -1,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,
      -1,   395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,
      -1,    -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,
      -1,    -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,
     424,    -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,
     454,    -1,   456,    -1,    -1,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,   480,    -1,    -1,    -1,
      -1,    -1,   486,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    -1,    -1,    74,    -1,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    -1,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,    -1,   133,    -1,   135,   136,   137,    -1,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,
      -1,   150,   151,    -1,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,
      -1,   180,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,    -1,   216,    -1,   218,
      -1,    -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,
      -1,    -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,
      -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,
      -1,   410,   411,   412,   413,    -1,    -1,    -1,   417,   418,
     419,    -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,
      -1,    -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,
      -1,    -1,    -1,    -1,    -1,   454,    -1,   456,    -1,    -1,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,   481,    -1,    -1,    -1,    -1,   486,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    53,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    -1,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,    -1,   133,
      -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,
     174,    -1,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,    -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,    -1,    -1,    -1,   281,    -1,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,
      -1,   395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,
      -1,    -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,
      -1,    -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,
     424,    -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,
     454,    -1,   456,    -1,    -1,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   486,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    -1,    -1,    74,    -1,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    -1,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,    -1,   133,    -1,   135,   136,   137,    -1,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,
      -1,   150,   151,    -1,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,
      -1,   180,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,    -1,   216,    -1,   218,
      -1,    -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,
      -1,    -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,
      -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,
      -1,   410,   411,   412,   413,    -1,    -1,    -1,   417,   418,
     419,    -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,
      -1,    -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,
      -1,    -1,    -1,    -1,    -1,   454,    -1,   456,    -1,    -1,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,
      -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    50,    -1,    -1,    53,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    -1,    76,    77,    78,    -1,    80,    -1,    82,    83,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,
      94,    95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,
     104,    -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,    -1,    -1,   130,   131,    -1,   133,
      -1,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
     144,    -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,
     154,   155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,
     174,    -1,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,
     184,   185,   186,   187,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,   213,
     214,    -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,
      -1,    -1,   236,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,
      -1,    -1,   256,   257,   258,   259,    -1,    -1,   262,   263,
     264,   265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,
      -1,   275,   276,    -1,    -1,    -1,    -1,   281,    -1,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,
     294,    -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,
      -1,    -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,
      -1,    -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,
     324,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,   340,   341,   342,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,
      -1,   395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,
      -1,    -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,
      -1,    -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,
     424,    -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,
     454,    -1,   456,    -1,    -1,   459,    -1,    -1,   462,    -1,
     464,    -1,   466,   467,   468,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   486,    -1,    -1,    -1,    25,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,    48,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,
      -1,    -1,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    -1,    -1,    74,    -1,    76,    77,    78,
      -1,    80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    -1,    93,    94,    95,    -1,    97,    -1,
      99,   100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,
      -1,    -1,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,   126,   127,    -1,
      -1,   130,   131,    -1,   133,    -1,   135,   136,   137,    -1,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,
      -1,   150,   151,    -1,    -1,   154,   155,   156,    -1,   158,
      -1,   160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,
      -1,   180,    -1,    -1,    -1,   184,   185,   186,   187,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,    -1,   213,   214,    -1,   216,    -1,   218,
      -1,    -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,   233,    -1,    -1,   236,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,
      -1,   250,    -1,   252,   253,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,
      -1,    -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,
      -1,    -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,
      -1,   310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,
     319,   320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,   340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   353,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,   371,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,   388,
      -1,    -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,
      -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,
      -1,   410,   411,   412,   413,    -1,    -1,    -1,   417,   418,
     419,    -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,
      -1,    85,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,
      85,    -1,    -1,    -1,    -1,   454,    -1,   456,    -1,    -1,
     459,    -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   486,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   176,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,   247,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     355,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
     227,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,   176,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,    -1,    -1,   479,    -1,   481,   482,    -1,
      -1,    -1,    -1,   247,    -1,   470,   471,   472,   473,   474,
     475,   476,   309,   217,   479,    -1,   481,   482,    -1,    -1,
      -1,    -1,   226,   227,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,
      -1,    -1,   176,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,   217,    -1,   309,    -1,    -1,    -1,    -1,
      -1,   355,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,   355,    -1,    -1,    85,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   470,   471,   472,   473,   474,   475,   476,
      -1,   165,   479,    -1,   481,   482,    -1,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   470,   471,   472,   473,
     474,   475,   476,   217,   165,   479,    -1,   481,   482,    -1,
      -1,   355,   226,   227,    -1,   176,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,   247,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,    -1,    -1,   479,    -1,   481,   482,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    85,
     165,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,    -1,    -1,   479,    -1,   481,   482,   165,
      -1,   355,   247,    -1,    -1,    -1,    -1,    -1,   309,    -1,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,   355,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,   309,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,   247,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     355,    -1,    -1,    -1,   247,    -1,   470,   471,   472,   473,
     474,   475,   476,    -1,    -1,   479,    -1,    -1,   482,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,   309,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,   309,    -1,   479,    -1,
     481,   482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,   165,   355,    -1,    -1,   470,   471,   472,   473,   474,
     475,   476,   176,    -1,   479,    -1,   481,   482,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,   247,   470,   471,   472,   473,   474,   475,
     476,   176,    -1,   479,    -1,   481,   482,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,   470,   471,   472,
     473,   474,   475,   476,    -1,    -1,   479,    -1,   481,   482,
      -1,    -1,   217,    -1,    -1,   165,    -1,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,   309,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   176,    -1,
     165,   355,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      85,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     355,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,    -1,    -1,   479,    -1,   481,   482,    -1,
     165,   309,    -1,    -1,    -1,   355,    -1,    -1,    -1,    -1,
      -1,   176,    -1,    -1,   309,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     355,   226,   227,    -1,    -1,   470,   471,   472,   473,   474,
     475,   476,    -1,    -1,   479,    -1,   481,   482,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,   479,
      -1,   481,   482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   470,   471,   472,   473,   474,   475,   476,    -1,
      -1,   479,   165,    -1,   482,   470,   471,   472,   473,   474,
     475,   476,    -1,   176,   479,   165,    -1,   482,    -1,    -1,
     355,    -1,    -1,    -1,    -1,    -1,   176,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,    -1,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,
     475,   476,    -1,    -1,   479,    -1,   309,   482,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   355,    -1,   176,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   355,    -1,   176,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,   471,   472,
     473,   474,   475,   476,    -1,    -1,   479,    -1,    -1,   482,
     470,   471,   472,   473,   474,   475,   476,   309,    -1,   479,
      -1,    -1,   482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   355,    -1,   176,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,   176,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,   471,
     472,   473,   474,   475,   476,    -1,    -1,   479,    -1,    -1,
     482,   470,   471,   472,   473,   474,   475,   476,   309,    -1,
     479,    -1,    -1,   482,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   355,    -1,   176,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,   176,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
     227,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,    -1,   479,    -1,
      -1,   482,   470,   471,   472,   473,   474,   475,   476,   309,
      -1,   479,    -1,    -1,   482,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   355,    -1,   176,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,
     176,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,   479,
      -1,    -1,   482,   470,   471,   472,   473,   474,   475,   476,
     309,    -1,   479,    -1,    -1,   482,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,   176,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,
      -1,   176,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    -1,    -1,   482,   470,   471,   472,   473,   474,   475,
     476,   309,    -1,   479,    -1,    -1,   482,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,   176,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     355,    -1,   176,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
     227,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   470,   471,   472,   473,   474,   475,   476,    -1,
      -1,   479,    -1,    -1,   482,   470,   471,   472,   473,   474,
     475,   476,   309,    -1,   479,    -1,    -1,   482,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,
     176,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,    -1,   176,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   470,   471,   472,   473,   474,   475,   476,
      -1,    -1,   479,    -1,    -1,   482,   470,   471,   472,   473,
     474,   475,   476,   309,    -1,   479,    -1,    -1,   482,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,
      -1,   176,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   355,    -1,   176,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,   479,    -1,    -1,   482,   470,   471,   472,
     473,   474,   475,   476,   309,    -1,   479,    -1,    -1,   482,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     355,    -1,   176,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   355,    -1,   176,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,
     475,   476,    -1,    -1,   479,    -1,    -1,   482,   470,   471,
     472,   473,   474,   475,   476,   309,    -1,   479,    -1,    -1,
     482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,    -1,   176,    -1,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   355,    -1,   176,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,    -1,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,    -1,    -1,   479,    -1,    -1,   482,   470,
     471,   472,   473,   474,   475,   476,   309,    -1,   479,    -1,
      -1,   482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   355,    -1,   176,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   355,    -1,   176,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,   471,   472,
     473,   474,   475,   476,    -1,    -1,   479,    -1,    -1,   482,
     470,   471,   472,   473,   474,   475,   476,   309,    -1,   479,
      -1,    -1,   482,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   355,    -1,   176,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,   176,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,   471,
     472,   473,   474,   475,   476,    -1,    -1,   479,    -1,    -1,
     482,   470,   471,   472,   473,   474,   475,   476,   309,    -1,
     479,    -1,    -1,   482,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   355,    -1,   176,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,   176,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
     227,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,    -1,   479,    -1,
      -1,   482,   470,   471,   472,   473,   474,   475,   476,   309,
      -1,   479,    -1,    -1,   482,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   355,    -1,   176,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,
     176,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,   479,
      -1,    -1,   482,   470,   471,   472,   473,   474,   475,   476,
     309,    -1,   479,    -1,    -1,   482,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,   176,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,
      -1,   176,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    -1,    -1,   482,   470,   471,   472,   473,   474,   475,
     476,   309,    -1,   479,    -1,    -1,   482,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,   176,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     355,    -1,   176,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
     227,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   470,   471,   472,   473,   474,   475,   476,    -1,
      -1,   479,    -1,    -1,   482,   470,   471,   472,   473,   474,
     475,   476,   309,    -1,   479,    -1,    -1,   482,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,
     176,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,    -1,   176,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   470,   471,   472,   473,   474,   475,   476,
      -1,    -1,   479,    -1,    -1,   482,   470,   471,   472,   473,
     474,   475,   476,   309,    -1,   479,    -1,   481,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,
      -1,   176,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   355,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   383,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,   217,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,   479,    -1,   481,   165,   470,   471,   472,
     473,   474,   475,   476,   309,    -1,   479,   176,   481,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,   217,    -1,
     355,    -1,    -1,    -1,   165,    -1,    -1,   226,   227,    -1,
      -1,    -1,    -1,   355,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,   226,   227,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,
     475,   476,    -1,    -1,   479,    -1,   481,   165,   470,   471,
     472,   473,   474,   475,   476,    -1,   355,   479,   176,   481,
     165,    -1,    -1,    -1,    85,    -1,    -1,    -1,   309,    -1,
      -1,   176,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,   217,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,   226,   227,
      -1,    -1,   217,    -1,   355,    -1,   176,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,   165,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,   217,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    -1,   481,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,   309,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,   226,   227,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,   165,   470,
     471,   472,   473,   474,   475,   476,    -1,   355,   479,   176,
     481,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,
     355,    -1,   176,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   226,
     227,    -1,    -1,   217,    -1,   355,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,   355,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   470,   471,   472,   473,   474,   475,   476,    -1,
      -1,   479,    -1,   481,    -1,   470,   471,   472,   473,   474,
     475,   476,   309,    -1,   479,    -1,   481,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
     470,   471,   472,   473,   474,   475,   476,    -1,   355,   479,
     176,   481,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,    -1,   176,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,    -1,   479,    -1,
     481,   217,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   470,   471,   472,   473,   474,   475,   476,
      -1,    -1,   479,    -1,   481,   165,   470,   471,   472,   473,
     474,   475,   476,   309,    -1,   479,   176,   481,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,   355,
      -1,   176,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,    -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,   217,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,   479,    -1,   481,   165,   470,   471,   472,
     473,   474,   475,   476,   309,   355,   479,   176,   481,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,
     355,    -1,    -1,    -1,   165,    -1,    -1,   226,   227,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    85,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
     176,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,   479,
      -1,   481,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,    -1,   470,   471,   472,   473,   474,
     475,   476,    -1,    -1,   479,    -1,   481,   165,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,   355,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,   226,   227,
      -1,    -1,    -1,   309,   355,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,   217,    -1,   355,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    -1,   481,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,   165,   355,   479,    -1,
     481,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,   309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,   479,    -1,   481,    85,    -1,   217,   165,
      -1,    -1,    -1,    -1,    -1,   355,    -1,   226,   227,    -1,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,   470,   471,   472,   473,   474,   475,   476,    -1,
      -1,   479,    -1,   481,    -1,    -1,   165,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,   217,   479,
      -1,   481,    -1,    -1,    -1,    -1,   355,   226,   227,    -1,
      -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,   355,
      -1,    -1,    -1,    -1,    -1,    -1,   176,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    -1,   481,    -1,    -1,    -1,   355,   247,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,   479,    -1,   481,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,   309,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   176,    -1,    85,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,   355,    -1,   226,   227,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    -1,   481,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
     309,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
     470,   471,   472,   473,   474,   475,   476,   309,   217,   479,
     176,   481,    -1,    -1,    -1,    -1,   355,   226,   227,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,   217,    -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     165,   470,   471,   472,   473,   474,   475,   476,    -1,    85,
     479,   176,   481,   309,    -1,    -1,   355,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,   471,
     472,   473,   474,   475,   476,   165,    -1,   479,    -1,   481,
      -1,    -1,   217,    -1,    -1,    -1,   176,    -1,    -1,   355,
      -1,   226,   227,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,
     176,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,   217,   481,   165,   309,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,   479,    -1,   481,    85,    -1,    -1,   309,
     355,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,   355,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,   355,
      -1,    -1,    85,    -1,    -1,    -1,    -1,   309,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,
     475,   476,    -1,    -1,   479,    -1,   481,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,   226,   227,    -1,
      -1,    -1,    -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,   479,
      -1,   481,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,   479,    -1,   481,   165,    -1,    -1,    -1,
     309,    -1,    -1,    -1,   217,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,   226,   227,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,   470,   471,
     472,   473,   474,   475,   476,    -1,   355,   479,   217,   481,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    85,    -1,    -1,    -1,    -1,
     309,    -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,   165,   481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    85,    -1,   355,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,   176,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,   470,   471,   472,
     473,   474,   475,   476,   165,    -1,   479,   217,   481,    -1,
      -1,    -1,    -1,    -1,    -1,   176,   226,   227,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    85,   481,    -1,    -1,   309,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
     227,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,
     247,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    -1,   355,    -1,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,   355,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,
      -1,    -1,    -1,   247,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,    -1,    -1,   479,    -1,   481,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,   479,
      -1,   481,    -1,    -1,    -1,   309,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    85,    -1,   479,   165,
     481,   355,    -1,   470,   471,   472,   473,   474,   475,   476,
     176,    -1,   479,    -1,   481,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   165,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,   176,    -1,   479,    -1,   481,   217,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    85,
     176,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,   226,   227,    -1,    -1,    -1,    -1,    -1,
      -1,   217,    -1,   176,    -1,    -1,    -1,    -1,    -1,   355,
     226,   227,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
     309,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,   226,   227,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,   247,    -1,   309,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,    -1,
      -1,   217,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,   247,   355,    -1,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,   479,    85,   481,   309,    -1,    -1,   355,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,   355,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    -1,   481,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,   176,    -1,    -1,    -1,   355,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,   471,   472,
     473,   474,   475,   476,    -1,    -1,   479,    -1,   481,    -1,
      -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,   475,
     476,   165,    -1,   479,    -1,   481,   217,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    -1,   226,   227,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,   247,   470,   471,   472,
     473,   474,   475,   476,   165,    -1,   479,    -1,   481,    -1,
      -1,    -1,    -1,   217,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,   247,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,   479,    85,   481,   217,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    85,    -1,    -1,   355,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,   309,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,   176,    -1,   355,   226,   227,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,    -1,   479,    -1,
     481,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,   226,   227,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,    -1,    85,   479,    -1,   481,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,    -1,   479,    -1,
     481,   165,    -1,    -1,   355,   309,   247,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,   355,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   355,    -1,   247,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,    -1,   479,    -1,
     481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,    -1,    -1,   479,    -1,   481,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    85,    -1,   355,    -1,    -1,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,    -1,   479,    -1,
     481,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   165,    -1,    -1,    -1,   470,   471,   472,   473,
     474,   475,   476,   176,    -1,   479,    -1,   481,    85,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,    -1,   479,   165,
     481,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
     176,    -1,   165,   226,   227,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,   165,    -1,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
     226,   227,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,   309,    -1,    -1,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
     227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,   355,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,   355,
      -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   355,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,   355,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,   471,   472,
     473,   474,   475,   476,    -1,    -1,   479,    -1,   481,    -1,
     309,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    85,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,   479,   165,   481,   355,   470,   471,   472,
     473,   474,   475,   476,    -1,   176,   479,    -1,   481,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    85,    -1,    -1,
      -1,    -1,    -1,   470,   471,   472,   473,   474,   475,   476,
      -1,    -1,   479,    -1,   481,    85,   217,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,   226,   227,
      -1,   470,   471,   472,   473,   474,   475,   476,   176,    -1,
     479,    -1,   481,    -1,    -1,   165,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
     165,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,
      -1,   176,    -1,    -1,   355,    -1,   226,   227,    -1,   247,
      -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,    -1,    -1,    -1,    -1,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,   247,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,    -1,   479,    -1,
     481,    -1,    -1,    -1,   309,   355,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    85,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   470,   471,   472,   473,   474,   475,   476,    -1,
     355,   479,    -1,   481,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,   165,
      -1,    -1,   470,   471,   472,   473,   474,   475,   476,    -1,
     176,   479,    -1,   481,    -1,    -1,    -1,    -1,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,   479,
      85,   481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,   165,    -1,    -1,   470,   471,   472,   473,   474,
     475,   476,    -1,   176,   479,    -1,   481,   165,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
     165,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    -1,   226,   227,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,    -1,   309,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,   226,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,   355,    -1,   309,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    24,    -1,    26,    -1,    -1,   355,    -1,    -1,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     355,    -1,   217,    -1,   470,   471,   472,   473,   474,   475,
     476,   226,   227,   479,    -1,   481,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,   104,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,   116,    -1,   118,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,   127,    -1,   470,   471,   472,
     473,   474,   475,   476,    -1,    -1,   479,    -1,   481,    -1,
      -1,    -1,   470,   471,   472,   473,   474,   475,   476,    -1,
      -1,   479,    -1,   481,   309,    -1,    -1,   159,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,
     475,   476,    -1,    -1,   479,    -1,   481,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     355,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,
     242,   243,    -1,    -1,    -1,    -1,    -1,   249,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    12,    -1,   316,   470,   471,   472,   473,   474,
     475,   476,    -1,    -1,   479,    25,   481,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    42,    -1,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    93,    94,    95,   398,    97,    -1,    99,
     100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,    -1,
     412,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,    -1,
     422,   121,   122,   123,    -1,   125,   126,   127,    -1,    -1,
     130,   131,    -1,   133,    -1,   135,   136,   137,    -1,    -1,
      -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,    -1,
     150,   151,    -1,    -1,   154,   155,   156,    -1,   158,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,    -1,
     180,    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    -1,   213,   214,    -1,   216,    -1,   218,    -1,
      -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,    -1,
     250,    -1,   252,   253,    -1,    -1,   256,   257,   258,   259,
      -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,    -1,
     270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,    -1,
      -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,    -1,
      -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
     310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,   319,
     320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,    -1,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,    -1,
      -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,    -1,
     410,   411,   412,   413,    -1,    -1,    -1,   417,   418,   419,
      -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,
      -1,    -1,    -1,    -1,   454,    -1,   456,    -1,    -1,   459,
      -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,     4,
       5,     6,     7,     8,   474,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,
      -1,    76,    77,    78,    -1,    80,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,   104,
      -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
     115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,    -1,
     125,   126,   127,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,   144,
      -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,   154,
     155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,
      -1,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    -1,   213,   214,
      -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,    -1,
      -1,   256,   257,   258,   259,    -1,    -1,   262,   263,   264,
     265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,   281,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,   294,
      -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,    -1,
      -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,    -1,
      -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,   324,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   336,    -1,   338,    -1,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,    -1,
     395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,    -1,
      -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,   424,
      -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,   454,
      -1,   456,    -1,    -1,   459,    -1,    -1,   462,    -1,   464,
      -1,   466,   467,   468,     4,     5,     6,     7,     8,   474,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    42,    -1,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    93,    94,    95,    -1,    97,    -1,    99,
     100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,    -1,
      -1,   121,   122,   123,    -1,   125,   126,   127,    -1,    -1,
     130,   131,    -1,   133,    -1,   135,   136,   137,    -1,    -1,
      -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,    -1,
     150,   151,    -1,    -1,   154,   155,   156,    -1,   158,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,    -1,
     180,    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    -1,   213,   214,    -1,   216,    -1,   218,    -1,
      -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,    -1,
     250,    -1,   252,   253,    -1,    -1,   256,   257,   258,   259,
      -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,    -1,
     270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,    -1,
      -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,    -1,
      -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
     310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,   319,
     320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,    -1,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,    -1,
      -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,    -1,
     410,   411,   412,   413,    -1,    -1,    -1,   417,   418,   419,
      -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,    -1,
      -1,    -1,    -1,    -1,   454,    -1,   456,    -1,    -1,   459,
      -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,     4,
       5,     6,     7,     8,   474,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,
      -1,    76,    77,    78,    -1,    80,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,   104,
      -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
     115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,    -1,
     125,   126,   127,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,   144,
      -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,   154,
     155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,
      -1,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    -1,   213,   214,
      -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,    -1,
      -1,   256,   257,   258,   259,    -1,    -1,   262,   263,   264,
     265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,   281,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,   294,
      -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,    -1,
      -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,    -1,
      -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,   324,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   336,    -1,   338,    -1,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,   371,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,    -1,
     395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,    -1,
      -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,   424,
      -1,   426,    -1,    -1,    -1,    85,    -1,    -1,   433,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,    85,    86,    -1,    -1,    -1,   454,
      -1,   456,    -1,    -1,   459,    -1,    -1,   462,    -1,   464,
      -1,   466,   467,   468,    -1,    -1,    -1,    -1,    -1,   474,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,   247,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,   247,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,   309,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,    -1,   355,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   367,   368,   369,
     370,   371,    -1,   247,   355,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   392,   393,   394,   395,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    85,   407,   408,   409,
     410,    -1,    -1,   413,    -1,    -1,   176,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   433,   434,   309,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,   455,   456,   217,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,   226,   227,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,   479,
      -1,   355,    -1,    -1,    -1,    -1,   165,   247,    -1,   470,
     471,   472,   473,   474,   475,   476,    85,   176,   479,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,   309,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    85,
      -1,    -1,   165,    -1,    -1,   355,   470,   471,   472,   473,
     474,   475,   476,   176,    -1,   479,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,   217,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,
      -1,    -1,    -1,    -1,   247,    -1,   355,    -1,    -1,    -1,
     176,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,   176,    -1,   479,
     309,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,   305,    -1,    -1,    -1,   309,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,   165,    -1,    -1,   355,   226,   227,    -1,
      -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   355,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   460,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,    -1,    -1,    -1,    -1,    -1,   355,   470,   471,   472,
     473,   474,   475,   476,    85,    -1,   479,   309,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   460,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,   479,   165,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   470,   471,   472,   473,   474,   475,   476,    -1,    -1,
     479,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,   165,   247,    -1,   470,   471,
     472,   473,   474,   475,   476,    -1,   176,   479,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,   226,   227,   309,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
     227,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   355,    -1,    -1,   165,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   355,   217,    -1,   165,   247,
      -1,    -1,    -1,    -1,    -1,   226,   227,    -1,   355,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,    -1,   479,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
     227,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,
     470,   471,   472,   473,   474,   475,   476,    -1,    -1,   479,
      -1,    -1,    -1,   470,   471,   472,   473,   474,   475,   476,
      -1,    -1,   479,    -1,   355,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   470,   471,   472,   473,   474,   475,   476,    -1,
      -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,    -1,    -1,   479,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,   470,   471,   472,   473,   474,   475,   476,
      25,    -1,   479,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,
      -1,    76,    77,    78,    -1,    80,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,   104,
      -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
     115,   116,    -1,   118,    -1,    -1,   121,   122,   123,    -1,
     125,   126,   127,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,   144,
      -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,   154,
     155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,
     175,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    -1,   213,   214,
      -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,    -1,
      -1,   256,   257,   258,   259,    -1,    -1,   262,   263,   264,
     265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,
     275,   276,    -1,   278,    -1,    -1,   281,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,   294,
      -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,    -1,
      -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,    -1,
      -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,   324,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   336,    -1,   338,    -1,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,    -1,
     395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,    -1,
      -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,   424,
      -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,     4,     5,     6,     7,     8,   454,
      -1,   456,    12,    -1,   459,    -1,    -1,   462,    -1,   464,
      -1,   466,   467,   468,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    42,    -1,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    -1,    99,
     100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,   115,   116,    -1,   118,    -1,
      -1,   121,   122,   123,    -1,   125,   126,   127,    -1,    -1,
     130,   131,    -1,   133,    -1,   135,   136,   137,    -1,    -1,
      -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,    -1,
     150,   151,    -1,    -1,   154,   155,   156,    -1,   158,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,   175,    -1,    -1,   178,    -1,
     180,    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    -1,   213,   214,    -1,   216,    -1,   218,    -1,
      -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,    -1,
     250,    -1,   252,   253,    -1,    -1,   256,   257,   258,   259,
      -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,    -1,
     270,    -1,   272,    -1,    -1,   275,   276,    -1,   278,    -1,
      -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,    -1,
      -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
     310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,   319,
     320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,    -1,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,    -1,
      -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,    -1,
     410,   411,   412,   413,    -1,    -1,    -1,   417,   418,   419,
      -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,     4,
       5,     6,     7,     8,   454,    -1,   456,    12,    -1,   459,
      -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,
      -1,    76,    77,    78,    -1,    80,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,   104,
      -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
     115,   116,    -1,   118,    -1,    -1,   121,   122,   123,    -1,
     125,   126,   127,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,   144,
      -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,   154,
     155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,
     175,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    -1,   213,   214,
      -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,    -1,
      -1,   256,   257,   258,   259,    -1,    -1,   262,   263,   264,
     265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,
     275,   276,    -1,   278,    -1,    -1,   281,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,   294,
      -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,    -1,
      -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,    -1,
      -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,   324,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   336,    -1,   338,    -1,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,    -1,
     395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,    -1,
      -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,   424,
      -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,     4,     5,     6,     7,     8,   454,
      -1,   456,    12,    -1,   459,    -1,    -1,   462,    -1,   464,
      -1,   466,   467,   468,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    42,    -1,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    97,    -1,    99,
     100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,    -1,
      -1,   121,   122,   123,    -1,   125,   126,   127,    -1,    -1,
     130,   131,    -1,   133,    -1,   135,   136,   137,    -1,    -1,
      -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,    -1,
     150,   151,    -1,    -1,   154,   155,   156,    -1,   158,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,   175,    -1,    -1,   178,    -1,
     180,    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    -1,   213,   214,    -1,   216,    -1,   218,    -1,
      -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,    -1,
     250,    -1,   252,   253,    -1,    -1,   256,   257,   258,   259,
      -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,    -1,
     270,    -1,   272,    -1,    -1,   275,   276,    -1,   278,    -1,
      -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,    -1,
      -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
     310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,   319,
     320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,    -1,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,    -1,
      -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,    -1,
     410,   411,   412,   413,    -1,    -1,    -1,   417,   418,   419,
      -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,     4,
       5,     6,     7,     8,   454,    -1,   456,    12,    -1,   459,
      -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,
      -1,    76,    77,    78,    -1,    80,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,   104,
      -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
     115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,    -1,
     125,   126,   127,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,   144,
      -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,   154,
     155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,
     175,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    -1,   213,   214,
      -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,    -1,
      -1,   256,   257,   258,   259,    -1,    -1,   262,   263,   264,
     265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,
     275,   276,    -1,   278,    -1,    -1,   281,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,   294,
      -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,    -1,
      -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,    -1,
      -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,   324,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   336,    -1,   338,    -1,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,    -1,
     395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,    -1,
      -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,   424,
      -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,     4,     5,     6,     7,     8,   454,
      -1,   456,    12,    -1,   459,    -1,    -1,   462,    -1,   464,
      -1,   466,   467,   468,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    42,    -1,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    93,    94,    95,    -1,    97,    -1,    99,
     100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,    -1,
      -1,   121,   122,   123,    -1,   125,   126,   127,    -1,    -1,
     130,   131,    -1,   133,    -1,   135,   136,   137,    -1,    -1,
      -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,    -1,
     150,   151,   152,    -1,   154,   155,   156,    -1,   158,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,    -1,
     180,    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    -1,   213,   214,    -1,   216,    -1,   218,    -1,
      -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,    -1,
     250,    -1,   252,   253,    -1,    -1,   256,   257,   258,   259,
      -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,    -1,
     270,    -1,   272,    -1,    -1,   275,   276,    -1,   278,    -1,
      -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,    -1,
      -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
     310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,   319,
     320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,    -1,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,    -1,
      -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,    -1,
     410,   411,   412,   413,    -1,    -1,    -1,   417,   418,   419,
      -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,     4,
       5,     6,     7,     8,   454,    -1,   456,    12,    -1,   459,
      -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,
      -1,    76,    77,    78,    -1,    80,    -1,    82,    83,    -1,
      -1,    86,    -1,    88,    89,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,   104,
      -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
     115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,    -1,
     125,   126,   127,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,   144,
      -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,   154,
     155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,
      -1,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    -1,   213,   214,
      -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,    -1,
      -1,   256,   257,   258,   259,    -1,    -1,   262,   263,   264,
     265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,
     275,   276,    -1,   278,    -1,    -1,   281,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,   294,
      -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,    -1,
      -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,    -1,
      -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,   324,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   336,    -1,   338,    -1,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,    -1,
     395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,    -1,
      -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,   424,
      -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,     4,     5,     6,     7,     8,   454,
      -1,   456,    12,    -1,   459,    -1,    -1,   462,    -1,   464,
      -1,   466,   467,   468,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    42,    -1,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    93,    94,    95,    -1,    97,    -1,    99,
     100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,    -1,
      -1,   121,   122,   123,    -1,   125,   126,   127,    -1,    -1,
     130,   131,    -1,   133,    -1,   135,   136,   137,    -1,    -1,
      -1,   141,   142,    -1,   144,    -1,   146,    -1,    -1,    -1,
     150,   151,    -1,    -1,   154,   155,   156,    -1,   158,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,    -1,
     180,    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    -1,   213,   214,    -1,   216,    -1,   218,    -1,
      -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,    -1,
     250,    -1,   252,   253,    -1,    -1,   256,   257,   258,   259,
      -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,    -1,
     270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,    -1,
      -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,    -1,
      -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
     310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,   319,
     320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,    -1,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,    -1,
      -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,    -1,
     410,   411,   412,   413,    -1,    -1,    -1,   417,   418,   419,
      -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,     4,
       5,     6,     7,     8,   454,    -1,   456,    12,    -1,   459,
      -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,
      -1,    76,    77,    78,    -1,    80,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,   104,
      -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
     115,   116,    -1,   118,    -1,    -1,   121,   122,   123,    -1,
     125,   126,   127,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,   144,
      -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,   154,
     155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,
      -1,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    -1,   213,   214,
      -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,    -1,
      -1,   256,   257,   258,   259,    -1,    -1,   262,   263,   264,
     265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,   281,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,   294,
      -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,    -1,
      -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,    -1,
      -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,   324,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   336,    -1,   338,    -1,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,    -1,
     395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,    -1,
      -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,   424,
      -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,     4,     5,     6,     7,     8,   454,
      -1,   456,    12,    -1,   459,    -1,    -1,   462,    -1,   464,
      -1,   466,   467,   468,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    42,    -1,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    93,    94,    95,    -1,    97,    -1,    99,
     100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,    -1,
      -1,   121,   122,   123,    -1,   125,   126,   127,    -1,    -1,
     130,   131,    -1,   133,    -1,   135,   136,   137,    -1,    -1,
      -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,    -1,
     150,   151,    -1,    -1,   154,   155,   156,    -1,   158,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,    -1,
     180,    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    -1,   213,   214,    -1,   216,    -1,   218,    -1,
      -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,   233,   234,    -1,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,    -1,
     250,    -1,   252,   253,    -1,    -1,   256,   257,   258,   259,
      -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,    -1,
     270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,    -1,
      -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,    -1,
      -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
     310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,   319,
     320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,    -1,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,    -1,
      -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,    -1,
     410,   411,   412,   413,    -1,    -1,    -1,   417,   418,   419,
      -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,     4,
       5,     6,     7,     8,   454,    -1,   456,    12,    -1,   459,
      -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,
      -1,    76,    77,    78,    -1,    80,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,   104,
      -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
     115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,    -1,
     125,   126,   127,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,   144,
      -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,   154,
     155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,
      -1,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    -1,   213,   214,
      -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,    -1,
      -1,   256,   257,   258,   259,    -1,    -1,   262,   263,   264,
     265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,
     275,   276,    -1,   278,    -1,    -1,   281,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,   294,
      -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,    -1,
      -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,    -1,
      -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,   324,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   336,    -1,   338,    -1,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,    -1,
     395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,    -1,
      -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,   424,
      -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,     4,     5,     6,     7,     8,   454,
      -1,   456,    12,    -1,   459,    -1,    -1,   462,    -1,   464,
      -1,   466,   467,   468,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    42,    -1,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    93,    94,    95,    -1,    97,    -1,    99,
     100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,   115,   116,    -1,   118,    -1,
      -1,   121,   122,   123,    -1,   125,   126,   127,    -1,    -1,
     130,   131,    -1,   133,    -1,   135,   136,   137,    -1,    -1,
      -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,    -1,
     150,   151,    -1,    -1,   154,   155,   156,    -1,   158,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,    -1,
     180,    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    -1,   213,   214,    -1,   216,    -1,   218,    -1,
      -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,    -1,
     250,    -1,   252,   253,    -1,    -1,   256,   257,   258,   259,
      -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,    -1,
     270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,    -1,
      -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,    -1,
      -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
     310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,   319,
     320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,    -1,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,    -1,
      -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,    -1,
     410,   411,   412,   413,    -1,    -1,    -1,   417,   418,   419,
      -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   448,     4,
       5,     6,     7,     8,   454,    -1,   456,    12,    -1,   459,
      -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    -1,    -1,    39,    -1,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    -1,    -1,    74,
      -1,    76,    77,    78,    -1,    80,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    99,   100,    -1,    -1,   103,   104,
      -1,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
     115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,    -1,
     125,   126,   127,    -1,    -1,   130,   131,    -1,   133,    -1,
     135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,   144,
      -1,   146,    -1,    -1,    -1,   150,   151,    -1,    -1,   154,
     155,   156,    -1,   158,    -1,   160,    -1,    -1,   163,    -1,
      -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,   174,
      -1,    -1,    -1,   178,    -1,   180,    -1,    -1,    -1,   184,
     185,   186,   187,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,    -1,   213,   214,
      -1,   216,    -1,   218,    -1,    -1,   221,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,   233,    -1,
      -1,   236,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,    -1,   248,    -1,   250,    -1,   252,   253,    -1,
      -1,   256,   257,   258,   259,    -1,    -1,   262,   263,   264,
     265,   266,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,
     275,   276,    -1,    -1,    -1,    -1,   281,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,   292,    -1,   294,
      -1,    -1,    -1,   298,    -1,    -1,   301,    -1,   303,    -1,
      -1,    -1,    -1,   308,    -1,   310,   311,   312,   313,    -1,
      -1,    -1,   317,    -1,   319,   320,    -1,    -1,   323,   324,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   336,    -1,   338,    -1,   340,   341,   342,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   353,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   388,    -1,    -1,   391,    -1,    -1,    -1,
     395,   396,    -1,   398,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,   407,    -1,    -1,   410,   411,   412,   413,    -1,
      -1,    -1,   417,   418,   419,    -1,   421,   422,    -1,   424,
      -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,     4,     5,     6,     7,     8,   454,
      -1,   456,    12,    -1,   459,    -1,    -1,   462,    -1,   464,
      -1,   466,   467,   468,    -1,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    42,    -1,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    76,    77,    78,    -1,
      80,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    93,    94,    95,    -1,    97,    -1,    99,
     100,    -1,    -1,   103,   104,    -1,   106,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,   115,    -1,    -1,   118,    -1,
      -1,   121,   122,   123,    -1,   125,   126,   127,    -1,    -1,
     130,   131,    -1,   133,    -1,   135,   136,   137,    -1,    -1,
      -1,    -1,   142,    -1,   144,    -1,   146,    -1,    -1,    -1,
     150,   151,    -1,    -1,   154,   155,   156,    -1,   158,    -1,
     160,    -1,    -1,   163,    -1,    -1,   166,   167,    -1,    -1,
      -1,    -1,    -1,   173,   174,    -1,    -1,    -1,   178,    -1,
     180,    -1,    -1,    -1,   184,   185,   186,   187,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,    -1,   213,   214,    -1,   216,    -1,   218,    -1,
      -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,   233,    -1,    -1,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,    -1,   248,    -1,
     250,    -1,   252,   253,    -1,    -1,   256,   257,   258,   259,
      -1,    -1,   262,   263,   264,   265,   266,    -1,    -1,    -1,
     270,    -1,   272,    -1,    -1,   275,   276,    -1,    -1,    -1,
      -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   291,   292,    -1,   294,    -1,    -1,    -1,   298,    -1,
      -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,    -1,
     310,   311,   312,   313,    -1,    -1,    -1,   317,    -1,   319,
     320,    -1,    -1,   323,   324,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,    -1,
     340,   341,   342,   343,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   391,    -1,    -1,    -1,   395,   396,    -1,   398,   137,
      -1,    -1,    -1,   403,    -1,    -1,    -1,   407,    -1,    -1,
     410,   411,   412,   413,    -1,    -1,    -1,   417,   418,   419,
      -1,   421,   422,    -1,   424,    -1,   426,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,   448,    -1,
      -1,    -1,    -1,    -1,   454,    -1,   456,    -1,    -1,   459,
      -1,    -1,   462,    -1,   464,    -1,   466,   467,   468,    -1,
      -1,    -1,    -1,   211,    -1,    -1,   214,    -1,   216,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   260,    -1,   262,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   314,   315,   316,    -1,
      -1,   319,   320,   321,   322,   323,    55,   325,   326,   327,
      -1,   329,   330,   331,   332,   333,   334,    -1,    -1,   337,
      69,   339,    -1,   341,   342,   343,   344,   345,   346,    -1,
      -1,   349,   350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,   108,
      -1,   110,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,
     388,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,   144,    -1,   146,    -1,   417,
     418,   419,    -1,    -1,    -1,    -1,   424,    -1,   426,    -1,
     159,   160,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,
      -1,   180,    -1,    -1,    -1,    -1,    -1,    -1,   456,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,
      -1,   270,    -1,    -1,   273,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   311,   312,    -1,    -1,    -1,   316
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,     3,     5,    26,    27,    30,    32,    35,    37,    40,
      42,    43,    47,    48,    49,    51,    52,    54,    59,    60,
      61,    63,    64,    66,    67,    68,    69,    71,    74,    78,
      79,    81,    90,   100,   104,   105,   119,   120,   145,   249,
     253,   255,   260,   299,   430,   480,   490,   491,   492,   493,
     498,   589,   602,   604,   612,   614,   616,   619,   624,   626,
     631,   634,   638,   642,   650,   651,   755,   757,   764,   767,
     794,   798,   809,   811,   822,   825,   828,   834,   838,   842,
     843,   844,   873,   885,   891,   892,   899,   902,   924,   927,
     928,   929,     4,     5,     6,     7,     8,    12,    25,    28,
      29,    30,    31,    33,    34,    35,    39,    41,    42,    44,
      45,    46,    47,    48,    50,    53,    55,    58,    61,    62,
      63,    64,    65,    66,    69,    70,    71,    74,    76,    77,
      78,    80,    82,    83,    88,    89,    90,    91,    93,    94,
      95,    97,    99,   100,   103,   104,   106,   108,   111,   115,
     118,   121,   122,   123,   125,   126,   127,   130,   131,   133,
     135,   136,   137,   142,   144,   146,   150,   151,   154,   155,
     156,   158,   160,   163,   166,   167,   173,   174,   178,   180,
     184,   185,   186,   187,   188,   189,   190,   192,   193,   194,
     195,   196,   197,   198,   199,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   213,   214,   216,   218,
     221,   223,   231,   232,   233,   236,   237,   238,   239,   240,
     241,   242,   243,   248,   250,   252,   253,   256,   257,   258,
     259,   262,   263,   264,   265,   266,   270,   272,   275,   276,
     281,   283,   291,   292,   294,   298,   301,   303,   308,   310,
     311,   312,   313,   317,   319,   320,   323,   324,   326,   336,
     338,   340,   341,   342,   343,   353,   371,   388,   391,   395,
     396,   398,   403,   407,   410,   411,   412,   413,   417,   418,
     419,   421,   422,   424,   426,   433,   435,   436,   448,   454,
     456,   459,   462,   464,   466,   467,   468,   486,   865,   866,
     869,   872,   157,   364,   598,   178,   307,   633,   925,    55,
      83,   143,   267,   276,   296,   364,   516,   517,   518,   529,
     581,   799,   756,   159,   276,   291,   364,   448,   763,   633,
     175,   278,   867,   869,   870,   765,    19,    29,    36,    49,
      56,    57,    72,    73,    75,    76,    78,    92,   102,   103,
     108,   113,   116,   132,   134,   138,   147,   152,   172,   179,
     181,   200,   215,   217,   219,   220,   245,   258,   278,   282,
     285,   286,   287,   288,   293,   302,   313,   316,   318,   320,
     342,   343,   347,   354,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   371,   372,   373,   374,   376,
     377,   378,   379,   380,   381,   382,   384,   385,   386,   387,
     388,   389,   390,   391,   395,   397,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   410,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   429,   430,   431,   432,   433,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   456,   457,   458,   472,   473,   477,   480,
     483,   484,   486,   487,   488,   671,   674,   677,   678,   681,
     856,   858,   859,   863,   868,   869,   938,   944,   115,   159,
     274,   273,   274,   887,   633,   839,   633,   835,   279,   869,
     653,   655,   656,   812,    71,    74,    69,   281,    69,   274,
     810,   887,   795,   887,   159,   887,   887,   903,   887,   887,
     900,   224,   875,   869,   768,    67,     0,     3,   133,   826,
     865,   869,     4,   223,   244,   486,   869,   274,   887,   454,
     926,   279,   397,   519,   274,   517,   291,   159,   157,   183,
     336,   807,   808,   116,   671,   790,   791,   869,   866,   397,
     762,   759,   887,   829,   117,   153,   183,   771,   480,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   671,
     480,   480,   480,   480,   480,   480,   940,   944,   480,   480,
     480,   480,   695,   696,   697,   671,   480,   480,   480,   480,
     480,   152,   278,   480,   480,   480,   480,   293,   480,   856,
     480,   856,   480,   856,   480,   480,   480,   480,   671,   699,
     480,   480,   480,   670,   480,   670,   480,   480,   480,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   480,
     671,   480,   480,   480,   480,   480,   480,   480,   480,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   670,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   480,
     480,   480,   480,   480,   670,   670,   670,   480,   480,   480,
     480,   671,   671,   671,    67,   671,   671,   869,   869,   487,
     870,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    85,   165,   176,   217,   226,   227,
     247,   309,   355,   470,   471,   472,   473,   474,   475,   476,
     479,   672,   367,   368,   369,   370,   371,   392,   393,   394,
     395,   407,   408,   409,   410,   413,   433,   434,   455,   456,
     720,   107,   868,   486,   653,   939,   111,   141,   183,   847,
     164,   865,   886,   887,    55,    92,   815,   840,   887,    55,
      69,   238,   836,   837,    66,   654,    84,   124,   153,   271,
     461,   462,   463,   464,   465,   466,   660,   661,   662,    31,
      36,    37,    55,    69,    91,   103,   108,   110,   114,   142,
     144,   146,   159,   160,   163,   169,   178,   180,   213,   223,
     235,   264,   270,   273,   274,   311,   312,   316,   558,   580,
     813,   815,   818,   878,   606,   607,   606,   606,   605,   606,
     761,   865,   183,   797,   615,   639,   640,   865,   617,   627,
      26,    37,    40,    43,    45,    49,    54,    62,    67,    68,
      77,    81,    84,   135,   145,   159,   236,   246,   248,   266,
     297,   904,   905,   906,   635,   613,    84,   901,   904,   874,
     117,   772,   797,   655,   824,   823,    10,    86,   722,   723,
     893,   869,   116,   513,   514,   515,   566,   865,   625,   494,
     217,   869,   519,   866,   869,   141,   800,   804,   805,   869,
     807,   482,   222,   132,   869,   870,   871,   915,   916,   762,
      55,    69,   121,   154,   180,   235,   238,   252,   270,   273,
     830,   831,   887,   598,   671,    84,   687,   724,   124,   687,
     724,   671,   687,   687,   687,   687,   687,   671,   671,   671,
     671,   671,   671,   863,   653,   941,   671,   671,   671,   696,
     353,   698,   863,   671,   481,   671,   671,   671,   863,   671,
     692,   693,   692,   671,   671,   671,   671,   687,   687,   687,
     453,   692,   671,   481,   671,   481,   671,   671,   671,   671,
     671,   671,   671,   671,   671,   671,   720,   671,   671,   671,
     671,   671,   671,   692,   124,   684,   856,   319,   320,   343,
     721,   671,   671,   481,   671,   671,   671,   692,   671,   671,
     671,   671,   671,   671,   671,   671,   671,   692,   692,   692,
     671,   671,   671,   671,   671,   671,   692,   675,   678,   481,
     671,   671,   671,   671,   671,   671,   671,   671,    96,   171,
     280,   671,   680,   692,   680,   680,   680,   680,   680,   856,
     481,   671,   481,   671,   671,   671,   138,   181,   220,   245,
     347,   742,   481,   482,   671,   486,   144,   178,   264,   879,
      22,   671,   671,   176,   217,   219,   671,   671,   671,   671,
     480,   942,   944,   678,   165,   176,   247,   355,   671,   671,
     671,   671,   676,   678,   671,   671,   671,   677,   671,   677,
     671,   671,   671,   671,    28,    84,   671,   673,   473,   870,
     869,   481,   945,    55,   178,   846,   100,   141,   865,   888,
     889,   632,   180,   620,   100,   482,   869,   295,   930,   931,
     474,   664,   665,   666,   662,    44,   480,   274,   364,   270,
     154,   270,   180,   176,   817,   284,   817,   383,   270,    55,
     273,   817,   141,   165,   816,   819,   270,   284,   328,   737,
     739,   737,   260,   817,   141,   180,   109,   237,   303,    50,
      70,   608,   609,   603,   598,   760,   761,   165,   482,   646,
     647,   760,   760,   276,   908,   273,    33,    69,   907,   114,
     909,   235,   224,   910,   222,   482,   636,   637,   865,   760,
     235,   222,   144,   178,   264,   876,   877,   164,   761,   773,
     774,   481,   650,   152,   827,   857,   868,   869,   869,     7,
     136,   869,   894,   895,   515,   107,   558,   590,   760,   184,
     185,   186,   187,   188,   189,   190,   192,   193,   194,   195,
     196,   197,   198,   199,   495,   496,   497,   132,   501,   865,
     502,   283,   300,   582,   804,   865,   869,   482,   802,   486,
     806,   791,   865,   487,   396,   482,   760,   100,   305,   482,
     832,   773,   482,   481,   688,   682,   481,   474,   482,   481,
     481,   481,   481,   481,   482,   482,    86,   481,   481,   300,
     482,   481,   945,   482,   482,   481,   482,   481,   480,   482,
     482,   481,   482,   482,   481,   481,   481,   671,   694,   481,
     481,   481,   482,   481,   481,   482,   481,   481,   481,   701,
     702,   481,   482,   481,   482,   482,   481,   482,   481,   482,
     481,   482,   482,   482,   481,   482,   482,   141,   482,   482,
     481,   482,   481,   482,   481,   482,   481,   482,   481,   692,
     482,   482,   481,   482,   481,   482,   481,   482,   481,   482,
     482,   482,   481,   481,   481,   481,   482,   481,   482,   481,
     482,   481,   481,   481,   481,   481,   481,   481,   482,   482,
     481,   482,   481,     9,    11,    12,    18,    19,    20,    21,
      85,   165,   176,   217,   226,   227,   247,   309,   355,   470,
     471,   472,   473,   474,   475,   476,   479,   672,   481,   482,
     482,   481,   482,   481,   482,   141,   482,   482,   141,   671,
     141,   671,   141,   671,   141,   481,   481,   481,   481,   481,
     481,   481,   482,   481,   481,   482,   481,   481,   482,   482,
     692,   485,   869,   486,   486,   486,   870,   671,   671,   219,
     692,   653,   943,   131,   728,   480,   942,   678,   671,   676,
       9,    11,    12,    18,    19,    20,    21,    85,   165,   176,
     217,   226,   227,   247,   309,   355,   470,   471,   472,   473,
     474,   475,   476,   479,   672,   720,   720,   942,   671,   486,
     161,   643,    55,   723,   482,   760,   279,   469,   841,   760,
     837,    84,   937,   482,   657,   668,   671,   861,   869,   165,
     820,   474,   865,   519,   857,   871,   383,   816,   817,   869,
     816,   740,   742,   865,   819,   817,   482,    80,   610,   480,
     484,   704,   709,   710,   279,   482,   116,   641,   869,   640,
     579,   580,   648,   133,   336,   618,   133,   205,   317,   324,
     336,   628,   629,   630,   273,   480,   917,   917,   917,   917,
     474,   865,   869,   914,   906,   482,   279,   141,   482,   914,
     482,   103,   116,   210,   281,   422,   487,   558,   869,   880,
     881,   774,   769,   652,     6,     7,     8,    10,    13,    14,
      15,    16,   136,   896,   898,   304,   725,   116,   563,   565,
     870,    92,   116,   559,   560,   870,    24,    26,    32,    34,
      43,    88,    89,   104,   107,   115,   116,   118,   122,   123,
     127,   158,   159,   201,   208,   228,   232,   241,   242,   243,
     249,   257,   283,   295,   398,   412,   422,   521,   523,   558,
     591,   592,   593,   733,   628,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
     482,   513,   499,   289,    97,   150,   259,   583,   583,   222,
     803,   801,   486,   805,   141,   474,   869,   723,   758,   870,
      98,   916,   101,   254,   599,   244,   831,   760,   833,   766,
     671,   671,   692,   481,   671,   399,   671,   671,   689,   691,
     559,   671,   691,   692,   692,   671,   671,   863,   692,   671,
     671,   482,   671,   671,   375,   700,   671,   703,   692,   677,
     677,   868,   671,   671,   692,   868,   671,   671,   671,   692,
     220,   671,   671,   671,   671,   686,   733,   220,   671,   671,
     671,   671,   671,   692,   671,   671,   671,   671,   671,   671,
     671,   671,   671,   176,   217,   219,   671,   671,   671,   671,
     671,   678,   176,   247,   355,   671,   671,   671,   671,   676,
     671,   671,   671,   677,   671,   677,   671,   671,   671,   671,
     671,   673,   671,   671,   671,   399,   671,   671,   671,   671,
     671,   141,   671,   141,   671,   141,   671,   220,   671,   671,
     671,   481,   486,   587,   481,   945,   868,   692,   728,    85,
     671,   671,   176,   217,   219,   671,   671,   671,   671,   480,
     942,   678,   165,   176,   247,   355,   671,   671,   671,   671,
     676,   671,   671,   671,   677,   671,   677,   671,   671,   671,
     671,   671,   673,   869,   867,   644,   645,   865,   183,   244,
     306,   890,   889,   628,   867,   671,   133,   298,   336,   621,
     622,   623,   932,   665,   141,   164,   658,   659,   738,   739,
     753,   667,   486,   867,   141,   821,   481,   869,    69,   817,
     817,   221,   482,   816,   865,   609,   497,   611,    67,   704,
     869,    38,   162,   168,   212,   260,   271,   401,   431,   482,
     708,   865,   867,   761,   480,   629,   869,   918,   919,   486,
     486,   279,   637,   865,   867,   145,   141,   877,   486,   560,
     166,    10,    22,   383,   785,   487,   870,    92,   116,   561,
     562,   870,   486,   785,    67,   260,   301,   302,   480,   509,
     775,   779,   931,   933,   934,   935,   897,   671,   738,   110,
     112,   143,   159,   170,   267,   534,   536,   577,   578,   597,
     597,   597,   785,   786,   140,   234,   578,   597,   786,   786,
     786,   786,   130,   107,   558,   786,   169,   275,   169,   275,
     130,   786,   786,    98,   786,   786,   786,   786,    10,    86,
     279,   601,   786,   786,   786,   786,   597,   786,   521,   786,
     482,   480,   486,   533,   537,   864,   869,   867,   867,   867,
     138,   181,   220,   245,   347,   743,   867,   742,   742,   742,
     867,   867,   867,   867,   867,   867,   742,   496,   176,   480,
     503,   520,   522,   523,   327,   337,   340,   530,   865,   300,
     725,   869,   704,   486,   806,   278,   422,    54,   775,   481,
     683,   482,   671,   481,   481,    92,   214,   316,   319,   320,
     338,   343,   348,   690,   481,   481,   482,   481,   481,   481,
     481,   165,   305,   679,   481,   481,   482,   671,   481,   481,
     671,   459,   460,   453,   481,   720,   720,   481,   481,   481,
     481,   481,   481,   482,   481,   481,   481,   481,   481,   481,
     481,   261,   685,   482,   481,   482,   481,   481,   481,   482,
     481,   481,   482,   481,   481,   481,   481,   481,   481,   671,
     219,   481,   728,   678,   671,   676,    85,   720,   720,   942,
     482,   481,   481,   671,   481,   383,   481,   481,   482,   482,
     481,   671,   481,   671,   481,   671,   481,   482,   481,   481,
     481,   869,   481,   671,   671,   219,   692,   728,   480,   942,
     678,   671,   676,    85,   720,   720,   942,   845,   482,   646,
     306,   178,   622,   651,    41,   704,   230,   231,   749,   750,
      54,   383,   663,   753,   141,   659,    86,   669,   867,   869,
     474,   869,   743,   814,   311,   312,   305,   742,   742,   816,
     482,   711,   712,   481,   480,   709,   168,   168,   168,   401,
     431,   796,   863,   704,   229,   713,   713,   704,   704,   723,
     234,   718,   869,   481,   482,   474,   474,   915,   141,   915,
     880,   869,   107,   564,   174,   871,   278,   421,   422,   883,
     879,   785,   869,    84,    92,   116,   222,   671,   884,   510,
     776,   480,   782,   787,   782,   481,   509,   778,   860,   861,
     863,   780,   770,   733,   739,   936,   480,   586,   864,   578,
     578,   105,   140,   234,   296,   535,   586,   864,   864,   867,
     170,   170,   864,   864,   743,   742,   742,   565,   786,   786,
     786,   742,   786,   743,   743,   734,   116,   742,   239,   240,
     526,   742,   742,   742,   865,   116,   126,   137,   310,   525,
      91,   151,   163,   167,   206,   207,   209,   524,   480,     6,
     136,   218,   527,   864,   867,   560,   593,   531,   532,   533,
     534,   869,    25,   136,   600,   246,   535,   569,   538,   486,
     865,   176,   504,   509,   531,   157,   430,   506,   848,   482,
     522,   290,   500,   704,   732,   733,   725,   723,   278,   222,
     792,   481,   671,   720,   480,   553,   553,   327,   327,   671,
      95,   238,   481,   671,   671,   671,   481,   481,   671,   857,
     481,   220,   671,   671,   671,   728,    85,   671,   671,   720,
     671,   671,   671,   481,   481,   481,   220,   481,   692,   728,
      85,   671,   848,   645,   157,   649,   725,   867,   867,   487,
     751,   752,   165,    81,   867,   869,   486,   737,   186,   817,
     497,   481,   660,   401,   704,   713,   713,   482,   725,   785,
     168,   168,   222,   300,   139,   157,   299,   714,   481,   482,
     919,   251,   920,   915,   565,   244,   250,   263,   882,   785,
     480,   480,   881,   671,   660,   783,   784,   863,   788,   482,
     480,   779,   481,   481,   482,   930,   737,   790,   671,   170,
     170,   578,   582,    43,   260,   594,   586,   599,   867,   565,
     560,   867,   671,   735,   862,   760,   595,   481,   482,   869,
     865,    92,    93,    94,    95,   137,   182,   211,   214,   216,
     260,   262,   314,   315,   316,   319,   320,   321,   322,   323,
     325,   326,   327,   329,   330,   331,   332,   333,   334,   337,
     339,   341,   342,   343,   344,   345,   346,   349,   350,   388,
     403,   417,   418,   419,   424,   426,   456,   539,   542,   543,
     544,   545,   546,   547,   869,   865,   481,   481,    86,   512,
     522,   867,   480,   725,   328,   741,   125,   482,   481,   220,
      92,    99,   294,   313,   558,   567,   481,   411,    46,   481,
     460,   481,   482,   482,   481,   481,   481,   671,   481,   481,
     481,   481,   481,   482,   481,   671,   164,   173,   148,   729,
     754,   870,   482,   435,   474,    10,   723,   664,   229,   168,
     168,   863,   732,   791,   704,   704,   671,   705,   578,   715,
     715,   715,   869,    58,   268,   272,   308,   467,   468,   912,
     913,   305,   921,   106,   292,   244,   883,   278,   278,   785,
     664,   482,   785,   789,   790,   787,   781,   779,   860,   481,
     586,   480,   116,   116,   537,   482,    87,   119,   736,   481,
     539,   532,   570,   480,   553,   480,   548,   549,   316,   349,
     542,   544,   567,   316,   350,   350,   351,   541,   553,   548,
     335,   540,   548,   567,   567,   548,   553,   480,   567,   480,
     553,    34,    88,   107,   116,   217,   219,   234,   262,   296,
     555,   556,   557,   568,   351,   480,   567,   480,   480,   480,
     553,   480,   549,   554,   481,   505,   520,   480,   509,   584,
     585,   869,   743,   793,   671,   481,   559,   671,   671,   687,
     692,   274,    98,   149,   726,   109,   849,   752,   411,   867,
     141,   528,   659,   738,   168,   704,   704,   785,   741,   222,
     706,   222,   707,   480,   716,   278,   278,   278,    85,   911,
     145,   202,   203,   204,   922,   923,   481,   481,   884,   511,
     784,   791,   481,   933,   480,   584,   320,   342,   343,   859,
     600,   862,   555,   200,   222,   480,   571,   573,   574,   575,
     220,   220,   338,   348,   352,   550,   551,   552,   567,   351,
     480,   550,   480,   550,   550,   567,   220,   220,   550,   867,
     563,   859,   219,   116,   170,   557,   170,   220,   220,   220,
     220,   550,   220,   550,   933,   506,   509,   507,   481,   482,
     736,   480,   170,   481,   481,   482,   481,   481,   865,   730,
     862,   727,   732,   128,   129,   225,   277,   850,   851,   177,
     852,    85,    41,   933,   663,   709,   791,   671,   300,   671,
     300,   719,   869,   480,   912,   224,   742,   742,   742,   923,
     528,   584,   481,   736,   596,   142,   233,   265,    40,    81,
     572,   869,   575,   481,   481,   482,   552,   588,   857,   588,
     481,   481,   301,   481,   481,   481,   481,   481,   930,   585,
     220,    81,   671,   849,   305,   482,   731,   736,   671,   738,
      98,    98,   128,    98,   851,   269,   277,   853,   854,   187,
     222,   480,   480,   481,   482,   717,   718,   481,   600,   101,
     218,   254,   260,   576,   576,   481,   482,   220,   481,   482,
     481,   567,   567,   508,   736,   481,   796,   481,   852,    39,
      65,   862,   428,   744,   857,   857,    98,   857,    98,    98,
     854,    10,   671,   719,   719,   869,   481,   569,    82,   116,
     219,   573,   869,   481,   567,   857,   567,   933,   157,   855,
     736,   869,   857,   857,   857,   743,   485,   481,   481,   220,
     480,   777,   745,    85,   177,   481,   778,   480,   191,   481,
     666,   746,   747,   748,    10,   671,   481,   482,   742,   748
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)           \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX	yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX	yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*-----------------------------.
| Print this symbol on YYOUT.  |
`-----------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yysymprint (FILE* yyout, int yytype, YYSTYPE yyvalue)
#else
yysymprint (yyout, yytype, yyvalue)
    FILE* yyout;
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyout, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyout, yytoknum[yytype], yyvalue);
# endif
    }
  else
    YYFPRINTF (yyout, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyout, ")");
}
#endif /* YYDEBUG. */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yydestruct (int yytype, YYSTYPE yyvalue)
#else
yydestruct (yytype, yyvalue)
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  switch (yytype)
    {
      default:
        break;
    }
}



/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif




int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of parse errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with.  */

  if (yychar <= 0)		/* This means end of input.  */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more.  */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

      /* We have to keep this `#if YYDEBUG', since we use variables
	 which are defined only if `YYDEBUG' is set.  */
      YYDPRINTF ((stderr, "Next token is "));
      YYDSYMPRINT ((stderr, yychar1, yylval));
      YYDPRINTF ((stderr, "\n"));
    }

  /* If the proper action on seeing token YYCHAR1 is to reduce or to
     detect an error, take that action.  */
  yyn += yychar1;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yychar1)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];



#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn - 1, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] >= 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif
  switch (yyn)
    {
        case 2:
#line 729 "sql_yacc.yy"
    {
	   THD *thd= YYTHD;
	   if (!thd->bootstrap &&
	      (!(thd->lex.select_lex.options & OPTION_FOUND_COMMENT)))
	   {
	     send_error(thd,ER_EMPTY_QUERY);
	     YYABORT;
	   }
	   else
	   {
	     thd->lex.sql_command = SQLCOM_EMPTY_QUERY;
	   }
	}
    break;

  case 3:
#line 742 "sql_yacc.yy"
    {}
    break;

  case 46:
#line 793 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  lex->sql_command= SQLCOM_HELP;
	  lex->help_arg= yyvsp[0].lex_str.str;
       }
    break;

  case 47:
#line 803 "sql_yacc.yy"
    {
	  LEX *lex = Lex;
	  lex->sql_command = SQLCOM_CHANGE_MASTER;
	  bzero((char*) &lex->mi, sizeof(lex->mi));
        }
    break;

  case 48:
#line 809 "sql_yacc.yy"
    {}
    break;

  case 51:
#line 818 "sql_yacc.yy"
    {
	 Lex->mi.host = yyvsp[0].lex_str.str;
       }
    break;

  case 52:
#line 823 "sql_yacc.yy"
    {
	 Lex->mi.user = yyvsp[0].lex_str.str;
       }
    break;

  case 53:
#line 828 "sql_yacc.yy"
    {
	 Lex->mi.password = yyvsp[0].lex_str.str;
       }
    break;

  case 54:
#line 833 "sql_yacc.yy"
    {
	 Lex->mi.port = yyvsp[0].ulong_num;
       }
    break;

  case 55:
#line 838 "sql_yacc.yy"
    {
	 Lex->mi.connect_retry = yyvsp[0].ulong_num;
       }
    break;

  case 56:
#line 842 "sql_yacc.yy"
    {
           Lex->mi.ssl= yyvsp[0].ulong_num ? 
               LEX_MASTER_INFO::SSL_ENABLE : LEX_MASTER_INFO::SSL_DISABLE;
         }
    break;

  case 57:
#line 847 "sql_yacc.yy"
    {
           Lex->mi.ssl_ca= yyvsp[0].lex_str.str;
         }
    break;

  case 58:
#line 851 "sql_yacc.yy"
    {
           Lex->mi.ssl_capath= yyvsp[0].lex_str.str;
         }
    break;

  case 59:
#line 855 "sql_yacc.yy"
    {
           Lex->mi.ssl_cert= yyvsp[0].lex_str.str;
         }
    break;

  case 60:
#line 859 "sql_yacc.yy"
    {
           Lex->mi.ssl_cipher= yyvsp[0].lex_str.str;
         }
    break;

  case 61:
#line 863 "sql_yacc.yy"
    {
           Lex->mi.ssl_key= yyvsp[0].lex_str.str;
	 }
    break;

  case 63:
#line 872 "sql_yacc.yy"
    {
	 Lex->mi.log_file_name = yyvsp[0].lex_str.str;
       }
    break;

  case 64:
#line 876 "sql_yacc.yy"
    {
           Lex->mi.pos = yyvsp[0].ulonglong_number;
           /* 
              If the user specified a value < BIN_LOG_HEADER_SIZE, adjust it
              instead of causing subsequent errors. 
              We need to do it in this file, because only there we know that 
              MASTER_LOG_POS has been explicitely specified. On the contrary
              in change_master() (sql_repl.cc) we cannot distinguish between 0
              (MASTER_LOG_POS explicitely specified as 0) and 0 (unspecified),
              whereas we want to distinguish (specified 0 means "read the binlog
              from 0" (4 in fact), unspecified means "don't change the position
              (keep the preceding value)").
           */
           Lex->mi.pos = max(BIN_LOG_HEADER_SIZE, Lex->mi.pos);
         }
    break;

  case 65:
#line 892 "sql_yacc.yy"
    {
           Lex->mi.relay_log_name = yyvsp[0].lex_str.str;
         }
    break;

  case 66:
#line 896 "sql_yacc.yy"
    {
           Lex->mi.relay_log_pos = yyvsp[0].ulong_num;
           /* Adjust if < BIN_LOG_HEADER_SIZE (same comment as Lex->mi.pos) */
           Lex->mi.relay_log_pos = max(BIN_LOG_HEADER_SIZE, Lex->mi.relay_log_pos);
         }
    break;

  case 67:
#line 907 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  LEX *lex=Lex;
	  lex->sql_command= SQLCOM_CREATE_TABLE;
	  if (!lex->select_lex.add_table_to_list(thd,yyvsp[0].table,
						 (yyvsp[-3].num &
						  HA_LEX_CREATE_TMP_TABLE ?
						  &tmp_table_alias :
						  (LEX_STRING*) 0),
						 TL_OPTION_UPDATING,
						 ((using_update_log)?
						  TL_READ_NO_INSERT:
						  TL_READ)))
	    YYABORT;
	  lex->create_list.empty();
	  lex->key_list.empty();
	  lex->col_list.empty();
	  lex->change=NullS;
	  bzero((char*) &lex->create_info,sizeof(lex->create_info));
	  lex->create_info.options=yyvsp[-3].num | yyvsp[-1].num;
	  lex->create_info.db_type= (enum db_type) lex->thd->variables.table_type;
	  lex->create_info.default_table_charset= thd->variables.collation_database;
	  lex->name=0;
	}
    break;

  case 68:
#line 932 "sql_yacc.yy"
    { Lex->current_select= &Lex->select_lex; }
    break;

  case 69:
#line 934 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_CREATE_INDEX;
	    if (!lex->current_select->add_table_to_list(lex->thd, yyvsp[0].table, NULL,
							TL_OPTION_UPDATING))
	      YYABORT;
	    lex->create_list.empty();
	    lex->key_list.empty();
	    lex->col_list.empty();
	    lex->change=NullS;
	  }
    break;

  case 70:
#line 946 "sql_yacc.yy"
    {
	    LEX *lex=Lex;

	    lex->key_list.push_back(new Key(yyvsp[-9].key_type,yyvsp[-7].lex_str.str, yyvsp[-6].key_alg, lex->col_list));
	    lex->col_list.empty();
	  }
    break;

  case 71:
#line 953 "sql_yacc.yy"
    { Lex->create_info.default_table_charset=NULL; }
    break;

  case 72:
#line 955 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command=SQLCOM_CREATE_DB;
	    lex->name=yyvsp[-2].lex_str.str;
            lex->create_info.options=yyvsp[-3].num;
	  }
    break;

  case 73:
#line 962 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command = SQLCOM_CREATE_FUNCTION;
	    lex->udf.name = yyvsp[0].lex_str;
	    lex->udf.type= yyvsp[-2].udf_type;
	  }
    break;

  case 74:
#line 969 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->udf.returns=(Item_result) yyvsp[-2].num;
	    lex->udf.dl=yyvsp[0].lex_str.str;
	  }
    break;

  case 75:
#line 977 "sql_yacc.yy"
    {}
    break;

  case 76:
#line 978 "sql_yacc.yy"
    {}
    break;

  case 77:
#line 980 "sql_yacc.yy"
    {
      	    LEX *lex=Lex;
     	    if (!(lex->name= (char *)yyvsp[0].table))
              YYABORT;
    	  }
    break;

  case 78:
#line 986 "sql_yacc.yy"
    {
      	    LEX *lex=Lex;
     	    if (!(lex->name= (char *)yyvsp[-1].table))
              YYABORT;
    	  }
    break;

  case 79:
#line 994 "sql_yacc.yy"
    {}
    break;

  case 80:
#line 995 "sql_yacc.yy"
    { Select->set_braces(1);}
    break;

  case 81:
#line 995 "sql_yacc.yy"
    {}
    break;

  case 82:
#line 999 "sql_yacc.yy"
    {}
    break;

  case 83:
#line 1001 "sql_yacc.yy"
    { Select->set_braces(0);}
    break;

  case 84:
#line 1001 "sql_yacc.yy"
    {}
    break;

  case 85:
#line 1003 "sql_yacc.yy"
    { Select->set_braces(1);}
    break;

  case 86:
#line 1003 "sql_yacc.yy"
    {}
    break;

  case 87:
#line 1008 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->lock_option= (using_update_log) ? TL_READ_NO_INSERT : TL_READ;
	    if (lex->sql_command == SQLCOM_INSERT)
	      lex->sql_command= SQLCOM_INSERT_SELECT;
	    else if (lex->sql_command == SQLCOM_REPLACE)
	      lex->sql_command= SQLCOM_REPLACE_SELECT;
	    lex->current_select->table_list.save_and_clear(&lex->save_list);
	    mysql_init_select(lex);
	    lex->current_select->parsing_place= SELECT_LEX_NODE::SELECT_LIST;
          }
    break;

  case 88:
#line 1020 "sql_yacc.yy"
    {
	    Select->parsing_place= SELECT_LEX_NODE::NO_MATTER;
	  }
    break;

  case 89:
#line 1024 "sql_yacc.yy"
    { Lex->current_select->table_list.push_front(&Lex->save_list); }
    break;

  case 90:
#line 1028 "sql_yacc.yy"
    {}
    break;

  case 91:
#line 1029 "sql_yacc.yy"
    {}
    break;

  case 92:
#line 1032 "sql_yacc.yy"
    {}
    break;

  case 93:
#line 1033 "sql_yacc.yy"
    {}
    break;

  case 94:
#line 1036 "sql_yacc.yy"
    {}
    break;

  case 95:
#line 1037 "sql_yacc.yy"
    {}
    break;

  case 96:
#line 1041 "sql_yacc.yy"
    { Lex->create_info.default_table_charset=yyvsp[0].charset; }
    break;

  case 97:
#line 1043 "sql_yacc.yy"
    { Lex->create_info.default_table_charset=yyvsp[0].charset; }
    break;

  case 98:
#line 1047 "sql_yacc.yy"
    { yyval.num= 0; }
    break;

  case 99:
#line 1048 "sql_yacc.yy"
    { yyval.num= yyvsp[0].num;}
    break;

  case 100:
#line 1051 "sql_yacc.yy"
    { yyval.num=yyvsp[0].num; }
    break;

  case 101:
#line 1052 "sql_yacc.yy"
    { yyval.num= yyvsp[-1].num | yyvsp[0].num; }
    break;

  case 102:
#line 1055 "sql_yacc.yy"
    { yyval.num=HA_LEX_CREATE_TMP_TABLE; }
    break;

  case 103:
#line 1058 "sql_yacc.yy"
    { yyval.num= 0; }
    break;

  case 104:
#line 1059 "sql_yacc.yy"
    { yyval.num=HA_LEX_CREATE_IF_NOT_EXISTS; }
    break;

  case 112:
#line 1075 "sql_yacc.yy"
    { Lex->create_info.db_type= yyvsp[0].db_type; }
    break;

  case 113:
#line 1076 "sql_yacc.yy"
    { Lex->create_info.max_rows= yyvsp[0].ulonglong_number; Lex->create_info.used_fields|= HA_CREATE_USED_MAX_ROWS;}
    break;

  case 114:
#line 1077 "sql_yacc.yy"
    { Lex->create_info.min_rows= yyvsp[0].ulonglong_number; Lex->create_info.used_fields|= HA_CREATE_USED_MIN_ROWS;}
    break;

  case 115:
#line 1078 "sql_yacc.yy"
    { Lex->create_info.avg_row_length=yyvsp[0].ulong_num; Lex->create_info.used_fields|= HA_CREATE_USED_AVG_ROW_LENGTH;}
    break;

  case 116:
#line 1079 "sql_yacc.yy"
    { Lex->create_info.password=yyvsp[0].lex_str.str; }
    break;

  case 117:
#line 1080 "sql_yacc.yy"
    { Lex->create_info.comment=yyvsp[0].lex_str.str; }
    break;

  case 118:
#line 1081 "sql_yacc.yy"
    { Lex->create_info.auto_increment_value=yyvsp[0].ulonglong_number; Lex->create_info.used_fields|= HA_CREATE_USED_AUTO;}
    break;

  case 119:
#line 1082 "sql_yacc.yy"
    { Lex->create_info.table_options|= yyvsp[0].ulong_num ? HA_OPTION_PACK_KEYS : HA_OPTION_NO_PACK_KEYS; Lex->create_info.used_fields|= HA_CREATE_USED_PACK_KEYS;}
    break;

  case 120:
#line 1083 "sql_yacc.yy"
    { Lex->create_info.table_options&= ~(HA_OPTION_PACK_KEYS | HA_OPTION_NO_PACK_KEYS); Lex->create_info.used_fields|= HA_CREATE_USED_PACK_KEYS;}
    break;

  case 121:
#line 1084 "sql_yacc.yy"
    { Lex->create_info.table_options|= yyvsp[0].ulong_num ? HA_OPTION_CHECKSUM : HA_OPTION_NO_CHECKSUM; }
    break;

  case 122:
#line 1085 "sql_yacc.yy"
    { Lex->create_info.table_options|= yyvsp[0].ulong_num ? HA_OPTION_DELAY_KEY_WRITE : HA_OPTION_NO_DELAY_KEY_WRITE; }
    break;

  case 123:
#line 1086 "sql_yacc.yy"
    { Lex->create_info.row_type= yyvsp[0].row_type; }
    break;

  case 124:
#line 1087 "sql_yacc.yy"
    { Lex->create_info.raid_type= yyvsp[0].ulong_num; Lex->create_info.used_fields|= HA_CREATE_USED_RAID;}
    break;

  case 125:
#line 1088 "sql_yacc.yy"
    { Lex->create_info.raid_chunks= yyvsp[0].ulong_num; Lex->create_info.used_fields|= HA_CREATE_USED_RAID;}
    break;

  case 126:
#line 1089 "sql_yacc.yy"
    { Lex->create_info.raid_chunksize= yyvsp[0].ulong_num*RAID_BLOCK_SIZE; Lex->create_info.used_fields|= HA_CREATE_USED_RAID;}
    break;

  case 127:
#line 1091 "sql_yacc.yy"
    {
	    /* Move the union list to the merge_list */
	    LEX *lex=Lex;
	    TABLE_LIST *table_list= lex->select_lex.get_table_list();
	    lex->create_info.merge_list= lex->select_lex.table_list;
	    lex->create_info.merge_list.elements--;
	    lex->create_info.merge_list.first= (byte*) (table_list->next);
	    lex->select_lex.table_list.elements=1;
	    lex->select_lex.table_list.next= (byte**) &(table_list->next);
	    table_list->next=0;
	    lex->create_info.used_fields|= HA_CREATE_USED_UNION;
	  }
    break;

  case 128:
#line 1104 "sql_yacc.yy"
    {
	    Lex->create_info.default_table_charset= yyvsp[0].charset;
	    Lex->create_info.used_fields|= HA_CREATE_USED_DEFAULT_CHARSET;
	  }
    break;

  case 129:
#line 1109 "sql_yacc.yy"
    {
	    Lex->create_info.table_charset= yyvsp[0].charset;
	    Lex->create_info.used_fields|= HA_CREATE_USED_CHARSET;
	  }
    break;

  case 130:
#line 1114 "sql_yacc.yy"
    {
	    Lex->create_info.table_charset= yyvsp[0].charset;
	    Lex->create_info.used_fields|= HA_CREATE_USED_DEFAULT_CHARSET;
	  }
    break;

  case 131:
#line 1119 "sql_yacc.yy"
    {
	    Lex->create_info.table_charset= yyvsp[0].charset;
	    Lex->create_info.used_fields|= HA_CREATE_USED_CHARSET;
	  }
    break;

  case 132:
#line 1123 "sql_yacc.yy"
    { Lex->create_info.merge_insert_method= yyvsp[0].ulong_num; Lex->create_info.used_fields|= HA_CREATE_USED_INSERT_METHOD;}
    break;

  case 133:
#line 1125 "sql_yacc.yy"
    { Lex->create_info.data_file_name= yyvsp[0].lex_str.str; }
    break;

  case 134:
#line 1126 "sql_yacc.yy"
    { Lex->create_info.index_file_name= yyvsp[0].lex_str.str; }
    break;

  case 135:
#line 1129 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_ISAM; }
    break;

  case 136:
#line 1130 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_MYISAM; }
    break;

  case 137:
#line 1131 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_MRG_MYISAM; }
    break;

  case 138:
#line 1132 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_HEAP; }
    break;

  case 139:
#line 1133 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_HEAP; }
    break;

  case 140:
#line 1134 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_BERKELEY_DB; }
    break;

  case 141:
#line 1135 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_INNODB; }
    break;

  case 142:
#line 1138 "sql_yacc.yy"
    { yyval.row_type= ROW_TYPE_DEFAULT; }
    break;

  case 143:
#line 1139 "sql_yacc.yy"
    { yyval.row_type= ROW_TYPE_FIXED; }
    break;

  case 144:
#line 1140 "sql_yacc.yy"
    { yyval.row_type= ROW_TYPE_DYNAMIC; }
    break;

  case 145:
#line 1141 "sql_yacc.yy"
    { yyval.row_type= ROW_TYPE_COMPRESSED; }
    break;

  case 146:
#line 1144 "sql_yacc.yy"
    { yyval.ulong_num= RAID_TYPE_0; }
    break;

  case 147:
#line 1145 "sql_yacc.yy"
    { yyval.ulong_num= RAID_TYPE_0; }
    break;

  case 148:
#line 1146 "sql_yacc.yy"
    { yyval.ulong_num=yyvsp[0].ulong_num;}
    break;

  case 149:
#line 1149 "sql_yacc.yy"
    { yyval.ulong_num= MERGE_INSERT_DISABLED; }
    break;

  case 150:
#line 1150 "sql_yacc.yy"
    { yyval.ulong_num= MERGE_INSERT_TO_FIRST; }
    break;

  case 151:
#line 1151 "sql_yacc.yy"
    { yyval.ulong_num= MERGE_INSERT_TO_LAST; }
    break;

  case 152:
#line 1154 "sql_yacc.yy"
    {}
    break;

  case 153:
#line 1155 "sql_yacc.yy"
    {}
    break;

  case 155:
#line 1159 "sql_yacc.yy"
    { yyval.udf_type = UDFTYPE_FUNCTION; }
    break;

  case 156:
#line 1160 "sql_yacc.yy"
    { yyval.udf_type = UDFTYPE_AGGREGATE; }
    break;

  case 157:
#line 1163 "sql_yacc.yy"
    {yyval.num = (int) STRING_RESULT; }
    break;

  case 158:
#line 1164 "sql_yacc.yy"
    {yyval.num = (int) REAL_RESULT; }
    break;

  case 159:
#line 1165 "sql_yacc.yy"
    {yyval.num = (int) INT_RESULT; }
    break;

  case 165:
#line 1180 "sql_yacc.yy"
    {
	    Lex->col_list.empty();		/* Alloced by sql_alloc */
	  }
    break;

  case 166:
#line 1187 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->key_list.push_back(new Key(yyvsp[-5].key_type,yyvsp[-4].simple_string, yyvsp[-3].key_alg, lex->col_list));
	    lex->col_list.empty();		/* Alloced by sql_alloc */
	  }
    break;

  case 167:
#line 1193 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->key_list.push_back(new foreign_key(yyvsp[-4].simple_string, lex->col_list,
				    yyvsp[0].table,
				    lex->ref_list,
				    lex->fk_delete_opt,
				    lex->fk_update_opt,
				    lex->fk_match_option));
	    lex->col_list.empty();		/* Alloced by sql_alloc */
	  }
    break;

  case 168:
#line 1204 "sql_yacc.yy"
    {
	    Lex->col_list.empty();		/* Alloced by sql_alloc */
	  }
    break;

  case 173:
#line 1220 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
	   lex->length=lex->dec=0; lex->type=0; lex->interval=0;
	   lex->default_value=0;
	   lex->comment=0;
	   lex->charset=NULL;
	 }
    break;

  case 174:
#line 1228 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (add_field_to_list(lex->thd, yyvsp[-3].lex_str.str,
				(enum enum_field_types) yyvsp[-1].num,
				lex->length,lex->dec,lex->type,
				lex->default_value, lex->comment,
				lex->change,lex->interval,lex->charset,
				lex->uint_geom_type))
	    YYABORT;
	}
    break;

  case 175:
#line 1240 "sql_yacc.yy"
    { yyval.num=yyvsp[-2].num; }
    break;

  case 176:
#line 1241 "sql_yacc.yy"
    { yyval.num=yyvsp[-2].num; }
    break;

  case 177:
#line 1242 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_FLOAT; }
    break;

  case 178:
#line 1243 "sql_yacc.yy"
    { Lex->length=(char*) "1";
					  yyval.num=FIELD_TYPE_TINY; }
    break;

  case 179:
#line 1245 "sql_yacc.yy"
    { Lex->length=(char*) "1";
					  yyval.num=FIELD_TYPE_TINY; }
    break;

  case 180:
#line 1247 "sql_yacc.yy"
    { Lex->length=(char*) "1";
					  yyval.num=FIELD_TYPE_TINY; }
    break;

  case 181:
#line 1249 "sql_yacc.yy"
    { Lex->length=yyvsp[-2].lex_str.str;
					  yyval.num=FIELD_TYPE_STRING; }
    break;

  case 182:
#line 1251 "sql_yacc.yy"
    { Lex->length=(char*) "1";
					  yyval.num=FIELD_TYPE_STRING; }
    break;

  case 183:
#line 1253 "sql_yacc.yy"
    { Lex->length=yyvsp[-1].lex_str.str;
					  yyval.num=FIELD_TYPE_STRING;
					  Lex->charset=national_charset_info; }
    break;

  case 184:
#line 1256 "sql_yacc.yy"
    { Lex->length=(char*) "1";
					  yyval.num=FIELD_TYPE_STRING;
					  Lex->charset=national_charset_info; }
    break;

  case 185:
#line 1259 "sql_yacc.yy"
    { Lex->length=yyvsp[-1].lex_str.str;
					  Lex->charset=&my_charset_bin;
					  yyval.num=FIELD_TYPE_STRING; }
    break;

  case 186:
#line 1262 "sql_yacc.yy"
    { Lex->length=yyvsp[-2].lex_str.str;
					  yyval.num=FIELD_TYPE_VAR_STRING; }
    break;

  case 187:
#line 1264 "sql_yacc.yy"
    { Lex->length=yyvsp[-1].lex_str.str;
					  yyval.num=FIELD_TYPE_VAR_STRING;
					  Lex->charset=national_charset_info; }
    break;

  case 188:
#line 1267 "sql_yacc.yy"
    { Lex->length=yyvsp[-1].lex_str.str;
					  Lex->charset=&my_charset_bin;
					  yyval.num=FIELD_TYPE_VAR_STRING; }
    break;

  case 189:
#line 1270 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_YEAR; }
    break;

  case 190:
#line 1271 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DATE; }
    break;

  case 191:
#line 1272 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_TIME; }
    break;

  case 192:
#line 1274 "sql_yacc.yy"
    {
	    if (YYTHD->variables.sql_mode & MODE_MAXDB)
	      yyval.num=FIELD_TYPE_DATETIME;
	    else
	      yyval.num=FIELD_TYPE_TIMESTAMP;
	   }
    break;

  case 193:
#line 1280 "sql_yacc.yy"
    { Lex->length=yyvsp[-1].lex_str.str;
					  yyval.num=FIELD_TYPE_TIMESTAMP; }
    break;

  case 194:
#line 1282 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DATETIME; }
    break;

  case 195:
#line 1283 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  yyval.num=FIELD_TYPE_TINY_BLOB; }
    break;

  case 196:
#line 1285 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  yyval.num=FIELD_TYPE_BLOB; }
    break;

  case 197:
#line 1287 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  Lex->uint_geom_type= (uint) Field::GEOM_GEOMETRY;
					  yyval.num=FIELD_TYPE_GEOMETRY; }
    break;

  case 198:
#line 1290 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  Lex->uint_geom_type= (uint) Field::GEOM_GEOMETRYCOLLECTION;
					  yyval.num=FIELD_TYPE_GEOMETRY; }
    break;

  case 199:
#line 1293 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  Lex->uint_geom_type= (uint) Field::GEOM_POINT;
					  yyval.num=FIELD_TYPE_GEOMETRY; }
    break;

  case 200:
#line 1296 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  Lex->uint_geom_type= (uint) Field::GEOM_MULTIPOINT;
					  yyval.num=FIELD_TYPE_GEOMETRY; }
    break;

  case 201:
#line 1299 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  Lex->uint_geom_type= (uint) Field::GEOM_LINESTRING;
					  yyval.num=FIELD_TYPE_GEOMETRY; }
    break;

  case 202:
#line 1302 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  Lex->uint_geom_type= (uint) Field::GEOM_MULTILINESTRING;
					  yyval.num=FIELD_TYPE_GEOMETRY; }
    break;

  case 203:
#line 1305 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  Lex->uint_geom_type= (uint) Field::GEOM_POLYGON;
					  yyval.num=FIELD_TYPE_GEOMETRY; }
    break;

  case 204:
#line 1308 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  Lex->uint_geom_type= (uint) Field::GEOM_MULTIPOLYGON;
					  yyval.num=FIELD_TYPE_GEOMETRY; }
    break;

  case 205:
#line 1311 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  yyval.num=FIELD_TYPE_MEDIUM_BLOB; }
    break;

  case 206:
#line 1313 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  yyval.num=FIELD_TYPE_LONG_BLOB; }
    break;

  case 207:
#line 1315 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin;
					  yyval.num=FIELD_TYPE_MEDIUM_BLOB; }
    break;

  case 208:
#line 1317 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_MEDIUM_BLOB; }
    break;

  case 209:
#line 1318 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_TINY_BLOB; }
    break;

  case 210:
#line 1319 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_BLOB; }
    break;

  case 211:
#line 1320 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_MEDIUM_BLOB; }
    break;

  case 212:
#line 1321 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_LONG_BLOB; }
    break;

  case 213:
#line 1323 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DECIMAL;}
    break;

  case 214:
#line 1325 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DECIMAL;}
    break;

  case 215:
#line 1327 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DECIMAL;}
    break;

  case 216:
#line 1328 "sql_yacc.yy"
    {Lex->interval_list.empty();}
    break;

  case 217:
#line 1329 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->interval=typelib(lex->interval_list);
	    yyval.num=FIELD_TYPE_ENUM;
	  }
    break;

  case 218:
#line 1334 "sql_yacc.yy"
    { Lex->interval_list.empty();}
    break;

  case 219:
#line 1335 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->interval=typelib(lex->interval_list);
	    yyval.num=FIELD_TYPE_SET;
	  }
    break;

  case 220:
#line 1340 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_MEDIUM_BLOB; }
    break;

  case 221:
#line 1342 "sql_yacc.yy"
    {
	    yyval.num=FIELD_TYPE_LONGLONG;
	    Lex->type|= (AUTO_INCREMENT_FLAG | NOT_NULL_FLAG | UNSIGNED_FLAG |
		         UNIQUE_FLAG);
	  }
    break;

  case 222:
#line 1350 "sql_yacc.yy"
    {}
    break;

  case 223:
#line 1354 "sql_yacc.yy"
    {}
    break;

  case 224:
#line 1355 "sql_yacc.yy"
    {}
    break;

  case 225:
#line 1359 "sql_yacc.yy"
    {}
    break;

  case 226:
#line 1360 "sql_yacc.yy"
    {}
    break;

  case 227:
#line 1364 "sql_yacc.yy"
    {}
    break;

  case 228:
#line 1365 "sql_yacc.yy"
    {}
    break;

  case 229:
#line 1366 "sql_yacc.yy"
    {}
    break;

  case 230:
#line 1367 "sql_yacc.yy"
    {}
    break;

  case 231:
#line 1368 "sql_yacc.yy"
    {}
    break;

  case 232:
#line 1372 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_LONG; }
    break;

  case 233:
#line 1373 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_TINY; }
    break;

  case 234:
#line 1374 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_SHORT; }
    break;

  case 235:
#line 1375 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_INT24; }
    break;

  case 236:
#line 1376 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_LONGLONG; }
    break;

  case 237:
#line 1379 "sql_yacc.yy"
    { yyval.num= YYTHD->variables.sql_mode & MODE_REAL_AS_FLOAT ?
			      FIELD_TYPE_FLOAT : FIELD_TYPE_DOUBLE; }
    break;

  case 238:
#line 1381 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DOUBLE; }
    break;

  case 239:
#line 1382 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DOUBLE; }
    break;

  case 240:
#line 1386 "sql_yacc.yy"
    {}
    break;

  case 241:
#line 1387 "sql_yacc.yy"
    { Lex->length=yyvsp[-1].lex_str.str; }
    break;

  case 242:
#line 1388 "sql_yacc.yy"
    {}
    break;

  case 243:
#line 1392 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->length=yyvsp[-3].lex_str.str; lex->dec=yyvsp[-1].lex_str.str;
	}
    break;

  case 244:
#line 1398 "sql_yacc.yy"
    {}
    break;

  case 245:
#line 1399 "sql_yacc.yy"
    {}
    break;

  case 246:
#line 1402 "sql_yacc.yy"
    {}
    break;

  case 247:
#line 1403 "sql_yacc.yy"
    {}
    break;

  case 248:
#line 1406 "sql_yacc.yy"
    {}
    break;

  case 249:
#line 1407 "sql_yacc.yy"
    { Lex->type|= UNSIGNED_FLAG;}
    break;

  case 250:
#line 1408 "sql_yacc.yy"
    { Lex->type|= UNSIGNED_FLAG | ZEROFILL_FLAG; }
    break;

  case 251:
#line 1411 "sql_yacc.yy"
    { Lex->length=(char*) 0; }
    break;

  case 252:
#line 1412 "sql_yacc.yy"
    { Lex->length= yyvsp[-1].lex_str.str; }
    break;

  case 253:
#line 1415 "sql_yacc.yy"
    {}
    break;

  case 254:
#line 1416 "sql_yacc.yy"
    {}
    break;

  case 255:
#line 1419 "sql_yacc.yy"
    {}
    break;

  case 256:
#line 1420 "sql_yacc.yy"
    {}
    break;

  case 257:
#line 1423 "sql_yacc.yy"
    {}
    break;

  case 259:
#line 1427 "sql_yacc.yy"
    { Lex->type&= ~ NOT_NULL_FLAG; }
    break;

  case 260:
#line 1428 "sql_yacc.yy"
    { Lex->type|= NOT_NULL_FLAG; }
    break;

  case 261:
#line 1429 "sql_yacc.yy"
    { Lex->default_value=yyvsp[0].item; }
    break;

  case 262:
#line 1430 "sql_yacc.yy"
    { Lex->type|= AUTO_INCREMENT_FLAG | NOT_NULL_FLAG; }
    break;

  case 263:
#line 1432 "sql_yacc.yy"
    { Lex->type|= AUTO_INCREMENT_FLAG | NOT_NULL_FLAG | UNIQUE_FLAG; }
    break;

  case 264:
#line 1433 "sql_yacc.yy"
    { Lex->type|= PRI_KEY_FLAG | NOT_NULL_FLAG; }
    break;

  case 265:
#line 1434 "sql_yacc.yy"
    { Lex->type|= UNIQUE_FLAG; }
    break;

  case 266:
#line 1435 "sql_yacc.yy"
    { Lex->type|= UNIQUE_KEY_FLAG; }
    break;

  case 267:
#line 1436 "sql_yacc.yy"
    { Lex->comment= &yyvsp[0].lex_str; }
    break;

  case 268:
#line 1438 "sql_yacc.yy"
    {
	    if (Lex->charset && !my_charset_same(Lex->charset,yyvsp[0].charset))
	    {
	      net_printf(YYTHD,ER_COLLATION_CHARSET_MISMATCH,
			 yyvsp[0].charset->name,Lex->charset->csname);
	      YYABORT;
	    }
	    else
	    {
	      Lex->charset=yyvsp[0].charset;
	    }
	  }
    break;

  case 269:
#line 1453 "sql_yacc.yy"
    {}
    break;

  case 270:
#line 1454 "sql_yacc.yy"
    {}
    break;

  case 271:
#line 1459 "sql_yacc.yy"
    {
	  if (!(yyval.charset=get_charset_by_csname(yyvsp[0].lex_str.str,MY_CS_PRIMARY,MYF(0))))
	  {
	    net_printf(YYTHD,ER_UNKNOWN_CHARACTER_SET,yyvsp[0].lex_str.str);
	    YYABORT;
	  }
	}
    break;

  case 272:
#line 1466 "sql_yacc.yy"
    { yyval.charset= &my_charset_bin; }
    break;

  case 273:
#line 1470 "sql_yacc.yy"
    { yyval.charset=yyvsp[0].charset;   }
    break;

  case 274:
#line 1471 "sql_yacc.yy"
    { yyval.charset=NULL; }
    break;

  case 275:
#line 1476 "sql_yacc.yy"
    {
	  if (!(yyval.charset=get_charset_by_csname(yyvsp[0].lex_str.str,MY_CS_PRIMARY,MYF(0))) &&
	      !(yyval.charset=get_old_charset_by_name(yyvsp[0].lex_str.str)))
	  {
	    net_printf(YYTHD,ER_UNKNOWN_CHARACTER_SET,yyvsp[0].lex_str.str);
	    YYABORT;
	  }
	}
    break;

  case 276:
#line 1484 "sql_yacc.yy"
    { yyval.charset= &my_charset_bin; }
    break;

  case 277:
#line 1488 "sql_yacc.yy"
    { yyval.charset=yyvsp[0].charset;   }
    break;

  case 278:
#line 1489 "sql_yacc.yy"
    { yyval.charset=NULL; }
    break;

  case 279:
#line 1493 "sql_yacc.yy"
    {
	  if (!(yyval.charset=get_charset_by_name(yyvsp[0].lex_str.str,MYF(0))))
	  {
	    net_printf(YYTHD,ER_UNKNOWN_COLLATION,yyvsp[0].lex_str.str);
	    YYABORT;
	  }
	}
    break;

  case 280:
#line 1502 "sql_yacc.yy"
    { yyval.charset=NULL; }
    break;

  case 281:
#line 1503 "sql_yacc.yy"
    { yyval.charset=yyvsp[0].charset; }
    break;

  case 282:
#line 1507 "sql_yacc.yy"
    { yyval.charset=yyvsp[0].charset;   }
    break;

  case 283:
#line 1508 "sql_yacc.yy"
    { yyval.charset=NULL; }
    break;

  case 284:
#line 1511 "sql_yacc.yy"
    {}
    break;

  case 285:
#line 1512 "sql_yacc.yy"
    {}
    break;

  case 286:
#line 1515 "sql_yacc.yy"
    { Lex->charset=NULL; }
    break;

  case 287:
#line 1516 "sql_yacc.yy"
    { Lex->charset=&my_charset_latin1; }
    break;

  case 288:
#line 1517 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin; }
    break;

  case 289:
#line 1518 "sql_yacc.yy"
    { Lex->charset=&my_charset_bin; }
    break;

  case 290:
#line 1520 "sql_yacc.yy"
    {
	  if (!(Lex->charset=get_charset_by_csname("ucs2",MY_CS_PRIMARY,MYF(0))))
	  {
	    net_printf(YYTHD,ER_UNKNOWN_CHARACTER_SET,"ucs2");
	    YYABORT;
	  }
	}
    break;

  case 291:
#line 1527 "sql_yacc.yy"
    { Lex->charset=yyvsp[0].charset; }
    break;

  case 294:
#line 1536 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->fk_delete_opt= lex->fk_update_opt= lex->fk_match_option= 0;
	  lex->ref_list.empty();
	}
    break;

  case 295:
#line 1542 "sql_yacc.yy"
    {
	  yyval.table=yyvsp[-2].table;
	}
    break;

  case 296:
#line 1547 "sql_yacc.yy"
    {}
    break;

  case 297:
#line 1548 "sql_yacc.yy"
    {}
    break;

  case 298:
#line 1551 "sql_yacc.yy"
    { Lex->ref_list.push_back(new key_part_spec(yyvsp[0].lex_str.str)); }
    break;

  case 299:
#line 1552 "sql_yacc.yy"
    { Lex->ref_list.push_back(new key_part_spec(yyvsp[0].lex_str.str)); }
    break;

  case 300:
#line 1556 "sql_yacc.yy"
    {}
    break;

  case 301:
#line 1557 "sql_yacc.yy"
    {}
    break;

  case 302:
#line 1560 "sql_yacc.yy"
    {}
    break;

  case 303:
#line 1561 "sql_yacc.yy"
    {}
    break;

  case 304:
#line 1564 "sql_yacc.yy"
    { Lex->fk_delete_opt= yyvsp[0].num; }
    break;

  case 305:
#line 1565 "sql_yacc.yy"
    { Lex->fk_update_opt= yyvsp[0].num; }
    break;

  case 306:
#line 1566 "sql_yacc.yy"
    { Lex->fk_match_option= foreign_key::FK_MATCH_FULL; }
    break;

  case 307:
#line 1567 "sql_yacc.yy"
    { Lex->fk_match_option= foreign_key::FK_MATCH_PARTIAL; }
    break;

  case 308:
#line 1568 "sql_yacc.yy"
    { Lex->fk_match_option= foreign_key::FK_MATCH_SIMPLE; }
    break;

  case 309:
#line 1571 "sql_yacc.yy"
    { yyval.num= (int) foreign_key::FK_OPTION_RESTRICT; }
    break;

  case 310:
#line 1572 "sql_yacc.yy"
    { yyval.num= (int) foreign_key::FK_OPTION_CASCADE; }
    break;

  case 311:
#line 1573 "sql_yacc.yy"
    { yyval.num= (int) foreign_key::FK_OPTION_SET_NULL; }
    break;

  case 312:
#line 1574 "sql_yacc.yy"
    { yyval.num= (int) foreign_key::FK_OPTION_NO_ACTION; }
    break;

  case 313:
#line 1575 "sql_yacc.yy"
    { yyval.num= (int) foreign_key::FK_OPTION_DEFAULT;  }
    break;

  case 314:
#line 1578 "sql_yacc.yy"
    { yyval.key_type= Key::PRIMARY; }
    break;

  case 315:
#line 1579 "sql_yacc.yy"
    { yyval.key_type= Key::MULTIPLE; }
    break;

  case 316:
#line 1580 "sql_yacc.yy"
    { yyval.key_type= Key::FULLTEXT; }
    break;

  case 317:
#line 1581 "sql_yacc.yy"
    { yyval.key_type= Key::FULLTEXT; }
    break;

  case 318:
#line 1582 "sql_yacc.yy"
    { yyval.key_type= Key::SPATIAL; }
    break;

  case 319:
#line 1583 "sql_yacc.yy"
    { yyval.key_type= Key::SPATIAL; }
    break;

  case 320:
#line 1584 "sql_yacc.yy"
    { yyval.key_type= Key::UNIQUE; }
    break;

  case 321:
#line 1585 "sql_yacc.yy"
    { yyval.key_type= Key::UNIQUE; }
    break;

  case 322:
#line 1588 "sql_yacc.yy"
    {}
    break;

  case 323:
#line 1589 "sql_yacc.yy"
    {}
    break;

  case 324:
#line 1592 "sql_yacc.yy"
    {}
    break;

  case 326:
#line 1597 "sql_yacc.yy"
    {}
    break;

  case 327:
#line 1598 "sql_yacc.yy"
    {}
    break;

  case 328:
#line 1599 "sql_yacc.yy"
    {}
    break;

  case 329:
#line 1602 "sql_yacc.yy"
    { yyval.key_type= Key::MULTIPLE; }
    break;

  case 330:
#line 1603 "sql_yacc.yy"
    { yyval.key_type= Key::UNIQUE; }
    break;

  case 331:
#line 1604 "sql_yacc.yy"
    { yyval.key_type= Key::FULLTEXT;}
    break;

  case 332:
#line 1605 "sql_yacc.yy"
    { yyval.key_type= Key::SPATIAL; }
    break;

  case 333:
#line 1609 "sql_yacc.yy"
    { yyval.key_alg= HA_KEY_ALG_UNDEF; }
    break;

  case 334:
#line 1610 "sql_yacc.yy"
    { yyval.key_alg= yyvsp[0].key_alg; }
    break;

  case 335:
#line 1611 "sql_yacc.yy"
    { yyval.key_alg= yyvsp[0].key_alg; }
    break;

  case 336:
#line 1614 "sql_yacc.yy"
    { yyval.key_alg= HA_KEY_ALG_BTREE; }
    break;

  case 337:
#line 1615 "sql_yacc.yy"
    { yyval.key_alg= HA_KEY_ALG_RTREE; }
    break;

  case 338:
#line 1616 "sql_yacc.yy"
    { yyval.key_alg= HA_KEY_ALG_HASH; }
    break;

  case 339:
#line 1619 "sql_yacc.yy"
    { Lex->col_list.push_back(yyvsp[-1].key_part); }
    break;

  case 340:
#line 1620 "sql_yacc.yy"
    { Lex->col_list.push_back(yyvsp[-1].key_part); }
    break;

  case 341:
#line 1623 "sql_yacc.yy"
    { yyval.key_part=new key_part_spec(yyvsp[0].lex_str.str); }
    break;

  case 342:
#line 1624 "sql_yacc.yy"
    { yyval.key_part=new key_part_spec(yyvsp[-3].lex_str.str,(uint) atoi(yyvsp[-1].lex_str.str)); }
    break;

  case 343:
#line 1627 "sql_yacc.yy"
    { yyval.simple_string=(char*) 0; }
    break;

  case 344:
#line 1628 "sql_yacc.yy"
    { yyval.simple_string=yyvsp[0].lex_str.str; }
    break;

  case 345:
#line 1631 "sql_yacc.yy"
    { yyval.lex_str.str= 0; yyval.lex_str.length= 0; }
    break;

  case 346:
#line 1632 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str; }
    break;

  case 347:
#line 1635 "sql_yacc.yy"
    { Lex->interval_list.push_back(yyvsp[0].string); }
    break;

  case 348:
#line 1636 "sql_yacc.yy"
    { Lex->interval_list.push_back(yyvsp[0].string); }
    break;

  case 349:
#line 1644 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  LEX *lex=&thd->lex;
	  lex->sql_command = SQLCOM_ALTER_TABLE;
	  lex->name=0;
	  if (!lex->select_lex.add_table_to_list(thd, yyvsp[0].table, NULL,
						 TL_OPTION_UPDATING))
	    YYABORT;
	  lex->drop_primary=0;
	  lex->create_list.empty();
	  lex->key_list.empty();
	  lex->col_list.empty();
	  lex->drop_list.empty();
	  lex->alter_list.empty();
          lex->select_lex.init_order();
	  lex->select_lex.db=lex->name=0;
	  bzero((char*) &lex->create_info,sizeof(lex->create_info));
	  lex->create_info.db_type= DB_TYPE_DEFAULT;
	  lex->create_info.default_table_charset= thd->variables.collation_database;
	  lex->create_info.row_type= ROW_TYPE_NOT_USED;
          lex->alter_keys_onoff=LEAVE_AS_IS;
	  lex->tablespace_op=NO_TABLESPACE_OP;
          lex->simple_alter=1;
	}
    break;

  case 350:
#line 1669 "sql_yacc.yy"
    {}
    break;

  case 351:
#line 1671 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command=SQLCOM_ALTER_DB;
	    lex->name=yyvsp[-1].lex_str.str;
	  }
    break;

  case 353:
#line 1679 "sql_yacc.yy"
    { Lex->tablespace_op=DISCARD_TABLESPACE; }
    break;

  case 354:
#line 1680 "sql_yacc.yy"
    { Lex->tablespace_op=IMPORT_TABLESPACE; }
    break;

  case 357:
#line 1685 "sql_yacc.yy"
    { Lex->change=0; }
    break;

  case 358:
#line 1688 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 359:
#line 1689 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 360:
#line 1690 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 361:
#line 1692 "sql_yacc.yy"
    {
	     LEX *lex=Lex;
	     lex->change= yyvsp[0].lex_str.str; lex->simple_alter=0;
	  }
    break;

  case 363:
#line 1698 "sql_yacc.yy"
    {
            LEX *lex=Lex;
            lex->length=lex->dec=0; lex->type=0; lex->interval=0;
            lex->default_value=0;
	    lex->comment=0;
	    lex->charset= NULL;
            lex->simple_alter=0;
          }
    break;

  case 364:
#line 1707 "sql_yacc.yy"
    {
            LEX *lex=Lex;
            if (add_field_to_list(lex->thd,yyvsp[-3].lex_str.str,
                                  (enum enum_field_types) yyvsp[-1].num,
                                  lex->length,lex->dec,lex->type,
                                  lex->default_value, lex->comment,
				  yyvsp[-3].lex_str.str, lex->interval, lex->charset,
				  lex->uint_geom_type))
	       YYABORT;
          }
    break;

  case 366:
#line 1719 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->drop_list.push_back(new Alter_drop(Alter_drop::COLUMN,
					    yyvsp[-1].lex_str.str)); lex->simple_alter=0;
	  }
    break;

  case 367:
#line 1725 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->drop_primary=1; lex->simple_alter=0;
	  }
    break;

  case 368:
#line 1729 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 369:
#line 1731 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->drop_list.push_back(new Alter_drop(Alter_drop::KEY,
						    yyvsp[0].lex_str.str));
	    lex->simple_alter=0;
	  }
    break;

  case 370:
#line 1737 "sql_yacc.yy"
    { Lex->alter_keys_onoff=DISABLE; }
    break;

  case 371:
#line 1738 "sql_yacc.yy"
    { Lex->alter_keys_onoff=ENABLE; }
    break;

  case 372:
#line 1740 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->alter_list.push_back(new Alter_column(yyvsp[-3].lex_str.str,yyvsp[0].item));
	    lex->simple_alter=0;
	  }
    break;

  case 373:
#line 1746 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->alter_list.push_back(new Alter_column(yyvsp[-2].lex_str.str,(Item*) 0));
	    lex->simple_alter=0;
	  }
    break;

  case 374:
#line 1752 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->select_lex.db=yyvsp[0].table->db.str;
	    lex->name= yyvsp[0].table->table.str;
	  }
    break;

  case 375:
#line 1757 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 376:
#line 1758 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 377:
#line 1761 "sql_yacc.yy"
    {}
    break;

  case 378:
#line 1762 "sql_yacc.yy"
    {}
    break;

  case 379:
#line 1765 "sql_yacc.yy"
    { Lex->duplicates=DUP_ERROR; }
    break;

  case 380:
#line 1766 "sql_yacc.yy"
    { Lex->duplicates=DUP_IGNORE; }
    break;

  case 381:
#line 1769 "sql_yacc.yy"
    {}
    break;

  case 382:
#line 1770 "sql_yacc.yy"
    {}
    break;

  case 383:
#line 1771 "sql_yacc.yy"
    {}
    break;

  case 384:
#line 1774 "sql_yacc.yy"
    {}
    break;

  case 385:
#line 1775 "sql_yacc.yy"
    { store_position_for_column(yyvsp[0].lex_str.str); }
    break;

  case 386:
#line 1776 "sql_yacc.yy"
    { store_position_for_column(first_keyword); }
    break;

  case 387:
#line 1779 "sql_yacc.yy"
    {}
    break;

  case 388:
#line 1780 "sql_yacc.yy"
    {}
    break;

  case 389:
#line 1781 "sql_yacc.yy"
    {}
    break;

  case 390:
#line 1782 "sql_yacc.yy"
    {}
    break;

  case 391:
#line 1791 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
            lex->sql_command = SQLCOM_SLAVE_START;
	    lex->type = 0;
	    /* We'll use mi structure for UNTIL options */
	    bzero((char*) &lex->mi, sizeof(lex->mi));
          }
    break;

  case 392:
#line 1799 "sql_yacc.yy"
    {}
    break;

  case 393:
#line 1801 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
            lex->sql_command = SQLCOM_SLAVE_STOP;
	    lex->type = 0;
          }
    break;

  case 394:
#line 1807 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
           lex->sql_command = SQLCOM_SLAVE_START;
	   lex->type = 0;
         }
    break;

  case 395:
#line 1813 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
           lex->sql_command = SQLCOM_SLAVE_STOP;
	   lex->type = 0;
         }
    break;

  case 396:
#line 1822 "sql_yacc.yy"
    { Lex->sql_command = SQLCOM_BEGIN;}
    break;

  case 397:
#line 1823 "sql_yacc.yy"
    {}
    break;

  case 398:
#line 1827 "sql_yacc.yy"
    { Lex->slave_thd_opt= 0; }
    break;

  case 399:
#line 1829 "sql_yacc.yy"
    {}
    break;

  case 402:
#line 1838 "sql_yacc.yy"
    {}
    break;

  case 403:
#line 1839 "sql_yacc.yy"
    { Lex->slave_thd_opt|=SLAVE_SQL; }
    break;

  case 404:
#line 1840 "sql_yacc.yy"
    { Lex->slave_thd_opt|=SLAVE_IO; }
    break;

  case 405:
#line 1844 "sql_yacc.yy"
    {}
    break;

  case 406:
#line 1846 "sql_yacc.yy"
    {
            LEX *lex=Lex;
            if ((lex->mi.log_file_name || lex->mi.pos) &&
                (lex->mi.relay_log_name || lex->mi.relay_log_pos) ||
                !((lex->mi.log_file_name && lex->mi.pos) ||
                  (lex->mi.relay_log_name && lex->mi.relay_log_pos)))
            {
               send_error(lex->thd, ER_BAD_SLAVE_UNTIL_COND);
               YYABORT;
            }

          }
    break;

  case 409:
#line 1867 "sql_yacc.yy"
    {
	   Lex->sql_command = SQLCOM_RESTORE_TABLE;
	}
    break;

  case 410:
#line 1871 "sql_yacc.yy"
    {
	  Lex->backup_dir = yyvsp[0].lex_str.str;
        }
    break;

  case 411:
#line 1877 "sql_yacc.yy"
    {
	   Lex->sql_command = SQLCOM_BACKUP_TABLE;
	}
    break;

  case 412:
#line 1881 "sql_yacc.yy"
    {
	  Lex->backup_dir = yyvsp[0].lex_str.str;
        }
    break;

  case 413:
#line 1887 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
	   lex->sql_command = SQLCOM_CHECKSUM;
	}
    break;

  case 414:
#line 1892 "sql_yacc.yy"
    {}
    break;

  case 415:
#line 1896 "sql_yacc.yy"
    { Lex->check_opt.flags= 0; }
    break;

  case 416:
#line 1897 "sql_yacc.yy"
    { Lex->check_opt.flags= T_QUICK; }
    break;

  case 417:
#line 1898 "sql_yacc.yy"
    { Lex->check_opt.flags= T_EXTEND; }
    break;

  case 418:
#line 1903 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
	   lex->sql_command = SQLCOM_REPAIR;
           lex->no_write_to_binlog= yyvsp[-1].num;
	   lex->check_opt.init();
	}
    break;

  case 419:
#line 1910 "sql_yacc.yy"
    {}
    break;

  case 420:
#line 1914 "sql_yacc.yy"
    { Lex->check_opt.flags = T_MEDIUM; }
    break;

  case 421:
#line 1915 "sql_yacc.yy"
    {}
    break;

  case 422:
#line 1918 "sql_yacc.yy"
    {}
    break;

  case 423:
#line 1919 "sql_yacc.yy"
    {}
    break;

  case 424:
#line 1922 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_QUICK; }
    break;

  case 425:
#line 1923 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_EXTEND; }
    break;

  case 426:
#line 1924 "sql_yacc.yy"
    { Lex->check_opt.sql_flags|= TT_USEFRM; }
    break;

  case 427:
#line 1928 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
	   lex->sql_command = SQLCOM_ANALYZE;
           lex->no_write_to_binlog= yyvsp[-1].num;
	   lex->check_opt.init();
	}
    break;

  case 428:
#line 1935 "sql_yacc.yy"
    {}
    break;

  case 429:
#line 1940 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
	   lex->sql_command = SQLCOM_CHECK;
	   lex->check_opt.init();
	}
    break;

  case 430:
#line 1946 "sql_yacc.yy"
    {}
    break;

  case 431:
#line 1950 "sql_yacc.yy"
    { Lex->check_opt.flags = T_MEDIUM; }
    break;

  case 432:
#line 1951 "sql_yacc.yy"
    {}
    break;

  case 433:
#line 1954 "sql_yacc.yy"
    {}
    break;

  case 434:
#line 1955 "sql_yacc.yy"
    {}
    break;

  case 435:
#line 1958 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_QUICK; }
    break;

  case 436:
#line 1959 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_FAST; }
    break;

  case 437:
#line 1960 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_MEDIUM; }
    break;

  case 438:
#line 1961 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_EXTEND; }
    break;

  case 439:
#line 1962 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_CHECK_ONLY_CHANGED; }
    break;

  case 440:
#line 1966 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
	   lex->sql_command = SQLCOM_OPTIMIZE;
           lex->no_write_to_binlog= yyvsp[-1].num;
	   lex->check_opt.init();
	}
    break;

  case 441:
#line 1973 "sql_yacc.yy"
    {}
    break;

  case 442:
#line 1977 "sql_yacc.yy"
    { yyval.num= 0; }
    break;

  case 443:
#line 1978 "sql_yacc.yy"
    { yyval.num= 1; }
    break;

  case 444:
#line 1979 "sql_yacc.yy"
    { yyval.num= 1; }
    break;

  case 445:
#line 1984 "sql_yacc.yy"
    {
	   Lex->sql_command=SQLCOM_RENAME_TABLE;
	}
    break;

  case 446:
#line 1988 "sql_yacc.yy"
    {}
    break;

  case 449:
#line 1997 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  SELECT_LEX *sl= lex->current_select;
	  if (!sl->add_table_to_list(lex->thd, yyvsp[-2].table,NULL,TL_OPTION_UPDATING,
				     TL_IGNORE) ||
	      !sl->add_table_to_list(lex->thd, yyvsp[0].table,NULL,TL_OPTION_UPDATING,
				     TL_IGNORE))
	    YYABORT;
	}
    break;

  case 450:
#line 2009 "sql_yacc.yy"
    {
          LEX *lex=Lex;
          lex->sql_command= SQLCOM_ASSIGN_TO_KEYCACHE;
	  lex->name_and_length= yyvsp[0].lex_str;
        }
    break;

  case 453:
#line 2022 "sql_yacc.yy"
    {
          LEX *lex=Lex;
          SELECT_LEX *sel= &lex->select_lex;
          if (!sel->add_table_to_list(lex->thd, yyvsp[-1].table, NULL, 0,
                                      TL_READ,
                                      sel->get_use_index(),
                                      (List<String> *)0))
            YYABORT;
        }
    break;

  case 454:
#line 2034 "sql_yacc.yy"
    { yyval.lex_str= yyvsp[0].lex_str; }
    break;

  case 455:
#line 2035 "sql_yacc.yy"
    { yyval.lex_str = default_key_cache_base; }
    break;

  case 456:
#line 2040 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command=SQLCOM_PRELOAD_KEYS;
	}
    break;

  case 457:
#line 2045 "sql_yacc.yy"
    {}
    break;

  case 460:
#line 2054 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  SELECT_LEX *sel= &lex->select_lex;
	  if (!sel->add_table_to_list(lex->thd, yyvsp[-2].table, NULL, yyvsp[0].num,
                                      TL_READ,
                                      sel->get_use_index(),
                                      (List<String> *)0))
            YYABORT;
	}
    break;

  case 461:
#line 2066 "sql_yacc.yy"
    { Select->interval_list.empty(); }
    break;

  case 462:
#line 2068 "sql_yacc.yy"
    {
          LEX *lex=Lex;
          SELECT_LEX *sel= &lex->select_lex;
          sel->use_index= sel->interval_list;
        }
    break;

  case 463:
#line 2076 "sql_yacc.yy"
    { Lex->select_lex.use_index_ptr= 0; }
    break;

  case 464:
#line 2078 "sql_yacc.yy"
    {
            SELECT_LEX *sel= &Lex->select_lex;
	    sel->use_index_ptr= &sel->use_index;
	  }
    break;

  case 465:
#line 2086 "sql_yacc.yy"
    { yyval.num= 0; }
    break;

  case 466:
#line 2087 "sql_yacc.yy"
    { yyval.num= TL_OPTION_IGNORE_LEAVES; }
    break;

  case 467:
#line 2097 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  lex->sql_command= SQLCOM_SELECT;
	  lex->select_lex.resolve_mode= SELECT_LEX::SELECT_MODE;
	}
    break;

  case 469:
#line 2109 "sql_yacc.yy"
    {
	    LEX *lex= Lex;
            SELECT_LEX * sel= lex->current_select;
	    if (sel->set_braces(1))
	    {
	      send_error(lex->thd, ER_SYNTAX_ERROR);
	      YYABORT;
	    }
	  if (sel->linkage == UNION_TYPE &&
	      !sel->master_unit()->first_select()->braces)
	  {
	    send_error(lex->thd, ER_SYNTAX_ERROR);
	    YYABORT;
	  }
            /* select in braces, can't contain global parameters */
	    if (sel->master_unit()->fake_select_lex)
              sel->master_unit()->global_parameters=
                 sel->master_unit()->fake_select_lex;
          }
    break;

  case 471:
#line 2131 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
          SELECT_LEX * sel= lex->current_select;
          if (lex->current_select->set_braces(0))
	  {
	    send_error(lex->thd, ER_SYNTAX_ERROR);
	    YYABORT;
	  }
	  if (sel->linkage == UNION_TYPE &&
	      sel->master_unit()->first_select()->braces)
	  {
	    send_error(lex->thd, ER_SYNTAX_ERROR);
	    YYABORT;
	  }
	}
    break;

  case 473:
#line 2150 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  SELECT_LEX * sel= lex->current_select;
	  if (lex->current_select == &lex->select_lex)
	    lex->lock_option= TL_READ; /* Only for global SELECT */
	  if (sel->linkage != UNION_TYPE)
	    mysql_init_select(lex);
	  lex->current_select->parsing_place= SELECT_LEX_NODE::SELECT_LIST;
	}
    break;

  case 474:
#line 2160 "sql_yacc.yy"
    {
	  Select->parsing_place= SELECT_LEX_NODE::NO_MATTER;
	}
    break;

  case 476:
#line 2166 "sql_yacc.yy"
    {}
    break;

  case 487:
#line 2188 "sql_yacc.yy"
    { Select->options|= SELECT_STRAIGHT_JOIN; }
    break;

  case 488:
#line 2190 "sql_yacc.yy"
    {
	    if (check_simple_select())
	      YYABORT;
	    Lex->lock_option= TL_READ_HIGH_PRIORITY;
	  }
    break;

  case 489:
#line 2195 "sql_yacc.yy"
    { Select->options|= SELECT_DISTINCT; }
    break;

  case 490:
#line 2196 "sql_yacc.yy"
    { Select->options|= SELECT_SMALL_RESULT; }
    break;

  case 491:
#line 2197 "sql_yacc.yy"
    { Select->options|= SELECT_BIG_RESULT; }
    break;

  case 492:
#line 2199 "sql_yacc.yy"
    {
	    if (check_simple_select())
	      YYABORT;
	    Select->options|= OPTION_BUFFER_RESULT;
	  }
    break;

  case 493:
#line 2205 "sql_yacc.yy"
    {
	    if (check_simple_select())
	      YYABORT;
	    Select->options|= OPTION_FOUND_ROWS;
	  }
    break;

  case 494:
#line 2210 "sql_yacc.yy"
    { Lex->safe_to_cache_query=0; }
    break;

  case 495:
#line 2212 "sql_yacc.yy"
    {
	    Lex->select_lex.options|= OPTION_TO_QUERY_CACHE;
	  }
    break;

  case 496:
#line 2215 "sql_yacc.yy"
    {}
    break;

  case 498:
#line 2221 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->current_select->set_lock_for_tables(TL_WRITE);
	    lex->safe_to_cache_query=0;
	  }
    break;

  case 499:
#line 2227 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->current_select->
	      set_lock_for_tables(TL_READ_WITH_SHARED_LOCKS);
	    lex->safe_to_cache_query=0;
	  }
    break;

  case 502:
#line 2239 "sql_yacc.yy"
    {
	    THD *thd= YYTHD;
	    if (add_item_to_list(thd, new Item_field(NULL, NULL, "*")))
	      YYABORT;
	    (thd->lex.current_select->with_wild)++;
	  }
    break;

  case 503:
#line 2249 "sql_yacc.yy"
    {
	    if (add_item_to_list(YYTHD, yyvsp[-2].item))
	      YYABORT;
	    if (yyvsp[0].lex_str.str)
	      yyvsp[-2].item->set_name(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length,system_charset_info);
	    else if (!yyvsp[-2].item->name)
	      yyvsp[-2].item->set_name(yyvsp[-3].simple_string,(uint) (yyvsp[-1].simple_string - yyvsp[-3].simple_string), YYTHD->charset());
	  }
    break;

  case 504:
#line 2259 "sql_yacc.yy"
    { yyval.simple_string=(char*) Lex->tok_start; }
    break;

  case 505:
#line 2262 "sql_yacc.yy"
    { yyval.simple_string=(char*) Lex->tok_end; }
    break;

  case 506:
#line 2265 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 507:
#line 2266 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 508:
#line 2269 "sql_yacc.yy"
    { yyval.lex_str.str=0;}
    break;

  case 509:
#line 2270 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str; }
    break;

  case 510:
#line 2271 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str; }
    break;

  case 511:
#line 2272 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str; }
    break;

  case 512:
#line 2273 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str; }
    break;

  case 513:
#line 2277 "sql_yacc.yy"
    {}
    break;

  case 514:
#line 2278 "sql_yacc.yy"
    {}
    break;

  case 515:
#line 2282 "sql_yacc.yy"
    { yyval.item= yyvsp[0].item; }
    break;

  case 516:
#line 2283 "sql_yacc.yy"
    { yyval.item= yyvsp[0].item; }
    break;

  case 517:
#line 2286 "sql_yacc.yy"
    { yyval.boolfunc2creator = &comp_eq_creator; }
    break;

  case 518:
#line 2287 "sql_yacc.yy"
    { yyval.boolfunc2creator = &comp_ge_creator; }
    break;

  case 519:
#line 2288 "sql_yacc.yy"
    { yyval.boolfunc2creator = &comp_gt_creator; }
    break;

  case 520:
#line 2289 "sql_yacc.yy"
    { yyval.boolfunc2creator = &comp_le_creator; }
    break;

  case 521:
#line 2290 "sql_yacc.yy"
    { yyval.boolfunc2creator = &comp_lt_creator; }
    break;

  case 522:
#line 2291 "sql_yacc.yy"
    { yyval.boolfunc2creator = &comp_ne_creator; }
    break;

  case 523:
#line 2294 "sql_yacc.yy"
    { yyval.num = 1; }
    break;

  case 524:
#line 2295 "sql_yacc.yy"
    { yyval.num = 0; }
    break;

  case 525:
#line 2301 "sql_yacc.yy"
    { yyvsp[-1].item_list->push_front(yyvsp[-4].item); yyval.item= new Item_func_in(*yyvsp[-1].item_list); }
    break;

  case 526:
#line 2303 "sql_yacc.yy"
    { yyvsp[-1].item_list->push_front(yyvsp[-5].item); yyval.item= new Item_func_not(new Item_func_in(*yyvsp[-1].item_list)); }
    break;

  case 527:
#line 2305 "sql_yacc.yy"
    { yyval.item= new Item_in_subselect(yyvsp[-2].item, yyvsp[0].select_lex); }
    break;

  case 528:
#line 2307 "sql_yacc.yy"
    {
            yyval.item= new Item_func_not(new Item_in_subselect(yyvsp[-3].item, yyvsp[0].select_lex));
          }
    break;

  case 529:
#line 2311 "sql_yacc.yy"
    { yyval.item= new Item_func_between(yyvsp[-4].item,yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 530:
#line 2313 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_between(yyvsp[-5].item,yyvsp[-2].item,yyvsp[0].item)); }
    break;

  case 531:
#line 2314 "sql_yacc.yy"
    { yyval.item= or_or_concat(YYTHD, yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 532:
#line 2315 "sql_yacc.yy"
    { yyval.item= new Item_cond_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 533:
#line 2316 "sql_yacc.yy"
    { yyval.item= new Item_cond_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 534:
#line 2317 "sql_yacc.yy"
    { yyval.item= new Item_cond_and(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 535:
#line 2319 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_eq(new Item_func_soundex(yyvsp[-3].item),
				 new Item_func_soundex(yyvsp[0].item));
	  }
    break;

  case 536:
#line 2324 "sql_yacc.yy"
    { yyval.item= new Item_func_like(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].simple_string); }
    break;

  case 537:
#line 2326 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_like(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].simple_string));}
    break;

  case 538:
#line 2327 "sql_yacc.yy"
    { yyval.item= new Item_func_regex(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 539:
#line 2329 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_regex(yyvsp[-3].item,yyvsp[0].item)); }
    break;

  case 540:
#line 2330 "sql_yacc.yy"
    { yyval.item= new Item_func_isnull(yyvsp[-2].item); }
    break;

  case 541:
#line 2331 "sql_yacc.yy"
    { yyval.item= new Item_func_isnotnull(yyvsp[-3].item); }
    break;

  case 542:
#line 2332 "sql_yacc.yy"
    { yyval.item= new Item_func_equal(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 543:
#line 2333 "sql_yacc.yy"
    { yyval.item= (*yyvsp[-1].boolfunc2creator)(0)->create(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 544:
#line 2335 "sql_yacc.yy"
    {
	  yyval.item= all_any_subquery_creator(yyvsp[-3].item, yyvsp[-2].boolfunc2creator, yyvsp[-1].num, yyvsp[0].select_lex);
	}
    break;

  case 545:
#line 2338 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_left(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 546:
#line 2339 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_right(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 547:
#line 2340 "sql_yacc.yy"
    { yyval.item= new Item_func_plus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 548:
#line 2341 "sql_yacc.yy"
    { yyval.item= new Item_func_minus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 549:
#line 2342 "sql_yacc.yy"
    { yyval.item= new Item_func_mul(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 550:
#line 2343 "sql_yacc.yy"
    { yyval.item= new Item_func_div(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 551:
#line 2344 "sql_yacc.yy"
    { yyval.item= new Item_func_int_div(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 552:
#line 2345 "sql_yacc.yy"
    { yyval.item= new Item_func_mod(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 553:
#line 2346 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 554:
#line 2347 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 555:
#line 2348 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_and(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 556:
#line 2349 "sql_yacc.yy"
    { yyval.item= new Item_func_mod(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 557:
#line 2351 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].interval,0); }
    break;

  case 558:
#line 2353 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].interval,1); }
    break;

  case 559:
#line 2359 "sql_yacc.yy"
    { yyval.item= new Item_func_between(yyvsp[-4].item,yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 560:
#line 2361 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_between(yyvsp[-5].item,yyvsp[-2].item,yyvsp[0].item)); }
    break;

  case 561:
#line 2362 "sql_yacc.yy"
    { yyval.item= or_or_concat(YYTHD, yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 562:
#line 2363 "sql_yacc.yy"
    { yyval.item= new Item_cond_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 563:
#line 2364 "sql_yacc.yy"
    { yyval.item= new Item_cond_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 564:
#line 2365 "sql_yacc.yy"
    { yyval.item= new Item_cond_and(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 565:
#line 2367 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_eq(new Item_func_soundex(yyvsp[-3].item),
				 new Item_func_soundex(yyvsp[0].item));
	  }
    break;

  case 566:
#line 2372 "sql_yacc.yy"
    { yyval.item= new Item_func_like(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].simple_string); }
    break;

  case 567:
#line 2374 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_like(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].simple_string)); }
    break;

  case 568:
#line 2375 "sql_yacc.yy"
    { yyval.item= new Item_func_regex(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 569:
#line 2377 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_regex(yyvsp[-3].item,yyvsp[0].item)); }
    break;

  case 570:
#line 2378 "sql_yacc.yy"
    { yyval.item= new Item_func_isnull(yyvsp[-2].item); }
    break;

  case 571:
#line 2379 "sql_yacc.yy"
    { yyval.item= new Item_func_isnotnull(yyvsp[-3].item); }
    break;

  case 572:
#line 2380 "sql_yacc.yy"
    { yyval.item= new Item_func_equal(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 573:
#line 2381 "sql_yacc.yy"
    { yyval.item= (*yyvsp[-1].boolfunc2creator)(0)->create(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 574:
#line 2383 "sql_yacc.yy"
    {
	  all_any_subquery_creator(yyvsp[-3].item, yyvsp[-2].boolfunc2creator, yyvsp[-1].num, yyvsp[0].select_lex);
	}
    break;

  case 575:
#line 2386 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_left(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 576:
#line 2387 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_right(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 577:
#line 2388 "sql_yacc.yy"
    { yyval.item= new Item_func_plus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 578:
#line 2389 "sql_yacc.yy"
    { yyval.item= new Item_func_minus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 579:
#line 2390 "sql_yacc.yy"
    { yyval.item= new Item_func_mul(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 580:
#line 2391 "sql_yacc.yy"
    { yyval.item= new Item_func_div(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 581:
#line 2392 "sql_yacc.yy"
    { yyval.item= new Item_func_int_div(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 582:
#line 2393 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 583:
#line 2394 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 584:
#line 2395 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_and(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 585:
#line 2396 "sql_yacc.yy"
    { yyval.item= new Item_func_mod(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 586:
#line 2397 "sql_yacc.yy"
    { yyval.item= new Item_func_mod(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 587:
#line 2399 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].interval,0); }
    break;

  case 588:
#line 2401 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].interval,1); }
    break;

  case 590:
#line 2407 "sql_yacc.yy"
    { yyvsp[-1].item_list->push_front(yyvsp[-4].item); yyval.item= new Item_func_in(*yyvsp[-1].item_list); }
    break;

  case 591:
#line 2409 "sql_yacc.yy"
    { yyvsp[-1].item_list->push_front(yyvsp[-5].item); yyval.item= new Item_func_not(new Item_func_in(*yyvsp[-1].item_list)); }
    break;

  case 592:
#line 2411 "sql_yacc.yy"
    { yyval.item= new Item_in_subselect(yyvsp[-2].item, yyvsp[0].select_lex); }
    break;

  case 593:
#line 2413 "sql_yacc.yy"
    {
            yyval.item= new Item_func_not(new Item_in_subselect(yyvsp[-3].item, yyvsp[0].select_lex));
          }
    break;

  case 594:
#line 2417 "sql_yacc.yy"
    { yyval.item= new Item_func_between(yyvsp[-4].item,yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 595:
#line 2419 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_between(yyvsp[-5].item,yyvsp[-2].item,yyvsp[0].item)); }
    break;

  case 596:
#line 2420 "sql_yacc.yy"
    { yyval.item= or_or_concat(YYTHD, yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 597:
#line 2421 "sql_yacc.yy"
    { yyval.item= new Item_cond_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 598:
#line 2422 "sql_yacc.yy"
    { yyval.item= new Item_cond_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 599:
#line 2424 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_eq(new Item_func_soundex(yyvsp[-3].item),
				 new Item_func_soundex(yyvsp[0].item));
	  }
    break;

  case 600:
#line 2429 "sql_yacc.yy"
    { yyval.item= new Item_func_like(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].simple_string); }
    break;

  case 601:
#line 2431 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_like(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].simple_string)); }
    break;

  case 602:
#line 2432 "sql_yacc.yy"
    { yyval.item= new Item_func_regex(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 603:
#line 2434 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_regex(yyvsp[-3].item,yyvsp[0].item)); }
    break;

  case 604:
#line 2435 "sql_yacc.yy"
    { yyval.item= new Item_func_isnull(yyvsp[-2].item); }
    break;

  case 605:
#line 2436 "sql_yacc.yy"
    { yyval.item= new Item_func_isnotnull(yyvsp[-3].item); }
    break;

  case 606:
#line 2437 "sql_yacc.yy"
    { yyval.item= new Item_func_equal(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 607:
#line 2438 "sql_yacc.yy"
    { yyval.item= (*yyvsp[-1].boolfunc2creator)(0)->create(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 608:
#line 2440 "sql_yacc.yy"
    {
	  all_any_subquery_creator(yyvsp[-3].item, yyvsp[-2].boolfunc2creator, yyvsp[-1].num, yyvsp[0].select_lex);
	}
    break;

  case 609:
#line 2443 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_left(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 610:
#line 2444 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_right(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 611:
#line 2445 "sql_yacc.yy"
    { yyval.item= new Item_func_plus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 612:
#line 2446 "sql_yacc.yy"
    { yyval.item= new Item_func_minus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 613:
#line 2447 "sql_yacc.yy"
    { yyval.item= new Item_func_mul(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 614:
#line 2448 "sql_yacc.yy"
    { yyval.item= new Item_func_div(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 615:
#line 2449 "sql_yacc.yy"
    { yyval.item= new Item_func_int_div(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 616:
#line 2450 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 617:
#line 2451 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 618:
#line 2452 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_and(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 619:
#line 2453 "sql_yacc.yy"
    { yyval.item= new Item_func_mod(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 620:
#line 2454 "sql_yacc.yy"
    { yyval.item= new Item_func_mod(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 621:
#line 2456 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].interval,0); }
    break;

  case 622:
#line 2458 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].interval,1); }
    break;

  case 624:
#line 2462 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 626:
#line 2468 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_set_collation(yyvsp[-2].item,
					    new Item_string(yyvsp[0].lex_str.str,
							    yyvsp[0].lex_str.length,
					    		    YYTHD->charset()));
	  }
    break;

  case 629:
#line 2477 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_set_user_var(yyvsp[-2].lex_str,yyvsp[0].item);
	    Lex->uncacheable(UNCACHEABLE_RAND);
	  }
    break;

  case 630:
#line 2482 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_get_user_var(yyvsp[0].lex_str);
	    Lex->uncacheable(UNCACHEABLE_RAND);
	  }
    break;

  case 631:
#line 2487 "sql_yacc.yy"
    {
	    if (!(yyval.item= get_system_var(YYTHD, (enum_var_type) yyvsp[-2].num, yyvsp[-1].lex_str, yyvsp[0].lex_str)))
	      YYABORT;
	  }
    break;

  case 633:
#line 2492 "sql_yacc.yy"
    { yyval.item= yyvsp[0].item; }
    break;

  case 634:
#line 2493 "sql_yacc.yy"
    { yyval.item= new Item_func_neg(yyvsp[0].item); }
    break;

  case 635:
#line 2494 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_neg(yyvsp[0].item); }
    break;

  case 636:
#line 2495 "sql_yacc.yy"
    { yyval.item= new Item_func_not(yyvsp[0].item); }
    break;

  case 637:
#line 2496 "sql_yacc.yy"
    { yyval.item= new Item_func_not(yyvsp[0].item); }
    break;

  case 638:
#line 2497 "sql_yacc.yy"
    { yyval.item= yyvsp[-1].item; }
    break;

  case 639:
#line 2499 "sql_yacc.yy"
    {
	    yyvsp[-1].item_list->push_front(yyvsp[-3].item);
	    yyval.item= new Item_row(*yyvsp[-1].item_list);
	  }
    break;

  case 640:
#line 2504 "sql_yacc.yy"
    {
	    yyvsp[-1].item_list->push_front(yyvsp[-3].item);
	    yyval.item= new Item_row(*yyvsp[-1].item_list);
	  }
    break;

  case 641:
#line 2508 "sql_yacc.yy"
    { yyval.item= yyvsp[0].item; }
    break;

  case 642:
#line 2509 "sql_yacc.yy"
    { yyval.item= yyvsp[0].item; }
    break;

  case 643:
#line 2510 "sql_yacc.yy"
    { yyval.item= yyvsp[-1].item; }
    break;

  case 644:
#line 2512 "sql_yacc.yy"
    { yyvsp[-5].item_list->push_front(yyvsp[-2].item);
            Select->add_ftfunc_to_list((Item_func_match*)
                                        (yyval.item=new Item_func_match(*yyvsp[-5].item_list,yyvsp[-1].num))); }
    break;

  case 645:
#line 2515 "sql_yacc.yy"
    { yyval.item= new Item_func_ascii(yyvsp[-1].item); }
    break;

  case 646:
#line 2517 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_set_collation(yyvsp[0].item,new Item_string(binary_keyword,
					    6, &my_charset_latin1));
	  }
    break;

  case 647:
#line 2522 "sql_yacc.yy"
    {
	    yyval.item= create_func_cast(yyvsp[-3].item, yyvsp[-1].cast_type,
				 Lex->length ? atoi(Lex->length) : -1,
				 Lex->charset);
	  }
    break;

  case 648:
#line 2528 "sql_yacc.yy"
    { yyval.item= new Item_func_case(* yyvsp[-2].item_list, yyvsp[-4].item, yyvsp[-1].item ); }
    break;

  case 649:
#line 2530 "sql_yacc.yy"
    {
	    yyval.item= create_func_cast(yyvsp[-3].item, yyvsp[-1].cast_type,
				 Lex->length ? atoi(Lex->length) : -1,
				 Lex->charset);
	  }
    break;

  case 650:
#line 2536 "sql_yacc.yy"
    { yyval.item= new Item_func_conv_charset(yyvsp[-3].item,yyvsp[-1].charset); }
    break;

  case 651:
#line 2538 "sql_yacc.yy"
    { yyval.item= new Item_func_conv_charset3(yyvsp[-5].item,yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 652:
#line 2540 "sql_yacc.yy"
    { yyval.item= new Item_default_value(yyvsp[-1].item); }
    break;

  case 653:
#line 2542 "sql_yacc.yy"
    { yyval.item= new Item_insert_value(yyvsp[-1].item); }
    break;

  case 654:
#line 2544 "sql_yacc.yy"
    { yyval.item= ((Item*(*)(void))(yyvsp[-2].symbol.symbol->create_func))();}
    break;

  case 655:
#line 2546 "sql_yacc.yy"
    { yyval.item= ((Item*(*)(Item*))(yyvsp[-3].symbol.symbol->create_func))(yyvsp[-1].item);}
    break;

  case 656:
#line 2548 "sql_yacc.yy"
    { yyval.item= ((Item*(*)(Item*,Item*))(yyvsp[-5].symbol.symbol->create_func))(yyvsp[-3].item,yyvsp[-1].item);}
    break;

  case 657:
#line 2550 "sql_yacc.yy"
    { yyval.item= ((Item*(*)(Item*,Item*,Item*))(yyvsp[-7].symbol.symbol->create_func))(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item);}
    break;

  case 658:
#line 2552 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-3].item, yyvsp[-1].item, INTERVAL_DAY, 0);}
    break;

  case 659:
#line 2554 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-5].item, yyvsp[-2].item, yyvsp[-1].interval, 0); }
    break;

  case 660:
#line 2556 "sql_yacc.yy"
    { yyval.item= new Item_func_atan(yyvsp[-1].item); }
    break;

  case 661:
#line 2558 "sql_yacc.yy"
    { yyval.item= new Item_func_atan(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 662:
#line 2560 "sql_yacc.yy"
    { yyval.item= new Item_func_char(*yyvsp[-1].item_list); }
    break;

  case 663:
#line 2562 "sql_yacc.yy"
    { yyval.item= new Item_func_charset(yyvsp[-1].item); }
    break;

  case 664:
#line 2564 "sql_yacc.yy"
    { yyval.item= new Item_func_coalesce(* yyvsp[-1].item_list); }
    break;

  case 665:
#line 2566 "sql_yacc.yy"
    { yyval.item= new Item_func_collation(yyvsp[-1].item); }
    break;

  case 666:
#line 2568 "sql_yacc.yy"
    { yyval.item= new Item_func_concat(* yyvsp[-1].item_list); }
    break;

  case 667:
#line 2570 "sql_yacc.yy"
    { yyval.item= new Item_func_concat_ws(yyvsp[-3].item, *yyvsp[-1].item_list); }
    break;

  case 668:
#line 2572 "sql_yacc.yy"
    { yyval.item= new Item_func_curdate_local(); Lex->safe_to_cache_query=0; }
    break;

  case 669:
#line 2574 "sql_yacc.yy"
    { yyval.item= new Item_func_curtime_local(); Lex->safe_to_cache_query=0; }
    break;

  case 670:
#line 2576 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_curtime_local(yyvsp[-1].item);
	    Lex->safe_to_cache_query=0;
	  }
    break;

  case 671:
#line 2581 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-4].item,yyvsp[-2].item,yyvsp[-1].interval,0); }
    break;

  case 672:
#line 2583 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-4].item,yyvsp[-2].item,yyvsp[-1].interval,1); }
    break;

  case 673:
#line 2585 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_database();
            Lex->safe_to_cache_query=0;
	  }
    break;

  case 674:
#line 2590 "sql_yacc.yy"
    { yyval.item= new Item_date_typecast(yyvsp[-1].item); }
    break;

  case 675:
#line 2592 "sql_yacc.yy"
    { yyval.item= new Item_func_dayofmonth(yyvsp[-1].item); }
    break;

  case 676:
#line 2594 "sql_yacc.yy"
    { yyvsp[-1].item_list->push_front(yyvsp[-3].item); yyval.item= new Item_func_elt(*yyvsp[-1].item_list); }
    break;

  case 677:
#line 2596 "sql_yacc.yy"
    { yyval.item= new Item_func_make_set(yyvsp[-3].item, *yyvsp[-1].item_list); }
    break;

  case 678:
#line 2598 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_encrypt(yyvsp[-1].item);
	    Lex->uncacheable(UNCACHEABLE_RAND);
	  }
    break;

  case 679:
#line 2602 "sql_yacc.yy"
    { yyval.item= new Item_func_encrypt(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 680:
#line 2604 "sql_yacc.yy"
    { yyval.item= new Item_func_decode(yyvsp[-3].item,yyvsp[-1].lex_str.str); }
    break;

  case 681:
#line 2606 "sql_yacc.yy"
    { yyval.item= new Item_func_encode(yyvsp[-3].item,yyvsp[-1].lex_str.str); }
    break;

  case 682:
#line 2608 "sql_yacc.yy"
    { yyval.item= new Item_func_des_decrypt(yyvsp[-1].item); }
    break;

  case 683:
#line 2610 "sql_yacc.yy"
    { yyval.item= new Item_func_des_decrypt(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 684:
#line 2612 "sql_yacc.yy"
    { yyval.item= new Item_func_des_encrypt(yyvsp[-1].item); }
    break;

  case 685:
#line 2614 "sql_yacc.yy"
    { yyval.item= new Item_func_des_encrypt(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 686:
#line 2616 "sql_yacc.yy"
    { yyval.item= new Item_func_export_set(yyvsp[-5].item, yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 687:
#line 2618 "sql_yacc.yy"
    { yyval.item= new Item_func_export_set(yyvsp[-7].item, yyvsp[-5].item, yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 688:
#line 2620 "sql_yacc.yy"
    { yyval.item= new Item_func_export_set(yyvsp[-9].item, yyvsp[-7].item, yyvsp[-5].item, yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 689:
#line 2622 "sql_yacc.yy"
    { yyval.item= new Item_int((char*) "FALSE",0,1); }
    break;

  case 690:
#line 2624 "sql_yacc.yy"
    { yyval.item= new Item_func_format(yyvsp[-3].item,atoi(yyvsp[-1].lex_str.str)); }
    break;

  case 691:
#line 2626 "sql_yacc.yy"
    { yyval.item= new Item_func_from_unixtime(yyvsp[-1].item); }
    break;

  case 692:
#line 2628 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_date_format (new Item_func_from_unixtime(yyvsp[-3].item),yyvsp[-1].item,0);
	  }
    break;

  case 693:
#line 2632 "sql_yacc.yy"
    { yyvsp[-1].item_list->push_front(yyvsp[-3].item); yyval.item= new Item_func_field(*yyvsp[-1].item_list); }
    break;

  case 694:
#line 2634 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-1].item); }
    break;

  case 695:
#line 2636 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 696:
#line 2638 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_wkb(yyvsp[-1].item); }
    break;

  case 697:
#line 2640 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_wkb(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 698:
#line 2642 "sql_yacc.yy"
    { yyval.item= new Item_func_spatial_collection(* yyvsp[-1].item_list,
                       Geometry::wkbGeometryCollection,
                       Geometry::wkbPoint); }
    break;

  case 699:
#line 2646 "sql_yacc.yy"
    { yyval.item= new Item_func_get_format(yyvsp[-3].date_time_type, yyvsp[-1].item); }
    break;

  case 700:
#line 2648 "sql_yacc.yy"
    { yyval.item= new Item_func_hour(yyvsp[-1].item); }
    break;

  case 701:
#line 2650 "sql_yacc.yy"
    { yyval.item= new Item_func_if(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 702:
#line 2652 "sql_yacc.yy"
    { yyval.item= new Item_func_insert(yyvsp[-7].item,yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 703:
#line 2655 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[0].item,yyvsp[-3].item,yyvsp[-2].interval,0); }
    break;

  case 704:
#line 2657 "sql_yacc.yy"
    {
            if (yyvsp[0].item->type() != Item::ROW_ITEM)
            {
              send_error(Lex->thd, ER_SYNTAX_ERROR);
              YYABORT;
            }
            yyval.item= new Item_func_interval((Item_row *)yyvsp[0].item);
          }
    break;

  case 705:
#line 2666 "sql_yacc.yy"
    {
	    yyval.item= get_system_var(YYTHD, OPT_SESSION, "last_insert_id", 14,
			      "last_insert_id()");
	    Lex->safe_to_cache_query= 0;
	  }
    break;

  case 706:
#line 2672 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_set_last_insert_id(yyvsp[-1].item);
	    Lex->safe_to_cache_query= 0;
	  }
    break;

  case 707:
#line 2677 "sql_yacc.yy"
    { yyval.item= new Item_func_left(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 708:
#line 2679 "sql_yacc.yy"
    { yyval.item= new Item_func_spatial_collection(* yyvsp[-1].item_list,
               Geometry::wkbLineString, Geometry::wkbPoint); }
    break;

  case 709:
#line 2682 "sql_yacc.yy"
    { yyval.item= new Item_func_locate(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 710:
#line 2684 "sql_yacc.yy"
    { yyval.item= new Item_func_locate(yyvsp[-3].item,yyvsp[-5].item,yyvsp[-1].item); }
    break;

  case 711:
#line 2686 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-1].item); }
    break;

  case 712:
#line 2688 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 713:
#line 2690 "sql_yacc.yy"
    { yyvsp[-1].item_list->push_front(yyvsp[-3].item); yyval.item= new Item_func_max(*yyvsp[-1].item_list); }
    break;

  case 714:
#line 2692 "sql_yacc.yy"
    { yyvsp[-1].item_list->push_front(yyvsp[-3].item); yyval.item= new Item_func_min(*yyvsp[-1].item_list); }
    break;

  case 715:
#line 2694 "sql_yacc.yy"
    { yyval.item= new Item_func_log(yyvsp[-1].item); }
    break;

  case 716:
#line 2696 "sql_yacc.yy"
    { yyval.item= new Item_func_log(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 717:
#line 2698 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-1].item); }
    break;

  case 718:
#line 2700 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 719:
#line 2702 "sql_yacc.yy"
    {
	    yyval.item= new Item_master_pos_wait(yyvsp[-3].item, yyvsp[-1].item);
	    Lex->safe_to_cache_query=0;
		  }
    break;

  case 720:
#line 2707 "sql_yacc.yy"
    {
	    yyval.item= new Item_master_pos_wait(yyvsp[-5].item, yyvsp[-3].item, yyvsp[-1].item);
	    Lex->safe_to_cache_query=0;
	  }
    break;

  case 721:
#line 2712 "sql_yacc.yy"
    { yyval.item= new Item_func_microsecond(yyvsp[-1].item); }
    break;

  case 722:
#line 2714 "sql_yacc.yy"
    { yyval.item= new Item_func_minute(yyvsp[-1].item); }
    break;

  case 723:
#line 2716 "sql_yacc.yy"
    { yyval.item = new Item_func_mod( yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 724:
#line 2718 "sql_yacc.yy"
    { yyval.item= new Item_func_month(yyvsp[-1].item); }
    break;

  case 725:
#line 2720 "sql_yacc.yy"
    { yyval.item= new Item_func_spatial_collection(* yyvsp[-1].item_list,
                    Geometry::wkbMultiLineString, Geometry::wkbLineString); }
    break;

  case 726:
#line 2723 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-1].item); }
    break;

  case 727:
#line 2725 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 728:
#line 2727 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-1].item); }
    break;

  case 729:
#line 2729 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 730:
#line 2731 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-1].item); }
    break;

  case 731:
#line 2733 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 732:
#line 2735 "sql_yacc.yy"
    { yyval.item= new Item_func_spatial_collection(* yyvsp[-1].item_list,
                    Geometry::wkbMultiPoint, Geometry::wkbPoint); }
    break;

  case 733:
#line 2738 "sql_yacc.yy"
    { yyval.item= new Item_func_spatial_collection(* yyvsp[-1].item_list,
                       Geometry::wkbMultiPolygon, Geometry::wkbPolygon ); }
    break;

  case 734:
#line 2741 "sql_yacc.yy"
    { yyval.item= new Item_func_now_local(); Lex->safe_to_cache_query=0;}
    break;

  case 735:
#line 2743 "sql_yacc.yy"
    { yyval.item= new Item_func_now_local(yyvsp[-1].item); Lex->safe_to_cache_query=0;}
    break;

  case 736:
#line 2745 "sql_yacc.yy"
    {
	    yyval.item= YYTHD->variables.old_passwords ?
              (Item *) new Item_func_old_password(yyvsp[-1].item) :
	      (Item *) new Item_func_password(yyvsp[-1].item);
	  }
    break;

  case 737:
#line 2751 "sql_yacc.yy"
    { yyval.item=  new Item_func_old_password(yyvsp[-1].item); }
    break;

  case 738:
#line 2753 "sql_yacc.yy"
    { yyval.item= new Item_func_point(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 739:
#line 2755 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-1].item); }
    break;

  case 740:
#line 2757 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 741:
#line 2759 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-1].item); }
    break;

  case 742:
#line 2761 "sql_yacc.yy"
    { yyval.item= new Item_func_geometry_from_text(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 743:
#line 2763 "sql_yacc.yy"
    { yyval.item= new Item_func_spatial_collection(* yyvsp[-1].item_list,
			Geometry::wkbPolygon, Geometry::wkbLineString); }
    break;

  case 744:
#line 2766 "sql_yacc.yy"
    { yyval.item = new Item_func_locate(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 745:
#line 2768 "sql_yacc.yy"
    { yyval.item= new Item_func_rand(yyvsp[-1].item); Lex->uncacheable(UNCACHEABLE_RAND);}
    break;

  case 746:
#line 2770 "sql_yacc.yy"
    { yyval.item= new Item_func_rand(); Lex->uncacheable(UNCACHEABLE_RAND);}
    break;

  case 747:
#line 2772 "sql_yacc.yy"
    { yyval.item= new Item_func_replace(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 748:
#line 2774 "sql_yacc.yy"
    { yyval.item= new Item_func_right(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 749:
#line 2776 "sql_yacc.yy"
    { yyval.item= new Item_func_round(yyvsp[-1].item, new Item_int((char*)"0",0,1),0); }
    break;

  case 750:
#line 2777 "sql_yacc.yy"
    { yyval.item= new Item_func_round(yyvsp[-3].item,yyvsp[-1].item,0); }
    break;

  case 751:
#line 2779 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-3].item, yyvsp[-1].item, INTERVAL_DAY, 1);}
    break;

  case 752:
#line 2781 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-5].item, yyvsp[-2].item, yyvsp[-1].interval, 1); }
    break;

  case 753:
#line 2783 "sql_yacc.yy"
    { yyval.item= new Item_func_second(yyvsp[-1].item); }
    break;

  case 754:
#line 2785 "sql_yacc.yy"
    { yyval.item= new Item_func_substr(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 755:
#line 2787 "sql_yacc.yy"
    { yyval.item= new Item_func_substr(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 756:
#line 2789 "sql_yacc.yy"
    { yyval.item= new Item_func_substr(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 757:
#line 2791 "sql_yacc.yy"
    { yyval.item= new Item_func_substr(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 758:
#line 2793 "sql_yacc.yy"
    { yyval.item= new Item_func_substr_index(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 759:
#line 2795 "sql_yacc.yy"
    { yyval.item= new Item_time_typecast(yyvsp[-1].item); }
    break;

  case 760:
#line 2797 "sql_yacc.yy"
    { yyval.item= new Item_datetime_typecast(yyvsp[-1].item); }
    break;

  case 761:
#line 2799 "sql_yacc.yy"
    { yyval.item= new Item_func_add_time(yyvsp[-3].item, yyvsp[-1].item, 1, 0); }
    break;

  case 762:
#line 2801 "sql_yacc.yy"
    { yyval.item= new Item_func_trim(yyvsp[-1].item); }
    break;

  case 763:
#line 2803 "sql_yacc.yy"
    { yyval.item= new Item_func_ltrim(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 764:
#line 2805 "sql_yacc.yy"
    { yyval.item= new Item_func_rtrim(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 765:
#line 2807 "sql_yacc.yy"
    { yyval.item= new Item_func_trim(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 766:
#line 2809 "sql_yacc.yy"
    { yyval.item= new Item_func_ltrim(yyvsp[-1].item); }
    break;

  case 767:
#line 2811 "sql_yacc.yy"
    { yyval.item= new Item_func_rtrim(yyvsp[-1].item); }
    break;

  case 768:
#line 2813 "sql_yacc.yy"
    { yyval.item= new Item_func_trim(yyvsp[-1].item); }
    break;

  case 769:
#line 2815 "sql_yacc.yy"
    { yyval.item= new Item_func_trim(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 770:
#line 2817 "sql_yacc.yy"
    { yyval.item= new Item_func_round(yyvsp[-3].item,yyvsp[-1].item,1); }
    break;

  case 771:
#line 2819 "sql_yacc.yy"
    { yyval.item= new Item_int((char*) "TRUE",1,1); }
    break;

  case 772:
#line 2821 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_sum_udf_str(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_sum_udf_str(yyvsp[-3].udf);
	  }
    break;

  case 773:
#line 2828 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_sum_udf_float(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_sum_udf_float(yyvsp[-3].udf);
	  }
    break;

  case 774:
#line 2835 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_sum_udf_int(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_sum_udf_int(yyvsp[-3].udf);
	  }
    break;

  case 775:
#line 2842 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_func_udf_str(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_func_udf_str(yyvsp[-3].udf);
	  }
    break;

  case 776:
#line 2849 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_func_udf_float(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_func_udf_float(yyvsp[-3].udf);
	  }
    break;

  case 777:
#line 2856 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_func_udf_int(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_func_udf_int(yyvsp[-3].udf);
	  }
    break;

  case 778:
#line 2863 "sql_yacc.yy"
    {
            yyval.item= new Item_func_unique_users(yyvsp[-7].item,atoi(yyvsp[-5].lex_str.str),atoi(yyvsp[-3].lex_str.str), * yyvsp[-1].item_list);
	  }
    break;

  case 779:
#line 2867 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_unix_timestamp();
	    Lex->safe_to_cache_query=0;
	  }
    break;

  case 780:
#line 2872 "sql_yacc.yy"
    { yyval.item= new Item_func_unix_timestamp(yyvsp[-1].item); }
    break;

  case 781:
#line 2874 "sql_yacc.yy"
    { yyval.item= new Item_func_user(); Lex->safe_to_cache_query=0; }
    break;

  case 782:
#line 2876 "sql_yacc.yy"
    { yyval.item= new Item_func_curdate_utc(); Lex->safe_to_cache_query=0;}
    break;

  case 783:
#line 2878 "sql_yacc.yy"
    { yyval.item= new Item_func_curtime_utc(); Lex->safe_to_cache_query=0;}
    break;

  case 784:
#line 2880 "sql_yacc.yy"
    { yyval.item= new Item_func_now_utc(); Lex->safe_to_cache_query=0;}
    break;

  case 785:
#line 2882 "sql_yacc.yy"
    {
            yyval.item= new Item_func_week(yyvsp[-1].item,new Item_int((char*) "0",
				   YYTHD->variables.default_week_format,1));
          }
    break;

  case 786:
#line 2887 "sql_yacc.yy"
    { yyval.item= new Item_func_week(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 787:
#line 2889 "sql_yacc.yy"
    { yyval.item= new Item_func_year(yyvsp[-1].item); }
    break;

  case 788:
#line 2891 "sql_yacc.yy"
    { yyval.item= new Item_func_yearweek(yyvsp[-1].item,new Item_int((char*) "0",0,1)); }
    break;

  case 789:
#line 2893 "sql_yacc.yy"
    { yyval.item= new Item_func_yearweek(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 790:
#line 2895 "sql_yacc.yy"
    {
	    yyval.item=new Item_func_benchmark(yyvsp[-3].ulong_num,yyvsp[-1].item);
	    Lex->uncacheable(UNCACHEABLE_SIDEEFFECT);
	  }
    break;

  case 791:
#line 2900 "sql_yacc.yy"
    { yyval.item=new Item_extract( yyvsp[-3].interval, yyvsp[-1].item); }
    break;

  case 792:
#line 2903 "sql_yacc.yy"
    { yyval.num= FT_NL;  }
    break;

  case 793:
#line 2904 "sql_yacc.yy"
    { yyval.num= FT_NL | FT_EXPAND; }
    break;

  case 794:
#line 2905 "sql_yacc.yy"
    { yyval.num= FT_BOOL; }
    break;

  case 795:
#line 2909 "sql_yacc.yy"
    { yyval.item_list= NULL; }
    break;

  case 796:
#line 2910 "sql_yacc.yy"
    { yyval.item_list= yyvsp[0].item_list;}
    break;

  case 797:
#line 2914 "sql_yacc.yy"
    { yyval.item=new Item_sum_avg(yyvsp[-1].item); }
    break;

  case 798:
#line 2916 "sql_yacc.yy"
    { yyval.item=new Item_sum_and(yyvsp[-1].item); }
    break;

  case 799:
#line 2918 "sql_yacc.yy"
    { yyval.item=new Item_sum_or(yyvsp[-1].item); }
    break;

  case 800:
#line 2920 "sql_yacc.yy"
    { yyval.item=new Item_sum_xor(yyvsp[-1].item); }
    break;

  case 801:
#line 2922 "sql_yacc.yy"
    { yyval.item=new Item_sum_count(new Item_int((int32) 0L,1)); }
    break;

  case 802:
#line 2924 "sql_yacc.yy"
    { yyval.item=new Item_sum_count(yyvsp[-1].item); }
    break;

  case 803:
#line 2926 "sql_yacc.yy"
    { Select->in_sum_expr++; }
    break;

  case 804:
#line 2928 "sql_yacc.yy"
    { Select->in_sum_expr--; }
    break;

  case 805:
#line 2930 "sql_yacc.yy"
    { yyval.item=new Item_sum_count_distinct(* yyvsp[-2].item_list); }
    break;

  case 806:
#line 2932 "sql_yacc.yy"
    { yyval.item= new Item_sum_unique_users(yyvsp[-7].item,atoi(yyvsp[-5].lex_str.str),atoi(yyvsp[-3].lex_str.str),yyvsp[-1].item); }
    break;

  case 807:
#line 2934 "sql_yacc.yy"
    { yyval.item=new Item_sum_min(yyvsp[-1].item); }
    break;

  case 808:
#line 2936 "sql_yacc.yy"
    { yyval.item=new Item_sum_max(yyvsp[-1].item); }
    break;

  case 809:
#line 2938 "sql_yacc.yy"
    { yyval.item=new Item_sum_std(yyvsp[-1].item); }
    break;

  case 810:
#line 2940 "sql_yacc.yy"
    { yyval.item=new Item_sum_variance(yyvsp[-1].item); }
    break;

  case 811:
#line 2942 "sql_yacc.yy"
    { yyval.item=new Item_sum_sum(yyvsp[-1].item); }
    break;

  case 812:
#line 2945 "sql_yacc.yy"
    {
	    yyval.item=new Item_func_group_concat(yyvsp[-4].num,yyvsp[-3].item_list,Lex->gorder_list,yyvsp[-1].string);
	    yyvsp[-3].item_list->empty();
	  }
    break;

  case 813:
#line 2951 "sql_yacc.yy"
    { yyval.num = 0; }
    break;

  case 814:
#line 2952 "sql_yacc.yy"
    { yyval.num = 1; }
    break;

  case 815:
#line 2955 "sql_yacc.yy"
    { yyval.string = new String(",",1,default_charset_info); }
    break;

  case 816:
#line 2956 "sql_yacc.yy"
    { yyval.string = yyvsp[0].string; }
    break;

  case 817:
#line 2961 "sql_yacc.yy"
    {
            LEX *lex=Lex;
            lex->gorder_list = NULL;
	  }
    break;

  case 818:
#line 2966 "sql_yacc.yy"
    {
            LEX *lex=Lex;
            lex->gorder_list= 
	      (SQL_LIST*) sql_memdup((char*) &lex->current_select->order_list,
				     sizeof(st_sql_list));
	    lex->current_select->order_list.empty();
	  }
    break;

  case 819:
#line 2977 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  if (lex->current_select->inc_in_sum_expr())
	  {
	    send_error(lex->thd, ER_SYNTAX_ERROR);
	    YYABORT;
	  }
	}
    break;

  case 820:
#line 2986 "sql_yacc.yy"
    {
	  Select->in_sum_expr--;
	  yyval.item= yyvsp[0].item;
	}
    break;

  case 821:
#line 2992 "sql_yacc.yy"
    { Lex->charset= NULL; Lex->length= (char*)0; }
    break;

  case 822:
#line 2996 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_BINARY; }
    break;

  case 823:
#line 2997 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_CHAR; }
    break;

  case 824:
#line 2998 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_CHAR; Lex->charset= national_charset_info; }
    break;

  case 825:
#line 2999 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_SIGNED_INT; }
    break;

  case 826:
#line 3000 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_SIGNED_INT; }
    break;

  case 827:
#line 3001 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_UNSIGNED_INT; }
    break;

  case 828:
#line 3002 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_UNSIGNED_INT; }
    break;

  case 829:
#line 3003 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_DATE; }
    break;

  case 830:
#line 3004 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_TIME; }
    break;

  case 831:
#line 3005 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_DATETIME; }
    break;

  case 832:
#line 3009 "sql_yacc.yy"
    { yyval.cast_type= yyvsp[0].cast_type; }
    break;

  case 833:
#line 3013 "sql_yacc.yy"
    { Select->expr_list.push_front(new List<Item>); }
    break;

  case 834:
#line 3015 "sql_yacc.yy"
    { yyval.item_list= Select->expr_list.pop(); }
    break;

  case 835:
#line 3018 "sql_yacc.yy"
    { Select->expr_list.head()->push_back(yyvsp[0].item); }
    break;

  case 836:
#line 3019 "sql_yacc.yy"
    { Select->expr_list.head()->push_back(yyvsp[0].item); }
    break;

  case 837:
#line 3022 "sql_yacc.yy"
    { yyval.item_list= yyvsp[0].item_list; }
    break;

  case 838:
#line 3023 "sql_yacc.yy"
    { yyval.item_list= yyvsp[-1].item_list; }
    break;

  case 839:
#line 3026 "sql_yacc.yy"
    { Select->expr_list.push_front(new List<Item>); }
    break;

  case 840:
#line 3028 "sql_yacc.yy"
    { yyval.item_list= Select->expr_list.pop(); }
    break;

  case 841:
#line 3031 "sql_yacc.yy"
    { Select->expr_list.head()->push_back(yyvsp[0].item); }
    break;

  case 842:
#line 3032 "sql_yacc.yy"
    { Select->expr_list.head()->push_back(yyvsp[0].item); }
    break;

  case 843:
#line 3035 "sql_yacc.yy"
    { yyval.item= NULL; }
    break;

  case 844:
#line 3036 "sql_yacc.yy"
    { yyval.item= yyvsp[0].item; }
    break;

  case 845:
#line 3039 "sql_yacc.yy"
    { yyval.item= NULL; }
    break;

  case 846:
#line 3040 "sql_yacc.yy"
    { yyval.item= yyvsp[0].item; }
    break;

  case 847:
#line 3043 "sql_yacc.yy"
    { Select->when_list.push_front(new List<Item>); }
    break;

  case 848:
#line 3045 "sql_yacc.yy"
    { yyval.item_list= Select->when_list.pop(); }
    break;

  case 849:
#line 3049 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;
	    sel->when_list.head()->push_back(yyvsp[-2].item);
	    sel->when_list.head()->push_back(yyvsp[0].item);
	}
    break;

  case 850:
#line 3055 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;
	    sel->when_list.head()->push_back(yyvsp[-2].item);
	    sel->when_list.head()->push_back(yyvsp[0].item);
	  }
    break;

  case 851:
#line 3062 "sql_yacc.yy"
    { yyval.table_list=yyvsp[-1].table_list; }
    break;

  case 852:
#line 3063 "sql_yacc.yy"
    { yyval.table_list=yyvsp[0].table_list; }
    break;

  case 853:
#line 3064 "sql_yacc.yy"
    { yyval.table_list=yyvsp[0].table_list; }
    break;

  case 854:
#line 3065 "sql_yacc.yy"
    { yyval.table_list=yyvsp[0].table_list; }
    break;

  case 855:
#line 3067 "sql_yacc.yy"
    { yyval.table_list=yyvsp[0].table_list ; yyvsp[-2].table_list->next->straight=1; }
    break;

  case 856:
#line 3069 "sql_yacc.yy"
    { add_join_on(yyvsp[-2].table_list,yyvsp[0].item); yyval.table_list=yyvsp[-2].table_list; }
    break;

  case 857:
#line 3072 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    sel->db1=yyvsp[-3].table_list->db; sel->table1=yyvsp[-3].table_list->alias;
	    sel->db2=yyvsp[-1].table_list->db; sel->table2=yyvsp[-1].table_list->alias;
	  }
    break;

  case 858:
#line 3078 "sql_yacc.yy"
    { add_join_on(yyvsp[-5].table_list,yyvsp[-1].item); yyval.table_list=yyvsp[-5].table_list; }
    break;

  case 859:
#line 3081 "sql_yacc.yy"
    { add_join_on(yyvsp[-2].table_list,yyvsp[0].item); yyvsp[-2].table_list->outer_join|=JOIN_TYPE_LEFT; yyval.table_list=yyvsp[-2].table_list; }
    break;

  case 860:
#line 3083 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    sel->db1=yyvsp[-4].table_list->db; sel->table1=yyvsp[-4].table_list->alias;
	    sel->db2=yyvsp[0].table_list->db; sel->table2=yyvsp[0].table_list->alias;
	  }
    break;

  case 861:
#line 3089 "sql_yacc.yy"
    { add_join_on(yyvsp[-5].table_list,yyvsp[-1].item); yyvsp[-5].table_list->outer_join|=JOIN_TYPE_LEFT; yyval.table_list=yyvsp[-5].table_list; }
    break;

  case 862:
#line 3091 "sql_yacc.yy"
    {
	    add_join_natural(yyvsp[-5].table_list,yyvsp[-5].table_list->next);
	    yyvsp[-5].table_list->next->outer_join|=JOIN_TYPE_LEFT;
	    yyval.table_list=yyvsp[0].table_list;
	  }
    break;

  case 863:
#line 3097 "sql_yacc.yy"
    { add_join_on(yyvsp[-6].table_list,yyvsp[0].item); yyvsp[-6].table_list->outer_join|=JOIN_TYPE_RIGHT; yyval.table_list=yyvsp[-2].table_list; }
    break;

  case 864:
#line 3099 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    sel->db1=yyvsp[-4].table_list->db; sel->table1=yyvsp[-4].table_list->alias;
	    sel->db2=yyvsp[0].table_list->db; sel->table2=yyvsp[0].table_list->alias;
	  }
    break;

  case 865:
#line 3105 "sql_yacc.yy"
    { add_join_on(yyvsp[-9].table_list,yyvsp[-1].item); yyvsp[-9].table_list->outer_join|=JOIN_TYPE_RIGHT; yyval.table_list=yyvsp[-5].table_list; }
    break;

  case 866:
#line 3107 "sql_yacc.yy"
    {
	    add_join_natural(yyvsp[-5].table_list->next,yyvsp[-5].table_list);
	    yyvsp[-5].table_list->outer_join|=JOIN_TYPE_RIGHT;
	    yyval.table_list=yyvsp[0].table_list;
	  }
    break;

  case 867:
#line 3113 "sql_yacc.yy"
    { add_join_natural(yyvsp[-3].table_list,yyvsp[-3].table_list->next); yyval.table_list=yyvsp[0].table_list; }
    break;

  case 868:
#line 3116 "sql_yacc.yy"
    {}
    break;

  case 869:
#line 3117 "sql_yacc.yy"
    {}
    break;

  case 870:
#line 3118 "sql_yacc.yy"
    {}
    break;

  case 871:
#line 3122 "sql_yacc.yy"
    {
	  SELECT_LEX *sel= Select;
	  sel->use_index_ptr=sel->ignore_index_ptr=0;
	  sel->table_join_options= 0;
	}
    break;

  case 872:
#line 3128 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  SELECT_LEX *sel= lex->current_select;
	  if (!(yyval.table_list= sel->add_table_to_list(lex->thd, yyvsp[-2].table, yyvsp[-1].lex_str_ptr,
					   sel->get_table_join_options(),
					   lex->lock_option,
					   sel->get_use_index(),
					   sel->get_ignore_index())))
	    YYABORT;
	}
    break;

  case 873:
#line 3139 "sql_yacc.yy"
    { add_join_on(yyvsp[-3].table_list,yyvsp[-1].item); yyvsp[-3].table_list->outer_join|=JOIN_TYPE_LEFT; yyval.table_list=yyvsp[-3].table_list; }
    break;

  case 874:
#line 3141 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->sql_command == SQLCOM_UPDATE &&
	      &lex->select_lex == lex->current_select->outer_select())
	  {
	    send_error(lex->thd, ER_SYNTAX_ERROR);
	    YYABORT;
	  }

	  SELECT_LEX_UNIT *unit= lex->current_select->master_unit();
	  lex->current_select= unit->outer_select();
	  if (!(yyval.table_list= lex->current_select->
                add_table_to_list(lex->thd, new Table_ident(unit), yyvsp[0].lex_str_ptr, 0,
				  TL_READ,(List<String> *)0,
	                          (List<String> *)0)))

	    YYABORT;
	}
    break;

  case 875:
#line 3161 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  lex->derived_tables= 1;
	  if (((int)lex->sql_command >= (int)SQLCOM_HA_OPEN &&
	       lex->sql_command <= (int)SQLCOM_HA_READ) ||
	       lex->sql_command == (int)SQLCOM_KILL)
	  {	
	    send_error(lex->thd, ER_SYNTAX_ERROR);
	    YYABORT;
	  }
	  if (lex->current_select->linkage == GLOBAL_OPTIONS_TYPE ||
              mysql_new_select(lex, 1))
	    YYABORT;
	  mysql_init_select(lex);
	  lex->current_select->linkage= DERIVED_TABLE_TYPE;
	}
    break;

  case 877:
#line 3181 "sql_yacc.yy"
    {}
    break;

  case 878:
#line 3182 "sql_yacc.yy"
    {}
    break;

  case 879:
#line 3185 "sql_yacc.yy"
    {}
    break;

  case 880:
#line 3187 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    sel->use_index= *yyvsp[0].string_list;
	    sel->use_index_ptr= &sel->use_index;
	  }
    break;

  case 881:
#line 3193 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    sel->use_index= *yyvsp[0].string_list;
	    sel->use_index_ptr= &sel->use_index;
	    sel->table_join_options|= TL_OPTION_FORCE_INDEX;
	  }
    break;

  case 882:
#line 3200 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    sel->ignore_index= *yyvsp[0].string_list;
	    sel->ignore_index_ptr= &sel->ignore_index;
	  }
    break;

  case 883:
#line 3207 "sql_yacc.yy"
    { Select->interval_list.empty(); }
    break;

  case 884:
#line 3209 "sql_yacc.yy"
    { yyval.string_list= &Select->interval_list; }
    break;

  case 885:
#line 3213 "sql_yacc.yy"
    {}
    break;

  case 886:
#line 3214 "sql_yacc.yy"
    {}
    break;

  case 887:
#line 3219 "sql_yacc.yy"
    { Select->
	    interval_list.push_back(new String((const char*) yyvsp[0].lex_str.str, yyvsp[0].lex_str.length,
				    system_charset_info)); }
    break;

  case 888:
#line 3223 "sql_yacc.yy"
    { Select->
	    interval_list.push_back(new String((const char*) yyvsp[0].lex_str.str, yyvsp[0].lex_str.length,
				    system_charset_info)); }
    break;

  case 889:
#line 3227 "sql_yacc.yy"
    { Select->
	    interval_list.push_back(new String("PRIMARY", 7,
				    system_charset_info)); }
    break;

  case 890:
#line 3233 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    if (!(yyval.item= new Item_func_eq(new Item_field(sel->db1, sel->table1,
						      yyvsp[0].lex_str.str),
				       new Item_field(sel->db2, sel->table2,
						      yyvsp[0].lex_str.str))))
	      YYABORT;
	  }
    break;

  case 891:
#line 3242 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    if (!(yyval.item= new Item_cond_and(new Item_func_eq(new Item_field(sel->db1,sel->table1,yyvsp[0].lex_str.str), new Item_field(sel->db2,sel->table2,yyvsp[0].lex_str.str)), yyvsp[-2].item)))
	      YYABORT;
	  }
    break;

  case 892:
#line 3249 "sql_yacc.yy"
    { yyval.interval=INTERVAL_DAY_HOUR; }
    break;

  case 893:
#line 3250 "sql_yacc.yy"
    { yyval.interval=INTERVAL_DAY_MICROSECOND; }
    break;

  case 894:
#line 3251 "sql_yacc.yy"
    { yyval.interval=INTERVAL_DAY_MINUTE; }
    break;

  case 895:
#line 3252 "sql_yacc.yy"
    { yyval.interval=INTERVAL_DAY_SECOND; }
    break;

  case 896:
#line 3253 "sql_yacc.yy"
    { yyval.interval=INTERVAL_DAY; }
    break;

  case 897:
#line 3254 "sql_yacc.yy"
    { yyval.interval=INTERVAL_HOUR_MICROSECOND; }
    break;

  case 898:
#line 3255 "sql_yacc.yy"
    { yyval.interval=INTERVAL_HOUR_MINUTE; }
    break;

  case 899:
#line 3256 "sql_yacc.yy"
    { yyval.interval=INTERVAL_HOUR_SECOND; }
    break;

  case 900:
#line 3257 "sql_yacc.yy"
    { yyval.interval=INTERVAL_HOUR; }
    break;

  case 901:
#line 3258 "sql_yacc.yy"
    { yyval.interval=INTERVAL_MICROSECOND; }
    break;

  case 902:
#line 3259 "sql_yacc.yy"
    { yyval.interval=INTERVAL_MINUTE_MICROSECOND; }
    break;

  case 903:
#line 3260 "sql_yacc.yy"
    { yyval.interval=INTERVAL_MINUTE_SECOND; }
    break;

  case 904:
#line 3261 "sql_yacc.yy"
    { yyval.interval=INTERVAL_MINUTE; }
    break;

  case 905:
#line 3262 "sql_yacc.yy"
    { yyval.interval=INTERVAL_MONTH; }
    break;

  case 906:
#line 3263 "sql_yacc.yy"
    { yyval.interval=INTERVAL_SECOND_MICROSECOND; }
    break;

  case 907:
#line 3264 "sql_yacc.yy"
    { yyval.interval=INTERVAL_SECOND; }
    break;

  case 908:
#line 3265 "sql_yacc.yy"
    { yyval.interval=INTERVAL_YEAR_MONTH; }
    break;

  case 909:
#line 3266 "sql_yacc.yy"
    { yyval.interval=INTERVAL_YEAR; }
    break;

  case 910:
#line 3269 "sql_yacc.yy"
    {yyval.date_time_type=TIMESTAMP_DATE;}
    break;

  case 911:
#line 3270 "sql_yacc.yy"
    {yyval.date_time_type=TIMESTAMP_TIME;}
    break;

  case 912:
#line 3271 "sql_yacc.yy"
    {yyval.date_time_type=TIMESTAMP_DATETIME;}
    break;

  case 916:
#line 3279 "sql_yacc.yy"
    { yyval.lex_str_ptr=0; }
    break;

  case 917:
#line 3281 "sql_yacc.yy"
    { yyval.lex_str_ptr= (LEX_STRING*) sql_memdup(&yyvsp[0].lex_str,sizeof(LEX_STRING)); }
    break;

  case 920:
#line 3289 "sql_yacc.yy"
    { Select->where= 0; }
    break;

  case 921:
#line 3291 "sql_yacc.yy"
    {
	    Select->where= yyvsp[0].item;
	    if (yyvsp[0].item)
	      yyvsp[0].item->top_level_item();
	  }
    break;

  case 923:
#line 3301 "sql_yacc.yy"
    {
	    Select->parsing_place= SELECT_LEX_NODE::IN_HAVING;
          }
    break;

  case 924:
#line 3305 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    sel->having= yyvsp[0].item;
	    sel->parsing_place= SELECT_LEX_NODE::NO_MATTER;
	    if (yyvsp[0].item)
	      yyvsp[0].item->top_level_item();
	  }
    break;

  case 925:
#line 3315 "sql_yacc.yy"
    { yyval.simple_string= yyvsp[0].lex_str.str; }
    break;

  case 926:
#line 3316 "sql_yacc.yy"
    { yyval.simple_string= (char*) "\\"; }
    break;

  case 929:
#line 3329 "sql_yacc.yy"
    { if (add_group_to_list(YYTHD, yyvsp[-1].item,(bool) yyvsp[0].num)) YYABORT; }
    break;

  case 930:
#line 3331 "sql_yacc.yy"
    { if (add_group_to_list(YYTHD, yyvsp[-1].item,(bool) yyvsp[0].num)) YYABORT; }
    break;

  case 931:
#line 3334 "sql_yacc.yy"
    {}
    break;

  case 932:
#line 3336 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    if (lex->current_select->linkage == GLOBAL_OPTIONS_TYPE)
	    {
	      net_printf(lex->thd, ER_WRONG_USAGE, "WITH CUBE",
		       "global union parameters");
	      YYABORT;
	    }
	    lex->current_select->olap= CUBE_TYPE;
	    net_printf(lex->thd, ER_NOT_SUPPORTED_YET, "CUBE");
	    YYABORT;	/* To be deleted in 5.1 */
	  }
    break;

  case 933:
#line 3349 "sql_yacc.yy"
    {
	    LEX *lex= Lex;
	    if (lex->current_select->linkage == GLOBAL_OPTIONS_TYPE)
	    {
	      net_printf(lex->thd, ER_WRONG_USAGE, "WITH ROLLUP",
		       "global union parameters");
	      YYABORT;
	    }
	    lex->current_select->olap= ROLLUP_TYPE;
	  }
    break;

  case 936:
#line 3371 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->current_select->linkage != GLOBAL_OPTIONS_TYPE &&
	      lex->current_select->olap !=
	      UNSPECIFIED_OLAP_TYPE)
	  {
	    net_printf(lex->thd, ER_WRONG_USAGE,
		       "CUBE/ROLLUP",
		       "ORDER BY");
	    YYABORT;
	  }
	}
    break;

  case 938:
#line 3386 "sql_yacc.yy"
    { if (add_order_to_list(YYTHD, yyvsp[-1].item,(bool) yyvsp[0].num)) YYABORT; }
    break;

  case 939:
#line 3388 "sql_yacc.yy"
    { if (add_order_to_list(YYTHD, yyvsp[-1].item,(bool) yyvsp[0].num)) YYABORT; }
    break;

  case 940:
#line 3391 "sql_yacc.yy"
    { yyval.num =  1; }
    break;

  case 941:
#line 3392 "sql_yacc.yy"
    { yyval.num =1; }
    break;

  case 942:
#line 3393 "sql_yacc.yy"
    { yyval.num =0; }
    break;

  case 943:
#line 3398 "sql_yacc.yy"
    {
	  SELECT_LEX *sel= Select;
          sel->offset_limit= 0L;
          sel->select_limit= Lex->thd->variables.select_limit;
	}
    break;

  case 944:
#line 3403 "sql_yacc.yy"
    {}
    break;

  case 945:
#line 3407 "sql_yacc.yy"
    {}
    break;

  case 946:
#line 3408 "sql_yacc.yy"
    {}
    break;

  case 947:
#line 3412 "sql_yacc.yy"
    {}
    break;

  case 948:
#line 3417 "sql_yacc.yy"
    {
            SELECT_LEX *sel= Select;
            sel->select_limit= yyvsp[0].ulong_num;
            sel->offset_limit= 0L;
	  }
    break;

  case 949:
#line 3423 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    sel->select_limit= yyvsp[0].ulong_num;
	    sel->offset_limit= yyvsp[-2].ulong_num;
	  }
    break;

  case 950:
#line 3429 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    sel->select_limit= yyvsp[-2].ulong_num;
	    sel->offset_limit= yyvsp[0].ulong_num;
	  }
    break;

  case 951:
#line 3439 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->current_select->select_limit= HA_POS_ERROR;
	}
    break;

  case 952:
#line 3444 "sql_yacc.yy"
    { Select->select_limit= (ha_rows) yyvsp[0].ulonglong_number; }
    break;

  case 953:
#line 3447 "sql_yacc.yy"
    { yyval.ulong_num= strtoul(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 954:
#line 3448 "sql_yacc.yy"
    { yyval.ulong_num= (ulong) strtoll(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 955:
#line 3449 "sql_yacc.yy"
    { yyval.ulong_num= (ulong) strtoull(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 956:
#line 3450 "sql_yacc.yy"
    { yyval.ulong_num= strtoul(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 957:
#line 3451 "sql_yacc.yy"
    { yyval.ulong_num= strtoul(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 958:
#line 3454 "sql_yacc.yy"
    { yyval.ulonglong_number= (ulonglong) strtoul(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 959:
#line 3455 "sql_yacc.yy"
    { yyval.ulonglong_number= strtoull(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 960:
#line 3456 "sql_yacc.yy"
    { yyval.ulonglong_number= (ulonglong) strtoll(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 961:
#line 3457 "sql_yacc.yy"
    { yyval.ulonglong_number= strtoull(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 962:
#line 3458 "sql_yacc.yy"
    { yyval.ulonglong_number= strtoull(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 964:
#line 3463 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    if (&lex->select_lex != lex->current_select)
	    {
	      net_printf(lex->thd, ER_WRONG_USAGE,
			  "PROCEDURE",
			  "subquery");
	      YYABORT;
	    }
	    lex->proc_list.elements=0;
	    lex->proc_list.first=0;
	    lex->proc_list.next= (byte**) &lex->proc_list.first;
	    if (add_proc_to_list(lex->thd, new Item_field(NULL,NULL,yyvsp[0].lex_str.str)))
	      YYABORT;
	    Lex->uncacheable(UNCACHEABLE_SIDEEFFECT);
	  }
    break;

  case 966:
#line 3483 "sql_yacc.yy"
    {}
    break;

  case 967:
#line 3484 "sql_yacc.yy"
    {}
    break;

  case 970:
#line 3492 "sql_yacc.yy"
    {
	    LEX *lex= Lex;
	    if (add_proc_to_list(lex->thd, yyvsp[0].item))
	      YYABORT;
	    if (!yyvsp[0].item->name)
	      yyvsp[0].item->set_name(yyvsp[-1].simple_string,(uint) ((char*) lex->tok_end - yyvsp[-1].simple_string), YYTHD->charset());
	  }
    break;

  case 971:
#line 3503 "sql_yacc.yy"
    {
             LEX *lex=Lex;
	     if (!lex->describe && (!(lex->result= new select_dumpvar())))
	        YYABORT;
	   }
    break;

  case 972:
#line 3509 "sql_yacc.yy"
    {}
    break;

  case 974:
#line 3514 "sql_yacc.yy"
    {}
    break;

  case 975:
#line 3518 "sql_yacc.yy"
    {
             LEX *lex=Lex;
	     if (lex->result && ((select_dumpvar *)lex->result)->var_list.push_back((LEX_STRING*) sql_memdup(&yyvsp[0].lex_str,sizeof(LEX_STRING))))
	       YYABORT;
	   }
    break;

  case 976:
#line 3527 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (!lex->describe)
	  {
	    lex->uncacheable(UNCACHEABLE_SIDEEFFECT);
	    if (!(lex->exchange= new sql_exchange(yyvsp[0].lex_str.str,0)))
	      YYABORT;
	    if (!(lex->result= new select_export(lex->exchange)))
	      YYABORT;
	  }
	}
    break;

  case 978:
#line 3540 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (!lex->describe)
	  {
	    lex->uncacheable(UNCACHEABLE_SIDEEFFECT);
	    if (!(lex->exchange= new sql_exchange(yyvsp[0].lex_str.str,1)))
	      YYABORT;
	    if (!(lex->result= new select_dump(lex->exchange)))
	      YYABORT;
	  }
	}
    break;

  case 979:
#line 3552 "sql_yacc.yy"
    {
	  Lex->uncacheable(UNCACHEABLE_SIDEEFFECT);
	}
    break;

  case 980:
#line 3562 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_DO;
	  if (!(lex->insert_list = new List_item))
	    YYABORT;
	}
    break;

  case 981:
#line 3569 "sql_yacc.yy"
    {}
    break;

  case 982:
#line 3578 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_DROP_TABLE;
	  lex->drop_temporary= yyvsp[-4].num;
	  lex->drop_if_exists= yyvsp[-2].num;
	}
    break;

  case 983:
#line 3584 "sql_yacc.yy"
    {}
    break;

  case 984:
#line 3585 "sql_yacc.yy"
    {
	     LEX *lex=Lex;
	     lex->sql_command= SQLCOM_DROP_INDEX;
	     lex->drop_list.empty();
	     lex->drop_list.push_back(new Alter_drop(Alter_drop::KEY,
						     yyvsp[-3].lex_str.str));
	     if (!lex->current_select->add_table_to_list(lex->thd, yyvsp[-1].table, NULL,
							TL_OPTION_UPDATING))
	      YYABORT;
	  }
    break;

  case 985:
#line 3596 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_DROP_DB;
	    lex->drop_if_exists=yyvsp[-1].num;
	    lex->name=yyvsp[0].lex_str.str;
	 }
    break;

  case 986:
#line 3603 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command = SQLCOM_DROP_FUNCTION;
	    lex->udf.name = yyvsp[0].lex_str;
	  }
    break;

  case 987:
#line 3609 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command = SQLCOM_DROP_USER;
	    lex->users_list.empty();
	  }
    break;

  case 988:
#line 3615 "sql_yacc.yy"
    {}
    break;

  case 991:
#line 3625 "sql_yacc.yy"
    {
	  if (!Select->add_table_to_list(YYTHD, yyvsp[0].table, NULL, TL_OPTION_UPDATING))
	    YYABORT;
	}
    break;

  case 992:
#line 3632 "sql_yacc.yy"
    { yyval.num= 0; }
    break;

  case 993:
#line 3633 "sql_yacc.yy"
    { yyval.num= 1; }
    break;

  case 994:
#line 3637 "sql_yacc.yy"
    { yyval.num= 0; }
    break;

  case 995:
#line 3638 "sql_yacc.yy"
    { yyval.num= 1; }
    break;

  case 996:
#line 3646 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  lex->sql_command = SQLCOM_INSERT;
	  /* for subselects */
          lex->lock_option= (using_update_log) ? TL_READ_NO_INSERT : TL_READ;
	  lex->select_lex.resolve_mode= SELECT_LEX::INSERT_MODE;
	}
    break;

  case 997:
#line 3654 "sql_yacc.yy"
    {
	  Select->set_lock_for_tables(yyvsp[-2].lock_type);
	  Lex->current_select= &Lex->select_lex;
	}
    break;

  case 998:
#line 3659 "sql_yacc.yy"
    {}
    break;

  case 999:
#line 3664 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_REPLACE;
	  lex->duplicates= DUP_REPLACE;
	  lex->select_lex.resolve_mode= SELECT_LEX::INSERT_MODE;
	}
    break;

  case 1000:
#line 3671 "sql_yacc.yy"
    {
	  Select->set_lock_for_tables(yyvsp[-1].lock_type);
	  Lex->current_select= &Lex->select_lex;
	}
    break;

  case 1001:
#line 3676 "sql_yacc.yy"
    {}
    break;

  case 1002:
#line 3677 "sql_yacc.yy"
    {}
    break;

  case 1003:
#line 3681 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_CONCURRENT_INSERT; }
    break;

  case 1004:
#line 3682 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_LOW_PRIORITY; }
    break;

  case 1005:
#line 3683 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_DELAYED; }
    break;

  case 1006:
#line 3684 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE; }
    break;

  case 1007:
#line 3688 "sql_yacc.yy"
    { yyval.lock_type= yyvsp[0].lock_type; }
    break;

  case 1008:
#line 3689 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_DELAYED; }
    break;

  case 1009:
#line 3692 "sql_yacc.yy"
    {}
    break;

  case 1010:
#line 3693 "sql_yacc.yy"
    {}
    break;

  case 1011:
#line 3697 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->field_list.empty();
	  lex->many_values.empty();
	  lex->insert_list=0;
	}
    break;

  case 1012:
#line 3705 "sql_yacc.yy"
    {}
    break;

  case 1013:
#line 3706 "sql_yacc.yy"
    {}
    break;

  case 1014:
#line 3707 "sql_yacc.yy"
    {}
    break;

  case 1015:
#line 3709 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    if (!(lex->insert_list = new List_item) ||
		lex->many_values.push_back(lex->insert_list))
	      YYABORT;
	   }
    break;

  case 1017:
#line 3718 "sql_yacc.yy"
    { }
    break;

  case 1018:
#line 3719 "sql_yacc.yy"
    { }
    break;

  case 1019:
#line 3720 "sql_yacc.yy"
    { }
    break;

  case 1020:
#line 3723 "sql_yacc.yy"
    { Lex->field_list.push_back(yyvsp[0].item); }
    break;

  case 1021:
#line 3724 "sql_yacc.yy"
    { Lex->field_list.push_back(yyvsp[0].item); }
    break;

  case 1022:
#line 3727 "sql_yacc.yy"
    {}
    break;

  case 1023:
#line 3728 "sql_yacc.yy"
    {}
    break;

  case 1024:
#line 3729 "sql_yacc.yy"
    { Select->set_braces(0);}
    break;

  case 1025:
#line 3729 "sql_yacc.yy"
    {}
    break;

  case 1026:
#line 3730 "sql_yacc.yy"
    { Select->set_braces(1);}
    break;

  case 1027:
#line 3730 "sql_yacc.yy"
    {}
    break;

  case 1032:
#line 3744 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->field_list.push_back(yyvsp[-2].item) ||
	      lex->insert_list->push_back(yyvsp[0].item))
	    YYABORT;
	 }
    break;

  case 1033:
#line 3751 "sql_yacc.yy"
    {}
    break;

  case 1034:
#line 3752 "sql_yacc.yy"
    {}
    break;

  case 1035:
#line 3756 "sql_yacc.yy"
    {}
    break;

  case 1036:
#line 3757 "sql_yacc.yy"
    {}
    break;

  case 1037:
#line 3762 "sql_yacc.yy"
    {
	    if (!(Lex->insert_list = new List_item))
	      YYABORT;
	 }
    break;

  case 1038:
#line 3767 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->many_values.push_back(lex->insert_list))
	    YYABORT;
	 }
    break;

  case 1039:
#line 3774 "sql_yacc.yy"
    {}
    break;

  case 1041:
#line 3779 "sql_yacc.yy"
    {
	  if (Lex->insert_list->push_back(yyvsp[0].item))
	    YYABORT;
	}
    break;

  case 1042:
#line 3784 "sql_yacc.yy"
    {
	    if (Lex->insert_list->push_back(yyvsp[0].item))
	      YYABORT;
	  }
    break;

  case 1043:
#line 3791 "sql_yacc.yy"
    { yyval.item= yyvsp[0].item;}
    break;

  case 1044:
#line 3792 "sql_yacc.yy"
    {yyval.item= new Item_default_value(); }
    break;

  case 1046:
#line 3798 "sql_yacc.yy"
    { /* for simplisity, let's forget about
               INSERT ... SELECT ... UPDATE
               for a moment */
	    if (Lex->sql_command != SQLCOM_INSERT)
            {
	      send_error(Lex->thd, ER_SYNTAX_ERROR);
              YYABORT;
            }
          }
    break;

  case 1048:
#line 3814 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  mysql_init_select(lex);
          lex->sql_command= SQLCOM_UPDATE;
        }
    break;

  case 1049:
#line 3821 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  Select->set_lock_for_tables(yyvsp[-7].lock_type);
          if (lex->select_lex.table_list.elements > 1)
            lex->sql_command= SQLCOM_UPDATE_MULTI;
	}
    break;

  case 1050:
#line 3831 "sql_yacc.yy"
    {
	  if (add_item_to_list(YYTHD, yyvsp[-2].item) || add_value_to_list(YYTHD, yyvsp[0].item))
	    YYABORT;
	}
    break;

  case 1051:
#line 3836 "sql_yacc.yy"
    {
	    if (add_item_to_list(YYTHD, yyvsp[-2].item) || add_value_to_list(YYTHD, yyvsp[0].item))
	      YYABORT;
	  }
    break;

  case 1052:
#line 3842 "sql_yacc.yy"
    { yyval.lock_type= YYTHD->update_lock_default; }
    break;

  case 1053:
#line 3843 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_LOW_PRIORITY; }
    break;

  case 1054:
#line 3849 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  lex->sql_command= SQLCOM_DELETE;
	  lex->lock_option= lex->thd->update_lock_default;
	  lex->select_lex.init_order();
	}
    break;

  case 1055:
#line 3855 "sql_yacc.yy"
    {}
    break;

  case 1056:
#line 3860 "sql_yacc.yy"
    {
	  if (!Select->add_table_to_list(YYTHD, yyvsp[0].table, NULL, TL_OPTION_UPDATING,
					 Lex->lock_option))
	    YYABORT;
	}
    break;

  case 1057:
#line 3866 "sql_yacc.yy"
    {}
    break;

  case 1058:
#line 3868 "sql_yacc.yy"
    { mysql_init_multi_delete(Lex); }
    break;

  case 1060:
#line 3871 "sql_yacc.yy"
    { mysql_init_multi_delete(Lex); }
    break;

  case 1061:
#line 3873 "sql_yacc.yy"
    {}
    break;

  case 1062:
#line 3877 "sql_yacc.yy"
    {}
    break;

  case 1063:
#line 3878 "sql_yacc.yy"
    {}
    break;

  case 1064:
#line 3882 "sql_yacc.yy"
    {
	  if (!Select->add_table_to_list(YYTHD, new Table_ident(yyvsp[-2].lex_str), yyvsp[0].lex_str_ptr,
					 TL_OPTION_UPDATING, Lex->lock_option))
	    YYABORT;
        }
    break;

  case 1065:
#line 3888 "sql_yacc.yy"
    {
	    if (!Select->add_table_to_list(YYTHD,
					   new Table_ident(YYTHD, yyvsp[-4].lex_str, yyvsp[-2].lex_str, 0),
					   yyvsp[0].lex_str_ptr, TL_OPTION_UPDATING,
					   Lex->lock_option))
	      YYABORT;
	  }
    break;

  case 1066:
#line 3898 "sql_yacc.yy"
    {}
    break;

  case 1067:
#line 3899 "sql_yacc.yy"
    {}
    break;

  case 1068:
#line 3903 "sql_yacc.yy"
    {}
    break;

  case 1069:
#line 3904 "sql_yacc.yy"
    {}
    break;

  case 1070:
#line 3907 "sql_yacc.yy"
    { Select->options|= OPTION_QUICK; }
    break;

  case 1071:
#line 3908 "sql_yacc.yy"
    { Lex->lock_option= TL_WRITE_LOW_PRIORITY; }
    break;

  case 1072:
#line 3909 "sql_yacc.yy"
    { Lex->duplicates= DUP_IGNORE; }
    break;

  case 1073:
#line 3913 "sql_yacc.yy"
    {
	  LEX* lex= Lex;
	  lex->sql_command= SQLCOM_TRUNCATE;
	  lex->select_lex.options= 0;
	  lex->select_lex.init_order();
	}
    break;

  case 1076:
#line 3928 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->wild=0;
	  bzero((char*) &lex->create_info,sizeof(lex->create_info));
	}
    break;

  case 1077:
#line 3934 "sql_yacc.yy"
    {}
    break;

  case 1078:
#line 3939 "sql_yacc.yy"
    { Lex->sql_command= SQLCOM_SHOW_DATABASES; }
    break;

  case 1079:
#line 3941 "sql_yacc.yy"
    {
	    LEX *lex= Lex;
	    lex->sql_command= SQLCOM_SHOW_TABLES;
	    lex->select_lex.db= yyvsp[-1].simple_string;
	    lex->select_lex.options= 0;
	   }
    break;

  case 1080:
#line 3948 "sql_yacc.yy"
    {
	    LEX *lex= Lex;
	    lex->sql_command= SQLCOM_SHOW_TABLES;
	    lex->select_lex.options|= SELECT_DESCRIBE;
	    lex->select_lex.db= yyvsp[-1].simple_string;
	  }
    break;

  case 1081:
#line 3955 "sql_yacc.yy"
    {
	    LEX *lex= Lex;
	    lex->sql_command= SQLCOM_SHOW_OPEN_TABLES;
	    lex->select_lex.db= yyvsp[-1].simple_string;
	    lex->select_lex.options= 0;
	  }
    break;

  case 1082:
#line 3962 "sql_yacc.yy"
    {
	    Lex->sql_command= SQLCOM_SHOW_FIELDS;
	    if (yyvsp[-1].simple_string)
	      yyvsp[-2].table->change_db(yyvsp[-1].simple_string);
	    if (!Select->add_table_to_list(YYTHD, yyvsp[-2].table, NULL, 0))
	      YYABORT;
	  }
    break;

  case 1083:
#line 3973 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_NEW_MASTER;
	    Lex->mi.log_file_name = yyvsp[-8].lex_str.str;
	    Lex->mi.pos = yyvsp[-4].ulonglong_number;
	    Lex->mi.server_id = yyvsp[0].ulong_num;
          }
    break;

  case 1084:
#line 3980 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_BINLOGS;
          }
    break;

  case 1085:
#line 3984 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_SLAVE_HOSTS;
          }
    break;

  case 1086:
#line 3988 "sql_yacc.yy"
    {
	    LEX *lex= Lex;
	    lex->sql_command= SQLCOM_SHOW_BINLOG_EVENTS;
          }
    break;

  case 1088:
#line 3993 "sql_yacc.yy"
    {
	    Lex->sql_command= SQLCOM_SHOW_KEYS;
	    if (yyvsp[0].simple_string)
	      yyvsp[-1].table->change_db(yyvsp[0].simple_string);
	    if (!Select->add_table_to_list(YYTHD, yyvsp[-1].table, NULL, 0))
	      YYABORT;
	  }
    break;

  case 1089:
#line 4001 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_SHOW_COLUMN_TYPES;
	  }
    break;

  case 1090:
#line 4006 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_SHOW_TABLE_TYPES;
	  }
    break;

  case 1091:
#line 4011 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_SHOW_PRIVILEGES;
	  }
    break;

  case 1092:
#line 4016 "sql_yacc.yy"
    { (void) create_select_for_variable("warning_count"); }
    break;

  case 1093:
#line 4018 "sql_yacc.yy"
    { (void) create_select_for_variable("error_count"); }
    break;

  case 1094:
#line 4020 "sql_yacc.yy"
    { Lex->sql_command = SQLCOM_SHOW_WARNS;}
    break;

  case 1095:
#line 4022 "sql_yacc.yy"
    { Lex->sql_command = SQLCOM_SHOW_ERRORS;}
    break;

  case 1096:
#line 4024 "sql_yacc.yy"
    { Lex->sql_command= SQLCOM_SHOW_STATUS; }
    break;

  case 1097:
#line 4026 "sql_yacc.yy"
    { Lex->sql_command = SQLCOM_SHOW_INNODB_STATUS;}
    break;

  case 1098:
#line 4028 "sql_yacc.yy"
    { Lex->sql_command= SQLCOM_SHOW_PROCESSLIST;}
    break;

  case 1099:
#line 4030 "sql_yacc.yy"
    {
	    THD *thd= YYTHD;
	    thd->lex.sql_command= SQLCOM_SHOW_VARIABLES;
	    thd->lex.option_type= (enum_var_type) yyvsp[-2].num;
	  }
    break;

  case 1100:
#line 4036 "sql_yacc.yy"
    { Lex->sql_command= SQLCOM_SHOW_CHARSETS; }
    break;

  case 1101:
#line 4038 "sql_yacc.yy"
    { Lex->sql_command= SQLCOM_SHOW_COLLATIONS; }
    break;

  case 1102:
#line 4040 "sql_yacc.yy"
    { Lex->sql_command= SQLCOM_SHOW_LOGS; }
    break;

  case 1103:
#line 4042 "sql_yacc.yy"
    { Lex->sql_command= SQLCOM_SHOW_LOGS; }
    break;

  case 1104:
#line 4044 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_SHOW_GRANTS;
	    lex->grant_user=yyvsp[0].lex_user;
	    lex->grant_user->password.str=NullS;
	  }
    break;

  case 1105:
#line 4051 "sql_yacc.yy"
    {
	    Lex->sql_command=SQLCOM_SHOW_CREATE_DB;
	    Lex->create_info.options=yyvsp[-1].num;
	    Lex->name=yyvsp[0].lex_str.str;
	  }
    break;

  case 1106:
#line 4057 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_CREATE;
	    if (!Select->add_table_to_list(YYTHD, yyvsp[0].table, NULL,0))
	      YYABORT;
	  }
    break;

  case 1107:
#line 4063 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_MASTER_STAT;
          }
    break;

  case 1108:
#line 4067 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_SLAVE_STAT;
          }
    break;

  case 1111:
#line 4076 "sql_yacc.yy"
    { yyval.simple_string= 0; }
    break;

  case 1112:
#line 4077 "sql_yacc.yy"
    { yyval.simple_string= yyvsp[0].lex_str.str; }
    break;

  case 1114:
#line 4081 "sql_yacc.yy"
    { Lex->wild= yyvsp[0].string; }
    break;

  case 1115:
#line 4084 "sql_yacc.yy"
    { Lex->verbose=0; }
    break;

  case 1116:
#line 4085 "sql_yacc.yy"
    { Lex->verbose=1; }
    break;

  case 1119:
#line 4092 "sql_yacc.yy"
    { Lex->mi.log_file_name = 0; }
    break;

  case 1120:
#line 4093 "sql_yacc.yy"
    { Lex->mi.log_file_name = yyvsp[0].lex_str.str; }
    break;

  case 1121:
#line 4096 "sql_yacc.yy"
    { Lex->mi.pos = 4; /* skip magic number */ }
    break;

  case 1122:
#line 4097 "sql_yacc.yy"
    { Lex->mi.pos = yyvsp[0].ulonglong_number; }
    break;

  case 1123:
#line 4103 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->wild=0;
	  lex->verbose=0;
	  lex->sql_command=SQLCOM_SHOW_FIELDS;
	  if (!Select->add_table_to_list(lex->thd, yyvsp[0].table, NULL,0))
	    YYABORT;
	}
    break;

  case 1124:
#line 4111 "sql_yacc.yy"
    {}
    break;

  case 1125:
#line 4113 "sql_yacc.yy"
    { Lex->describe|= DESCRIBE_NORMAL; }
    break;

  case 1126:
#line 4115 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->select_lex.options|= SELECT_DESCRIBE;
	  }
    break;

  case 1129:
#line 4126 "sql_yacc.yy"
    {}
    break;

  case 1130:
#line 4127 "sql_yacc.yy"
    { Lex->describe|= DESCRIBE_EXTENDED; }
    break;

  case 1131:
#line 4131 "sql_yacc.yy"
    {}
    break;

  case 1132:
#line 4132 "sql_yacc.yy"
    { Lex->wild= yyvsp[0].string; }
    break;

  case 1133:
#line 4134 "sql_yacc.yy"
    { Lex->wild= new String((const char*) yyvsp[0].lex_str.str,yyvsp[0].lex_str.length,system_charset_info); }
    break;

  case 1134:
#line 4141 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command= SQLCOM_FLUSH; lex->type=0;
          lex->no_write_to_binlog= yyvsp[0].num;
	}
    break;

  case 1135:
#line 4147 "sql_yacc.yy"
    {}
    break;

  case 1138:
#line 4155 "sql_yacc.yy"
    { Lex->type|= REFRESH_TABLES; }
    break;

  case 1139:
#line 4155 "sql_yacc.yy"
    {}
    break;

  case 1140:
#line 4156 "sql_yacc.yy"
    { Lex->type|= REFRESH_TABLES | REFRESH_READ_LOCK; }
    break;

  case 1141:
#line 4157 "sql_yacc.yy"
    { Lex->type|= REFRESH_QUERY_CACHE_FREE; }
    break;

  case 1142:
#line 4158 "sql_yacc.yy"
    { Lex->type|= REFRESH_HOSTS; }
    break;

  case 1143:
#line 4159 "sql_yacc.yy"
    { Lex->type|= REFRESH_GRANT; }
    break;

  case 1144:
#line 4160 "sql_yacc.yy"
    { Lex->type|= REFRESH_LOG; }
    break;

  case 1145:
#line 4161 "sql_yacc.yy"
    { Lex->type|= REFRESH_STATUS; }
    break;

  case 1146:
#line 4162 "sql_yacc.yy"
    { Lex->type|= REFRESH_SLAVE; }
    break;

  case 1147:
#line 4163 "sql_yacc.yy"
    { Lex->type|= REFRESH_MASTER; }
    break;

  case 1148:
#line 4164 "sql_yacc.yy"
    { Lex->type|= REFRESH_DES_KEY_FILE; }
    break;

  case 1149:
#line 4165 "sql_yacc.yy"
    { Lex->type|= REFRESH_USER_RESOURCES; }
    break;

  case 1150:
#line 4168 "sql_yacc.yy"
    {;}
    break;

  case 1151:
#line 4169 "sql_yacc.yy"
    {;}
    break;

  case 1152:
#line 4173 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command= SQLCOM_RESET; lex->type=0;
	}
    break;

  case 1153:
#line 4177 "sql_yacc.yy"
    {}
    break;

  case 1156:
#line 4185 "sql_yacc.yy"
    { Lex->type|= REFRESH_SLAVE; }
    break;

  case 1157:
#line 4186 "sql_yacc.yy"
    { Lex->type|= REFRESH_MASTER; }
    break;

  case 1158:
#line 4187 "sql_yacc.yy"
    { Lex->type|= REFRESH_QUERY_CACHE;}
    break;

  case 1159:
#line 4191 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->type=0;
	}
    break;

  case 1160:
#line 4195 "sql_yacc.yy"
    {}
    break;

  case 1162:
#line 4204 "sql_yacc.yy"
    {
	   Lex->sql_command = SQLCOM_PURGE;
	   Lex->to_log = yyvsp[0].lex_str.str;
        }
    break;

  case 1163:
#line 4209 "sql_yacc.yy"
    {
	  if (yyvsp[0].item->check_cols(1) || yyvsp[0].item->fix_fields(Lex->thd, 0, &yyvsp[0].item))
	  {
	    net_printf(Lex->thd, ER_WRONG_ARGUMENTS, "PURGE LOGS BEFORE");
	    YYABORT;
	  }
	  Item *tmp= new Item_func_unix_timestamp(yyvsp[0].item);
	  Lex->sql_command = SQLCOM_PURGE_BEFORE;
	  Lex->purge_time= (ulong) tmp->val_int();
	}
    break;

  case 1164:
#line 4225 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (yyvsp[0].item->fix_fields(lex->thd, 0, &yyvsp[0].item) || yyvsp[0].item->check_cols(1))
	  {
	    send_error(lex->thd, ER_SET_CONSTANTS_ONLY);
	    YYABORT;
	  }
          lex->sql_command=SQLCOM_KILL;
	  lex->thread_id= (ulong) yyvsp[0].item->val_int();
	}
    break;

  case 1165:
#line 4239 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command=SQLCOM_CHANGE_DB;
	  lex->select_lex.db= yyvsp[0].lex_str.str;
	}
    break;

  case 1166:
#line 4248 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command= SQLCOM_LOAD;
	  lex->lock_option= yyvsp[-3].lock_type;
	  lex->local_file=  yyvsp[-2].num;
	  if (!(lex->exchange= new sql_exchange(yyvsp[0].lex_str.str,0)))
	    YYABORT;
	  lex->field_list.empty();
	}
    break;

  case 1167:
#line 4259 "sql_yacc.yy"
    {
	  if (!Select->add_table_to_list(YYTHD, yyvsp[-4].table, NULL, TL_OPTION_UPDATING))
	    YYABORT;
	}
    break;

  case 1168:
#line 4265 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_LOAD_MASTER_TABLE;
	  if (!Select->add_table_to_list(YYTHD, yyvsp[-2].table, NULL, TL_OPTION_UPDATING))
	    YYABORT;

        }
    break;

  case 1169:
#line 4273 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_LOAD_MASTER_DATA;
        }
    break;

  case 1170:
#line 4278 "sql_yacc.yy"
    { yyval.num=0;}
    break;

  case 1171:
#line 4279 "sql_yacc.yy"
    { yyval.num=1;}
    break;

  case 1172:
#line 4282 "sql_yacc.yy"
    { yyval.lock_type= YYTHD->update_lock_default; }
    break;

  case 1173:
#line 4283 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_CONCURRENT_INSERT ; }
    break;

  case 1174:
#line 4284 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_LOW_PRIORITY; }
    break;

  case 1175:
#line 4288 "sql_yacc.yy"
    { Lex->duplicates=DUP_ERROR; }
    break;

  case 1176:
#line 4289 "sql_yacc.yy"
    { Lex->duplicates=DUP_REPLACE; }
    break;

  case 1177:
#line 4290 "sql_yacc.yy"
    { Lex->duplicates=DUP_IGNORE; }
    break;

  case 1182:
#line 4301 "sql_yacc.yy"
    { Lex->exchange->field_term= yyvsp[0].string;}
    break;

  case 1183:
#line 4303 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->exchange->enclosed= yyvsp[0].string;
	    lex->exchange->opt_enclosed=1;
	  }
    break;

  case 1184:
#line 4308 "sql_yacc.yy"
    { Lex->exchange->enclosed= yyvsp[0].string;}
    break;

  case 1185:
#line 4309 "sql_yacc.yy"
    { Lex->exchange->escaped= yyvsp[0].string;}
    break;

  case 1190:
#line 4320 "sql_yacc.yy"
    { Lex->exchange->line_term= yyvsp[0].string;}
    break;

  case 1191:
#line 4321 "sql_yacc.yy"
    { Lex->exchange->line_start= yyvsp[0].string;}
    break;

  case 1193:
#line 4326 "sql_yacc.yy"
    { Lex->exchange->skip_lines=atol(yyvsp[-1].lex_str.str); }
    break;

  case 1194:
#line 4332 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  yyval.item = new Item_string(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length,thd->variables.collation_connection);
	}
    break;

  case 1195:
#line 4337 "sql_yacc.yy"
    { yyval.item=  new Item_string(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length,national_charset_info); }
    break;

  case 1196:
#line 4339 "sql_yacc.yy"
    { yyval.item = new Item_string(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length,Lex->charset); }
    break;

  case 1197:
#line 4341 "sql_yacc.yy"
    { ((Item_string*) yyvsp[-1].item)->append(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length); }
    break;

  case 1198:
#line 4346 "sql_yacc.yy"
    { yyval.string=  new String(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length,YYTHD->variables.collation_connection); }
    break;

  case 1199:
#line 4348 "sql_yacc.yy"
    {
	    Item *tmp = new Item_varbinary(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length);
	    yyval.string= tmp ? tmp->val_str((String*) 0) : (String*) 0;
	  }
    break;

  case 1200:
#line 4356 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
          if (YYTHD->command == COM_PREPARE)
          {
            lex->param_list.push_back(yyval.item=new Item_param((uint)(lex->tok_start-(uchar *)YYTHD->query)));
            lex->param_count++;
          }
          else
          {
            yyerror("You have an error in your SQL syntax");
            YYABORT;
          }
        }
    break;

  case 1201:
#line 4372 "sql_yacc.yy"
    { yyval.item =	yyvsp[0].item; }
    break;

  case 1202:
#line 4373 "sql_yacc.yy"
    { yyval.item =	new Item_int(yyvsp[0].lex_str.str, (longlong) strtol(yyvsp[0].lex_str.str, NULL, 10),yyvsp[0].lex_str.length); }
    break;

  case 1203:
#line 4374 "sql_yacc.yy"
    { yyval.item =	new Item_int(yyvsp[0].lex_str.str, (longlong) strtoll(yyvsp[0].lex_str.str,NULL,10), yyvsp[0].lex_str.length); }
    break;

  case 1204:
#line 4375 "sql_yacc.yy"
    { yyval.item =	new Item_uint(yyvsp[0].lex_str.str, yyvsp[0].lex_str.length); }
    break;

  case 1205:
#line 4376 "sql_yacc.yy"
    { yyval.item =	new Item_real(yyvsp[0].lex_str.str, yyvsp[0].lex_str.length); }
    break;

  case 1206:
#line 4377 "sql_yacc.yy"
    { yyval.item =	new Item_float(yyvsp[0].lex_str.str, yyvsp[0].lex_str.length); }
    break;

  case 1207:
#line 4378 "sql_yacc.yy"
    { yyval.item =	new Item_null();
			  Lex->next_state=MY_LEX_OPERATOR_OR_IDENT;}
    break;

  case 1208:
#line 4380 "sql_yacc.yy"
    { yyval.item =	new Item_varbinary(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length);}
    break;

  case 1209:
#line 4382 "sql_yacc.yy"
    {
	    Item *tmp= new Item_varbinary(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length);
	    String *str= tmp ? tmp->val_str((String*) 0) : (String*) 0;
	    yyval.item= new Item_string(str ? str->ptr() : "",
				str ? str->length() : 0,
				Lex->charset);
	  }
    break;

  case 1210:
#line 4389 "sql_yacc.yy"
    { yyval.item = yyvsp[0].item; }
    break;

  case 1211:
#line 4390 "sql_yacc.yy"
    { yyval.item = yyvsp[0].item; }
    break;

  case 1212:
#line 4391 "sql_yacc.yy"
    { yyval.item = yyvsp[0].item; }
    break;

  case 1213:
#line 4398 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 1214:
#line 4399 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 1215:
#line 4403 "sql_yacc.yy"
    {
	  yyval.item = new Item_field(NullS,yyvsp[-2].lex_str.str,"*");
	  Lex->current_select->with_wild++;
	}
    break;

  case 1216:
#line 4408 "sql_yacc.yy"
    {
	  yyval.item = new Item_field((YYTHD->client_capabilities &
   			     CLIENT_NO_SCHEMA ? NullS : yyvsp[-4].lex_str.str),
			     yyvsp[-2].lex_str.str,"*");
	  Lex->current_select->with_wild++;
	}
    break;

  case 1217:
#line 4417 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 1218:
#line 4421 "sql_yacc.yy"
    {
	  SELECT_LEX *sel=Select;
	  yyval.item= (sel->parsing_place != SELECT_LEX_NODE::IN_HAVING ||
	       sel->get_in_sum_expr() > 0) ?
              (Item*) new Item_field(NullS,NullS,yyvsp[0].lex_str.str) :
	      (Item*) new Item_ref(NullS,NullS,yyvsp[0].lex_str.str);
	}
    break;

  case 1219:
#line 4429 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  LEX *lex= &thd->lex;
	  SELECT_LEX *sel= lex->current_select;
	  if (sel->no_table_names_allowed)
	  {
	    my_printf_error(ER_TABLENAME_NOT_ALLOWED_HERE,
			    ER(ER_TABLENAME_NOT_ALLOWED_HERE),
			    MYF(0), yyvsp[-2].lex_str.str, thd->where);
	  }
	  yyval.item= (sel->parsing_place != SELECT_LEX_NODE::IN_HAVING ||
	       sel->get_in_sum_expr() > 0) ?
	      (Item*) new Item_field(NullS,yyvsp[-2].lex_str.str,yyvsp[0].lex_str.str) :
	      (Item*) new Item_ref(NullS,yyvsp[-2].lex_str.str,yyvsp[0].lex_str.str);
	}
    break;

  case 1220:
#line 4445 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  LEX *lex= &thd->lex;
	  SELECT_LEX *sel= lex->current_select;
	  if (sel->no_table_names_allowed)
	  {
	    my_printf_error(ER_TABLENAME_NOT_ALLOWED_HERE,
			    ER(ER_TABLENAME_NOT_ALLOWED_HERE),
			    MYF(0), yyvsp[-2].lex_str.str, thd->where);
	  }
	  yyval.item= (sel->parsing_place != SELECT_LEX_NODE::IN_HAVING ||
	       sel->get_in_sum_expr() > 0) ?
	      (Item*) new Item_field(NullS,yyvsp[-2].lex_str.str,yyvsp[0].lex_str.str) :
              (Item*) new Item_ref(NullS,yyvsp[-2].lex_str.str,yyvsp[0].lex_str.str);
	}
    break;

  case 1221:
#line 4461 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  LEX *lex= &thd->lex;
	  SELECT_LEX *sel= lex->current_select;
	  if (sel->no_table_names_allowed)
	  {
	    my_printf_error(ER_TABLENAME_NOT_ALLOWED_HERE,
			    ER(ER_TABLENAME_NOT_ALLOWED_HERE),
			    MYF(0), yyvsp[-2].lex_str.str, thd->where);
	  }
	  yyval.item= (sel->parsing_place != SELECT_LEX_NODE::IN_HAVING ||
	       sel->get_in_sum_expr() > 0) ?
	      (Item*) new Item_field((YYTHD->client_capabilities &
				      CLIENT_NO_SCHEMA ? NullS : yyvsp[-4].lex_str.str),
				     yyvsp[-2].lex_str.str, yyvsp[0].lex_str.str) :
	      (Item*) new Item_ref((YYTHD->client_capabilities &
				    CLIENT_NO_SCHEMA ? NullS : yyvsp[-4].lex_str.str),
                                   yyvsp[-2].lex_str.str, yyvsp[0].lex_str.str);
	}
    break;

  case 1222:
#line 4483 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 1223:
#line 4484 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 1224:
#line 4485 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 1225:
#line 4488 "sql_yacc.yy"
    { yyval.table=new Table_ident(yyvsp[0].lex_str); }
    break;

  case 1226:
#line 4489 "sql_yacc.yy"
    { yyval.table=new Table_ident(YYTHD, yyvsp[-2].lex_str,yyvsp[0].lex_str,0);}
    break;

  case 1227:
#line 4490 "sql_yacc.yy"
    { yyval.table=new Table_ident(yyvsp[0].lex_str);}
    break;

  case 1228:
#line 4494 "sql_yacc.yy"
    { yyval.lex_str= yyvsp[0].lex_str; }
    break;

  case 1229:
#line 4496 "sql_yacc.yy"
    {
	    THD *thd= YYTHD;
	    if (thd->charset_is_system_charset)
	      yyval.lex_str= yyvsp[0].lex_str;
	    else
	      thd->convert_string(&yyval.lex_str, system_charset_info,
				  yyvsp[0].lex_str.str, yyvsp[0].lex_str.length, thd->charset());
	  }
    break;

  case 1230:
#line 4508 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  if (thd->charset_is_system_charset)
	    yyval.lex_str= yyvsp[0].lex_str;
	  else
	    thd->convert_string(&yyval.lex_str, system_charset_info,
				yyvsp[0].lex_str.str, yyvsp[0].lex_str.length, thd->charset());
	}
    break;

  case 1231:
#line 4520 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  if (thd->charset_is_collation_connection)
	    yyval.lex_str= yyvsp[0].lex_str;
	  else
	    thd->convert_string(&yyval.lex_str, thd->variables.collation_connection,
				yyvsp[0].lex_str.str, yyvsp[0].lex_str.length, thd->charset());
	}
    break;

  case 1232:
#line 4532 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str; }
    break;

  case 1233:
#line 4534 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  yyval.lex_str.str=    thd->strmake(yyvsp[0].symbol.str, yyvsp[0].symbol.length);
	  yyval.lex_str.length= yyvsp[0].symbol.length;
	}
    break;

  case 1234:
#line 4542 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 1235:
#line 4543 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 1236:
#line 4544 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 1237:
#line 4548 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  if (!(yyval.lex_user=(LEX_USER*) thd->alloc(sizeof(st_lex_user))))
	    YYABORT;
	  yyval.lex_user->user = yyvsp[0].lex_str;
	  yyval.lex_user->host.str= (char *) "%";
	  yyval.lex_user->host.length= 1;
	}
    break;

  case 1238:
#line 4557 "sql_yacc.yy"
    {
	    THD *thd= YYTHD;
	    if (!(yyval.lex_user=(LEX_USER*) thd->alloc(sizeof(st_lex_user))))
	      YYABORT;
	    yyval.lex_user->user = yyvsp[-2].lex_str; yyval.lex_user->host=yyvsp[0].lex_str;
	  }
    break;

  case 1239:
#line 4567 "sql_yacc.yy"
    {}
    break;

  case 1240:
#line 4568 "sql_yacc.yy"
    {}
    break;

  case 1241:
#line 4569 "sql_yacc.yy"
    {}
    break;

  case 1242:
#line 4570 "sql_yacc.yy"
    {}
    break;

  case 1243:
#line 4571 "sql_yacc.yy"
    {}
    break;

  case 1244:
#line 4572 "sql_yacc.yy"
    {}
    break;

  case 1245:
#line 4573 "sql_yacc.yy"
    {}
    break;

  case 1246:
#line 4574 "sql_yacc.yy"
    {}
    break;

  case 1247:
#line 4575 "sql_yacc.yy"
    {}
    break;

  case 1248:
#line 4576 "sql_yacc.yy"
    {}
    break;

  case 1249:
#line 4577 "sql_yacc.yy"
    {}
    break;

  case 1250:
#line 4578 "sql_yacc.yy"
    {}
    break;

  case 1251:
#line 4579 "sql_yacc.yy"
    {}
    break;

  case 1252:
#line 4580 "sql_yacc.yy"
    {}
    break;

  case 1253:
#line 4581 "sql_yacc.yy"
    {}
    break;

  case 1254:
#line 4582 "sql_yacc.yy"
    {}
    break;

  case 1255:
#line 4583 "sql_yacc.yy"
    {}
    break;

  case 1256:
#line 4584 "sql_yacc.yy"
    {}
    break;

  case 1257:
#line 4585 "sql_yacc.yy"
    {}
    break;

  case 1258:
#line 4586 "sql_yacc.yy"
    {}
    break;

  case 1259:
#line 4587 "sql_yacc.yy"
    {}
    break;

  case 1260:
#line 4588 "sql_yacc.yy"
    {}
    break;

  case 1261:
#line 4589 "sql_yacc.yy"
    {}
    break;

  case 1262:
#line 4590 "sql_yacc.yy"
    {}
    break;

  case 1263:
#line 4591 "sql_yacc.yy"
    {}
    break;

  case 1264:
#line 4592 "sql_yacc.yy"
    {}
    break;

  case 1265:
#line 4593 "sql_yacc.yy"
    {}
    break;

  case 1266:
#line 4594 "sql_yacc.yy"
    {}
    break;

  case 1267:
#line 4595 "sql_yacc.yy"
    {}
    break;

  case 1268:
#line 4596 "sql_yacc.yy"
    {}
    break;

  case 1269:
#line 4597 "sql_yacc.yy"
    {}
    break;

  case 1270:
#line 4598 "sql_yacc.yy"
    {}
    break;

  case 1271:
#line 4599 "sql_yacc.yy"
    {}
    break;

  case 1272:
#line 4600 "sql_yacc.yy"
    {}
    break;

  case 1273:
#line 4601 "sql_yacc.yy"
    {}
    break;

  case 1274:
#line 4602 "sql_yacc.yy"
    {}
    break;

  case 1275:
#line 4603 "sql_yacc.yy"
    {}
    break;

  case 1276:
#line 4604 "sql_yacc.yy"
    {}
    break;

  case 1277:
#line 4605 "sql_yacc.yy"
    {}
    break;

  case 1278:
#line 4606 "sql_yacc.yy"
    {}
    break;

  case 1279:
#line 4607 "sql_yacc.yy"
    {}
    break;

  case 1280:
#line 4608 "sql_yacc.yy"
    {}
    break;

  case 1281:
#line 4609 "sql_yacc.yy"
    {}
    break;

  case 1282:
#line 4610 "sql_yacc.yy"
    {}
    break;

  case 1283:
#line 4611 "sql_yacc.yy"
    {}
    break;

  case 1284:
#line 4612 "sql_yacc.yy"
    {}
    break;

  case 1285:
#line 4613 "sql_yacc.yy"
    {}
    break;

  case 1286:
#line 4614 "sql_yacc.yy"
    {}
    break;

  case 1287:
#line 4615 "sql_yacc.yy"
    {}
    break;

  case 1288:
#line 4616 "sql_yacc.yy"
    {}
    break;

  case 1289:
#line 4617 "sql_yacc.yy"
    {}
    break;

  case 1290:
#line 4618 "sql_yacc.yy"
    {}
    break;

  case 1291:
#line 4619 "sql_yacc.yy"
    {}
    break;

  case 1292:
#line 4620 "sql_yacc.yy"
    {}
    break;

  case 1293:
#line 4621 "sql_yacc.yy"
    {}
    break;

  case 1294:
#line 4622 "sql_yacc.yy"
    {}
    break;

  case 1295:
#line 4623 "sql_yacc.yy"
    {}
    break;

  case 1296:
#line 4624 "sql_yacc.yy"
    {}
    break;

  case 1297:
#line 4625 "sql_yacc.yy"
    {}
    break;

  case 1298:
#line 4626 "sql_yacc.yy"
    {}
    break;

  case 1299:
#line 4627 "sql_yacc.yy"
    {}
    break;

  case 1300:
#line 4628 "sql_yacc.yy"
    {}
    break;

  case 1301:
#line 4629 "sql_yacc.yy"
    {}
    break;

  case 1302:
#line 4630 "sql_yacc.yy"
    {}
    break;

  case 1303:
#line 4631 "sql_yacc.yy"
    {}
    break;

  case 1304:
#line 4632 "sql_yacc.yy"
    {}
    break;

  case 1305:
#line 4633 "sql_yacc.yy"
    {}
    break;

  case 1306:
#line 4634 "sql_yacc.yy"
    {}
    break;

  case 1307:
#line 4635 "sql_yacc.yy"
    {}
    break;

  case 1308:
#line 4636 "sql_yacc.yy"
    {}
    break;

  case 1309:
#line 4637 "sql_yacc.yy"
    {}
    break;

  case 1310:
#line 4638 "sql_yacc.yy"
    {}
    break;

  case 1311:
#line 4639 "sql_yacc.yy"
    {}
    break;

  case 1312:
#line 4640 "sql_yacc.yy"
    {}
    break;

  case 1313:
#line 4641 "sql_yacc.yy"
    {}
    break;

  case 1314:
#line 4642 "sql_yacc.yy"
    {}
    break;

  case 1315:
#line 4643 "sql_yacc.yy"
    {}
    break;

  case 1316:
#line 4644 "sql_yacc.yy"
    {}
    break;

  case 1317:
#line 4645 "sql_yacc.yy"
    {}
    break;

  case 1318:
#line 4646 "sql_yacc.yy"
    {}
    break;

  case 1319:
#line 4647 "sql_yacc.yy"
    {}
    break;

  case 1320:
#line 4648 "sql_yacc.yy"
    {}
    break;

  case 1321:
#line 4649 "sql_yacc.yy"
    {}
    break;

  case 1322:
#line 4650 "sql_yacc.yy"
    {}
    break;

  case 1323:
#line 4651 "sql_yacc.yy"
    {}
    break;

  case 1324:
#line 4652 "sql_yacc.yy"
    {}
    break;

  case 1325:
#line 4653 "sql_yacc.yy"
    {}
    break;

  case 1326:
#line 4654 "sql_yacc.yy"
    {}
    break;

  case 1327:
#line 4655 "sql_yacc.yy"
    {}
    break;

  case 1328:
#line 4656 "sql_yacc.yy"
    {}
    break;

  case 1329:
#line 4657 "sql_yacc.yy"
    {}
    break;

  case 1330:
#line 4658 "sql_yacc.yy"
    {}
    break;

  case 1331:
#line 4659 "sql_yacc.yy"
    {}
    break;

  case 1332:
#line 4660 "sql_yacc.yy"
    {}
    break;

  case 1333:
#line 4661 "sql_yacc.yy"
    {}
    break;

  case 1334:
#line 4662 "sql_yacc.yy"
    {}
    break;

  case 1335:
#line 4663 "sql_yacc.yy"
    {}
    break;

  case 1336:
#line 4664 "sql_yacc.yy"
    {}
    break;

  case 1337:
#line 4665 "sql_yacc.yy"
    {}
    break;

  case 1338:
#line 4666 "sql_yacc.yy"
    {}
    break;

  case 1339:
#line 4667 "sql_yacc.yy"
    {}
    break;

  case 1340:
#line 4668 "sql_yacc.yy"
    {}
    break;

  case 1341:
#line 4669 "sql_yacc.yy"
    {}
    break;

  case 1342:
#line 4670 "sql_yacc.yy"
    {}
    break;

  case 1343:
#line 4671 "sql_yacc.yy"
    {}
    break;

  case 1344:
#line 4672 "sql_yacc.yy"
    {}
    break;

  case 1345:
#line 4673 "sql_yacc.yy"
    {}
    break;

  case 1346:
#line 4674 "sql_yacc.yy"
    {}
    break;

  case 1347:
#line 4675 "sql_yacc.yy"
    {}
    break;

  case 1348:
#line 4676 "sql_yacc.yy"
    {}
    break;

  case 1349:
#line 4677 "sql_yacc.yy"
    {}
    break;

  case 1350:
#line 4678 "sql_yacc.yy"
    {}
    break;

  case 1351:
#line 4679 "sql_yacc.yy"
    {}
    break;

  case 1352:
#line 4680 "sql_yacc.yy"
    {}
    break;

  case 1353:
#line 4681 "sql_yacc.yy"
    {}
    break;

  case 1354:
#line 4682 "sql_yacc.yy"
    {}
    break;

  case 1355:
#line 4683 "sql_yacc.yy"
    {}
    break;

  case 1356:
#line 4684 "sql_yacc.yy"
    {}
    break;

  case 1357:
#line 4685 "sql_yacc.yy"
    {}
    break;

  case 1358:
#line 4686 "sql_yacc.yy"
    {}
    break;

  case 1359:
#line 4687 "sql_yacc.yy"
    {}
    break;

  case 1360:
#line 4688 "sql_yacc.yy"
    {}
    break;

  case 1361:
#line 4689 "sql_yacc.yy"
    {}
    break;

  case 1362:
#line 4690 "sql_yacc.yy"
    {}
    break;

  case 1363:
#line 4691 "sql_yacc.yy"
    {}
    break;

  case 1364:
#line 4692 "sql_yacc.yy"
    {}
    break;

  case 1365:
#line 4693 "sql_yacc.yy"
    {}
    break;

  case 1366:
#line 4694 "sql_yacc.yy"
    {}
    break;

  case 1367:
#line 4695 "sql_yacc.yy"
    {}
    break;

  case 1368:
#line 4696 "sql_yacc.yy"
    {}
    break;

  case 1369:
#line 4697 "sql_yacc.yy"
    {}
    break;

  case 1370:
#line 4698 "sql_yacc.yy"
    {}
    break;

  case 1371:
#line 4699 "sql_yacc.yy"
    {}
    break;

  case 1372:
#line 4700 "sql_yacc.yy"
    {}
    break;

  case 1373:
#line 4701 "sql_yacc.yy"
    {}
    break;

  case 1374:
#line 4702 "sql_yacc.yy"
    {}
    break;

  case 1375:
#line 4703 "sql_yacc.yy"
    {}
    break;

  case 1376:
#line 4704 "sql_yacc.yy"
    {}
    break;

  case 1377:
#line 4705 "sql_yacc.yy"
    {}
    break;

  case 1378:
#line 4706 "sql_yacc.yy"
    {}
    break;

  case 1379:
#line 4707 "sql_yacc.yy"
    {}
    break;

  case 1380:
#line 4708 "sql_yacc.yy"
    {}
    break;

  case 1381:
#line 4709 "sql_yacc.yy"
    {}
    break;

  case 1382:
#line 4710 "sql_yacc.yy"
    {}
    break;

  case 1383:
#line 4711 "sql_yacc.yy"
    {}
    break;

  case 1384:
#line 4712 "sql_yacc.yy"
    {}
    break;

  case 1385:
#line 4713 "sql_yacc.yy"
    {}
    break;

  case 1386:
#line 4714 "sql_yacc.yy"
    {}
    break;

  case 1387:
#line 4715 "sql_yacc.yy"
    {}
    break;

  case 1388:
#line 4716 "sql_yacc.yy"
    {}
    break;

  case 1389:
#line 4717 "sql_yacc.yy"
    {}
    break;

  case 1390:
#line 4718 "sql_yacc.yy"
    {}
    break;

  case 1391:
#line 4719 "sql_yacc.yy"
    {}
    break;

  case 1392:
#line 4720 "sql_yacc.yy"
    {}
    break;

  case 1393:
#line 4721 "sql_yacc.yy"
    {}
    break;

  case 1394:
#line 4722 "sql_yacc.yy"
    {}
    break;

  case 1395:
#line 4723 "sql_yacc.yy"
    {}
    break;

  case 1396:
#line 4724 "sql_yacc.yy"
    {}
    break;

  case 1397:
#line 4725 "sql_yacc.yy"
    {}
    break;

  case 1398:
#line 4726 "sql_yacc.yy"
    {}
    break;

  case 1399:
#line 4727 "sql_yacc.yy"
    {}
    break;

  case 1400:
#line 4728 "sql_yacc.yy"
    {}
    break;

  case 1401:
#line 4729 "sql_yacc.yy"
    {}
    break;

  case 1402:
#line 4730 "sql_yacc.yy"
    {}
    break;

  case 1403:
#line 4731 "sql_yacc.yy"
    {}
    break;

  case 1404:
#line 4732 "sql_yacc.yy"
    {}
    break;

  case 1405:
#line 4733 "sql_yacc.yy"
    {}
    break;

  case 1406:
#line 4734 "sql_yacc.yy"
    {}
    break;

  case 1407:
#line 4735 "sql_yacc.yy"
    {}
    break;

  case 1408:
#line 4736 "sql_yacc.yy"
    {}
    break;

  case 1409:
#line 4737 "sql_yacc.yy"
    {}
    break;

  case 1410:
#line 4738 "sql_yacc.yy"
    {}
    break;

  case 1411:
#line 4739 "sql_yacc.yy"
    {}
    break;

  case 1412:
#line 4740 "sql_yacc.yy"
    {}
    break;

  case 1413:
#line 4741 "sql_yacc.yy"
    {}
    break;

  case 1414:
#line 4742 "sql_yacc.yy"
    {}
    break;

  case 1415:
#line 4743 "sql_yacc.yy"
    {}
    break;

  case 1416:
#line 4744 "sql_yacc.yy"
    {}
    break;

  case 1417:
#line 4745 "sql_yacc.yy"
    {}
    break;

  case 1418:
#line 4746 "sql_yacc.yy"
    {}
    break;

  case 1419:
#line 4747 "sql_yacc.yy"
    {}
    break;

  case 1420:
#line 4748 "sql_yacc.yy"
    {}
    break;

  case 1421:
#line 4749 "sql_yacc.yy"
    {}
    break;

  case 1422:
#line 4750 "sql_yacc.yy"
    {}
    break;

  case 1423:
#line 4751 "sql_yacc.yy"
    {}
    break;

  case 1424:
#line 4752 "sql_yacc.yy"
    {}
    break;

  case 1425:
#line 4753 "sql_yacc.yy"
    {}
    break;

  case 1426:
#line 4754 "sql_yacc.yy"
    {}
    break;

  case 1427:
#line 4755 "sql_yacc.yy"
    {}
    break;

  case 1428:
#line 4756 "sql_yacc.yy"
    {}
    break;

  case 1429:
#line 4757 "sql_yacc.yy"
    {}
    break;

  case 1430:
#line 4758 "sql_yacc.yy"
    {}
    break;

  case 1431:
#line 4759 "sql_yacc.yy"
    {}
    break;

  case 1432:
#line 4760 "sql_yacc.yy"
    {}
    break;

  case 1433:
#line 4761 "sql_yacc.yy"
    {}
    break;

  case 1434:
#line 4762 "sql_yacc.yy"
    {}
    break;

  case 1435:
#line 4763 "sql_yacc.yy"
    {}
    break;

  case 1436:
#line 4764 "sql_yacc.yy"
    {}
    break;

  case 1437:
#line 4765 "sql_yacc.yy"
    {}
    break;

  case 1438:
#line 4766 "sql_yacc.yy"
    {}
    break;

  case 1439:
#line 4767 "sql_yacc.yy"
    {}
    break;

  case 1440:
#line 4768 "sql_yacc.yy"
    {}
    break;

  case 1441:
#line 4769 "sql_yacc.yy"
    {}
    break;

  case 1442:
#line 4776 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command= SQLCOM_SET_OPTION;
	  lex->option_type=OPT_DEFAULT;
	  lex->var_list.empty();
	}
    break;

  case 1443:
#line 4783 "sql_yacc.yy"
    {}
    break;

  case 1444:
#line 4787 "sql_yacc.yy"
    {}
    break;

  case 1445:
#line 4788 "sql_yacc.yy"
    {}
    break;

  case 1448:
#line 4795 "sql_yacc.yy"
    {}
    break;

  case 1449:
#line 4796 "sql_yacc.yy"
    { Lex->option_type= OPT_GLOBAL; }
    break;

  case 1450:
#line 4797 "sql_yacc.yy"
    { Lex->option_type= OPT_SESSION; }
    break;

  case 1451:
#line 4798 "sql_yacc.yy"
    { Lex->option_type= OPT_SESSION; }
    break;

  case 1452:
#line 4802 "sql_yacc.yy"
    { yyval.num=OPT_SESSION; }
    break;

  case 1453:
#line 4803 "sql_yacc.yy"
    { yyval.num=OPT_GLOBAL; }
    break;

  case 1454:
#line 4804 "sql_yacc.yy"
    { yyval.num=OPT_SESSION; }
    break;

  case 1455:
#line 4805 "sql_yacc.yy"
    { yyval.num=OPT_SESSION; }
    break;

  case 1456:
#line 4809 "sql_yacc.yy"
    { yyval.num=OPT_DEFAULT; }
    break;

  case 1457:
#line 4810 "sql_yacc.yy"
    { yyval.num=OPT_GLOBAL; }
    break;

  case 1458:
#line 4811 "sql_yacc.yy"
    { yyval.num=OPT_SESSION; }
    break;

  case 1459:
#line 4812 "sql_yacc.yy"
    { yyval.num=OPT_SESSION; }
    break;

  case 1460:
#line 4817 "sql_yacc.yy"
    {
	  Lex->var_list.push_back(new set_var_user(new Item_func_set_user_var(yyvsp[-2].lex_str,yyvsp[0].item)));
	}
    break;

  case 1461:
#line 4821 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->var_list.push_back(new set_var(lex->option_type, yyvsp[-2].variable.var,
						&yyvsp[-2].variable.base_name, yyvsp[0].item));
	  }
    break;

  case 1462:
#line 4827 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->var_list.push_back(new set_var((enum_var_type) yyvsp[-3].num, yyvsp[-2].variable.var,
						&yyvsp[-2].variable.base_name, yyvsp[0].item));
	  }
    break;

  case 1463:
#line 4833 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    LEX_STRING tmp;
	    tmp.str=0;
	    tmp.length=0;
	    lex->var_list.push_back(new set_var(lex->option_type,
						find_sys_var("tx_isolation"),
						&tmp,
						new Item_int((int32) yyvsp[0].tx_isolation)));
	  }
    break;

  case 1464:
#line 4844 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  LEX *lex= Lex;
	  yyvsp[0].charset= yyvsp[0].charset ? yyvsp[0].charset: global_system_variables.character_set_client;
	  lex->var_list.push_back(new set_var_collation_client(yyvsp[0].charset,thd->variables.collation_database,yyvsp[0].charset));
	}
    break;

  case 1465:
#line 4851 "sql_yacc.yy"
    {
	  THD *thd= YYTHD;
	  LEX *lex= Lex;
	  yyvsp[-1].charset= yyvsp[-1].charset ? yyvsp[-1].charset : global_system_variables.character_set_client;
	  yyvsp[0].charset= yyvsp[0].charset ? yyvsp[0].charset : yyvsp[-1].charset;
	  if (!my_charset_same(yyvsp[-1].charset,yyvsp[0].charset))
	  {
	    net_printf(thd,ER_COLLATION_CHARSET_MISMATCH,yyvsp[0].charset->name,yyvsp[-1].charset->csname);
	    YYABORT;
	  }
	  lex->var_list.push_back(new set_var_collation_client(yyvsp[0].charset,yyvsp[0].charset,yyvsp[0].charset));
	}
    break;

  case 1466:
#line 4864 "sql_yacc.yy"
    {
	    THD *thd=YYTHD;
	    LEX_USER *user;
	    if (!(user=(LEX_USER*) thd->alloc(sizeof(LEX_USER))))
	      YYABORT;
	    user->host.str=0;
	    user->user.str=thd->priv_user;
	    thd->lex.var_list.push_back(new set_var_password(user, yyvsp[0].simple_string));
	  }
    break;

  case 1467:
#line 4874 "sql_yacc.yy"
    {
	    Lex->var_list.push_back(new set_var_password(yyvsp[-2].lex_user,yyvsp[0].simple_string));
	  }
    break;

  case 1468:
#line 4881 "sql_yacc.yy"
    {
	  sys_var *tmp=find_sys_var(yyvsp[0].lex_str.str, yyvsp[0].lex_str.length);
	  if (!tmp)
	    YYABORT;
	  yyval.variable.var= tmp;
	  yyval.variable.base_name.str=0;
	  yyval.variable.base_name.length=0;
	}
    break;

  case 1469:
#line 4890 "sql_yacc.yy"
    {
	    sys_var *tmp=find_sys_var(yyvsp[0].lex_str.str, yyvsp[0].lex_str.length);
	    if (!tmp)
	      YYABORT;
	    if (!tmp->is_struct())
	      net_printf(YYTHD, ER_VARIABLE_IS_NOT_STRUCT, yyvsp[0].lex_str.str);
	    yyval.variable.var= tmp;
	    yyval.variable.base_name= yyvsp[-2].lex_str;
	  }
    break;

  case 1470:
#line 4900 "sql_yacc.yy"
    {
	    sys_var *tmp=find_sys_var(yyvsp[0].lex_str.str, yyvsp[0].lex_str.length);
	    if (!tmp)
	      YYABORT;
	    if (!tmp->is_struct())
	      net_printf(YYTHD, ER_VARIABLE_IS_NOT_STRUCT, yyvsp[0].lex_str.str);
	    yyval.variable.var= tmp;
	    yyval.variable.base_name.str=    (char*) "default";
	    yyval.variable.base_name.length= 7;
	  }
    break;

  case 1471:
#line 4913 "sql_yacc.yy"
    { yyval.tx_isolation= ISO_READ_UNCOMMITTED; }
    break;

  case 1472:
#line 4914 "sql_yacc.yy"
    { yyval.tx_isolation= ISO_READ_COMMITTED; }
    break;

  case 1473:
#line 4915 "sql_yacc.yy"
    { yyval.tx_isolation= ISO_REPEATABLE_READ; }
    break;

  case 1474:
#line 4916 "sql_yacc.yy"
    { yyval.tx_isolation= ISO_SERIALIZABLE; }
    break;

  case 1475:
#line 4920 "sql_yacc.yy"
    { yyval.simple_string=yyvsp[0].lex_str.str;}
    break;

  case 1476:
#line 4922 "sql_yacc.yy"
    {
	    yyval.simple_string= yyvsp[-1].lex_str.length ? YYTHD->variables.old_passwords ?
	        Item_func_old_password::alloc(YYTHD, yyvsp[-1].lex_str.str) :
	        Item_func_password::alloc(YYTHD, yyvsp[-1].lex_str.str) :
	      yyvsp[-1].lex_str.str;
	  }
    break;

  case 1477:
#line 4929 "sql_yacc.yy"
    {
	    yyval.simple_string= yyvsp[-1].lex_str.length ? Item_func_old_password::alloc(YYTHD, yyvsp[-1].lex_str.str) :
	      yyvsp[-1].lex_str.str;
	  }
    break;

  case 1478:
#line 4937 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 1479:
#line 4938 "sql_yacc.yy"
    { yyval.item=0; }
    break;

  case 1480:
#line 4939 "sql_yacc.yy"
    { yyval.item=new Item_string("ON",  2, system_charset_info); }
    break;

  case 1481:
#line 4940 "sql_yacc.yy"
    { yyval.item=new Item_string("ALL", 3, system_charset_info); }
    break;

  case 1482:
#line 4941 "sql_yacc.yy"
    { yyval.item=new Item_string("binary", 6, system_charset_info); }
    break;

  case 1483:
#line 4949 "sql_yacc.yy"
    {
	  Lex->sql_command=SQLCOM_LOCK_TABLES;
	}
    break;

  case 1484:
#line 4953 "sql_yacc.yy"
    {}
    break;

  case 1489:
#line 4966 "sql_yacc.yy"
    {
	  if (!Select->add_table_to_list(YYTHD, yyvsp[-2].table, yyvsp[-1].lex_str_ptr, 0, (thr_lock_type) yyvsp[0].num))
	   YYABORT;
	}
    break;

  case 1490:
#line 4973 "sql_yacc.yy"
    { yyval.num=TL_READ_NO_INSERT; }
    break;

  case 1491:
#line 4974 "sql_yacc.yy"
    { yyval.num=YYTHD->update_lock_default; }
    break;

  case 1492:
#line 4975 "sql_yacc.yy"
    { yyval.num=TL_WRITE_LOW_PRIORITY; }
    break;

  case 1493:
#line 4976 "sql_yacc.yy"
    { yyval.num= TL_READ; }
    break;

  case 1494:
#line 4980 "sql_yacc.yy"
    { Lex->sql_command=SQLCOM_UNLOCK_TABLES; }
    break;

  case 1495:
#line 4990 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  lex->sql_command = SQLCOM_HA_OPEN;
	  if (!lex->current_select->add_table_to_list(lex->thd, yyvsp[-2].table, yyvsp[0].lex_str_ptr, 0))
	    YYABORT;
	}
    break;

  case 1496:
#line 4997 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  lex->sql_command = SQLCOM_HA_CLOSE;
	  if (!lex->current_select->add_table_to_list(lex->thd, yyvsp[-1].table, 0, 0))
	    YYABORT;
	}
    break;

  case 1497:
#line 5004 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_HA_READ;
	  lex->ha_rkey_mode= HA_READ_KEY_EXACT;	/* Avoid purify warnings */
	  lex->current_select->select_limit= 1;
	  lex->current_select->offset_limit= 0L;
	  if (!lex->current_select->add_table_to_list(lex->thd, yyvsp[-1].table, 0, 0))
	    YYABORT;
        }
    break;

  case 1498:
#line 5013 "sql_yacc.yy"
    {}
    break;

  case 1499:
#line 5017 "sql_yacc.yy"
    { Lex->backup_dir= 0; }
    break;

  case 1500:
#line 5018 "sql_yacc.yy"
    { Lex->backup_dir= yyvsp[-1].lex_str.str; }
    break;

  case 1501:
#line 5022 "sql_yacc.yy"
    { Lex->ha_read_mode = RFIRST; }
    break;

  case 1502:
#line 5023 "sql_yacc.yy"
    { Lex->ha_read_mode = RNEXT;  }
    break;

  case 1503:
#line 5027 "sql_yacc.yy"
    { Lex->ha_read_mode = RFIRST; }
    break;

  case 1504:
#line 5028 "sql_yacc.yy"
    { Lex->ha_read_mode = RNEXT;  }
    break;

  case 1505:
#line 5029 "sql_yacc.yy"
    { Lex->ha_read_mode = RPREV;  }
    break;

  case 1506:
#line 5030 "sql_yacc.yy"
    { Lex->ha_read_mode = RLAST;  }
    break;

  case 1507:
#line 5032 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->ha_read_mode = RKEY;
	  lex->ha_rkey_mode=yyvsp[0].ha_rkey_mode;
	  if (!(lex->insert_list = new List_item))
	    YYABORT;
	}
    break;

  case 1508:
#line 5038 "sql_yacc.yy"
    { }
    break;

  case 1509:
#line 5042 "sql_yacc.yy"
    { yyval.ha_rkey_mode=HA_READ_KEY_EXACT;   }
    break;

  case 1510:
#line 5043 "sql_yacc.yy"
    { yyval.ha_rkey_mode=HA_READ_KEY_OR_NEXT; }
    break;

  case 1511:
#line 5044 "sql_yacc.yy"
    { yyval.ha_rkey_mode=HA_READ_KEY_OR_PREV; }
    break;

  case 1512:
#line 5045 "sql_yacc.yy"
    { yyval.ha_rkey_mode=HA_READ_AFTER_KEY;   }
    break;

  case 1513:
#line 5046 "sql_yacc.yy"
    { yyval.ha_rkey_mode=HA_READ_BEFORE_KEY;  }
    break;

  case 1514:
#line 5053 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_REVOKE;
	  lex->users_list.empty();
	  lex->columns.empty();
	  lex->grant= lex->grant_tot_col=0;
	  lex->select_lex.db=0;
	  lex->ssl_type= SSL_TYPE_NOT_SPECIFIED;
	  lex->ssl_cipher= lex->x509_subject= lex->x509_issuer= 0;
	  bzero((char*) &lex->mqh, sizeof(lex->mqh));
	}
    break;

  case 1515:
#line 5065 "sql_yacc.yy"
    {}
    break;

  case 1516:
#line 5070 "sql_yacc.yy"
    {}
    break;

  case 1517:
#line 5073 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_REVOKE_ALL;
	}
    break;

  case 1518:
#line 5080 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->users_list.empty();
	  lex->columns.empty();
	  lex->sql_command = SQLCOM_GRANT;
	  lex->grant= lex->grant_tot_col= 0;
	  lex->select_lex.db= 0;
	  lex->ssl_type= SSL_TYPE_NOT_SPECIFIED;
	  lex->ssl_cipher= lex->x509_subject= lex->x509_issuer= 0;
	  bzero((char *)&(lex->mqh),sizeof(lex->mqh));
	}
    break;

  case 1519:
#line 5093 "sql_yacc.yy"
    {}
    break;

  case 1520:
#line 5097 "sql_yacc.yy"
    {}
    break;

  case 1521:
#line 5098 "sql_yacc.yy"
    { Lex->grant = GLOBAL_ACLS;}
    break;

  case 1522:
#line 5099 "sql_yacc.yy"
    { Lex->grant = GLOBAL_ACLS;}
    break;

  case 1525:
#line 5107 "sql_yacc.yy"
    { Lex->which_columns = SELECT_ACL;}
    break;

  case 1526:
#line 5107 "sql_yacc.yy"
    {}
    break;

  case 1527:
#line 5108 "sql_yacc.yy"
    { Lex->which_columns = INSERT_ACL;}
    break;

  case 1528:
#line 5108 "sql_yacc.yy"
    {}
    break;

  case 1529:
#line 5109 "sql_yacc.yy"
    { Lex->which_columns = UPDATE_ACL; }
    break;

  case 1530:
#line 5109 "sql_yacc.yy"
    {}
    break;

  case 1531:
#line 5110 "sql_yacc.yy"
    { Lex->which_columns = REFERENCES_ACL;}
    break;

  case 1532:
#line 5110 "sql_yacc.yy"
    {}
    break;

  case 1533:
#line 5111 "sql_yacc.yy"
    { Lex->grant |= DELETE_ACL;}
    break;

  case 1534:
#line 5112 "sql_yacc.yy"
    {}
    break;

  case 1535:
#line 5113 "sql_yacc.yy"
    { Lex->grant |= INDEX_ACL;}
    break;

  case 1536:
#line 5114 "sql_yacc.yy"
    { Lex->grant |= ALTER_ACL;}
    break;

  case 1537:
#line 5115 "sql_yacc.yy"
    { Lex->grant |= CREATE_ACL;}
    break;

  case 1538:
#line 5116 "sql_yacc.yy"
    { Lex->grant |= DROP_ACL;}
    break;

  case 1539:
#line 5117 "sql_yacc.yy"
    { Lex->grant |= EXECUTE_ACL;}
    break;

  case 1540:
#line 5118 "sql_yacc.yy"
    { Lex->grant |= RELOAD_ACL;}
    break;

  case 1541:
#line 5119 "sql_yacc.yy"
    { Lex->grant |= SHUTDOWN_ACL;}
    break;

  case 1542:
#line 5120 "sql_yacc.yy"
    { Lex->grant |= PROCESS_ACL;}
    break;

  case 1543:
#line 5121 "sql_yacc.yy"
    { Lex->grant |= FILE_ACL;}
    break;

  case 1544:
#line 5122 "sql_yacc.yy"
    { Lex->grant |= GRANT_ACL;}
    break;

  case 1545:
#line 5123 "sql_yacc.yy"
    { Lex->grant |= SHOW_DB_ACL;}
    break;

  case 1546:
#line 5124 "sql_yacc.yy"
    { Lex->grant |= SUPER_ACL;}
    break;

  case 1547:
#line 5125 "sql_yacc.yy"
    { Lex->grant |= CREATE_TMP_ACL;}
    break;

  case 1548:
#line 5126 "sql_yacc.yy"
    { Lex->grant |= LOCK_TABLES_ACL; }
    break;

  case 1549:
#line 5127 "sql_yacc.yy"
    { Lex->grant |= REPL_SLAVE_ACL;}
    break;

  case 1550:
#line 5128 "sql_yacc.yy"
    { Lex->grant |= REPL_CLIENT_ACL;}
    break;

  case 1551:
#line 5133 "sql_yacc.yy"
    {}
    break;

  case 1552:
#line 5134 "sql_yacc.yy"
    {}
    break;

  case 1555:
#line 5144 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->x509_subject)
	  {
	    net_printf(lex->thd,ER_DUP_ARGUMENT, "SUBJECT");
	    YYABORT;
	  }
	  lex->x509_subject=yyvsp[0].lex_str.str;
	}
    break;

  case 1556:
#line 5154 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->x509_issuer)
	  {
	    net_printf(lex->thd,ER_DUP_ARGUMENT, "ISSUER");
	    YYABORT;
	  }
	  lex->x509_issuer=yyvsp[0].lex_str.str;
	}
    break;

  case 1557:
#line 5164 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->ssl_cipher)
	  {
	    net_printf(lex->thd,ER_DUP_ARGUMENT, "CIPHER");
	    YYABORT;
	  }
	  lex->ssl_cipher=yyvsp[0].lex_str.str;
	}
    break;

  case 1558:
#line 5177 "sql_yacc.yy"
    {
	    LEX *lex= Lex;
	    lex->current_select->db= lex->thd->db;
	    if (lex->grant == GLOBAL_ACLS)
	      lex->grant = DB_ACLS & ~GRANT_ACL;
	    else if (lex->columns.elements)
	    {
	      send_error(lex->thd,ER_ILLEGAL_GRANT_FOR_TABLE);
	      YYABORT;
	    }
	  }
    break;

  case 1559:
#line 5189 "sql_yacc.yy"
    {
	    LEX *lex= Lex;
	    lex->current_select->db = yyvsp[-2].lex_str.str;
	    if (lex->grant == GLOBAL_ACLS)
	      lex->grant = DB_ACLS & ~GRANT_ACL;
	    else if (lex->columns.elements)
	    {
	      send_error(lex->thd,ER_ILLEGAL_GRANT_FOR_TABLE);
	      YYABORT;
	    }
	  }
    break;

  case 1560:
#line 5201 "sql_yacc.yy"
    {
	    LEX *lex= Lex;
	    lex->current_select->db = NULL;
	    if (lex->grant == GLOBAL_ACLS)
	      lex->grant= GLOBAL_ACLS & ~GRANT_ACL;
	    else if (lex->columns.elements)
	    {
	      send_error(lex->thd,ER_ILLEGAL_GRANT_FOR_TABLE);
	      YYABORT;
	    }
	  }
    break;

  case 1561:
#line 5213 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    if (!lex->current_select->add_table_to_list(lex->thd, yyvsp[0].table,NULL,0))
	      YYABORT;
	    if (lex->grant == GLOBAL_ACLS)
	      lex->grant =  TABLE_ACLS & ~GRANT_ACL;
	  }
    break;

  case 1562:
#line 5224 "sql_yacc.yy"
    { if (Lex->users_list.push_back(yyvsp[0].lex_user)) YYABORT;}
    break;

  case 1563:
#line 5226 "sql_yacc.yy"
    {
	    if (Lex->users_list.push_back(yyvsp[0].lex_user))
	      YYABORT;
	  }
    break;

  case 1564:
#line 5235 "sql_yacc.yy"
    {
	   yyval.lex_user=yyvsp[-3].lex_user; yyvsp[-3].lex_user->password=yyvsp[0].lex_str;
	   if (yyvsp[0].lex_str.length)
	   {
             if (YYTHD->variables.old_passwords)
             {
               char *buff= 
                 (char *) YYTHD->alloc(SCRAMBLED_PASSWORD_CHAR_LENGTH_323+1);
               if (buff)
                 make_scrambled_password_323(buff, yyvsp[0].lex_str.str);
               yyvsp[-3].lex_user->password.str= buff;
               yyvsp[-3].lex_user->password.length= SCRAMBLED_PASSWORD_CHAR_LENGTH_323;
             }
             else
             {
               char *buff= 
                 (char *) YYTHD->alloc(SCRAMBLED_PASSWORD_CHAR_LENGTH+1);
               if (buff)
                 make_scrambled_password(buff, yyvsp[0].lex_str.str);
               yyvsp[-3].lex_user->password.str= buff;
               yyvsp[-3].lex_user->password.length= SCRAMBLED_PASSWORD_CHAR_LENGTH;
             }
	  }
	}
    break;

  case 1565:
#line 5260 "sql_yacc.yy"
    { yyval.lex_user=yyvsp[-4].lex_user; yyvsp[-4].lex_user->password=yyvsp[0].lex_str ; }
    break;

  case 1566:
#line 5262 "sql_yacc.yy"
    { yyval.lex_user=yyvsp[0].lex_user; yyvsp[0].lex_user->password.str=NullS; }
    break;

  case 1567:
#line 5268 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->grant |= lex->which_columns;
	}
    break;

  case 1571:
#line 5280 "sql_yacc.yy"
    {
	  String *new_str = new String((const char*) yyvsp[0].lex_str.str,yyvsp[0].lex_str.length,system_charset_info);
	  List_iterator <LEX_COLUMN> iter(Lex->columns);
	  class LEX_COLUMN *point;
	  LEX *lex=Lex;
	  while ((point=iter++))
	  {
	    if (!my_strcasecmp(system_charset_info,
                               point->column.ptr(), new_str->ptr()))
		break;
	  }
	  lex->grant_tot_col|= lex->which_columns;
	  if (point)
	    point->rights |= lex->which_columns;
	  else
	    lex->columns.push_back(new LEX_COLUMN (*new_str,lex->which_columns));
	}
    break;

  case 1573:
#line 5302 "sql_yacc.yy"
    {
            Lex->ssl_type=SSL_TYPE_SPECIFIED;
          }
    break;

  case 1574:
#line 5306 "sql_yacc.yy"
    {
            Lex->ssl_type=SSL_TYPE_ANY;
          }
    break;

  case 1575:
#line 5310 "sql_yacc.yy"
    {
            Lex->ssl_type=SSL_TYPE_X509;
          }
    break;

  case 1576:
#line 5314 "sql_yacc.yy"
    {
	    Lex->ssl_type=SSL_TYPE_NONE;
	  }
    break;

  case 1577:
#line 5320 "sql_yacc.yy"
    {}
    break;

  case 1579:
#line 5324 "sql_yacc.yy"
    {}
    break;

  case 1580:
#line 5325 "sql_yacc.yy"
    {}
    break;

  case 1581:
#line 5329 "sql_yacc.yy"
    { Lex->grant |= GRANT_ACL;}
    break;

  case 1582:
#line 5331 "sql_yacc.yy"
    {
	  Lex->mqh.questions=yyvsp[0].ulong_num;
	  Lex->mqh.bits |= 1;
	}
    break;

  case 1583:
#line 5336 "sql_yacc.yy"
    {
	  Lex->mqh.updates=yyvsp[0].ulong_num;
	  Lex->mqh.bits |= 2;
	}
    break;

  case 1584:
#line 5341 "sql_yacc.yy"
    {
	  Lex->mqh.connections=yyvsp[0].ulong_num;
	  Lex->mqh.bits |= 4;
	}
    break;

  case 1585:
#line 5348 "sql_yacc.yy"
    { Lex->sql_command = SQLCOM_BEGIN;}
    break;

  case 1586:
#line 5348 "sql_yacc.yy"
    {}
    break;

  case 1587:
#line 5352 "sql_yacc.yy"
    {}
    break;

  case 1588:
#line 5353 "sql_yacc.yy"
    {;}
    break;

  case 1589:
#line 5357 "sql_yacc.yy"
    { Lex->sql_command = SQLCOM_COMMIT;}
    break;

  case 1590:
#line 5361 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_ROLLBACK;
	}
    break;

  case 1591:
#line 5365 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_ROLLBACK_TO_SAVEPOINT;
	  Lex->savepoint_name = yyvsp[0].lex_str.str;
	}
    break;

  case 1592:
#line 5371 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_SAVEPOINT;
	  Lex->savepoint_name = yyvsp[0].lex_str.str;
	}
    break;

  case 1593:
#line 5382 "sql_yacc.yy"
    {}
    break;

  case 1595:
#line 5388 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->exchange)
	  {
	    /* Only the last SELECT can have  INTO...... */
	    net_printf(lex->thd, ER_WRONG_USAGE, "UNION", "INTO");
	    YYABORT;
	  }
	  if (lex->current_select->linkage == GLOBAL_OPTIONS_TYPE)
	  {
	    send_error(lex->thd, ER_SYNTAX_ERROR);
	    YYABORT;
	  }
	  if (mysql_new_select(lex, 0))
	    YYABORT;
          mysql_init_select(lex);
	  lex->current_select->linkage=UNION_TYPE;
	}
    break;

  case 1596:
#line 5406 "sql_yacc.yy"
    {}
    break;

  case 1597:
#line 5410 "sql_yacc.yy"
    {}
    break;

  case 1598:
#line 5411 "sql_yacc.yy"
    {}
    break;

  case 1599:
#line 5415 "sql_yacc.yy"
    {}
    break;

  case 1600:
#line 5417 "sql_yacc.yy"
    {
	    THD *thd= YYTHD;
	    LEX *lex= &thd->lex;
	    DBUG_ASSERT(lex->current_select->linkage != GLOBAL_OPTIONS_TYPE);
	    SELECT_LEX *sel= lex->current_select;
	    SELECT_LEX_UNIT *unit= sel->master_unit();
	    SELECT_LEX *fake= unit->fake_select_lex;
	    if (fake)
	    {
	      unit->global_parameters= fake;
	      fake->no_table_names_allowed= 1;
	      lex->current_select= fake;
	    }
	    thd->where= "global ORDER clause";
	  }
    break;

  case 1601:
#line 5433 "sql_yacc.yy"
    {
	    THD *thd= YYTHD;
	    thd->lex.current_select->no_table_names_allowed= 0;
	    thd->where= "";
          }
    break;

  case 1604:
#line 5446 "sql_yacc.yy"
    {}
    break;

  case 1605:
#line 5447 "sql_yacc.yy"
    {Select->master_unit()->union_option|= UNION_ALL;}
    break;

  case 1606:
#line 5452 "sql_yacc.yy"
    {
	  yyval.item= yyvsp[-1].item;
	}
    break;

  case 1607:
#line 5458 "sql_yacc.yy"
    {
	  yyval.item= new Item_singlerow_subselect(Lex->current_select->
					   master_unit()->first_select());
	}
    break;

  case 1608:
#line 5466 "sql_yacc.yy"
    {
	  yyval.item= yyvsp[-1].item;
	}
    break;

  case 1609:
#line 5472 "sql_yacc.yy"
    {
	  yyval.item= new Item_exists_subselect(Lex->current_select->master_unit()->
					first_select());
	}
    break;

  case 1610:
#line 5480 "sql_yacc.yy"
    {
    yyval.select_lex= yyvsp[-1].select_lex;
  }
    break;

  case 1611:
#line 5486 "sql_yacc.yy"
    {
    yyval.select_lex= Lex->current_select->master_unit()->first_select();
  }
    break;

  case 1612:
#line 5492 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (((int)lex->sql_command >= (int)SQLCOM_HA_OPEN &&
	       lex->sql_command <= (int)SQLCOM_HA_READ) ||
	       lex->sql_command == (int)SQLCOM_KILL)
	  {	
	    send_error(lex->thd, ER_SYNTAX_ERROR);
	    YYABORT;
	  }
	  if (mysql_new_select(Lex, 1))
	    YYABORT;
	}
    break;

  case 1613:
#line 5507 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->current_select = lex->current_select->return_after_parsing();
	}
    break;


    }

/* Line 1016 of /usr/share/bison/yacc.c.  */
#line 20873 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyssp > yyss)
	    {
	      YYDPRINTF ((stderr, "Error: popping "));
	      YYDSYMPRINT ((stderr,
			    yystos[*yyssp],
			    *yyvsp));
	      YYDPRINTF ((stderr, "\n"));
	      yydestruct (yystos[*yyssp], *yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yydestruct (yychar1, yylval);
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDPRINTF ((stderr, "Error: popping "));
      YYDSYMPRINT ((stderr,
		    yystos[*yyssp], *yyvsp));
      YYDPRINTF ((stderr, "\n"));

      yydestruct (yystos[yystate], *yyvsp);
      yyvsp--;
      yystate = *--yyssp;


#if YYDEBUG
      if (yydebug)
	{
	  short *yyssp1 = yyss - 1;
	  YYFPRINTF (stderr, "Error: state stack now");
	  while (yyssp1 != yyssp)
	    YYFPRINTF (stderr, " %d", *++yyssp1);
	  YYFPRINTF (stderr, "\n");
	}
#endif
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 727 "sql_yacc.yy"

