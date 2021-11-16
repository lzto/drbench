/* A Bison parser, made by GNU Bison 1.875c.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

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
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

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
     EQ = 264,
     EQUAL_SYM = 265,
     GE = 266,
     GT_SYM = 267,
     LE = 268,
     LT = 269,
     NE = 270,
     IS = 271,
     SHIFT_LEFT = 272,
     SHIFT_RIGHT = 273,
     SET_VAR = 274,
     ABORT_SYM = 275,
     ADD = 276,
     AFTER_SYM = 277,
     ALTER = 278,
     ANALYZE_SYM = 279,
     AVG_SYM = 280,
     BEGIN_SYM = 281,
     BINLOG_SYM = 282,
     CHANGE = 283,
     CLIENT_SYM = 284,
     COMMENT_SYM = 285,
     COMMIT_SYM = 286,
     COUNT_SYM = 287,
     CREATE = 288,
     CROSS = 289,
     CUBE_SYM = 290,
     DELETE_SYM = 291,
     DO_SYM = 292,
     DROP = 293,
     EVENTS_SYM = 294,
     EXECUTE_SYM = 295,
     FLUSH_SYM = 296,
     INSERT = 297,
     IO_THREAD = 298,
     KILL_SYM = 299,
     LOAD = 300,
     LOCKS_SYM = 301,
     LOCK_SYM = 302,
     MASTER_SYM = 303,
     MAX_SYM = 304,
     MIN_SYM = 305,
     NONE_SYM = 306,
     OPTIMIZE = 307,
     PURGE = 308,
     REPAIR = 309,
     REPLICATION = 310,
     RESET_SYM = 311,
     ROLLBACK_SYM = 312,
     ROLLUP_SYM = 313,
     SAVEPOINT_SYM = 314,
     SELECT_SYM = 315,
     SHOW = 316,
     SLAVE = 317,
     SQL_THREAD = 318,
     START_SYM = 319,
     STD_SYM = 320,
     STOP_SYM = 321,
     SUM_SYM = 322,
     SUPER_SYM = 323,
     TRUNCATE_SYM = 324,
     UNLOCK_SYM = 325,
     UPDATE_SYM = 326,
     ACTION = 327,
     AGGREGATE_SYM = 328,
     ALL = 329,
     AND = 330,
     AS = 331,
     ASC = 332,
     AUTO_INC = 333,
     AVG_ROW_LENGTH = 334,
     BACKUP_SYM = 335,
     BERKELEY_DB_SYM = 336,
     BINARY = 337,
     BIT_SYM = 338,
     BOOL_SYM = 339,
     BOOLEAN_SYM = 340,
     BOTH = 341,
     BY = 342,
     CACHE_SYM = 343,
     CASCADE = 344,
     CAST_SYM = 345,
     CHARSET = 346,
     CHECKSUM_SYM = 347,
     CHECK_SYM = 348,
     COMMITTED_SYM = 349,
     COLUMNS = 350,
     COLUMN_SYM = 351,
     CONCURRENT = 352,
     CONSTRAINT = 353,
     CONVERT_SYM = 354,
     DATABASES = 355,
     DATA_SYM = 356,
     DEFAULT = 357,
     DELAYED_SYM = 358,
     DELAY_KEY_WRITE_SYM = 359,
     DESC = 360,
     DESCRIBE = 361,
     DES_KEY_FILE = 362,
     DISABLE_SYM = 363,
     DISTINCT = 364,
     DYNAMIC_SYM = 365,
     ENABLE_SYM = 366,
     ENCLOSED = 367,
     ESCAPED = 368,
     DIRECTORY_SYM = 369,
     ESCAPE_SYM = 370,
     EXISTS = 371,
     EXTENDED_SYM = 372,
     FILE_SYM = 373,
     FIRST_SYM = 374,
     FIXED_SYM = 375,
     FLOAT_NUM = 376,
     FORCE_SYM = 377,
     FOREIGN = 378,
     FROM = 379,
     FULL = 380,
     FULLTEXT_SYM = 381,
     GLOBAL_SYM = 382,
     GRANT = 383,
     GRANTS = 384,
     GREATEST_SYM = 385,
     GROUP = 386,
     HAVING = 387,
     HEAP_SYM = 388,
     HEX_NUM = 389,
     HIGH_PRIORITY = 390,
     HOSTS_SYM = 391,
     IDENT = 392,
     IGNORE_SYM = 393,
     INDEX = 394,
     INDEXES = 395,
     INFILE = 396,
     INNER_SYM = 397,
     INNOBASE_SYM = 398,
     INTO = 399,
     IN_SYM = 400,
     ISOLATION = 401,
     ISAM_SYM = 402,
     JOIN_SYM = 403,
     KEYS = 404,
     KEY_SYM = 405,
     LEADING = 406,
     LEAST_SYM = 407,
     LEVEL_SYM = 408,
     LEX_HOSTNAME = 409,
     LIKE = 410,
     LINES = 411,
     LOCAL_SYM = 412,
     LOG_SYM = 413,
     LOGS_SYM = 414,
     LONG_NUM = 415,
     LONG_SYM = 416,
     LOW_PRIORITY = 417,
     MASTER_HOST_SYM = 418,
     MASTER_USER_SYM = 419,
     MASTER_LOG_FILE_SYM = 420,
     MASTER_LOG_POS_SYM = 421,
     MASTER_PASSWORD_SYM = 422,
     MASTER_PORT_SYM = 423,
     MASTER_CONNECT_RETRY_SYM = 424,
     MASTER_SERVER_ID_SYM = 425,
     RELAY_LOG_FILE_SYM = 426,
     RELAY_LOG_POS_SYM = 427,
     MATCH = 428,
     MAX_ROWS = 429,
     MAX_CONNECTIONS_PER_HOUR = 430,
     MAX_QUERIES_PER_HOUR = 431,
     MAX_UPDATES_PER_HOUR = 432,
     MEDIUM_SYM = 433,
     MERGE_SYM = 434,
     MEMORY_SYM = 435,
     MIN_ROWS = 436,
     MYISAM_SYM = 437,
     NATIONAL_SYM = 438,
     NATURAL = 439,
     NEW_SYM = 440,
     NCHAR_SYM = 441,
     NOT = 442,
     NO_SYM = 443,
     NULL_SYM = 444,
     NUM = 445,
     OFFSET_SYM = 446,
     ON = 447,
     OPEN_SYM = 448,
     OPTION = 449,
     OPTIONALLY = 450,
     OR = 451,
     OR_OR_CONCAT = 452,
     ORDER_SYM = 453,
     OUTER = 454,
     OUTFILE = 455,
     DUMPFILE = 456,
     PACK_KEYS_SYM = 457,
     PARTIAL = 458,
     PRIMARY_SYM = 459,
     PRIVILEGES = 460,
     PROCESS = 461,
     PROCESSLIST_SYM = 462,
     QUERY_SYM = 463,
     RAID_0_SYM = 464,
     RAID_STRIPED_SYM = 465,
     RAID_TYPE = 466,
     RAID_CHUNKS = 467,
     RAID_CHUNKSIZE = 468,
     READ_SYM = 469,
     REAL_NUM = 470,
     REFERENCES = 471,
     REGEXP = 472,
     RELOAD = 473,
     RENAME = 474,
     REPEATABLE_SYM = 475,
     REQUIRE_SYM = 476,
     RESOURCES = 477,
     RESTORE_SYM = 478,
     RESTRICT = 479,
     REVOKE = 480,
     ROWS_SYM = 481,
     ROW_FORMAT_SYM = 482,
     ROW_SYM = 483,
     SET = 484,
     SERIALIZABLE_SYM = 485,
     SESSION_SYM = 486,
     SHUTDOWN = 487,
     SSL_SYM = 488,
     STARTING = 489,
     STATUS_SYM = 490,
     STRAIGHT_JOIN = 491,
     SUBJECT_SYM = 492,
     TABLES = 493,
     TABLE_SYM = 494,
     TEMPORARY = 495,
     TERMINATED = 496,
     TEXT_STRING = 497,
     TO_SYM = 498,
     TRAILING = 499,
     TRANSACTION_SYM = 500,
     TYPE_SYM = 501,
     FUNC_ARG0 = 502,
     FUNC_ARG1 = 503,
     FUNC_ARG2 = 504,
     FUNC_ARG3 = 505,
     UDF_RETURNS_SYM = 506,
     UDF_SONAME_SYM = 507,
     UDF_SYM = 508,
     UNCOMMITTED_SYM = 509,
     UNION_SYM = 510,
     UNIQUE_SYM = 511,
     USAGE = 512,
     USE_FRM = 513,
     USE_SYM = 514,
     USING = 515,
     VALUES = 516,
     VARIABLES = 517,
     WHERE = 518,
     WITH = 519,
     WRITE_SYM = 520,
     X509_SYM = 521,
     XOR = 522,
     COMPRESSED_SYM = 523,
     BIGINT = 524,
     BLOB_SYM = 525,
     CHAR_SYM = 526,
     CHANGED = 527,
     COALESCE = 528,
     DATETIME = 529,
     DATE_SYM = 530,
     DECIMAL_SYM = 531,
     DOUBLE_SYM = 532,
     ENUM = 533,
     FAST_SYM = 534,
     FLOAT_SYM = 535,
     INT_SYM = 536,
     LIMIT = 537,
     LONGBLOB = 538,
     LONGTEXT = 539,
     MEDIUMBLOB = 540,
     MEDIUMINT = 541,
     MEDIUMTEXT = 542,
     NUMERIC_SYM = 543,
     PRECISION = 544,
     QUICK = 545,
     REAL = 546,
     SIGNED_SYM = 547,
     SMALLINT = 548,
     STRING_SYM = 549,
     TEXT_SYM = 550,
     TIMESTAMP = 551,
     TIME_SYM = 552,
     TINYBLOB = 553,
     TINYINT = 554,
     TINYTEXT = 555,
     ULONGLONG_NUM = 556,
     UNSIGNED = 557,
     VARBINARY = 558,
     VARCHAR = 559,
     VARYING = 560,
     ZEROFILL = 561,
     AGAINST = 562,
     ATAN = 563,
     BETWEEN_SYM = 564,
     BIT_AND = 565,
     BIT_OR = 566,
     CASE_SYM = 567,
     CONCAT = 568,
     CONCAT_WS = 569,
     CURDATE = 570,
     CURTIME = 571,
     DATABASE = 572,
     DATE_ADD_INTERVAL = 573,
     DATE_SUB_INTERVAL = 574,
     DAY_HOUR_SYM = 575,
     DAY_MINUTE_SYM = 576,
     DAY_SECOND_SYM = 577,
     DAY_SYM = 578,
     DECODE_SYM = 579,
     DES_ENCRYPT_SYM = 580,
     DES_DECRYPT_SYM = 581,
     ELSE = 582,
     ELT_FUNC = 583,
     ENCODE_SYM = 584,
     ENCRYPT = 585,
     EXPORT_SET = 586,
     EXTRACT_SYM = 587,
     FIELD_FUNC = 588,
     FORMAT_SYM = 589,
     FOR_SYM = 590,
     FROM_UNIXTIME = 591,
     GROUP_UNIQUE_USERS = 592,
     HOUR_MINUTE_SYM = 593,
     HOUR_SECOND_SYM = 594,
     HOUR_SYM = 595,
     IDENTIFIED_SYM = 596,
     IF = 597,
     INSERT_METHOD = 598,
     INTERVAL_SYM = 599,
     LAST_INSERT_ID = 600,
     LEFT = 601,
     LOCATE = 602,
     MAKE_SET_SYM = 603,
     MASTER_POS_WAIT = 604,
     MINUTE_SECOND_SYM = 605,
     MINUTE_SYM = 606,
     MODE_SYM = 607,
     MODIFY_SYM = 608,
     MONTH_SYM = 609,
     NOW_SYM = 610,
     PASSWORD = 611,
     POSITION_SYM = 612,
     PROCEDURE = 613,
     RAND = 614,
     REPLACE = 615,
     RIGHT = 616,
     ROUND = 617,
     SECOND_SYM = 618,
     SHARE_SYM = 619,
     SUBSTRING = 620,
     SUBSTRING_INDEX = 621,
     TRIM = 622,
     UDA_CHAR_SUM = 623,
     UDA_FLOAT_SUM = 624,
     UDA_INT_SUM = 625,
     UDF_CHAR_FUNC = 626,
     UDF_FLOAT_FUNC = 627,
     UDF_INT_FUNC = 628,
     UNIQUE_USERS = 629,
     UNIX_TIMESTAMP = 630,
     USER = 631,
     WEEK_SYM = 632,
     WHEN_SYM = 633,
     WORK_SYM = 634,
     YEAR_MONTH_SYM = 635,
     YEAR_SYM = 636,
     YEARWEEK = 637,
     BENCHMARK_SYM = 638,
     END = 639,
     THEN_SYM = 640,
     SQL_BIG_RESULT = 641,
     SQL_CACHE_SYM = 642,
     SQL_CALC_FOUND_ROWS = 643,
     SQL_NO_CACHE_SYM = 644,
     SQL_SMALL_RESULT = 645,
     SQL_BUFFER_RESULT = 646,
     ISSUER_SYM = 647,
     CIPHER_SYM = 648,
     NEG = 649
   };
#endif
#define END_OF_INPUT 258
#define CLOSE_SYM 259
#define HANDLER_SYM 260
#define LAST_SYM 261
#define NEXT_SYM 262
#define PREV_SYM 263
#define EQ 264
#define EQUAL_SYM 265
#define GE 266
#define GT_SYM 267
#define LE 268
#define LT 269
#define NE 270
#define IS 271
#define SHIFT_LEFT 272
#define SHIFT_RIGHT 273
#define SET_VAR 274
#define ABORT_SYM 275
#define ADD 276
#define AFTER_SYM 277
#define ALTER 278
#define ANALYZE_SYM 279
#define AVG_SYM 280
#define BEGIN_SYM 281
#define BINLOG_SYM 282
#define CHANGE 283
#define CLIENT_SYM 284
#define COMMENT_SYM 285
#define COMMIT_SYM 286
#define COUNT_SYM 287
#define CREATE 288
#define CROSS 289
#define CUBE_SYM 290
#define DELETE_SYM 291
#define DO_SYM 292
#define DROP 293
#define EVENTS_SYM 294
#define EXECUTE_SYM 295
#define FLUSH_SYM 296
#define INSERT 297
#define IO_THREAD 298
#define KILL_SYM 299
#define LOAD 300
#define LOCKS_SYM 301
#define LOCK_SYM 302
#define MASTER_SYM 303
#define MAX_SYM 304
#define MIN_SYM 305
#define NONE_SYM 306
#define OPTIMIZE 307
#define PURGE 308
#define REPAIR 309
#define REPLICATION 310
#define RESET_SYM 311
#define ROLLBACK_SYM 312
#define ROLLUP_SYM 313
#define SAVEPOINT_SYM 314
#define SELECT_SYM 315
#define SHOW 316
#define SLAVE 317
#define SQL_THREAD 318
#define START_SYM 319
#define STD_SYM 320
#define STOP_SYM 321
#define SUM_SYM 322
#define SUPER_SYM 323
#define TRUNCATE_SYM 324
#define UNLOCK_SYM 325
#define UPDATE_SYM 326
#define ACTION 327
#define AGGREGATE_SYM 328
#define ALL 329
#define AND 330
#define AS 331
#define ASC 332
#define AUTO_INC 333
#define AVG_ROW_LENGTH 334
#define BACKUP_SYM 335
#define BERKELEY_DB_SYM 336
#define BINARY 337
#define BIT_SYM 338
#define BOOL_SYM 339
#define BOOLEAN_SYM 340
#define BOTH 341
#define BY 342
#define CACHE_SYM 343
#define CASCADE 344
#define CAST_SYM 345
#define CHARSET 346
#define CHECKSUM_SYM 347
#define CHECK_SYM 348
#define COMMITTED_SYM 349
#define COLUMNS 350
#define COLUMN_SYM 351
#define CONCURRENT 352
#define CONSTRAINT 353
#define CONVERT_SYM 354
#define DATABASES 355
#define DATA_SYM 356
#define DEFAULT 357
#define DELAYED_SYM 358
#define DELAY_KEY_WRITE_SYM 359
#define DESC 360
#define DESCRIBE 361
#define DES_KEY_FILE 362
#define DISABLE_SYM 363
#define DISTINCT 364
#define DYNAMIC_SYM 365
#define ENABLE_SYM 366
#define ENCLOSED 367
#define ESCAPED 368
#define DIRECTORY_SYM 369
#define ESCAPE_SYM 370
#define EXISTS 371
#define EXTENDED_SYM 372
#define FILE_SYM 373
#define FIRST_SYM 374
#define FIXED_SYM 375
#define FLOAT_NUM 376
#define FORCE_SYM 377
#define FOREIGN 378
#define FROM 379
#define FULL 380
#define FULLTEXT_SYM 381
#define GLOBAL_SYM 382
#define GRANT 383
#define GRANTS 384
#define GREATEST_SYM 385
#define GROUP 386
#define HAVING 387
#define HEAP_SYM 388
#define HEX_NUM 389
#define HIGH_PRIORITY 390
#define HOSTS_SYM 391
#define IDENT 392
#define IGNORE_SYM 393
#define INDEX 394
#define INDEXES 395
#define INFILE 396
#define INNER_SYM 397
#define INNOBASE_SYM 398
#define INTO 399
#define IN_SYM 400
#define ISOLATION 401
#define ISAM_SYM 402
#define JOIN_SYM 403
#define KEYS 404
#define KEY_SYM 405
#define LEADING 406
#define LEAST_SYM 407
#define LEVEL_SYM 408
#define LEX_HOSTNAME 409
#define LIKE 410
#define LINES 411
#define LOCAL_SYM 412
#define LOG_SYM 413
#define LOGS_SYM 414
#define LONG_NUM 415
#define LONG_SYM 416
#define LOW_PRIORITY 417
#define MASTER_HOST_SYM 418
#define MASTER_USER_SYM 419
#define MASTER_LOG_FILE_SYM 420
#define MASTER_LOG_POS_SYM 421
#define MASTER_PASSWORD_SYM 422
#define MASTER_PORT_SYM 423
#define MASTER_CONNECT_RETRY_SYM 424
#define MASTER_SERVER_ID_SYM 425
#define RELAY_LOG_FILE_SYM 426
#define RELAY_LOG_POS_SYM 427
#define MATCH 428
#define MAX_ROWS 429
#define MAX_CONNECTIONS_PER_HOUR 430
#define MAX_QUERIES_PER_HOUR 431
#define MAX_UPDATES_PER_HOUR 432
#define MEDIUM_SYM 433
#define MERGE_SYM 434
#define MEMORY_SYM 435
#define MIN_ROWS 436
#define MYISAM_SYM 437
#define NATIONAL_SYM 438
#define NATURAL 439
#define NEW_SYM 440
#define NCHAR_SYM 441
#define NOT 442
#define NO_SYM 443
#define NULL_SYM 444
#define NUM 445
#define OFFSET_SYM 446
#define ON 447
#define OPEN_SYM 448
#define OPTION 449
#define OPTIONALLY 450
#define OR 451
#define OR_OR_CONCAT 452
#define ORDER_SYM 453
#define OUTER 454
#define OUTFILE 455
#define DUMPFILE 456
#define PACK_KEYS_SYM 457
#define PARTIAL 458
#define PRIMARY_SYM 459
#define PRIVILEGES 460
#define PROCESS 461
#define PROCESSLIST_SYM 462
#define QUERY_SYM 463
#define RAID_0_SYM 464
#define RAID_STRIPED_SYM 465
#define RAID_TYPE 466
#define RAID_CHUNKS 467
#define RAID_CHUNKSIZE 468
#define READ_SYM 469
#define REAL_NUM 470
#define REFERENCES 471
#define REGEXP 472
#define RELOAD 473
#define RENAME 474
#define REPEATABLE_SYM 475
#define REQUIRE_SYM 476
#define RESOURCES 477
#define RESTORE_SYM 478
#define RESTRICT 479
#define REVOKE 480
#define ROWS_SYM 481
#define ROW_FORMAT_SYM 482
#define ROW_SYM 483
#define SET 484
#define SERIALIZABLE_SYM 485
#define SESSION_SYM 486
#define SHUTDOWN 487
#define SSL_SYM 488
#define STARTING 489
#define STATUS_SYM 490
#define STRAIGHT_JOIN 491
#define SUBJECT_SYM 492
#define TABLES 493
#define TABLE_SYM 494
#define TEMPORARY 495
#define TERMINATED 496
#define TEXT_STRING 497
#define TO_SYM 498
#define TRAILING 499
#define TRANSACTION_SYM 500
#define TYPE_SYM 501
#define FUNC_ARG0 502
#define FUNC_ARG1 503
#define FUNC_ARG2 504
#define FUNC_ARG3 505
#define UDF_RETURNS_SYM 506
#define UDF_SONAME_SYM 507
#define UDF_SYM 508
#define UNCOMMITTED_SYM 509
#define UNION_SYM 510
#define UNIQUE_SYM 511
#define USAGE 512
#define USE_FRM 513
#define USE_SYM 514
#define USING 515
#define VALUES 516
#define VARIABLES 517
#define WHERE 518
#define WITH 519
#define WRITE_SYM 520
#define X509_SYM 521
#define XOR 522
#define COMPRESSED_SYM 523
#define BIGINT 524
#define BLOB_SYM 525
#define CHAR_SYM 526
#define CHANGED 527
#define COALESCE 528
#define DATETIME 529
#define DATE_SYM 530
#define DECIMAL_SYM 531
#define DOUBLE_SYM 532
#define ENUM 533
#define FAST_SYM 534
#define FLOAT_SYM 535
#define INT_SYM 536
#define LIMIT 537
#define LONGBLOB 538
#define LONGTEXT 539
#define MEDIUMBLOB 540
#define MEDIUMINT 541
#define MEDIUMTEXT 542
#define NUMERIC_SYM 543
#define PRECISION 544
#define QUICK 545
#define REAL 546
#define SIGNED_SYM 547
#define SMALLINT 548
#define STRING_SYM 549
#define TEXT_SYM 550
#define TIMESTAMP 551
#define TIME_SYM 552
#define TINYBLOB 553
#define TINYINT 554
#define TINYTEXT 555
#define ULONGLONG_NUM 556
#define UNSIGNED 557
#define VARBINARY 558
#define VARCHAR 559
#define VARYING 560
#define ZEROFILL 561
#define AGAINST 562
#define ATAN 563
#define BETWEEN_SYM 564
#define BIT_AND 565
#define BIT_OR 566
#define CASE_SYM 567
#define CONCAT 568
#define CONCAT_WS 569
#define CURDATE 570
#define CURTIME 571
#define DATABASE 572
#define DATE_ADD_INTERVAL 573
#define DATE_SUB_INTERVAL 574
#define DAY_HOUR_SYM 575
#define DAY_MINUTE_SYM 576
#define DAY_SECOND_SYM 577
#define DAY_SYM 578
#define DECODE_SYM 579
#define DES_ENCRYPT_SYM 580
#define DES_DECRYPT_SYM 581
#define ELSE 582
#define ELT_FUNC 583
#define ENCODE_SYM 584
#define ENCRYPT 585
#define EXPORT_SET 586
#define EXTRACT_SYM 587
#define FIELD_FUNC 588
#define FORMAT_SYM 589
#define FOR_SYM 590
#define FROM_UNIXTIME 591
#define GROUP_UNIQUE_USERS 592
#define HOUR_MINUTE_SYM 593
#define HOUR_SECOND_SYM 594
#define HOUR_SYM 595
#define IDENTIFIED_SYM 596
#define IF 597
#define INSERT_METHOD 598
#define INTERVAL_SYM 599
#define LAST_INSERT_ID 600
#define LEFT 601
#define LOCATE 602
#define MAKE_SET_SYM 603
#define MASTER_POS_WAIT 604
#define MINUTE_SECOND_SYM 605
#define MINUTE_SYM 606
#define MODE_SYM 607
#define MODIFY_SYM 608
#define MONTH_SYM 609
#define NOW_SYM 610
#define PASSWORD 611
#define POSITION_SYM 612
#define PROCEDURE 613
#define RAND 614
#define REPLACE 615
#define RIGHT 616
#define ROUND 617
#define SECOND_SYM 618
#define SHARE_SYM 619
#define SUBSTRING 620
#define SUBSTRING_INDEX 621
#define TRIM 622
#define UDA_CHAR_SUM 623
#define UDA_FLOAT_SUM 624
#define UDA_INT_SUM 625
#define UDF_CHAR_FUNC 626
#define UDF_FLOAT_FUNC 627
#define UDF_INT_FUNC 628
#define UNIQUE_USERS 629
#define UNIX_TIMESTAMP 630
#define USER 631
#define WEEK_SYM 632
#define WHEN_SYM 633
#define WORK_SYM 634
#define YEAR_MONTH_SYM 635
#define YEAR_SYM 636
#define YEARWEEK 637
#define BENCHMARK_SYM 638
#define END 639
#define THEN_SYM 640
#define SQL_BIG_RESULT 641
#define SQL_CACHE_SYM 642
#define SQL_CALC_FOUND_ROWS 643
#define SQL_NO_CACHE_SYM 644
#define SQL_SMALL_RESULT 645
#define SQL_BUFFER_RESULT 646
#define ISSUER_SYM 647
#define CIPHER_SYM 648
#define NEG 649




/* Copy the first part of user declarations.  */
#line 19 "sql_yacc.yy"

#define MYSQL_YACC
#define YYINITDEPTH 100
#define YYMAXDEPTH 3200				/* Because of 64K stack */
#define Lex current_lex
#define Select Lex->select
#include "mysql_priv.h"
#include "slave.h"
#include "sql_acl.h"
#include "lex_symbol.h"
#include <myisam.h>
#include <myisammrg.h>

extern void yyerror(const char*);
int yylex(void *yylval);

#define yyoverflow(A,B,C,D,E,F) {ulong val= *(F); if(my_yyoverflow((B), (D), &val)) { yyerror((char*) (A)); return 2; } else { *(F)= (YYSIZE_T)val; }}

inline Item *or_or_concat(Item* A, Item* B)
{
  return (current_thd->sql_mode & MODE_PIPES_AS_CONCAT ?
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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 44 "sql_yacc.yy"
typedef union YYSTYPE {
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
  sys_var *variable;
  Key::Keytype key_type;
  enum db_type db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_tx_isolation tx_isolation;
  enum Item_cast cast_type;
  enum Item_udftype udf_type;
  thr_lock_type lock_type;
  interval_type interval;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 919 "sql_yacc.cc"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 73 "sql_yacc.yy"

bool my_yyoverflow(short **a, YYSTYPE **b, ulong *yystacksize);


/* Line 214 of yacc.c.  */
#line 934 "sql_yacc.cc"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
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
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
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
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
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
#define YYFINAL  412
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   26073

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  412
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  371
/* YYNRULES -- Number of rules. */
#define YYNRULES  1294
/* YYNRULES -- Number of states. */
#define YYNSTATES  2418

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   649

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   407,     2,     2,     2,   400,   395,     2,
     404,   405,   398,   397,   406,   396,   411,   399,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   410,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   403,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   408,   394,   409,   401,     2,     2,     2,
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   402
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
      80,    82,    84,    85,    91,    93,    97,   101,   105,   109,
     113,   117,   121,   125,   129,   133,   134,   142,   143,   154,
     159,   160,   170,   173,   176,   181,   182,   187,   188,   189,
     195,   196,   204,   205,   211,   212,   214,   215,   217,   219,
     222,   224,   225,   229,   230,   232,   234,   237,   241,   245,
     249,   253,   257,   261,   265,   269,   273,   277,   281,   285,
     289,   293,   297,   303,   307,   312,   316,   321,   326,   328,
     330,   332,   334,   336,   338,   340,   342,   344,   346,   348,
     350,   352,   354,   356,   358,   360,   361,   364,   365,   367,
     369,   371,   373,   375,   379,   381,   383,   386,   389,   395,
     404,   407,   410,   411,   413,   416,   417,   419,   422,   423,
     428,   432,   436,   440,   443,   445,   451,   454,   459,   465,
     470,   474,   476,   478,   480,   485,   487,   489,   491,   493,
     495,   498,   501,   503,   505,   507,   509,   513,   517,   518,
     524,   525,   531,   533,   535,   538,   541,   543,   546,   549,
     551,   553,   555,   557,   559,   561,   563,   566,   567,   571,
     573,   579,   580,   582,   585,   587,   589,   591,   593,   594,
     598,   599,   601,   602,   604,   607,   609,   611,   614,   617,
     619,   622,   624,   627,   630,   631,   633,   638,   642,   649,
     650,   652,   655,   657,   661,   665,   668,   671,   673,   675,
     678,   681,   684,   688,   690,   692,   695,   698,   702,   704,
     706,   708,   710,   712,   713,   715,   717,   722,   725,   727,
     732,   733,   735,   737,   741,   742,   749,   750,   752,   756,
     759,   763,   766,   771,   772,   779,   780,   781,   790,   795,
     799,   804,   808,   811,   814,   821,   827,   831,   833,   835,
     836,   838,   839,   841,   842,   844,   846,   847,   850,   852,
     853,   855,   857,   859,   863,   867,   871,   875,   876,   880,
     882,   886,   887,   889,   891,   892,   899,   900,   907,   908,
     914,   915,   917,   919,   922,   924,   926,   928,   929,   935,
     936,   942,   943,   945,   947,   950,   952,   954,   956,   958,
     960,   961,   967,   968,   973,   975,   979,   983,   985,   986,
     991,   992,   999,  1000,  1006,  1008,  1010,  1012,  1015,  1018,
    1027,  1028,  1030,  1033,  1035,  1037,  1039,  1041,  1043,  1045,
    1047,  1049,  1051,  1053,  1055,  1056,  1059,  1064,  1068,  1070,
    1072,  1077,  1078,  1079,  1081,  1083,  1084,  1087,  1090,  1092,
    1094,  1095,  1098,  1100,  1102,  1108,  1115,  1121,  1128,  1132,
    1136,  1140,  1144,  1149,  1155,  1159,  1164,  1168,  1173,  1177,
    1181,  1185,  1189,  1193,  1197,  1201,  1205,  1209,  1213,  1217,
    1221,  1225,  1229,  1233,  1237,  1241,  1247,  1253,  1259,  1266,
    1270,  1274,  1278,  1282,  1287,  1293,  1297,  1302,  1306,  1311,
    1315,  1319,  1323,  1327,  1331,  1335,  1339,  1343,  1347,  1351,
    1355,  1359,  1363,  1367,  1371,  1375,  1379,  1385,  1391,  1393,
    1399,  1406,  1412,  1419,  1423,  1427,  1431,  1436,  1442,  1446,
    1451,  1455,  1460,  1464,  1468,  1472,  1476,  1480,  1484,  1488,
    1492,  1496,  1500,  1504,  1508,  1512,  1516,  1520,  1524,  1528,
    1534,  1540,  1542,  1544,  1546,  1551,  1554,  1559,  1561,  1564,
    1567,  1570,  1573,  1577,  1582,  1589,  1599,  1602,  1609,  1616,
    1623,  1627,  1632,  1639,  1648,  1653,  1660,  1665,  1670,  1675,
    1682,  1685,  1688,  1693,  1702,  1711,  1715,  1722,  1729,  1734,
    1741,  1748,  1755,  1760,  1767,  1772,  1779,  1788,  1799,  1812,
    1819,  1824,  1831,  1838,  1843,  1852,  1863,  1869,  1876,  1880,
    1885,  1892,  1899,  1908,  1915,  1922,  1927,  1934,  1941,  1950,
    1955,  1960,  1963,  1968,  1973,  1980,  1985,  1989,  1998,  2005,
    2010,  2017,  2022,  2031,  2038,  2047,  2054,  2063,  2068,  2076,
    2084,  2092,  2099,  2106,  2111,  2116,  2121,  2126,  2131,  2136,
    2147,  2151,  2156,  2160,  2165,  2172,  2177,  2182,  2189,  2196,
    2203,  2204,  2206,  2211,  2216,  2221,  2227,  2232,  2233,  2234,
    2242,  2253,  2258,  2263,  2268,  2273,  2274,  2278,  2280,  2282,
    2284,  2287,  2289,  2292,  2294,  2296,  2298,  2299,  2302,  2304,
    2308,  2310,  2314,  2315,  2318,  2320,  2324,  2325,  2327,  2328,
    2331,  2332,  2335,  2339,  2345,  2346,  2348,  2352,  2354,  2358,
    2362,  2366,  2372,  2373,  2382,  2390,  2391,  2402,  2409,  2417,
    2418,  2429,  2436,  2441,  2443,  2446,  2449,  2450,  2455,  2466,
    2467,  2469,  2470,  2473,  2476,  2479,  2480,  2486,  2490,  2492,
    2494,  2496,  2500,  2502,  2504,  2506,  2508,  2510,  2512,  2514,
    2516,  2518,  2520,  2522,  2524,  2526,  2527,  2529,  2531,  2532,
    2535,  2536,  2538,  2539,  2542,  2543,  2544,  2548,  2551,  2552,
    2553,  2558,  2563,  2566,  2567,  2570,  2573,  2574,  2576,  2577,
    2582,  2587,  2590,  2591,  2593,  2595,  2596,  2597,  2601,  2603,
    2607,  2611,  2612,  2615,  2617,  2619,  2621,  2623,  2625,  2627,
    2629,  2631,  2633,  2635,  2636,  2637,  2644,  2645,  2647,  2651,
    2653,  2656,  2657,  2664,  2668,  2669,  2673,  2680,  2681,  2688,
    2693,  2697,  2699,  2703,  2705,  2706,  2709,  2710,  2712,  2713,
    2714,  2722,  2723,  2724,  2731,  2732,  2734,  2736,  2738,  2740,
    2742,  2745,  2747,  2749,  2751,  2755,  2760,  2761,  2765,  2766,
    2770,  2773,  2777,  2779,  2782,  2783,  2787,  2788,  2794,  2798,
    2800,  2804,  2806,  2810,  2812,  2814,  2815,  2817,  2818,  2823,
    2824,  2826,  2830,  2832,  2834,  2836,  2837,  2838,  2850,  2856,
    2860,  2861,  2863,  2864,  2869,  2870,  2877,  2878,  2884,  2885,
    2892,  2894,  2898,  2901,  2906,  2907,  2910,  2911,  2914,  2916,
    2918,  2922,  2923,  2925,  2926,  2930,  2933,  2937,  2942,  2947,
    2954,  2971,  2974,  2977,  2978,  2985,  2990,  2993,  2996,  2999,
    3003,  3005,  3009,  3013,  3016,  3019,  3020,  3023,  3024,  3027,
    3028,  3030,  3032,  3034,  3035,  3038,  3039,  3042,  3043,  3048,
    3051,  3053,  3055,  3056,  3058,  3060,  3061,  3065,  3069,  3071,
    3072,  3076,  3081,  3084,  3086,  3088,  3090,  3092,  3094,  3096,
    3098,  3100,  3101,  3103,  3104,  3108,  3112,  3114,  3116,  3118,
    3121,  3122,  3129,  3132,  3135,  3136,  3152,  3158,  3163,  3164,
    3166,  3167,  3169,  3171,  3172,  3174,  3176,  3177,  3180,  3183,
    3185,  3189,  3194,  3198,  3202,  3203,  3206,  3209,  3211,  3215,
    3219,  3220,  3224,  3226,  3229,  3231,  3233,  3235,  3237,  3239,
    3241,  3243,  3245,  3247,  3249,  3252,  3255,  3258,  3260,  3262,
    3266,  3272,  3274,  3276,  3280,  3285,  3291,  3293,  3297,  3300,
    3302,  3306,  3309,  3311,  3315,  3317,  3319,  3321,  3323,  3325,
    3327,  3331,  3333,  3335,  3337,  3339,  3341,  3343,  3345,  3347,
    3349,  3351,  3353,  3355,  3357,  3359,  3361,  3363,  3365,  3367,
    3369,  3371,  3373,  3375,  3377,  3379,  3381,  3383,  3385,  3387,
    3389,  3391,  3393,  3395,  3397,  3399,  3401,  3403,  3405,  3407,
    3409,  3411,  3413,  3415,  3417,  3419,  3421,  3423,  3425,  3427,
    3429,  3431,  3433,  3435,  3437,  3439,  3441,  3443,  3445,  3447,
    3449,  3451,  3453,  3455,  3457,  3459,  3461,  3463,  3465,  3467,
    3469,  3471,  3473,  3475,  3477,  3479,  3481,  3483,  3485,  3487,
    3489,  3491,  3493,  3495,  3497,  3499,  3501,  3503,  3505,  3507,
    3509,  3511,  3513,  3515,  3517,  3519,  3521,  3523,  3525,  3527,
    3529,  3531,  3533,  3535,  3537,  3539,  3541,  3543,  3545,  3547,
    3549,  3551,  3553,  3555,  3557,  3559,  3561,  3563,  3565,  3567,
    3569,  3571,  3573,  3575,  3577,  3579,  3581,  3583,  3585,  3587,
    3589,  3591,  3593,  3595,  3597,  3599,  3601,  3603,  3605,  3607,
    3609,  3611,  3613,  3615,  3617,  3619,  3621,  3623,  3625,  3627,
    3629,  3631,  3633,  3635,  3637,  3639,  3641,  3643,  3645,  3647,
    3648,  3653,  3654,  3656,  3659,  3664,  3665,  3667,  3669,  3671,
    3672,  3674,  3676,  3678,  3679,  3682,  3685,  3688,  3693,  3697,
    3704,  3709,  3714,  3718,  3724,  3726,  3729,  3732,  3735,  3737,
    3739,  3744,  3746,  3748,  3750,  3752,  3753,  3758,  3760,  3762,
    3764,  3768,  3772,  3774,  3776,  3779,  3782,  3785,  3790,  3794,
    3795,  3803,  3805,  3808,  3810,  3812,  3814,  3816,  3818,  3820,
    3821,  3827,  3829,  3831,  3833,  3835,  3837,  3838,  3846,  3847,
    3857,  3859,  3862,  3864,  3866,  3870,  3871,  3875,  3876,  3880,
    3881,  3885,  3886,  3890,  3892,  3894,  3896,  3898,  3900,  3902,
    3904,  3906,  3908,  3910,  3912,  3915,  3918,  3920,  3924,  3927,
    3930,  3933,  3934,  3936,  3940,  3942,  3945,  3948,  3951,  3953,
    3957,  3961,  3963,  3965,  3969,  3974,  3980,  3982,  3983,  3987,
    3991,  3993,  3995,  3996,  3999,  4002,  4005,  4008,  4009,  4012,
    4015,  4017,  4020,  4023,  4026,  4029,  4030,  4034,  4035,  4037,
    4039,  4041,  4046,  4049,  4050,  4052,  4053,  4058,  4060,  4062,
    4063,  4064,  4068,  4069,  4071
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     413,     0,    -1,     3,    -1,   414,     3,    -1,   487,    -1,
     514,    -1,   507,    -1,   770,    -1,   415,    -1,   516,    -1,
     773,    -1,   419,    -1,   653,    -1,   676,    -1,   613,    -1,
     615,    -1,   748,    -1,   621,    -1,   680,    -1,   694,    -1,
     732,    -1,   692,    -1,   521,    -1,   690,    -1,   523,    -1,
     509,    -1,   624,    -1,   686,    -1,   505,    -1,   746,    -1,
     774,    -1,   775,    -1,   527,    -1,   720,    -1,   500,    -1,
     501,    -1,   666,    -1,   664,    -1,   739,    -1,   738,    -1,
     648,    -1,   693,    -1,    -1,    28,    48,   243,   416,   417,
      -1,   418,    -1,   417,   406,   418,    -1,   163,     9,   242,
      -1,   164,     9,   242,    -1,   167,     9,   242,    -1,   165,
       9,   242,    -1,   168,     9,   604,    -1,   166,     9,   605,
      -1,   169,     9,   604,    -1,   171,     9,   242,    -1,   172,
       9,   604,    -1,    -1,    33,   432,   239,   435,   714,   420,
     423,    -1,    -1,    33,   482,   139,   716,   192,   714,   421,
     404,   483,   405,    -1,    33,   317,   435,   716,    -1,    -1,
      33,   444,   253,   716,   422,   251,   445,   252,   242,    -1,
     404,   424,    -1,   436,   426,    -1,   446,   405,   436,   426,
      -1,    -1,   429,   405,   425,   779,    -1,    -1,    -1,   698,
     431,   429,   427,   776,    -1,    -1,   698,   431,   404,   429,
     405,   428,   779,    -1,    -1,    60,   430,   535,   539,   443,
      -1,    -1,    76,    -1,    -1,   433,    -1,   434,    -1,   434,
     433,    -1,   240,    -1,    -1,   342,   187,   116,    -1,    -1,
     437,    -1,   438,    -1,   438,   437,    -1,   246,     9,   439,
      -1,   174,     9,   605,    -1,   181,     9,   605,    -1,    79,
       9,   604,    -1,   356,     9,   242,    -1,    30,     9,   242,
      -1,    78,     9,   605,    -1,   202,     9,   604,    -1,   202,
       9,   102,    -1,    92,     9,   604,    -1,   104,     9,   604,
      -1,   227,     9,   440,    -1,   211,     9,   441,    -1,   212,
       9,   604,    -1,   213,     9,   604,    -1,   255,     9,   404,
     617,   405,    -1,    91,   642,   716,    -1,   271,   229,   642,
     716,    -1,   343,     9,   442,    -1,   101,   114,     9,   242,
      -1,   139,   114,     9,   242,    -1,   147,    -1,   182,    -1,
     179,    -1,   133,    -1,   180,    -1,    81,    -1,   143,    -1,
     102,    -1,   120,    -1,   110,    -1,   268,    -1,   210,    -1,
     209,    -1,   604,    -1,   188,    -1,   119,    -1,     6,    -1,
      -1,   534,   538,    -1,    -1,    73,    -1,   294,    -1,   291,
      -1,   281,    -1,   447,    -1,   446,   406,   447,    -1,   448,
      -1,   449,    -1,   454,   450,    -1,   454,   474,    -1,   479,
     485,   404,   483,   405,    -1,   452,   123,   150,   485,   404,
     483,   405,   474,    -1,   453,   450,    -1,   452,   451,    -1,
      -1,   451,    -1,    93,   546,    -1,    -1,   453,    -1,    98,
     485,    -1,    -1,   713,   455,   456,   470,    -1,   461,   468,
     465,    -1,   462,   469,   465,    -1,   280,   463,   465,    -1,
      83,   468,    -1,    84,    -1,   459,   404,   190,   405,   473,
      -1,   459,   473,    -1,    82,   404,   190,   405,    -1,   460,
     404,   190,   405,   473,    -1,   303,   404,   190,   405,    -1,
     381,   468,   465,    -1,   275,    -1,   297,    -1,   296,    -1,
     296,   404,   190,   405,    -1,   274,    -1,   298,    -1,   270,
      -1,   285,    -1,   283,    -1,   161,   303,    -1,   161,   460,
      -1,   300,    -1,   295,    -1,   287,    -1,   284,    -1,   276,
     463,   465,    -1,   288,   463,   465,    -1,    -1,   278,   457,
     404,   486,   405,    -1,    -1,   229,   458,   404,   486,   405,
      -1,   271,    -1,   186,    -1,   183,   271,    -1,   459,   305,
      -1,   304,    -1,   183,   304,    -1,   186,   304,    -1,   281,
      -1,   299,    -1,   293,    -1,   286,    -1,   269,    -1,   291,
      -1,   277,    -1,   277,   289,    -1,    -1,   404,   190,   405,
      -1,   464,    -1,   404,   190,   406,   190,   405,    -1,    -1,
     466,    -1,   466,   467,    -1,   467,    -1,   292,    -1,   302,
      -1,   306,    -1,    -1,   404,   190,   405,    -1,    -1,   464,
      -1,    -1,   471,    -1,   471,   472,    -1,   472,    -1,   189,
      -1,   187,   189,    -1,   102,   708,    -1,    78,    -1,   204,
     150,    -1,   256,    -1,   256,   150,    -1,    30,   706,    -1,
      -1,    82,    -1,   271,   229,   642,   716,    -1,   216,   714,
     475,    -1,   216,   714,   404,   483,   405,   475,    -1,    -1,
     476,    -1,   476,   477,    -1,   477,    -1,   192,    36,   478,
      -1,   192,    71,   478,    -1,   173,   125,    -1,   173,   203,
      -1,   224,    -1,    89,    -1,   229,   189,    -1,   188,    72,
      -1,   229,   102,    -1,   452,   204,   150,    -1,   480,    -1,
     126,    -1,   126,   480,    -1,   452,   256,    -1,   452,   256,
     480,    -1,   150,    -1,   139,    -1,   149,    -1,   139,    -1,
     140,    -1,    -1,   256,    -1,   126,    -1,   483,   406,   484,
     599,    -1,   484,   599,    -1,   716,    -1,   716,   404,   190,
     405,    -1,    -1,   713,    -1,   707,    -1,   486,   406,   707,
      -1,    -1,    23,   496,   239,   714,   488,   489,    -1,    -1,
     491,    -1,   489,   406,   491,    -1,    21,   495,    -1,   490,
     448,   498,    -1,    21,   449,    -1,   490,   404,   446,   405,
      -1,    -1,    28,   495,   713,   492,   454,   498,    -1,    -1,
      -1,   353,   495,   713,   493,   456,   470,   494,   498,    -1,
      38,   495,   713,   497,    -1,    38,   204,   150,    -1,    38,
     123,   150,   485,    -1,    38,   480,   713,    -1,   108,   149,
      -1,   111,   149,    -1,    23,   495,   713,   229,   102,   708,
      -1,    23,   495,   713,    38,   102,    -1,   219,   499,   714,
      -1,   437,    -1,   596,    -1,    -1,    96,    -1,    -1,   138,
      -1,    -1,   224,    -1,    89,    -1,    -1,    22,   716,    -1,
     119,    -1,    -1,   243,    -1,     9,    -1,    76,    -1,    64,
      62,   503,    -1,    66,    62,   503,    -1,    62,    64,   503,
      -1,    62,    66,   503,    -1,    -1,    64,   245,   502,    -1,
     504,    -1,   503,   406,   504,    -1,    -1,    63,    -1,    43,
      -1,    -1,   223,   734,   506,   617,   124,   242,    -1,    -1,
      80,   734,   508,   617,   243,   242,    -1,    -1,    54,   734,
     510,   617,   511,    -1,    -1,   512,    -1,   513,    -1,   513,
     512,    -1,   290,    -1,   117,    -1,   258,    -1,    -1,    24,
     734,   515,   617,   518,    -1,    -1,    93,   734,   517,   617,
     518,    -1,    -1,   519,    -1,   520,    -1,   520,   519,    -1,
     290,    -1,   279,    -1,   178,    -1,   117,    -1,   272,    -1,
      -1,    52,   734,   522,   617,   518,    -1,    -1,   219,   734,
     524,   525,    -1,   526,    -1,   525,   406,   526,    -1,   714,
     243,   714,    -1,   528,    -1,    -1,    60,   531,   529,   776,
      -1,    -1,   404,    60,   531,   405,   530,   779,    -1,    -1,
     532,   535,   539,   533,   538,    -1,   600,    -1,   611,    -1,
     534,    -1,   611,   534,    -1,   534,   611,    -1,   124,   571,
     588,   592,   589,   595,   600,   606,    -1,    -1,   536,    -1,
     536,   537,    -1,   537,    -1,   236,    -1,   135,    -1,   109,
      -1,   390,    -1,   386,    -1,   391,    -1,   388,    -1,   389,
      -1,   387,    -1,    74,    -1,    -1,   335,    71,    -1,    47,
     145,   364,   352,    -1,   539,   406,   540,    -1,   540,    -1,
     398,    -1,   541,   543,   542,   544,    -1,    -1,    -1,   710,
      -1,   546,    -1,    -1,    76,   716,    -1,    76,   242,    -1,
     716,    -1,   242,    -1,    -1,   404,   405,    -1,   547,    -1,
     550,    -1,   546,   145,   404,   558,   405,    -1,   546,   187,
     145,   404,   558,   405,    -1,   546,   309,   549,    75,   546,
      -1,   546,   187,   309,   549,    75,   546,    -1,   546,   197,
     546,    -1,   546,   196,   546,    -1,   546,   267,   546,    -1,
     546,    75,   546,    -1,   546,   155,   550,   591,    -1,   546,
     187,   155,   550,   591,    -1,   546,   217,   546,    -1,   546,
     187,   217,   546,    -1,   546,    16,   189,    -1,   546,    16,
     187,   189,    -1,   546,     9,   546,    -1,   546,    10,   546,
      -1,   546,    11,   546,    -1,   546,    12,   546,    -1,   546,
      13,   546,    -1,   546,    14,   546,    -1,   546,    15,   546,
      -1,   546,    17,   546,    -1,   546,    18,   546,    -1,   546,
     397,   546,    -1,   546,   396,   546,    -1,   546,   398,   546,
      -1,   546,   399,   546,    -1,   546,   394,   546,    -1,   546,
     403,   546,    -1,   546,   395,   546,    -1,   546,   400,   546,
      -1,   546,   397,   344,   546,   584,    -1,   546,   396,   344,
     546,   584,    -1,   548,   309,   549,    75,   546,    -1,   548,
     187,   309,   549,    75,   546,    -1,   548,   197,   546,    -1,
     548,   196,   546,    -1,   548,   267,   546,    -1,   548,    75,
     546,    -1,   548,   155,   550,   591,    -1,   548,   187,   155,
     550,   591,    -1,   548,   217,   546,    -1,   548,   187,   217,
     546,    -1,   548,    16,   189,    -1,   548,    16,   187,   189,
      -1,   548,     9,   546,    -1,   548,    10,   546,    -1,   548,
      11,   546,    -1,   548,    12,   546,    -1,   548,    13,   546,
      -1,   548,    14,   546,    -1,   548,    15,   546,    -1,   548,
      17,   546,    -1,   548,    18,   546,    -1,   548,   397,   546,
      -1,   548,   396,   546,    -1,   548,   398,   546,    -1,   548,
     399,   546,    -1,   548,   394,   546,    -1,   548,   403,   546,
      -1,   548,   395,   546,    -1,   548,   400,   546,    -1,   548,
     397,   344,   546,   584,    -1,   548,   396,   344,   546,   584,
      -1,   550,    -1,   549,   145,   404,   558,   405,    -1,   549,
     187,   145,   404,   558,   405,    -1,   549,   309,   549,    75,
     546,    -1,   549,   187,   309,   549,    75,   546,    -1,   549,
     197,   546,    -1,   549,   196,   546,    -1,   549,   267,   546,
      -1,   549,   155,   550,   591,    -1,   549,   187,   155,   550,
     591,    -1,   549,   217,   546,    -1,   549,   187,   217,   546,
      -1,   549,    16,   189,    -1,   549,    16,   187,   189,    -1,
     549,     9,   546,    -1,   549,    10,   546,    -1,   549,    11,
     546,    -1,   549,    12,   546,    -1,   549,    13,   546,    -1,
     549,    14,   546,    -1,   549,    15,   546,    -1,   549,    17,
     546,    -1,   549,    18,   546,    -1,   549,   397,   546,    -1,
     549,   396,   546,    -1,   549,   398,   546,    -1,   549,   399,
     546,    -1,   549,   394,   546,    -1,   549,   403,   546,    -1,
     549,   395,   546,    -1,   549,   400,   546,    -1,   549,   397,
     344,   546,   584,    -1,   549,   396,   344,   546,   584,    -1,
     550,    -1,   712,    -1,   708,    -1,   410,   717,    19,   546,
      -1,   410,   717,    -1,   410,   410,   726,   717,    -1,   552,
      -1,   396,   546,    -1,   401,   546,    -1,   187,   546,    -1,
     407,   546,    -1,   404,   546,   405,    -1,   408,   716,   546,
     409,    -1,   173,   561,   307,   404,   546,   405,    -1,   173,
     561,   307,   404,   546,   145,    85,   352,   405,    -1,    82,
     546,    -1,    90,   404,   546,    76,   557,   405,    -1,   312,
     565,   378,   567,   566,   384,    -1,    99,   404,   546,   406,
     557,   405,    -1,   247,   404,   405,    -1,   248,   404,   546,
     405,    -1,   249,   404,   546,   406,   546,   405,    -1,   250,
     404,   546,   406,   546,   406,   546,   405,    -1,   308,   404,
     546,   405,    -1,   308,   404,   546,   406,   546,   405,    -1,
     271,   404,   558,   405,    -1,   273,   404,   558,   405,    -1,
     313,   404,   558,   405,    -1,   314,   404,   546,   406,   558,
     405,    -1,   315,   545,    -1,   316,   545,    -1,   316,   404,
     546,   405,    -1,   318,   404,   546,   406,   344,   546,   584,
     405,    -1,   319,   404,   546,   406,   344,   546,   584,   405,
      -1,   317,   404,   405,    -1,   328,   404,   546,   406,   558,
     405,    -1,   348,   404,   546,   406,   558,   405,    -1,   330,
     404,   546,   405,    -1,   330,   404,   546,   406,   546,   405,
      -1,   324,   404,   546,   406,   242,   405,    -1,   329,   404,
     546,   406,   242,   405,    -1,   326,   404,   546,   405,    -1,
     326,   404,   546,   406,   546,   405,    -1,   325,   404,   546,
     405,    -1,   325,   404,   546,   406,   546,   405,    -1,   331,
     404,   546,   406,   546,   406,   546,   405,    -1,   331,   404,
     546,   406,   546,   406,   546,   406,   546,   405,    -1,   331,
     404,   546,   406,   546,   406,   546,   406,   546,   406,   546,
     405,    -1,   334,   404,   546,   406,   190,   405,    -1,   336,
     404,   546,   405,    -1,   336,   404,   546,   406,   546,   405,
      -1,   333,   404,   546,   406,   558,   405,    -1,   340,   404,
     546,   405,    -1,   342,   404,   546,   406,   546,   406,   546,
     405,    -1,    42,   404,   546,   406,   546,   406,   546,   406,
     546,   405,    -1,   344,   546,   584,   397,   546,    -1,   344,
     404,   546,   406,   558,   405,    -1,   345,   404,   405,    -1,
     345,   404,   546,   405,    -1,   346,   404,   546,   406,   546,
     405,    -1,   347,   404,   546,   406,   546,   405,    -1,   347,
     404,   546,   406,   546,   406,   546,   405,    -1,   130,   404,
     546,   406,   558,   405,    -1,   152,   404,   546,   406,   558,
     405,    -1,   158,   404,   546,   405,    -1,   158,   404,   546,
     406,   546,   405,    -1,   349,   404,   546,   406,   546,   405,
      -1,   349,   404,   546,   406,   546,   406,   546,   405,    -1,
     351,   404,   546,   405,    -1,   354,   404,   546,   405,    -1,
     355,   545,    -1,   355,   404,   546,   405,    -1,   356,   404,
     546,   405,    -1,   357,   404,   548,   145,   546,   405,    -1,
     359,   404,   546,   405,    -1,   359,   404,   405,    -1,   360,
     404,   546,   406,   546,   406,   546,   405,    -1,   361,   404,
     546,   406,   546,   405,    -1,   362,   404,   546,   405,    -1,
     362,   404,   546,   406,   546,   405,    -1,   363,   404,   546,
     405,    -1,   365,   404,   546,   406,   546,   406,   546,   405,
      -1,   365,   404,   546,   406,   546,   405,    -1,   365,   404,
     546,   124,   546,   335,   546,   405,    -1,   365,   404,   546,
     124,   546,   405,    -1,   366,   404,   546,   406,   546,   406,
     546,   405,    -1,   367,   404,   546,   405,    -1,   367,   404,
     151,   570,   124,   546,   405,    -1,   367,   404,   244,   570,
     124,   546,   405,    -1,   367,   404,    86,   570,   124,   546,
     405,    -1,   367,   404,   546,   124,   546,   405,    -1,    69,
     404,   546,   406,   546,   405,    -1,   368,   404,   551,   405,
      -1,   369,   404,   551,   405,    -1,   370,   404,   551,   405,
      -1,   371,   404,   551,   405,    -1,   372,   404,   551,   405,
      -1,   373,   404,   551,   405,    -1,   374,   404,   706,   406,
     190,   406,   190,   406,   558,   405,    -1,   375,   404,   405,
      -1,   375,   404,   546,   405,    -1,   376,   404,   405,    -1,
     377,   404,   546,   405,    -1,   377,   404,   546,   406,   546,
     405,    -1,   381,   404,   546,   405,    -1,   382,   404,   546,
     405,    -1,   382,   404,   546,   406,   546,   405,    -1,   383,
     404,   604,   406,   546,   405,    -1,   332,   404,   584,   124,
     546,   405,    -1,    -1,   558,    -1,    25,   404,   555,   405,
      -1,   310,   404,   555,   405,    -1,   311,   404,   555,   405,
      -1,    32,   404,   587,   398,   405,    -1,    32,   404,   555,
     405,    -1,    -1,    -1,    32,   404,   109,   553,   558,   554,
     405,    -1,   337,   404,   706,   406,   190,   406,   190,   406,
     555,   405,    -1,    50,   404,   555,   405,    -1,    49,   404,
     555,   405,    -1,    65,   404,   555,   405,    -1,    67,   404,
     555,   405,    -1,    -1,   587,   556,   546,    -1,    82,    -1,
     271,    -1,   292,    -1,   292,   281,    -1,   302,    -1,   302,
     281,    -1,   275,    -1,   297,    -1,   274,    -1,    -1,   559,
     560,    -1,   546,    -1,   560,   406,   546,    -1,   562,    -1,
     404,   562,   405,    -1,    -1,   563,   564,    -1,   712,    -1,
     564,   406,   712,    -1,    -1,   546,    -1,    -1,   327,   546,
      -1,    -1,   568,   569,    -1,   546,   385,   546,    -1,   569,
     378,   546,   385,   546,    -1,    -1,   546,    -1,   404,   571,
     405,    -1,   576,    -1,   571,   406,   571,    -1,   571,   575,
     571,    -1,   571,   236,   571,    -1,   571,   575,   571,   192,
     546,    -1,    -1,   571,   575,   571,   260,   572,   404,   583,
     405,    -1,   571,   346,   578,   148,   571,   192,   546,    -1,
      -1,   571,   346,   578,   148,   571,   573,   260,   404,   583,
     405,    -1,   571,   184,   346,   578,   148,   571,    -1,   571,
     361,   578,   148,   571,   192,   546,    -1,    -1,   571,   361,
     578,   148,   571,   574,   260,   404,   583,   405,    -1,   571,
     184,   361,   578,   148,   571,    -1,   571,   184,   148,   571,
      -1,   148,    -1,   142,   148,    -1,    34,   148,    -1,    -1,
     577,   714,   586,   579,    -1,   408,   716,   576,   346,   199,
     148,   576,   192,   546,   409,    -1,    -1,   199,    -1,    -1,
     259,   580,    -1,   122,   580,    -1,   138,   580,    -1,    -1,
     480,   581,   404,   582,   405,    -1,   582,   406,   716,    -1,
     716,    -1,   204,    -1,   716,    -1,   583,   406,   716,    -1,
     320,    -1,   321,    -1,   322,    -1,   323,    -1,   338,    -1,
     339,    -1,   340,    -1,   350,    -1,   351,    -1,   354,    -1,
     363,    -1,   380,    -1,   381,    -1,    -1,    76,    -1,     9,
      -1,    -1,   585,   716,    -1,    -1,    74,    -1,    -1,   263,
     546,    -1,    -1,    -1,   132,   590,   546,    -1,   115,   242,
      -1,    -1,    -1,   131,    87,   593,   594,    -1,   593,   406,
     711,   599,    -1,   711,   599,    -1,    -1,   264,    35,    -1,
     264,    58,    -1,    -1,   596,    -1,    -1,   198,    87,   597,
     598,    -1,   598,   406,   711,   599,    -1,   711,   599,    -1,
      -1,    77,    -1,   105,    -1,    -1,    -1,   282,   601,   602,
      -1,   604,    -1,   604,   406,   604,    -1,   604,   191,   604,
      -1,    -1,   282,   605,    -1,   190,    -1,   160,    -1,   301,
      -1,   215,    -1,   121,    -1,   190,    -1,   301,    -1,   160,
      -1,   215,    -1,   121,    -1,    -1,    -1,   358,   716,   607,
     404,   608,   405,    -1,    -1,   609,    -1,   609,   406,   610,
      -1,   610,    -1,   541,   546,    -1,    -1,   144,   200,   242,
     612,   699,   702,    -1,   144,   201,   242,    -1,    -1,    37,
     614,   646,    -1,    38,   620,   239,   619,   617,   497,    -1,
      -1,    38,   139,   716,   192,   714,   616,    -1,    38,   317,
     619,   716,    -1,    38,   253,   716,    -1,   618,    -1,   617,
     406,   618,    -1,   714,    -1,    -1,   342,   116,    -1,    -1,
     240,    -1,    -1,    -1,    42,   622,   627,   496,   629,   623,
     631,    -1,    -1,    -1,   360,   625,   628,   629,   626,   631,
      -1,    -1,   162,    -1,   103,    -1,   135,    -1,   652,    -1,
     103,    -1,   144,   630,    -1,   630,    -1,   618,    -1,   635,
      -1,   404,   405,   635,    -1,   404,   634,   405,   635,    -1,
      -1,   229,   632,   639,    -1,    -1,   404,   634,   405,    -1,
     404,   405,    -1,   634,   406,   709,    -1,   709,    -1,   261,
     638,    -1,    -1,   429,   636,   776,    -1,    -1,   404,   429,
     405,   637,   779,    -1,   638,   406,   643,    -1,   643,    -1,
     639,   406,   640,    -1,   640,    -1,   712,   641,   647,    -1,
       9,    -1,    19,    -1,    -1,   641,    -1,    -1,   404,   644,
     645,   405,    -1,    -1,   646,    -1,   646,   406,   647,    -1,
     647,    -1,   546,    -1,   102,    -1,    -1,    -1,    71,   649,
     652,   496,   571,   229,   651,   650,   588,   595,   603,    -1,
     651,   406,   712,   641,   546,    -1,   712,   641,   546,    -1,
      -1,   162,    -1,    -1,    36,   654,   662,   655,    -1,    -1,
     124,   714,   656,   588,   595,   603,    -1,    -1,   659,   657,
     124,   571,   588,    -1,    -1,   124,   659,   658,   260,   571,
     588,    -1,   660,    -1,   659,   406,   660,    -1,   716,   661,
      -1,   716,   411,   716,   661,    -1,    -1,   411,   398,    -1,
      -1,   663,   662,    -1,   290,    -1,   162,    -1,    69,   665,
     618,    -1,    -1,   239,    -1,    -1,    61,   667,   668,    -1,
     100,   671,    -1,   238,   670,   671,    -1,   239,   235,   670,
     671,    -1,   193,   238,   670,   671,    -1,   672,    95,   673,
     714,   670,   671,    -1,   185,    48,   335,    62,   264,   165,
       9,   242,    75,   166,     9,   605,    75,   170,     9,   604,
      -1,    48,   159,    -1,    62,   136,    -1,    -1,    27,    39,
     674,   675,   669,   600,    -1,   481,   673,   714,   670,    -1,
     235,   671,    -1,   143,   235,    -1,   672,   207,    -1,   725,
     262,   671,    -1,   159,    -1,   129,   335,   718,    -1,    33,
     239,   714,    -1,    48,   235,    -1,    62,   235,    -1,    -1,
     673,   716,    -1,    -1,   155,   707,    -1,    -1,   125,    -1,
     124,    -1,   145,    -1,    -1,   145,   242,    -1,    -1,   124,
     605,    -1,    -1,   678,   714,   677,   679,    -1,   678,   527,
      -1,   105,    -1,   106,    -1,    -1,   707,    -1,   716,    -1,
      -1,    41,   681,   682,    -1,   682,   406,   683,    -1,   683,
      -1,    -1,   734,   684,   685,    -1,   238,   264,   214,    47,
      -1,   208,    88,    -1,   136,    -1,   205,    -1,   159,    -1,
     235,    -1,    62,    -1,    48,    -1,   107,    -1,   222,    -1,
      -1,   617,    -1,    -1,    56,   687,   688,    -1,   688,   406,
     689,    -1,   689,    -1,    62,    -1,    48,    -1,   208,    88,
      -1,    -1,    53,   691,    48,   159,   243,   242,    -1,    44,
     546,    -1,   259,   716,    -1,    -1,    45,   101,   697,   696,
     141,   242,   695,   698,   144,   239,   714,   699,   702,   705,
     633,    -1,    45,   239,   714,   124,    48,    -1,    45,   101,
     124,    48,    -1,    -1,   157,    -1,    -1,    97,    -1,   162,
      -1,    -1,   360,    -1,   138,    -1,    -1,    95,   700,    -1,
     700,   701,    -1,   701,    -1,   241,    87,   707,    -1,   195,
     112,    87,   707,    -1,   112,    87,   707,    -1,   113,    87,
     707,    -1,    -1,   156,   703,    -1,   703,   704,    -1,   704,
      -1,   241,    87,   707,    -1,   234,    87,   707,    -1,    -1,
     138,   190,   156,    -1,   242,    -1,   706,   242,    -1,   242,
      -1,   134,    -1,   706,    -1,   190,    -1,   160,    -1,   301,
      -1,   215,    -1,   121,    -1,   189,    -1,   134,    -1,   275,
     706,    -1,   297,   706,    -1,   296,   706,    -1,   712,    -1,
     710,    -1,   716,   411,   398,    -1,   716,   411,   716,   411,
     398,    -1,   546,    -1,   716,    -1,   716,   411,   716,    -1,
     411,   716,   411,   716,    -1,   716,   411,   716,   411,   716,
      -1,   716,    -1,   716,   411,   716,    -1,   411,   716,    -1,
     716,    -1,   716,   411,   716,    -1,   411,   716,    -1,   716,
      -1,   716,   411,   716,    -1,   137,    -1,   719,    -1,   716,
      -1,   242,    -1,   154,    -1,   717,    -1,   717,   410,   717,
      -1,    72,    -1,    22,    -1,   307,    -1,    73,    -1,    78,
      -1,    79,    -1,    25,    -1,    80,    -1,    26,    -1,    81,
      -1,    27,    -1,    83,    -1,    84,    -1,    85,    -1,    88,
      -1,   272,    -1,    91,    -1,    92,    -1,   393,    -1,    29,
      -1,     4,    -1,    30,    -1,    94,    -1,    31,    -1,   268,
      -1,    97,    -1,    35,    -1,   101,    -1,   274,    -1,   275,
      -1,   323,    -1,   104,    -1,   107,    -1,   114,    -1,    37,
      -1,   201,    -1,   110,    -1,   384,    -1,   278,    -1,   115,
      -1,    39,    -1,    40,    -1,   117,    -1,   279,    -1,   108,
      -1,   111,    -1,   125,    -1,   118,    -1,   119,    -1,   120,
      -1,    41,    -1,   129,    -1,   127,    -1,   133,    -1,     5,
      -1,   136,    -1,   340,    -1,   341,    -1,   140,    -1,   146,
      -1,   147,    -1,   392,    -1,   143,    -1,   343,    -1,    43,
      -1,     6,    -1,   153,    -1,   157,    -1,    46,    -1,   159,
      -1,   174,    -1,    48,    -1,   163,    -1,   168,    -1,   165,
      -1,   166,    -1,   164,    -1,   167,    -1,   170,    -1,   169,
      -1,   175,    -1,   176,    -1,   177,    -1,   178,    -1,   179,
      -1,   180,    -1,   351,    -1,   181,    -1,   353,    -1,   352,
      -1,   354,    -1,   182,    -1,   183,    -1,   186,    -1,     7,
      -1,   185,    -1,   188,    -1,    51,    -1,   191,    -1,   193,
      -1,   202,    -1,   356,    -1,     8,    -1,   206,    -1,   207,
      -1,   208,    -1,   290,    -1,   209,    -1,   212,    -1,   213,
      -1,   210,    -1,   211,    -1,   171,    -1,   172,    -1,   218,
      -1,    54,    -1,   220,    -1,    55,    -1,    56,    -1,   222,
      -1,   223,    -1,    57,    -1,    58,    -1,   226,    -1,   227,
      -1,   228,    -1,    59,    -1,   363,    -1,   230,    -1,   231,
      -1,   292,    -1,   364,    -1,   232,    -1,    62,    -1,   387,
      -1,   391,    -1,   389,    -1,    63,    -1,    64,    -1,   235,
      -1,    66,    -1,   294,    -1,   237,    -1,    68,    -1,   240,
      -1,   295,    -1,   245,    -1,    69,    -1,   296,    -1,   297,
      -1,   246,    -1,   253,    -1,   254,    -1,   258,    -1,   262,
      -1,   379,    -1,   266,    -1,   381,    -1,    -1,   229,   722,
     721,   723,    -1,    -1,   194,    -1,   724,   727,    -1,   723,
     406,   724,   727,    -1,    -1,   127,    -1,   157,    -1,   231,
      -1,    -1,   157,    -1,   231,    -1,   127,    -1,    -1,   157,
     411,    -1,   231,   411,    -1,   127,   411,    -1,   410,   717,
     641,   546,    -1,   728,   641,   731,    -1,   410,   410,   726,
     728,   641,   731,    -1,   245,   146,   153,   729,    -1,   271,
     229,   642,   731,    -1,   356,   641,   730,    -1,   356,   335,
     718,   641,   730,    -1,   716,    -1,   214,   254,    -1,   214,
      94,    -1,   220,   214,    -1,   230,    -1,   242,    -1,   356,
     404,   242,   405,    -1,   546,    -1,   102,    -1,   192,    -1,
      74,    -1,    -1,    47,   734,   733,   735,    -1,   239,    -1,
     238,    -1,   736,    -1,   735,   406,   736,    -1,   714,   586,
     737,    -1,   214,    -1,   265,    -1,   162,   265,    -1,   214,
     157,    -1,    70,   734,    -1,     5,   714,   193,   586,    -1,
       5,   715,     4,    -1,    -1,     5,   715,   214,   740,   741,
     588,   600,    -1,   742,    -1,   716,   743,    -1,   119,    -1,
       7,    -1,   119,    -1,     7,    -1,     8,    -1,     6,    -1,
      -1,   745,   744,   404,   646,   405,    -1,     9,    -1,    11,
      -1,    13,    -1,    12,    -1,    14,    -1,    -1,   225,   747,
     750,   192,   760,   124,   761,    -1,    -1,   128,   749,   750,
     192,   760,   243,   761,   766,   767,    -1,   751,    -1,    74,
     205,    -1,    74,    -1,   752,    -1,   751,   406,   752,    -1,
      -1,    60,   753,   763,    -1,    -1,    42,   754,   763,    -1,
      -1,    71,   755,   763,    -1,    -1,   216,   756,   763,    -1,
      36,    -1,   257,    -1,   139,    -1,    23,    -1,    33,    -1,
      38,    -1,    40,    -1,   218,    -1,   232,    -1,   206,    -1,
     118,    -1,   128,   194,    -1,    61,   100,    -1,    68,    -1,
      33,   240,   238,    -1,    47,   238,    -1,    55,    62,    -1,
      55,    29,    -1,    -1,    75,    -1,   759,   757,   758,    -1,
     759,    -1,   237,   242,    -1,   392,   242,    -1,   393,   242,
      -1,   398,    -1,   716,   411,   398,    -1,   398,   411,   398,
      -1,   714,    -1,   762,    -1,   761,   406,   762,    -1,   718,
     341,    87,   242,    -1,   718,   341,    87,   356,   242,    -1,
     718,    -1,    -1,   404,   764,   405,    -1,   764,   406,   765,
      -1,   765,    -1,   716,    -1,    -1,   221,   758,    -1,   221,
     233,    -1,   221,   266,    -1,   221,    51,    -1,    -1,   264,
     768,    -1,   768,   769,    -1,   769,    -1,   128,   194,    -1,
     176,   604,    -1,   177,   604,    -1,   175,   604,    -1,    -1,
      26,   771,   772,    -1,    -1,   379,    -1,    31,    -1,    57,
      -1,    57,   243,    59,   716,    -1,    59,   716,    -1,    -1,
     777,    -1,    -1,   255,   782,   778,   528,    -1,   777,    -1,
     780,    -1,    -1,    -1,   781,   595,   600,    -1,    -1,   109,
      -1,    74,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   609,   609,   623,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   649,   650,   651,
     652,   653,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   669,   668,   679,   680,   683,   688,   693,   698,
     703,   708,   725,   730,   735,   747,   746,   766,   765,   782,
     790,   789,   805,   806,   809,   810,   810,   814,   816,   815,
     818,   817,   823,   822,   838,   839,   842,   843,   846,   847,
     850,   853,   854,   856,   858,   861,   862,   865,   866,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   877,
     878,   879,   880,   893,   894,   895,   896,   897,   900,   901,
     902,   903,   904,   905,   906,   909,   910,   911,   912,   915,
     916,   917,   920,   921,   922,   924,   926,   929,   930,   933,
     934,   935,   938,   939,   943,   944,   948,   949,   956,   962,
     966,   970,   976,   978,   982,   985,   987,   990,   994,   993,
    1011,  1012,  1013,  1014,  1016,  1018,  1020,  1022,  1025,  1027,
    1030,  1031,  1032,  1033,  1034,  1036,  1037,  1039,  1041,  1043,
    1045,  1047,  1048,  1049,  1050,  1051,  1052,  1054,  1056,  1056,
    1062,  1062,  1070,  1071,  1072,  1075,  1076,  1077,  1078,  1081,
    1082,  1083,  1084,  1085,  1088,  1090,  1091,  1095,  1096,  1097,
    1100,  1107,  1108,  1111,  1112,  1115,  1116,  1117,  1120,  1121,
    1124,  1125,  1128,  1129,  1132,  1133,  1136,  1137,  1138,  1139,
    1140,  1141,  1142,  1143,  1146,  1147,  1148,  1152,  1153,  1159,
    1160,  1163,  1164,  1168,  1169,  1170,  1171,  1174,  1175,  1176,
    1177,  1178,  1181,  1182,  1183,  1184,  1185,  1186,  1189,  1190,
    1193,  1194,  1195,  1198,  1199,  1200,  1203,  1204,  1207,  1208,
    1211,  1212,  1215,  1216,  1224,  1223,  1250,  1251,  1252,  1255,
    1258,  1259,  1260,  1262,  1261,  1268,  1275,  1267,  1285,  1291,
    1296,  1297,  1304,  1305,  1306,  1312,  1318,  1330,  1331,  1334,
    1335,  1338,  1339,  1342,  1343,  1344,  1347,  1348,  1349,  1352,
    1353,  1354,  1355,  1361,  1368,  1375,  1382,  1390,  1390,  1395,
    1396,  1399,  1400,  1401,  1406,  1405,  1416,  1415,  1426,  1425,
    1436,  1437,  1440,  1441,  1444,  1445,  1446,  1450,  1449,  1461,
    1460,  1471,  1472,  1475,  1476,  1479,  1480,  1481,  1482,  1483,
    1487,  1486,  1498,  1497,  1506,  1507,  1510,  1523,  1526,  1526,
    1528,  1528,  1532,  1532,  1539,  1540,  1541,  1542,  1543,  1546,
    1549,  1551,  1554,  1555,  1558,  1559,  1565,  1566,  1567,  1568,
    1574,  1580,  1581,  1585,  1588,  1590,  1598,  1609,  1610,  1611,
    1619,  1630,  1633,  1636,  1637,  1640,  1641,  1642,  1643,  1644,
    1647,  1648,  1651,  1652,  1656,  1658,  1660,  1662,  1664,  1665,
    1666,  1667,  1668,  1669,  1670,  1671,  1672,  1673,  1674,  1675,
    1676,  1677,  1678,  1679,  1680,  1681,  1682,  1683,  1684,  1685,
    1686,  1687,  1688,  1689,  1690,  1691,  1693,  1698,  1700,  1702,
    1703,  1704,  1705,  1706,  1707,  1708,  1709,  1710,  1711,  1712,
    1713,  1714,  1715,  1716,  1717,  1718,  1719,  1720,  1721,  1722,
    1723,  1724,  1725,  1726,  1727,  1728,  1729,  1731,  1733,  1737,
    1739,  1741,  1743,  1745,  1746,  1747,  1748,  1749,  1750,  1751,
    1752,  1753,  1754,  1755,  1756,  1757,  1758,  1759,  1760,  1761,
    1762,  1763,  1764,  1765,  1766,  1767,  1768,  1769,  1770,  1771,
    1773,  1775,  1778,  1779,  1780,  1785,  1790,  1795,  1796,  1797,
    1798,  1799,  1800,  1801,  1802,  1805,  1808,  1809,  1810,  1812,
    1813,  1815,  1817,  1819,  1821,  1823,  1825,  1827,  1829,  1831,
    1833,  1835,  1837,  1842,  1844,  1846,  1851,  1853,  1855,  1860,
    1861,  1863,  1865,  1867,  1869,  1871,  1873,  1875,  1877,  1879,
    1881,  1883,  1887,  1889,  1891,  1893,  1895,  1898,  1900,  1906,
    1911,  1913,  1915,  1917,  1919,  1921,  1923,  1925,  1930,  1935,
    1937,  1939,  1941,  1943,  1947,  1949,  1951,  1953,  1955,  1957,
    1959,  1960,  1962,  1964,  1966,  1968,  1970,  1972,  1974,  1976,
    1978,  1980,  1982,  1984,  1991,  1998,  2005,  2012,  2019,  2026,
    2030,  2035,  2037,  2039,  2045,  2047,  2049,  2051,  2053,  2058,
    2062,  2063,  2066,  2068,  2070,  2072,  2074,  2077,  2079,  2076,
    2082,  2084,  2086,  2088,  2090,  2095,  2094,  2103,  2104,  2105,
    2106,  2107,  2108,  2109,  2110,  2111,  2115,  2115,  2120,  2121,
    2124,  2125,  2128,  2128,  2133,  2134,  2137,  2138,  2141,  2142,
    2145,  2145,  2150,  2156,  2164,  2165,  2168,  2169,  2170,  2171,
    2172,  2174,  2178,  2176,  2186,  2189,  2188,  2196,  2202,  2205,
    2204,  2212,  2218,  2222,  2223,  2224,  2228,  2228,  2241,  2245,
    2246,  2249,  2250,  2256,  2263,  2272,  2272,  2276,  2278,  2280,
    2284,  2290,  2298,  2299,  2300,  2301,  2302,  2303,  2304,  2305,
    2306,  2307,  2308,  2309,  2310,  2312,  2314,  2315,  2318,  2319,
    2322,  2324,  2328,  2329,  2337,  2339,  2339,  2350,  2351,  2358,
    2360,  2363,  2365,  2369,  2370,  2376,  2388,  2390,  2394,  2393,
    2407,  2409,  2413,  2414,  2415,  2419,  2421,  2420,  2435,  2441,
    2447,  2457,  2461,  2465,  2466,  2467,  2468,  2469,  2472,  2473,
    2474,  2475,  2476,  2478,  2481,  2480,  2494,  2495,  2498,  2499,
    2502,  2513,  2512,  2520,  2533,  2532,  2548,  2555,  2555,  2565,
    2572,  2581,  2582,  2585,  2589,  2590,  2594,  2595,  2602,  2604,
    2602,  2614,  2620,  2613,  2629,  2630,  2631,  2632,  2636,  2637,
    2640,  2641,  2644,  2653,  2654,  2655,  2657,  2656,  2666,  2667,
    2668,  2671,  2672,  2675,  2676,  2676,  2677,  2677,  2681,  2682,
    2685,  2687,  2690,  2698,  2699,  2703,  2704,  2709,  2708,  2721,
    2722,  2725,  2730,  2738,  2739,  2746,  2755,  2745,  2769,  2774,
    2781,  2782,  2788,  2787,  2801,  2800,  2809,  2808,  2812,  2811,
    2818,  2819,  2822,  2828,  2838,  2839,  2843,  2844,  2847,  2848,
    2851,  2862,  2864,  2868,  2868,  2873,  2875,  2881,  2888,  2895,
    2903,  2913,  2917,  2922,  2921,  2928,  2936,  2938,  2940,  2942,
    2948,  2950,  2957,  2963,  2967,  2973,  2974,  2976,  2978,  2981,
    2982,  2985,  2986,  2989,  2990,  2993,  2994,  3000,  2999,  3009,
    3014,  3015,  3018,  3019,  3020,  3028,  3027,  3037,  3038,  3041,
    3041,  3042,  3043,  3044,  3045,  3046,  3047,  3048,  3049,  3050,
    3051,  3054,  3055,  3059,  3058,  3067,  3068,  3071,  3072,  3073,
    3077,  3076,  3090,  3104,  3113,  3112,  3129,  3137,  3143,  3144,
    3147,  3148,  3149,  3153,  3154,  3155,  3157,  3159,  3162,  3163,
    3166,  3167,  3173,  3174,  3176,  3178,  3181,  3182,  3185,  3186,
    3188,  3190,  3196,  3197,  3201,  3202,  3209,  3210,  3211,  3212,
    3213,  3214,  3215,  3217,  3218,  3219,  3220,  3227,  3228,  3231,
    3232,  3237,  3240,  3245,  3250,  3255,  3263,  3264,  3265,  3268,
    3269,  3270,  3274,  3275,  3279,  3280,  3291,  3292,  3293,  3296,
    3302,  3312,  3313,  3314,  3315,  3316,  3317,  3318,  3319,  3320,
    3321,  3322,  3323,  3324,  3325,  3326,  3327,  3328,  3329,  3330,
    3331,  3332,  3333,  3334,  3335,  3336,  3337,  3338,  3339,  3340,
    3341,  3342,  3343,  3344,  3345,  3346,  3347,  3348,  3349,  3350,
    3351,  3352,  3353,  3354,  3355,  3356,  3357,  3358,  3359,  3360,
    3361,  3362,  3363,  3364,  3365,  3366,  3367,  3368,  3369,  3370,
    3371,  3372,  3373,  3374,  3375,  3376,  3377,  3378,  3379,  3380,
    3381,  3382,  3383,  3384,  3385,  3386,  3387,  3388,  3389,  3390,
    3391,  3392,  3393,  3394,  3395,  3396,  3397,  3398,  3399,  3400,
    3401,  3402,  3403,  3404,  3405,  3406,  3407,  3408,  3409,  3410,
    3411,  3412,  3413,  3414,  3415,  3416,  3417,  3418,  3419,  3420,
    3421,  3422,  3423,  3424,  3425,  3426,  3427,  3428,  3429,  3430,
    3431,  3432,  3433,  3434,  3435,  3436,  3437,  3438,  3439,  3440,
    3441,  3442,  3443,  3444,  3445,  3446,  3447,  3448,  3449,  3450,
    3451,  3452,  3453,  3454,  3455,  3456,  3457,  3458,  3459,  3460,
    3461,  3462,  3463,  3464,  3465,  3466,  3467,  3468,  3469,  3475,
    3474,  3486,  3487,  3490,  3491,  3494,  3495,  3496,  3497,  3501,
    3502,  3503,  3504,  3508,  3509,  3510,  3511,  3515,  3519,  3524,
    3529,  3536,  3543,  3553,  3560,  3570,  3571,  3572,  3573,  3577,
    3578,  3592,  3593,  3594,  3595,  3603,  3602,  3611,  3612,  3615,
    3616,  3619,  3623,  3624,  3625,  3626,  3629,  3637,  3643,  3650,
    3649,  3662,  3663,  3666,  3667,  3670,  3671,  3672,  3673,  3675,
    3674,  3684,  3685,  3686,  3687,  3688,  3694,  3693,  3711,  3710,
    3728,  3729,  3730,  3733,  3734,  3737,  3737,  3738,  3738,  3739,
    3739,  3740,  3740,  3741,  3742,  3743,  3744,  3745,  3746,  3747,
    3748,  3749,  3750,  3751,  3752,  3753,  3754,  3755,  3756,  3757,
    3758,  3763,  3764,  3768,  3769,  3773,  3783,  3793,  3806,  3818,
    3830,  3842,  3853,  3854,  3863,  3877,  3879,  3885,  3889,  3892,
    3893,  3896,  3915,  3916,  3920,  3924,  3928,  3935,  3936,  3939,
    3940,  3943,  3944,  3949,  3954,  3961,  3961,  3965,  3966,  3969,
    3972,  3976,  3982,  3994,  3995,  3999,  3998,  4020,  4021,  4027,
    4029,  4029,  4049,  4050,  4051
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END_OF_INPUT", "CLOSE_SYM",
  "HANDLER_SYM", "LAST_SYM", "NEXT_SYM", "PREV_SYM", "EQ", "EQUAL_SYM",
  "GE", "GT_SYM", "LE", "LT", "NE", "IS", "SHIFT_LEFT", "SHIFT_RIGHT",
  "SET_VAR", "ABORT_SYM", "ADD", "AFTER_SYM", "ALTER", "ANALYZE_SYM",
  "AVG_SYM", "BEGIN_SYM", "BINLOG_SYM", "CHANGE", "CLIENT_SYM",
  "COMMENT_SYM", "COMMIT_SYM", "COUNT_SYM", "CREATE", "CROSS", "CUBE_SYM",
  "DELETE_SYM", "DO_SYM", "DROP", "EVENTS_SYM", "EXECUTE_SYM", "FLUSH_SYM",
  "INSERT", "IO_THREAD", "KILL_SYM", "LOAD", "LOCKS_SYM", "LOCK_SYM",
  "MASTER_SYM", "MAX_SYM", "MIN_SYM", "NONE_SYM", "OPTIMIZE", "PURGE",
  "REPAIR", "REPLICATION", "RESET_SYM", "ROLLBACK_SYM", "ROLLUP_SYM",
  "SAVEPOINT_SYM", "SELECT_SYM", "SHOW", "SLAVE", "SQL_THREAD",
  "START_SYM", "STD_SYM", "STOP_SYM", "SUM_SYM", "SUPER_SYM",
  "TRUNCATE_SYM", "UNLOCK_SYM", "UPDATE_SYM", "ACTION", "AGGREGATE_SYM",
  "ALL", "AND", "AS", "ASC", "AUTO_INC", "AVG_ROW_LENGTH", "BACKUP_SYM",
  "BERKELEY_DB_SYM", "BINARY", "BIT_SYM", "BOOL_SYM", "BOOLEAN_SYM",
  "BOTH", "BY", "CACHE_SYM", "CASCADE", "CAST_SYM", "CHARSET",
  "CHECKSUM_SYM", "CHECK_SYM", "COMMITTED_SYM", "COLUMNS", "COLUMN_SYM",
  "CONCURRENT", "CONSTRAINT", "CONVERT_SYM", "DATABASES", "DATA_SYM",
  "DEFAULT", "DELAYED_SYM", "DELAY_KEY_WRITE_SYM", "DESC", "DESCRIBE",
  "DES_KEY_FILE", "DISABLE_SYM", "DISTINCT", "DYNAMIC_SYM", "ENABLE_SYM",
  "ENCLOSED", "ESCAPED", "DIRECTORY_SYM", "ESCAPE_SYM", "EXISTS",
  "EXTENDED_SYM", "FILE_SYM", "FIRST_SYM", "FIXED_SYM", "FLOAT_NUM",
  "FORCE_SYM", "FOREIGN", "FROM", "FULL", "FULLTEXT_SYM", "GLOBAL_SYM",
  "GRANT", "GRANTS", "GREATEST_SYM", "GROUP", "HAVING", "HEAP_SYM",
  "HEX_NUM", "HIGH_PRIORITY", "HOSTS_SYM", "IDENT", "IGNORE_SYM", "INDEX",
  "INDEXES", "INFILE", "INNER_SYM", "INNOBASE_SYM", "INTO", "IN_SYM",
  "ISOLATION", "ISAM_SYM", "JOIN_SYM", "KEYS", "KEY_SYM", "LEADING",
  "LEAST_SYM", "LEVEL_SYM", "LEX_HOSTNAME", "LIKE", "LINES", "LOCAL_SYM",
  "LOG_SYM", "LOGS_SYM", "LONG_NUM", "LONG_SYM", "LOW_PRIORITY",
  "MASTER_HOST_SYM", "MASTER_USER_SYM", "MASTER_LOG_FILE_SYM",
  "MASTER_LOG_POS_SYM", "MASTER_PASSWORD_SYM", "MASTER_PORT_SYM",
  "MASTER_CONNECT_RETRY_SYM", "MASTER_SERVER_ID_SYM", "RELAY_LOG_FILE_SYM",
  "RELAY_LOG_POS_SYM", "MATCH", "MAX_ROWS", "MAX_CONNECTIONS_PER_HOUR",
  "MAX_QUERIES_PER_HOUR", "MAX_UPDATES_PER_HOUR", "MEDIUM_SYM",
  "MERGE_SYM", "MEMORY_SYM", "MIN_ROWS", "MYISAM_SYM", "NATIONAL_SYM",
  "NATURAL", "NEW_SYM", "NCHAR_SYM", "NOT", "NO_SYM", "NULL_SYM", "NUM",
  "OFFSET_SYM", "ON", "OPEN_SYM", "OPTION", "OPTIONALLY", "OR",
  "OR_OR_CONCAT", "ORDER_SYM", "OUTER", "OUTFILE", "DUMPFILE",
  "PACK_KEYS_SYM", "PARTIAL", "PRIMARY_SYM", "PRIVILEGES", "PROCESS",
  "PROCESSLIST_SYM", "QUERY_SYM", "RAID_0_SYM", "RAID_STRIPED_SYM",
  "RAID_TYPE", "RAID_CHUNKS", "RAID_CHUNKSIZE", "READ_SYM", "REAL_NUM",
  "REFERENCES", "REGEXP", "RELOAD", "RENAME", "REPEATABLE_SYM",
  "REQUIRE_SYM", "RESOURCES", "RESTORE_SYM", "RESTRICT", "REVOKE",
  "ROWS_SYM", "ROW_FORMAT_SYM", "ROW_SYM", "SET", "SERIALIZABLE_SYM",
  "SESSION_SYM", "SHUTDOWN", "SSL_SYM", "STARTING", "STATUS_SYM",
  "STRAIGHT_JOIN", "SUBJECT_SYM", "TABLES", "TABLE_SYM", "TEMPORARY",
  "TERMINATED", "TEXT_STRING", "TO_SYM", "TRAILING", "TRANSACTION_SYM",
  "TYPE_SYM", "FUNC_ARG0", "FUNC_ARG1", "FUNC_ARG2", "FUNC_ARG3",
  "UDF_RETURNS_SYM", "UDF_SONAME_SYM", "UDF_SYM", "UNCOMMITTED_SYM",
  "UNION_SYM", "UNIQUE_SYM", "USAGE", "USE_FRM", "USE_SYM", "USING",
  "VALUES", "VARIABLES", "WHERE", "WITH", "WRITE_SYM", "X509_SYM", "XOR",
  "COMPRESSED_SYM", "BIGINT", "BLOB_SYM", "CHAR_SYM", "CHANGED",
  "COALESCE", "DATETIME", "DATE_SYM", "DECIMAL_SYM", "DOUBLE_SYM", "ENUM",
  "FAST_SYM", "FLOAT_SYM", "INT_SYM", "LIMIT", "LONGBLOB", "LONGTEXT",
  "MEDIUMBLOB", "MEDIUMINT", "MEDIUMTEXT", "NUMERIC_SYM", "PRECISION",
  "QUICK", "REAL", "SIGNED_SYM", "SMALLINT", "STRING_SYM", "TEXT_SYM",
  "TIMESTAMP", "TIME_SYM", "TINYBLOB", "TINYINT", "TINYTEXT",
  "ULONGLONG_NUM", "UNSIGNED", "VARBINARY", "VARCHAR", "VARYING",
  "ZEROFILL", "AGAINST", "ATAN", "BETWEEN_SYM", "BIT_AND", "BIT_OR",
  "CASE_SYM", "CONCAT", "CONCAT_WS", "CURDATE", "CURTIME", "DATABASE",
  "DATE_ADD_INTERVAL", "DATE_SUB_INTERVAL", "DAY_HOUR_SYM",
  "DAY_MINUTE_SYM", "DAY_SECOND_SYM", "DAY_SYM", "DECODE_SYM",
  "DES_ENCRYPT_SYM", "DES_DECRYPT_SYM", "ELSE", "ELT_FUNC", "ENCODE_SYM",
  "ENCRYPT", "EXPORT_SET", "EXTRACT_SYM", "FIELD_FUNC", "FORMAT_SYM",
  "FOR_SYM", "FROM_UNIXTIME", "GROUP_UNIQUE_USERS", "HOUR_MINUTE_SYM",
  "HOUR_SECOND_SYM", "HOUR_SYM", "IDENTIFIED_SYM", "IF", "INSERT_METHOD",
  "INTERVAL_SYM", "LAST_INSERT_ID", "LEFT", "LOCATE", "MAKE_SET_SYM",
  "MASTER_POS_WAIT", "MINUTE_SECOND_SYM", "MINUTE_SYM", "MODE_SYM",
  "MODIFY_SYM", "MONTH_SYM", "NOW_SYM", "PASSWORD", "POSITION_SYM",
  "PROCEDURE", "RAND", "REPLACE", "RIGHT", "ROUND", "SECOND_SYM",
  "SHARE_SYM", "SUBSTRING", "SUBSTRING_INDEX", "TRIM", "UDA_CHAR_SUM",
  "UDA_FLOAT_SUM", "UDA_INT_SUM", "UDF_CHAR_FUNC", "UDF_FLOAT_FUNC",
  "UDF_INT_FUNC", "UNIQUE_USERS", "UNIX_TIMESTAMP", "USER", "WEEK_SYM",
  "WHEN_SYM", "WORK_SYM", "YEAR_MONTH_SYM", "YEAR_SYM", "YEARWEEK",
  "BENCHMARK_SYM", "END", "THEN_SYM", "SQL_BIG_RESULT", "SQL_CACHE_SYM",
  "SQL_CALC_FOUND_ROWS", "SQL_NO_CACHE_SYM", "SQL_SMALL_RESULT",
  "SQL_BUFFER_RESULT", "ISSUER_SYM", "CIPHER_SYM", "'|'", "'&'", "'-'",
  "'+'", "'*'", "'/'", "'%'", "'~'", "NEG", "'^'", "'('", "')'", "','",
  "'!'", "'{'", "'}'", "'@'", "'.'", "$accept", "query", "verb_clause",
  "change", "@1", "master_defs", "master_def", "create", "@2", "@3", "@4",
  "create2", "create2a", "@5", "create3", "@6", "@7", "create_select",
  "@8", "opt_as", "opt_table_options", "table_options", "table_option",
  "opt_if_not_exists", "opt_create_table_options", "create_table_options",
  "create_table_option", "table_types", "row_types", "raid_types",
  "merge_insert_types", "opt_select_from", "udf_func_type", "udf_type",
  "field_list", "field_list_item", "column_def", "key_def",
  "opt_check_constraint", "check_constraint", "opt_constraint",
  "constraint", "field_spec", "@9", "type", "@10", "@11", "char",
  "varchar", "int_type", "real_type", "float_options", "precision",
  "field_options", "field_opt_list", "field_option", "opt_len",
  "opt_precision", "opt_attribute", "opt_attribute_list", "attribute",
  "opt_binary", "references", "opt_on_delete", "opt_on_delete_list",
  "opt_on_delete_item", "delete_option", "key_type", "key_or_index",
  "keys_or_index", "opt_unique_or_fulltext", "key_list", "key_part",
  "opt_ident", "string_list", "alter", "@12", "alter_list", "add_column",
  "alter_list_item", "@13", "@14", "@15", "opt_column", "opt_ignore",
  "opt_restrict", "opt_place", "opt_to", "slave", "start", "@16",
  "slave_thread_opts", "slave_thread_opt", "restore", "@17", "backup",
  "@18", "repair", "@19", "opt_mi_repair_type", "mi_repair_types",
  "mi_repair_type", "analyze", "@20", "check", "@21", "opt_mi_check_type",
  "mi_check_types", "mi_check_type", "optimize", "@22", "rename", "@23",
  "table_to_table_list", "table_to_table", "select", "select_init", "@24",
  "@25", "select_part2", "@26", "select_into", "select_from",
  "select_options", "select_option_list", "select_option",
  "select_lock_type", "select_item_list", "select_item", "remember_name",
  "remember_end", "select_item2", "select_alias", "optional_braces",
  "expr", "expr_expr", "no_in_expr", "no_and_expr", "simple_expr",
  "udf_expr_list", "sum_expr", "@27", "@28", "in_sum_expr", "@29",
  "cast_type", "expr_list", "@30", "expr_list2", "ident_list_arg",
  "ident_list", "@31", "ident_list2", "opt_expr", "opt_else", "when_list",
  "@32", "when_list2", "opt_pad", "join_table_list", "@33", "@34", "@35",
  "normal_join", "join_table", "@36", "opt_outer", "opt_key_definition",
  "key_usage_list", "@37", "key_usage_list2", "using_list", "interval",
  "table_alias", "opt_table_alias", "opt_all", "where_clause",
  "having_clause", "@38", "opt_escape", "group_clause", "group_list",
  "olap_opt", "opt_order_clause", "order_clause", "@39", "order_list",
  "order_dir", "limit_clause", "@40", "limit_options",
  "delete_limit_clause", "ULONG_NUM", "ulonglong_num", "procedure_clause",
  "@41", "procedure_list", "procedure_list2", "procedure_item", "into",
  "@42", "do", "@43", "drop", "@44", "table_list", "table_name",
  "if_exists", "opt_temporary", "insert", "@45", "@46", "replace", "@47",
  "@48", "insert_lock_option", "replace_lock_option", "insert2",
  "insert_table", "insert_field_spec", "@49", "opt_field_spec", "fields",
  "insert_values", "@50", "@51", "values_list", "ident_eq_list",
  "ident_eq_value", "equal", "opt_equal", "no_braces", "@52", "opt_values",
  "values", "expr_or_default", "update", "@53", "@54", "update_list",
  "opt_low_priority", "delete", "@55", "single_multi", "@56", "@57", "@58",
  "table_wild_list", "table_wild_one", "opt_wild", "opt_delete_options",
  "opt_delete_option", "truncate", "opt_table_sym", "show", "@59",
  "show_param", "@60", "opt_db", "wild", "opt_full", "from_or_in",
  "binlog_in", "binlog_from", "describe", "@61", "describe_command",
  "opt_describe_column", "flush", "@62", "flush_options", "flush_option",
  "@63", "opt_table_list", "reset", "@64", "reset_options", "reset_option",
  "purge", "@65", "kill", "use", "load", "@66", "opt_local",
  "load_data_lock", "opt_duplicate", "opt_field_term", "field_term_list",
  "field_term", "opt_line_term", "line_term_list", "line_term",
  "opt_ignore_lines", "text_literal", "text_string", "literal",
  "insert_ident", "table_wild", "order_ident", "simple_ident",
  "field_ident", "table_ident", "table_ident_ref", "ident",
  "ident_or_text", "user", "keyword", "set", "@67", "opt_option",
  "option_value_list", "option_type", "opt_var_type", "opt_var_ident_type",
  "option_value", "internal_variable_name", "isolation_types",
  "text_or_password", "set_expr_or_default", "lock", "@68",
  "table_or_tables", "table_lock_list", "table_lock", "lock_option",
  "unlock", "handler", "@69", "handler_read_or_scan",
  "handler_scan_function", "handler_rkey_function", "@70",
  "handler_rkey_mode", "revoke", "@71", "grant", "@72", "grant_privileges",
  "grant_privilege_list", "grant_privilege", "@73", "@74", "@75", "@76",
  "opt_and", "require_list", "require_list_element", "opt_table",
  "user_list", "grant_user", "opt_column_list", "column_list",
  "column_list_id", "require_clause", "grant_options", "grant_option_list",
  "grant_option", "begin", "@77", "opt_work", "commit", "rollback",
  "savepoint", "opt_union", "union_list", "@78", "union_opt",
  "optional_order_or_limit", "@79", "union_option", 0
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
     645,   646,   647,   648,   124,    38,    45,    43,    42,    47,
      37,   126,   649,    94,    40,    41,    44,    33,   123,   125,
      64,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   412,   413,   413,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   416,   415,   417,   417,   418,   418,   418,   418,
     418,   418,   418,   418,   418,   420,   419,   421,   419,   419,
     422,   419,   423,   423,   424,   425,   424,   426,   427,   426,
     428,   426,   430,   429,   431,   431,   432,   432,   433,   433,
     434,   435,   435,   436,   436,   437,   437,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   439,   439,
     439,   439,   439,   439,   439,   440,   440,   440,   440,   441,
     441,   441,   442,   442,   442,   443,   443,   444,   444,   445,
     445,   445,   446,   446,   447,   447,   448,   448,   449,   449,
     449,   449,   450,   450,   451,   452,   452,   453,   455,   454,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   457,   456,
     458,   456,   459,   459,   459,   460,   460,   460,   460,   461,
     461,   461,   461,   461,   462,   462,   462,   463,   463,   463,
     464,   465,   465,   466,   466,   467,   467,   467,   468,   468,
     469,   469,   470,   470,   471,   471,   472,   472,   472,   472,
     472,   472,   472,   472,   473,   473,   473,   474,   474,   475,
     475,   476,   476,   477,   477,   477,   477,   478,   478,   478,
     478,   478,   479,   479,   479,   479,   479,   479,   480,   480,
     481,   481,   481,   482,   482,   482,   483,   483,   484,   484,
     485,   485,   486,   486,   488,   487,   489,   489,   489,   490,
     491,   491,   491,   492,   491,   493,   494,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   495,
     495,   496,   496,   497,   497,   497,   498,   498,   498,   499,
     499,   499,   499,   500,   500,   500,   500,   502,   501,   503,
     503,   504,   504,   504,   506,   505,   508,   507,   510,   509,
     511,   511,   512,   512,   513,   513,   513,   515,   514,   517,
     516,   518,   518,   519,   519,   520,   520,   520,   520,   520,
     522,   521,   524,   523,   525,   525,   526,   527,   529,   528,
     530,   528,   532,   531,   533,   533,   533,   533,   533,   534,
     535,   535,   536,   536,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   538,   538,   538,   539,   539,   539,
     540,   541,   542,   543,   543,   544,   544,   544,   544,   544,
     545,   545,   546,   546,   547,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     551,   551,   552,   552,   552,   552,   552,   553,   554,   552,
     552,   552,   552,   552,   552,   556,   555,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   559,   558,   560,   560,
     561,   561,   563,   562,   564,   564,   565,   565,   566,   566,
     568,   567,   569,   569,   570,   570,   571,   571,   571,   571,
     571,   571,   572,   571,   571,   573,   571,   571,   571,   574,
     571,   571,   571,   575,   575,   575,   577,   576,   576,   578,
     578,   579,   579,   579,   579,   581,   580,   582,   582,   582,
     583,   583,   584,   584,   584,   584,   584,   584,   584,   584,
     584,   584,   584,   584,   584,   585,   585,   585,   586,   586,
     587,   587,   588,   588,   589,   590,   589,   591,   591,   592,
     592,   593,   593,   594,   594,   594,   595,   595,   597,   596,
     598,   598,   599,   599,   599,   600,   601,   600,   602,   602,
     602,   603,   603,   604,   604,   604,   604,   604,   605,   605,
     605,   605,   605,   606,   607,   606,   608,   608,   609,   609,
     610,   612,   611,   611,   614,   613,   615,   616,   615,   615,
     615,   617,   617,   618,   619,   619,   620,   620,   622,   623,
     621,   625,   626,   624,   627,   627,   627,   627,   628,   628,
     629,   629,   630,   631,   631,   631,   632,   631,   633,   633,
     633,   634,   634,   635,   636,   635,   637,   635,   638,   638,
     639,   639,   640,   641,   641,   642,   642,   644,   643,   645,
     645,   646,   646,   647,   647,   649,   650,   648,   651,   651,
     652,   652,   654,   653,   656,   655,   657,   655,   658,   655,
     659,   659,   660,   660,   661,   661,   662,   662,   663,   663,
     664,   665,   665,   667,   666,   668,   668,   668,   668,   668,
     668,   668,   668,   669,   668,   668,   668,   668,   668,   668,
     668,   668,   668,   668,   668,   670,   670,   671,   671,   672,
     672,   673,   673,   674,   674,   675,   675,   677,   676,   676,
     678,   678,   679,   679,   679,   681,   680,   682,   682,   684,
     683,   683,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   685,   685,   687,   686,   688,   688,   689,   689,   689,
     691,   690,   692,   693,   695,   694,   694,   694,   696,   696,
     697,   697,   697,   698,   698,   698,   699,   699,   700,   700,
     701,   701,   701,   701,   702,   702,   703,   703,   704,   704,
     705,   705,   706,   706,   707,   707,   708,   708,   708,   708,
     708,   708,   708,   708,   708,   708,   708,   709,   709,   710,
     710,   711,   712,   712,   712,   712,   713,   713,   713,   714,
     714,   714,   715,   715,   716,   716,   717,   717,   717,   718,
     718,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   721,
     720,   722,   722,   723,   723,   724,   724,   724,   724,   725,
     725,   725,   725,   726,   726,   726,   726,   727,   727,   727,
     727,   727,   727,   727,   728,   729,   729,   729,   729,   730,
     730,   731,   731,   731,   731,   733,   732,   734,   734,   735,
     735,   736,   737,   737,   737,   737,   738,   739,   739,   740,
     739,   741,   741,   742,   742,   743,   743,   743,   743,   744,
     743,   745,   745,   745,   745,   745,   747,   746,   749,   748,
     750,   750,   750,   751,   751,   753,   752,   754,   752,   755,
     752,   756,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   757,   757,   758,   758,   759,   759,   759,   760,   760,
     760,   760,   761,   761,   762,   762,   762,   763,   763,   764,
     764,   765,   766,   766,   766,   766,   766,   767,   767,   768,
     768,   769,   769,   769,   769,   771,   770,   772,   772,   773,
     774,   774,   775,   776,   776,   778,   777,   779,   779,   780,
     781,   780,   782,   782,   782
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     0,     7,     0,    10,     4,
       0,     9,     2,     2,     4,     0,     4,     0,     0,     5,
       0,     7,     0,     5,     0,     1,     0,     1,     1,     2,
       1,     0,     3,     0,     1,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     3,     4,     3,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     0,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     5,     8,
       2,     2,     0,     1,     2,     0,     1,     2,     0,     4,
       3,     3,     3,     2,     1,     5,     2,     4,     5,     4,
       3,     1,     1,     1,     4,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     3,     3,     0,     5,
       0,     5,     1,     1,     2,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     3,     1,
       5,     0,     1,     2,     1,     1,     1,     1,     0,     3,
       0,     1,     0,     1,     2,     1,     1,     2,     2,     1,
       2,     1,     2,     2,     0,     1,     4,     3,     6,     0,
       1,     2,     1,     3,     3,     2,     2,     1,     1,     2,
       2,     2,     3,     1,     1,     2,     2,     3,     1,     1,
       1,     1,     1,     0,     1,     1,     4,     2,     1,     4,
       0,     1,     1,     3,     0,     6,     0,     1,     3,     2,
       3,     2,     4,     0,     6,     0,     0,     8,     4,     3,
       4,     3,     2,     2,     6,     5,     3,     1,     1,     0,
       1,     0,     1,     0,     1,     1,     0,     2,     1,     0,
       1,     1,     1,     3,     3,     3,     3,     0,     3,     1,
       3,     0,     1,     1,     0,     6,     0,     6,     0,     5,
       0,     1,     1,     2,     1,     1,     1,     0,     5,     0,
       5,     0,     1,     1,     2,     1,     1,     1,     1,     1,
       0,     5,     0,     4,     1,     3,     3,     1,     0,     4,
       0,     6,     0,     5,     1,     1,     1,     2,     2,     8,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     4,     3,     1,     1,
       4,     0,     0,     1,     1,     0,     2,     2,     1,     1,
       0,     2,     1,     1,     5,     6,     5,     6,     3,     3,
       3,     3,     4,     5,     3,     4,     3,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     5,     5,     6,     3,
       3,     3,     3,     4,     5,     3,     4,     3,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     5,     1,     5,
       6,     5,     6,     3,     3,     3,     4,     5,     3,     4,
       3,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       5,     1,     1,     1,     4,     2,     4,     1,     2,     2,
       2,     2,     3,     4,     6,     9,     2,     6,     6,     6,
       3,     4,     6,     8,     4,     6,     4,     4,     4,     6,
       2,     2,     4,     8,     8,     3,     6,     6,     4,     6,
       6,     6,     4,     6,     4,     6,     8,    10,    12,     6,
       4,     6,     6,     4,     8,    10,     5,     6,     3,     4,
       6,     6,     8,     6,     6,     4,     6,     6,     8,     4,
       4,     2,     4,     4,     6,     4,     3,     8,     6,     4,
       6,     4,     8,     6,     8,     6,     8,     4,     7,     7,
       7,     6,     6,     4,     4,     4,     4,     4,     4,    10,
       3,     4,     3,     4,     6,     4,     4,     6,     6,     6,
       0,     1,     4,     4,     4,     5,     4,     0,     0,     7,
      10,     4,     4,     4,     4,     0,     3,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     0,     2,     1,     3,
       1,     3,     0,     2,     1,     3,     0,     1,     0,     2,
       0,     2,     3,     5,     0,     1,     3,     1,     3,     3,
       3,     5,     0,     8,     7,     0,    10,     6,     7,     0,
      10,     6,     4,     1,     2,     2,     0,     4,    10,     0,
       1,     0,     2,     2,     2,     0,     5,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     0,     2,
       0,     1,     0,     2,     0,     0,     3,     2,     0,     0,
       4,     4,     2,     0,     2,     2,     0,     1,     0,     4,
       4,     2,     0,     1,     1,     0,     0,     3,     1,     3,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     6,     0,     1,     3,     1,
       2,     0,     6,     3,     0,     3,     6,     0,     6,     4,
       3,     1,     3,     1,     0,     2,     0,     1,     0,     0,
       7,     0,     0,     6,     0,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     3,     4,     0,     3,     0,     3,
       2,     3,     1,     2,     0,     3,     0,     5,     3,     1,
       3,     1,     3,     1,     1,     0,     1,     0,     4,     0,
       1,     3,     1,     1,     1,     0,     0,    11,     5,     3,
       0,     1,     0,     4,     0,     6,     0,     5,     0,     6,
       1,     3,     2,     4,     0,     2,     0,     2,     1,     1,
       3,     0,     1,     0,     3,     2,     3,     4,     4,     6,
      16,     2,     2,     0,     6,     4,     2,     2,     2,     3,
       1,     3,     3,     2,     2,     0,     2,     0,     2,     0,
       1,     1,     1,     0,     2,     0,     2,     0,     4,     2,
       1,     1,     0,     1,     1,     0,     3,     3,     1,     0,
       3,     4,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     3,     3,     1,     1,     1,     2,
       0,     6,     2,     2,     0,    15,     5,     4,     0,     1,
       0,     1,     1,     0,     1,     1,     0,     2,     2,     1,
       3,     4,     3,     3,     0,     2,     2,     1,     3,     3,
       0,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     3,
       5,     1,     1,     3,     4,     5,     1,     3,     2,     1,
       3,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     0,     1,     2,     4,     0,     1,     1,     1,     0,
       1,     1,     1,     0,     2,     2,     2,     4,     3,     6,
       4,     4,     3,     5,     1,     2,     2,     2,     1,     1,
       4,     1,     1,     1,     1,     0,     4,     1,     1,     1,
       3,     3,     1,     1,     2,     2,     2,     4,     3,     0,
       7,     1,     2,     1,     1,     1,     1,     1,     1,     0,
       5,     1,     1,     1,     1,     1,     0,     7,     0,     9,
       1,     2,     1,     1,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     3,     2,     2,
       2,     0,     1,     3,     1,     2,     2,     2,     1,     3,
       3,     1,     1,     3,     4,     5,     1,     0,     3,     3,
       1,     1,     0,     2,     2,     2,     2,     0,     2,     2,
       1,     2,     2,     2,     2,     0,     3,     0,     1,     1,
       1,     4,     2,     0,     1,     0,     4,     1,     1,     0,
       0,     3,     0,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       0,     2,     0,   291,     0,  1275,     0,  1279,    76,   822,
     754,   766,   885,   768,     0,     0,     0,     0,   910,     0,
     903,  1280,     0,   352,   843,     0,     0,     0,   841,     0,
     815,     0,     0,   880,   881,  1208,     0,     0,  1206,  1141,
       0,   771,     0,     0,     0,     8,    11,     4,    34,    35,
      28,     6,    25,     5,     9,    22,    24,    32,   347,    14,
      15,    17,    26,    40,    12,    37,    36,    13,     0,    18,
      27,    23,    21,    41,    19,    33,    20,    39,    38,    29,
      16,     7,    10,    30,    31,  1001,  1035,  1046,  1075,  1083,
     982,   987,   989,   991,  1000,  1002,  1004,  1007,  1015,  1021,
    1022,  1031,  1045,  1049,  1052,  1078,  1096,  1098,  1099,  1102,
    1103,  1107,  1114,  1118,  1119,  1121,  1124,  1128,   981,   984,
     985,   986,   988,   990,   992,   993,   994,   995,   997,   998,
    1003,  1006,  1008,  1012,  1013,  1025,  1017,  1026,  1014,  1020,
    1023,  1028,  1029,  1030,  1027,  1033,  1032,  1034,  1036,   974,
    1039,  1043,  1040,  1041,  1047,  1048,  1050,  1053,  1057,  1055,
    1056,  1058,  1054,  1060,  1059,  1093,  1094,  1051,  1061,  1062,
    1063,  1064,  1065,  1066,  1068,  1072,  1073,  1076,  1074,  1077,
    1079,  1080,  1016,  1081,  1084,  1085,  1086,  1088,  1091,  1092,
    1089,  1090,  1095,  1097,  1100,  1101,  1104,  1105,  1106,  1109,
    1110,  1113,  1120,  1123,  1125,  1127,  1131,  1132,  1133,  1134,
    1135,  1137,  1005,   996,  1009,  1010,  1019,  1024,  1087,  1111,
    1122,  1126,  1129,  1130,   983,  1011,  1037,  1038,  1044,  1067,
    1070,  1069,  1071,  1082,  1108,  1112,  1136,  1138,  1018,  1115,
    1117,  1116,  1042,   999,     0,     0,     0,   972,   975,   292,
       0,  1178,  1177,   327,  1277,     0,   128,   255,    80,   254,
      81,     0,    77,    78,     0,     0,   836,     0,     0,   767,
       0,   764,     0,     0,   774,   987,     0,     0,     0,     0,
       0,     0,  1128,     0,     0,     0,   951,     0,   953,     0,
       0,   948,   632,     0,   952,   947,   950,   942,     0,     0,
       0,     0,     0,     0,  1010,  1129,  1130,   949,     0,     0,
       0,   636,     0,     0,   390,   390,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1037,     0,     0,     0,     0,     0,     0,     0,  1067,
    1071,   390,  1082,     0,     0,     0,     0,     0,  1108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1138,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   912,   392,   393,   497,   946,   493,   492,   962,
     920,     0,  1175,   340,     0,   318,     0,     0,  1282,   348,
     360,   869,   311,   311,   311,   307,   311,   842,     0,  1186,
     820,   316,   329,     0,   342,   314,     0,  1142,  1139,   913,
     820,   352,     1,     3,   879,   877,   969,   971,   695,  1188,
    1189,     0,     0,     0,  1278,  1276,    42,     0,     0,    81,
      79,     0,     0,   839,   838,     0,   836,   814,   813,   755,
     812,     0,   760,     0,     0,   764,   898,   897,   899,   893,
     895,   894,     0,   900,   896,  1178,   886,   888,   889,   776,
     777,   775,   291,   700,   700,     0,   700,   700,   700,   700,
       0,   506,     0,     0,     0,     0,     0,   632,     0,   630,
       0,   500,     0,     0,     0,     0,   626,   626,   954,   956,
     955,     0,   700,   700,   637,     0,   626,     0,     0,   520,
       0,   521,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   561,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     626,   626,   626,   626,   626,   626,     0,     0,     0,     0,
       0,     0,     0,   498,   499,     0,   501,     0,   978,   977,
    1153,   976,   495,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   943,     0,   921,     0,   922,   918,     0,     0,     0,
       0,     0,   908,   907,     0,   904,   906,     0,  1283,   373,
     366,   365,   364,   368,   372,   370,   371,   367,   369,   381,
     361,   363,     0,     0,     0,     0,   867,   870,  1152,     0,
     251,   252,     0,   250,  1150,   860,     0,     0,  1151,   867,
     865,     0,     0,   844,     0,     0,   313,   312,   305,   309,
     306,   303,   308,   304,   840,   763,   821,   291,     0,     0,
    1226,  1227,  1223,  1228,  1229,  1217,     0,     0,  1215,     0,
    1236,  1219,  1212,  1233,     0,  1225,  1232,  1221,  1230,  1231,
    1224,     0,  1210,  1213,     0,     0,     0,  1145,   779,     0,
     778,     0,   882,     0,   697,   696,     0,  1187,     0,   973,
     264,   331,   761,     0,     0,    59,     0,    60,     0,     0,
     823,   826,   830,   834,   837,     0,     0,   765,   759,     0,
     892,     0,     0,   901,     0,   701,     0,   615,   607,     0,
     615,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   633,   634,   510,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   640,     0,     0,   391,
       0,   525,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   682,   683,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   548,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   458,   566,     0,     0,     0,     0,
       0,     0,     0,   644,   644,   644,     0,     0,   601,     0,
       0,     0,     0,     0,     0,   590,     0,   592,     0,     0,
       0,   737,   734,   733,   736,   735,     0,   502,     0,     0,
       0,     0,     0,     0,     0,   408,   409,   410,   411,   412,
     413,   414,     0,   406,   415,   416,   401,   626,   708,     0,
       0,     0,     0,   399,   398,   404,   400,     0,   491,   421,
     423,     0,   418,     0,   417,   419,   420,   424,   422,   963,
     917,   919,     0,     0,   695,  1176,  1179,   331,     0,   320,
     909,     0,  1281,  1292,   349,  1284,   379,   725,   378,     0,
     362,   873,     0,   851,   863,   852,   864,     0,   845,     0,
     857,     0,   865,   856,   871,   872,   867,     0,   865,     0,
       0,   858,   867,   311,   666,     0,   331,     0,  1257,  1238,
    1240,  1239,  1257,  1235,  1257,  1211,  1234,  1257,     0,     0,
     343,   344,     0,     0,     0,  1146,  1147,  1148,  1140,     0,
       0,   782,   772,   781,   350,   945,   944,   878,   883,   884,
     970,   699,  1075,  1029,     0,   702,  1191,   266,   338,   337,
     339,   336,   335,     0,   328,   332,   333,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    44,    82,    55,
       0,     0,   828,   824,   969,     0,     0,     0,   832,   811,
     757,   293,     0,   887,   902,   890,   769,   602,     0,   626,
     606,     0,     0,   612,   611,   613,   614,     0,     0,     0,
     626,   626,   555,     0,   631,     0,     0,   511,     0,     0,
     516,   628,   627,   517,   514,     0,   603,   604,   638,     0,
     518,   626,   522,     0,     0,     0,   534,     0,   532,     0,
     626,     0,   528,     0,     0,     0,   626,     0,   540,     0,
       0,   543,     0,   626,     0,   549,     0,     0,   626,     0,
     559,   560,   562,   563,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   565,     0,     0,   569,     0,   571,     0,     0,     0,
     645,     0,     0,     0,     0,   577,   583,   584,   585,   586,
     587,   588,     0,   591,   593,     0,   595,   596,     0,     0,
     503,  1156,  1154,  1155,   496,   494,   964,   407,     0,     0,
     402,   626,   708,   405,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   916,     0,     0,   341,
       0,   325,   326,   324,   319,   321,   322,   905,  1294,  1293,
    1285,   666,     0,   726,   381,   374,   356,   354,   355,   382,
     384,   383,   962,     0,   875,   862,   868,   979,   861,     0,
     867,   846,   866,   867,   865,     0,   859,   310,   666,     0,
       0,   647,     0,     0,   330,  1237,     0,  1218,  1216,  1220,
    1222,  1248,  1251,   969,     0,  1214,     0,     0,     0,     0,
    1145,  1127,     0,     0,     0,  1164,  1143,     0,   780,     0,
    1290,  1198,  1196,  1197,  1201,  1202,  1204,  1203,  1205,  1195,
    1192,  1199,     0,   725,   289,   289,   289,     0,   289,     0,
       0,   805,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   299,     0,     0,     0,     0,
       0,   289,     0,   287,    85,   265,     0,   267,   288,   762,
     334,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,    57,     0,   702,     0,   831,   666,   835,
     834,   758,   295,   294,   756,   891,     0,   616,   608,   605,
       0,     0,   617,   618,   625,   623,   619,   624,   621,     0,
       0,     0,     0,     0,     0,   635,     0,     0,     0,     0,
       0,     0,     0,   641,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   546,     0,     0,     0,     0,   439,   440,   441,   442,
     443,   444,   445,     0,   437,   446,   447,   432,     0,   708,
       0,     0,     0,   430,   429,   435,   431,     0,   452,   454,
       0,   449,     0,   448,   450,   451,   455,   453,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   394,   707,     0,   403,     0,   472,   473,   474,
     475,   476,   477,   478,     0,   470,   479,   480,   396,   626,
     708,     0,     0,     0,     0,   464,   463,   468,   465,     0,
     485,   487,     0,   482,     0,   481,   483,   484,   488,   486,
     426,   425,   965,   914,     0,  1182,  1183,  1181,  1180,   911,
     323,     0,   702,     0,     0,     0,   377,     0,     0,   353,
     358,   357,   385,     0,   874,     0,   853,     0,     0,   848,
     847,   855,   865,     0,   666,     0,     0,   663,     0,     0,
     666,   669,   669,   666,   666,   695,   317,  1261,     0,  1260,
       0,     0,     0,   345,   346,   315,     0,     0,     0,   805,
     803,   804,     0,     0,  1153,     0,     0,    72,   786,     0,
       0,   794,   773,   783,  1287,   351,  1288,   716,     0,   703,
    1190,   290,   260,   244,   249,   248,   271,     0,   142,   260,
     243,   269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   806,     0,     0,     0,     0,   282,   283,     0,     0,
       0,   718,     0,     0,     0,     0,   301,   302,   300,     0,
       0,     0,     0,   805,     0,     0,     0,    86,     0,   145,
       0,   296,   142,   148,   966,    46,    47,    49,   742,   740,
     738,   741,   739,    51,    48,    50,    52,    53,    54,    45,
     145,    56,   923,    84,   131,   130,   129,     0,     0,   666,
     716,   970,   702,     0,   833,   770,     0,     0,   582,   620,
     622,   507,   509,   553,   554,   556,     0,   504,   512,     0,
     629,   515,   639,   508,     0,     0,   519,     0,     0,   530,
     535,   533,   526,   531,   529,     0,   599,   542,   539,   541,
       0,     0,   547,   550,   551,     0,   527,   557,     0,   438,
     564,   433,   708,   436,     0,     0,     0,     0,     0,   568,
     570,     0,   575,   573,     0,     0,     0,     0,     0,   581,
       0,   594,   597,   598,   395,   397,   471,     0,   466,   626,
     708,   469,     0,     0,     0,     0,   923,  1184,  1185,  1286,
     709,   751,   753,   727,   728,     0,   375,     0,   389,   380,
     388,   959,   963,   876,   725,   980,     0,   867,   646,     0,
     665,   664,   666,   669,   669,   816,     0,   650,   670,     0,
       0,   648,   649,   671,  1258,     0,  1250,  1249,  1256,  1262,
    1252,  1207,  1144,     0,     0,     0,  1169,     0,  1162,     0,
       0,  1174,  1172,  1173,  1171,  1158,   360,     0,   807,   793,
     799,     0,     0,     0,   792,   958,   957,  1283,   725,   717,
       0,   147,   261,   245,     0,     0,     0,   246,   141,   140,
     143,     0,     0,   273,    92,   260,   279,   281,   293,    93,
      90,   103,    96,     0,    97,     0,    88,    89,     0,    95,
      94,   120,   119,    99,   121,   100,   101,   286,   115,   117,
     116,   118,    98,   113,   111,   114,   108,   110,   112,   109,
      87,     0,     0,   124,   123,   122,   105,   275,    91,   268,
       0,   132,   134,   135,   968,     0,   298,   270,     0,   136,
     137,     0,     0,    62,     0,     0,   925,   924,    63,    74,
       0,     0,   702,   731,   827,   609,     0,     0,     0,   642,
       0,     0,     0,     0,     0,     0,     0,     0,   434,     0,
     427,   457,   456,     0,     0,     0,     0,   580,   578,   579,
       0,   459,     0,   467,     0,   461,   490,   489,     0,     0,
     704,   926,     0,     0,     0,   387,   386,     0,   854,     0,
     849,     0,   662,     0,     0,     0,   702,     0,   666,   666,
       0,   652,     0,     0,     0,   667,  1259,     0,     0,     0,
    1267,     0,     0,  1168,  1160,  1161,     0,     0,     0,  1157,
     381,   787,   801,     0,   809,     0,     0,   784,   796,     0,
       0,   795,  1291,     0,   144,   260,   242,   247,     0,     0,
       0,     0,   280,   278,   106,   107,   961,   719,   722,     0,
     104,     0,   272,   145,   297,   229,     0,   208,   154,     0,
       0,   183,   180,   193,   167,   182,   165,   161,   197,   195,
     178,   197,   189,   169,   175,   168,   192,   174,   197,   194,
     191,   173,   163,   162,   166,   190,   172,     0,   186,   208,
     212,   224,     0,   208,   210,   967,    65,    83,    75,     0,
      61,     0,   722,   258,   829,     0,   825,     0,     0,   513,
       0,   523,   524,   536,     0,   700,   544,   552,   558,   428,
     567,   574,   572,   576,   626,   460,   462,     0,     0,   705,
     716,     0,   934,   730,   729,   376,   960,     0,     0,   666,
     666,     0,   716,   819,   655,   659,   651,     0,   675,   673,
     674,   672,     0,  1266,  1264,     0,  1265,     0,     0,  1263,
    1241,  1253,     0,  1209,  1166,  1165,  1167,  1163,     0,     0,
     125,     0,     0,     0,   810,   798,  1290,   785,   791,  1200,
       0,     0,   285,     0,   296,     0,   723,   724,   721,   102,
     212,   133,     0,     0,     0,   227,   230,   232,     0,     0,
     153,   170,     0,   171,   184,   187,   188,     0,     0,   201,
     199,   196,     0,   201,   201,     0,     0,   201,     0,   219,
       0,     0,   216,     0,   221,   149,   213,   215,   225,     0,
     185,     0,   156,     0,   201,     0,   211,   201,  1290,   923,
       0,    68,    58,     0,   257,     0,   732,     0,   505,   643,
       0,     0,     0,     0,   713,   722,     0,   725,     0,     0,
       0,     0,   927,   929,     0,   752,     0,   666,   657,   661,
       0,   731,     0,     0,     0,     0,     0,     0,  1254,     0,
    1245,  1246,  1247,  1242,     0,     0,     0,     0,     0,  1268,
    1270,  1170,  1159,    73,   374,   800,   802,   808,   797,     0,
     138,     0,     0,     0,   284,   274,   722,   276,   235,   236,
       0,     0,     0,   231,     0,     0,     0,     0,   205,   206,
     207,   176,   202,   204,     0,   152,   177,     0,     0,   160,
     223,   218,   217,   220,   222,   214,   805,     0,     0,   150,
       0,   151,    66,    64,     0,  1283,   722,     0,   545,   537,
       0,   610,   589,   926,     0,     0,   710,   712,   706,   743,
       0,     0,     0,     0,   928,     0,     0,   935,   937,     0,
       0,   818,   817,   654,     0,   658,     0,     0,   680,     0,
    1255,  1243,  1271,  1274,  1272,  1273,  1269,   126,     0,   720,
     296,   238,     0,   237,     0,   233,   234,   229,   157,   209,
       0,   262,   198,     0,   203,     0,   164,   159,     0,   224,
     224,    70,    69,   256,   259,     0,   934,   714,   715,   722,
       0,   359,   932,   933,     0,   930,     0,     0,   936,     0,
       0,     0,     0,   653,     0,   679,     0,   678,     0,   277,
     240,   241,   239,   228,   181,     0,     0,   179,   226,   155,
     158,  1290,   538,   940,   711,   744,   931,   939,   938,     0,
       0,     0,     0,   681,   676,     0,   139,   263,   200,    71,
       0,   788,     0,     0,   668,   656,   660,   677,     0,     0,
     915,   381,     0,   941,   790,     0,     0,     0,   747,   749,
       0,   789,   750,   745,   381,     0,   748,   850
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    43,    44,    45,   703,   986,   987,    46,  1311,  1618,
     990,  1611,  1853,  2158,  1858,  2265,  2371,  1531,  1766,  2019,
     261,   262,   263,   428,  1612,  1293,  1294,  1830,  1822,  1813,
    1836,  2213,   264,  1617,  1840,  1841,  1842,  1843,  1789,  1790,
    1547,  1548,  1592,  1851,  2010,  2132,  2127,  2011,  2012,  2013,
    2014,  2129,  2130,  2241,  2242,  2243,  2120,  2157,  2145,  2146,
    2147,  2152,  1850,  2115,  2116,  2117,  2315,  1549,  1550,   642,
     265,  2021,  2022,  1781,  2320,    47,   967,  1295,  1296,  1297,
    1961,  1971,  2310,  1551,   250,  1324,  1847,  1579,    48,    49,
     652,   648,   649,    50,   685,    51,   658,    52,   601,  1184,
    1185,  1186,    53,   423,    54,   659,   974,   975,   976,    55,
     599,    56,   684,   940,   941,    57,    58,   608,  1250,   389,
     390,  1195,  1196,   619,   620,   621,  1479,   897,   898,   899,
    1482,  1199,  1719,   499,   438,   373,   803,   867,   374,   817,
     375,  1009,  1626,   726,  1008,  1339,   818,   751,  1032,   478,
     479,   480,   744,   495,  1351,  1038,  1039,  1353,  1111,  1220,
    2067,  2193,  2195,  1504,  1221,  1222,  1739,  1925,  2069,  2197,
    2356,  2297,   784,   696,   697,   727,  1263,  2050,  2176,  1140,
    1900,  2174,  2276,  1778,  1779,  1808,  1967,  2108,  1197,  1475,
    1713,  2026,   836,  1603,  2341,  2392,  2407,  2408,  2409,  1198,
    1901,    59,   267,    60,  1321,   701,   702,   444,   272,    61,
     274,  1326,    62,   410,  1249,   462,   689,   952,   953,  1532,
    1767,  2400,  1773,  1533,  1777,  2096,  1769,  1941,  1942,  1561,
    1562,  1770,  1944,  2093,   439,   440,    63,   400,  1916,  1735,
     657,    64,   266,   710,  1315,   996,  1314,   711,   712,   998,
     435,   436,    65,   398,    66,   391,   643,  1724,   916,   908,
     644,   917,  1204,  1486,    67,   692,    68,   957,    69,   273,
     456,   457,   723,  1005,    70,   386,   605,   606,    71,   384,
      72,    73,    74,  1706,   882,   596,  1859,  2052,  2182,  2183,
    2185,  2287,  2288,  2391,   376,  2321,   377,  1774,  1775,  1968,
     378,  1593,   655,   246,   379,  1207,  1748,   248,    75,   687,
     408,   948,   949,   645,   842,  1246,  1247,  1934,  1758,  1765,
      76,   598,   458,   885,   886,  1467,    77,    78,   698,   965,
     966,  1260,  1538,  1261,    79,   406,    80,   403,   681,   682,
     683,   932,   928,   934,   937,  2204,  2079,  2080,  1234,  1749,
    1750,  1227,  1508,  1509,  1930,  2083,  2209,  2210,    81,   254,
     425,    82,    83,    84,   894,  1534,  1471,  1535,  1536,  1537,
    1190
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2178
static const short yypact[] =
{
    1913, -2178, 11608,   125,   211, -2178,   322, -2178,   522, -2178,
   -2178,    11, -2178, -2178,  5219,    22,   211,   211, -2178,   211,
   -2178,   172, 25025, -2178, -2178,   579,    48,   361,   189,   211,
   -2178,   211,   211, -2178, -2178, -2178,   211,   211, -2178,   240,
   25025, -2178,   383,   459,   464, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,  9263, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, 25025,   284,   129,  -102, -2178, -2178,
     293, -2178, -2178, -2178,   159,   302, -2178, -2178, -2178, -2178,
     224,   314, -2178,   370,   360,   488,   -34,  3179, 25025, -2178,
   25025,   295,   408,  1062,   270,   254,   282,   289,   298,   321,
     329,   336,   339,  5219,   344,   354, -2178,   372, -2178,   417,
     424, -2178,   437,  5219, -2178, -2178, -2178, -2178,   439,   441,
     443,   449,   453,   458,   463,   463,   463, -2178,   460,   462,
     478,  5219,   486,   490,   492,   494,   514,   529,   531,   537,
     541,   568,   570,   586,   588,   590,   592,   593,   595,   596,
     597,   599,   601,  5627,   604,   605,   606,   607,   608,   612,
     613,   616,   617,   619,   620,   622,   626,   627,   629,   630,
     631,   632,   634,   638,   643,   644,   646,   647,   649,   651,
     654,   656,   657,   658,   659,  5219,  5219,  5219,  5219, 25025,
   12778, 25025, 21894, -2178, -2178, -2178,   532, -2178, -2178,   401,
      50, 11608, -2178, -2178,   865, -2178,   196,   892, -2178, -2178,
      21,  1651,   190,   190,   190, -2178,   190, -2178, 11608, -2178,
     795, -2178, -2178,  2012, -2178, -2178,  2012, -2178, -2178, -2178,
      73, -2178, -2178, -2178, -2178, -2178,   666, -2178,   162, -2178,
   -2178, 25025, 11608, 11608, -2178, -2178, -2178,   895, 25025,   224,
   -2178, 25025, 25025, -2178, -2178, 23855,   -34, -2178, 21894,   685,
   -2178,   902, -2178,   980, 25025,   295, -2178, -2178, -2178, -2178,
   -2178, -2178,  1012, -2178, -2178,   837,   696, -2178, -2178, -2178,
   -2178, -2178,   125,  1029,    93,  5219,  1029,  1029,  1029,  1029,
    5219,   -73,  5219,  5219,  5219,  5219,  5219, -2178,   798, -2178,
   11998,   -73,   702,  5219,  5219,  5219, -2178, -2178,   532,   532,
     532,  5219,  1029,  1029, 21894,   728, -2178,  5219,   703, -2178,
    3587, -2178,   704,  5219,  5219,  5219,  5219,  5219,  5219,  5219,
    5219,  5219,   589,  5219,  5219,  5219,   463,  5219,  5219,  5219,
   21703,  3995,  5219,  5219,  5219,  5219,  5219,  5219,  3587, -2178,
    5219,  5219,  4403,  5219,  5219,  5219,  5219,  5219,  5219,  2363,
     707,   707,   707,   707,   707,   707,   463,  4811,   708,  5219,
    5219,  5219,   425,   -73,   -73, 16903,   -73,  5219, -2178, -2178,
     312, -2178,  1095,   705,  5219,  5219,  5219,  5219,  5219,  5219,
    5219,   465,  5219,  5219,  5219,   713,  5219,   272,  5219,  5219,
    5219,  5219,  5219,  5219,  5219,  6035,  6443,  5219,  5219,  5219,
    5219, -2178, 25025, -2178,  1072, -2178,   965,  1001, 11608, 11608,
     967, 11608, -2178, -2178,  1039,   722, -2178, 25025,   875, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,   734,
      21, -2178,  1094,   903,   -16,     4,   979, -2178, -2178,   811,
   -2178, -2178,   912, -2178, -2178, -2178,  1100,   926, -2178,   979,
     301,   930,   301, -2178,    36,   904, -2178, -2178,   761, -2178,
     761,   761, -2178,   761, -2178, -2178, -2178,   125, 11608, 11608,
   -2178,   931, -2178, -2178, -2178, -2178,   932,   149, -2178,  1075,
   -2178, -2178,   972, -2178,   986, -2178, -2178, -2178, -2178, -2178,
   -2178,   990,   779, -2178, 11608, 11608,  1002,   484, -2178, 10043,
   -2178,   792, 22685, 25025, -2178, -2178, 25025, -2178, 25415,  1006,
   -2178,   -59, -2178,  1024,  1084, -2178, 11608, -2178,  1009, 11608,
   -2178,   799, -2178,   793, -2178,  3179, 11608, -2178, -2178, 11608,
   -2178,   992,  1062, 11608, 10043, -2178,   802, -2178, -2178,   803,
     812, 14810,   804,   807,   813,   814, 14886, 21731, 14970, 15037,
   15118, 13829,   820,   819,   810, -2178, -2178, 16998, 15161, 15284,
     821,  5219,   823, 13857,   824,   827, -2178,   834, 15308, -2178,
   17020, -2178, 15382, 15407, 15475, 13873, 13976, 15530, 15573, 14020,
   15721, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178,  1116, 15805, 15819, 14093,   -89, 17213,
   15832, 14136,   844, -2178, 17235, 15845, 15888, 16078, 16121, 17257,
   17310, 17332, 17525, 21969, -2178, -2178, 17547, 16134, 16159, 14283,
   17569, 14326, 16174,  5219,  5219,  5219, 16805,   838, -2178,   839,
     840,   841,   842,   843,   -43, -2178, 17672, -2178, 14382, 17828,
   14449, -2178, -2178, -2178, -2178, -2178,   845, -2178,   966,   849,
     850,   852, 23075,  5219, 25025,   269,   269,   269,   269,   269,
     269,   269,  1061, -2178,   420,   420,  1721, -2178,  1149,   861,
    5219,  5219,  5219,   859,   859,   269,   859, 22158, -2178,   332,
     357,  5627,   -74,  5627,   -74,   -73,   -73,   -73,  1079,   857,
   -2178, -2178,  1128,  1223,   151,   866, -2178,   -59,  1030,     7,
   -2178,   196, -2178,    98, -2178, -2178, -2178,   -42, -2178,  5219,
   -2178,  1129, 11608, -2178, -2178, -2178, -2178,    27, -2178, 23075,
   -2178,   941,   301, -2178, -2178, -2178,   979, 25025,   301, 11608,
     301, -2178,   979,   190,    53,  -126,   -59,  1040,   873, -2178,
   -2178, -2178,   873, -2178,   873, -2178, -2178,   873, 10433, 25816,
     874, -2178,  1036,   -46, 10433, -2178, -2178, -2178,   877, 13558,
   11608, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178,    59,    64,   818,  1018, -2178, 19965, -2178, -2178,
   -2178, -2178, -2178, 11608, -2178, -2178,   500,  1276,  1277,  1278,
    1279,  1280,  1281,  1282,  1284,  1286,   890, -2178, -2178, -2178,
    1047, 11608,   799, -2178,    25, 25025,  1175, 20247, -2178, -2178,
   -2178,     8,  1255, -2178,   897, -2178, -2178, -2178,  5219, -2178,
   -2178,   899,  5219, -2178, -2178, -2178, -2178,  5219,   509,   509,
   -2178, -2178, -2178,  5219, -2178,  5219, 11998, -2178,  5219,  5219,
   -2178, 21894,   901, -2178, -2178,  5219, -2178, -2178,   978,  5219,
   -2178, -2178, -2178,   969,   971,  1067, -2178,  5219, -2178,  5219,
   -2178,  1068, -2178,  5219,  5219,  5219, -2178,  1121, -2178,  5219,
    1136, -2178,  5219, -2178,  5219, -2178,  5219,  5219, -2178,  5219,
   -2178, -2178, -2178, -2178,  5219,  5219,  5219,  5219,  5219,  5219,
    5219,   572,  5219,  5219,  5219,  5219,  5219,   263,  5219,  5219,
    5219,  5219,  5219,  5219,  5219,  6851,  7259,  5219,  5219,  5219,
    5219, -2178,  5219,  5219, -2178,  5219, -2178,  5219,  5219,  5219,
   21894,  1203,  1204,  1205,  5219, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178,  1140, -2178, -2178,  5219, -2178, -2178,  5219,  5219,
   -2178, -2178, -2178, -2178, -2178, 21894, -2178, -2178,   927,  1089,
   -2178, -2178,  1149,   269, 22183,  5219,  5219,  5219,  5219,  5219,
    5219,  5219,   584,  5219,  5219,  5219,   929,  5219,   313,  5219,
    5219,  5219,  5219,  5219,  5219,  5219,  7667,  8075,  5219,  5219,
    5219,  5219, 21703, 21703, 25025,  1092, -2178,   -17, 11608, -2178,
    1093, -2178, -2178, -2178, -2178, -2178,    12, -2178, -2178, -2178,
   -2178,    53,   470, -2178, -2178,    26,  1192, -2178,  1215, -2178,
   21894, -2178,   936,  1099,  1218, -2178, -2178,   933, -2178,  1287,
     979, -2178, -2178,   979,   301, 11608, -2178, -2178,    53, 25025,
      31, -2178, 11608,  1106, -2178, -2178, 25025, -2178, -2178, -2178,
   -2178,   940, -2178,   942,  1109, -2178, 11608, 11608,  1112,  1231,
     484,  1210,  1130,    62, 13168, -2178, -2178,   173, -2178,   -15,
      85, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178,  5219,  1076,  1088,  1261,  1261,  1358,   642,  1359,
    1361,   173,  1362,  1258,  1364,  1225,  1227,  1263,  1371,  1374,
    1297,  1377,  1378,  1379,  1380,    76,  1382,  1384,  1385,  1166,
    1387,  1261,  1390, -2178, 19859,   995, 10828, -2178, -2178, -2178,
   -2178,  1160,  1161,  1165,   521,  1167,   425,   425,  1169,   425,
    1024,  2107,   191, -2178,  1148,  1018, 20247, -2178,    53, -2178,
    1003, -2178, -2178, -2178, -2178, -2178,   -15, 21894, -2178, -2178,
   16394, 17895, -2178, -2178, -2178, -2178,  1134, -2178,  1138,  1015,
    1016,  1017,  1019, 17944, 17977, -2178, 17990, 16437,  5219, 18021,
    5219,  1042, 21747,  1045,  1022,  5219,  5219,  1023, 18045, 18259,
    1025,  1026, 18292, 16476, 18304,  1027,  1031, 18418,  1032, 16492,
    1034,   -74, 18452, 14547,  1035, 14572,   269,   269,   269,   269,
     269,   269,   269,  1240, -2178,   420,   420,  1721, 18521,  1149,
    5219,  5219,  5219,   859,   859,   269,   859, 22195,   332,   357,
    5627,   -74,  5627,   -74,   -73,   -73,   -73,  1079, 16585, 18566,
   18756, 16752, 14596, 16709,  5219,  5219,  5219, 18783,  1037, 18856,
   18880, 18973, -2178, -2178,  1041, -2178,  5219,   269,   269,   269,
     269,   269,   269,   269,  1248, -2178,   420,   420,  1721, -2178,
    1149,  1044,  5219,  5219,  5219,   859,   859,   269,   859, 22206,
     332,   357,  5627,   -74,  5627,   -74,   -73,   -73,   -73,  1079,
     844,   844, -2178, -2178,  1184,  1293, -2178, -2178, -2178, -2178,
   -2178,    -3,    41,  1211,  1212,   425, -2178,  1310,  1386, -2178,
   -2178, -2178, 23465, 20642, -2178,   521, -2178, 23075,  1194, -2178,
   -2178, -2178,   301,   130,  1051,  1312,  1313, -2178,   -41, 11998,
      53,  1264,  1264,    53,    53,  1303, -2178, -2178,   215, -2178,
    1066, 21037, 23075, -2178, -2178, -2178, 23075, 13558,  1314,   173,
   -2178, -2178, 23075,  -107,   312,   173,  2771, -2178, -2178,  1064,
    9653, -2178, -2178, -2178, -2178, -2178, -2178,  1267,  1065, 21894,
   -2178, -2178, 12388,   102, -2178, -2178, -2178,   508,   530, 12388,
   -2178, -2178, 12388, 12388,  1224,  1320,  1321, 12388, 12388,   521,
     425, -2178, 25025,   425,  1463,   425, -2178, -2178,  1464,   521,
     521, -2178,     6,    -5,   425,   425, -2178, -2178, -2178, 11608,
      24,   701,  1070,   173,   192, 12388,  1233, -2178, 19965,  8873,
   25025,   135,    29, -2178,  1071, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
    8483, -2178,    30, -2178, -2178, -2178, -2178,  1226,  1073,    53,
    1267,   274,    41,  1078, -2178, -2178,  1074,  5219, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178,   -22, -2178, -2178,  5219,
   21894, -2178, 21894, -2178,  5219,  5219, -2178, 21703, 21703, -2178,
   -2178, -2178, -2178, -2178, -2178,  5219, -2178, -2178, -2178, -2178,
    1294,  5219, -2178, -2178, -2178,  5219, -2178, -2178,  5219, -2178,
   -2178, -2178,  1149,   269, 22251,  5219, 21703, 21703,  5219, -2178,
   -2178,  5219, -2178, -2178,  5219,  5219, 19046, 19070, 19193, -2178,
    1296, -2178, -2178, -2178, -2178,  1721, -2178,  1083, -2178, -2178,
    1149,   269, 22306,  5219, 21703, 21703,   -52, -2178, -2178, -2178,
    1352, -2178, -2178, -2178,   -85,  1125, -2178, 24245, -2178, -2178,
   -2178, -2178,  1081, -2178,  1076, -2178,  1325,   979, -2178,  1147,
   -2178, -2178,    53,  1264,  1264,  1090,   173,   452, -2178,  1349,
    1350,   452,    38,    16, -2178, 25025, -2178, -2178,  1158,  -106,
   -2178,  1096, -2178,   221,  2771,   173, -2178,  1101, -2178, 25025,
    5219, -2178, -2178, -2178, 21894, -2178,    21, 11998, -2178,  1102,
   -2178,    -6,  1107,   391, -2178, -2178, -2178,   875,  1076, -2178,
    3179, -2178, -2178, -2178,  5219,  1356,  1357,   102, -2178, -2178,
   -2178,  1113,    87, -2178, -2178, 12388, -2178, -2178,    47, -2178,
   -2178, -2178, -2178,  1269, -2178,  1271, -2178, -2178,  5219, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178, 11608, 25025, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
     394, -2178, -2178, -2178, -2178, 25025, -2178, -2178, 11608, -2178,
   -2178, 25547, 25025, -2178,  1114,   402, -2178, -2178, -2178,  1424,
    1283, 25025,    41,  1236, -2178, -2178, 16738,  1170, 19307, 21894,
   21850,  1118,  1122, 14615,  1115, 19382, 19407, 19421, -2178,  5219,
    1721,   844,   844, 19475, 19500, 19531, 19722, -2178, -2178, -2178,
    1120, -2178,  1124, -2178,  5219,  1721,   844,   844,  1389,  1443,
    1399,  1439,   425,   425,  1183, -2178, -2178, 21432, -2178,  1527,
   -2178,  1338,   452,  1393,  1394, 11998,  1018,  5219,    53,    53,
    5219, -2178,   102,   102,   102, -2178, -2178,  1451,   158, 23075,
    1285,   134,  1329, -2178, -2178, -2178,  -107,  1302,   173, 21894,
     734,  1139, -2178,   173,  3179,  1064,  1486, -2178, -2178,    -6,
   11998, -2178, -2178,   409, 21894, 12388, -2178, -2178, 25025,  1446,
    1450, 12388, -2178, -2178, -2178, -2178, 21894,  1151,   113,   430,
   -2178, 25547, -2178,  8873, -2178,   -72,  1150,  1155, -2178,   506,
     -70,  1249, -2178, -2178, -2178, -2178, -2178, -2178,  1157,  1275,
   -2178,  1157, -2178, -2178, -2178, -2178, -2178, -2178,  1157, -2178,
   -2178, -2178,  1163, -2178, -2178, -2178, -2178,  1164, -2178,  1155,
     598,   -21,  1168,  1155,  1171, -2178, -2178, 19859, -2178,    -1,
   -2178,   432,   113,  1172, -2178,   521, -2178,  5219,  1173, -2178,
    5219, -2178, -2178, -2178,  5219,  1029, -2178, -2178, -2178,  1721,
   -2178, -2178, -2178, -2178, -2178, -2178,  1721,  1326,  5219, -2178,
    1267,   547,  1413, -2178, -2178, -2178, -2178,  1328,  1423,    53,
      53,   173,  1267, 21894,   553,   555, 21894,  1176, -2178, -2178,
   -2178, -2178,   -94, -2178, -2178,  1331, -2178,  1339,  1342, -2178,
      84, -2178,   618, -2178, -2178, -2178, -2178, -2178,  1181,  2771,
     -44, 11998,  3179,  1185,   685, -2178,    85, -2178, -2178, -2178,
    1187,   444, -2178,   731,   135,  5219, -2178, -2178, -2178, -2178,
     598, -2178,    33,   145, 25025, -2178,    14, -2178,  1402,  1403,
   -2178, -2178,  1289, -2178, -2178, -2178, -2178,  1191,  1408,   186,
   -2178, -2178,  1196,   186,   186,  1411,  1412,   186,   463, -2178,
     731,  1400, -2178,  1453,  1454, -2178,   598, -2178, -2178,  1376,
   -2178,  1416, -2178,  1417,   186,  1419, -2178,   186,    85,    30,
    1486, -2178, -2178, 25025, -2178,  1420, -2178, 19832, -2178, 21894,
   14696,  1206,  1207, 11608,   142,   113,  5219,  1076,  1526,  1528,
    1502,  1531,   547, -2178,   -57, -2178,  1544,  1051,   452,   452,
    5219,  1236,  5219,  1360,  5219,  1363, 25025,  1217, -2178,  1383,
   -2178, -2178, -2178, -2178,   233,  1428,   425,   425,   425,   618,
   -2178, -2178, -2178, -2178,    26, -2178, -2178, -2178, -2178, 25025,
   -2178,   463,   463,   463, -2178, -2178,   113, -2178, -2178, -2178,
     364,   364,   450, -2178,  1219,  1221,    27,   454, -2178, -2178,
   -2178, -2178,   186, -2178,    27, -2178, -2178,  1228,  1232, -2178,
     532, -2178, -2178, -2178, -2178, -2178,   173,  1234,  1235, -2178,
    1222, -2178, -2178, -2178,  1237,   875,   113,  1238, -2178, -2178,
    5219, -2178, -2178,  1439,   168,  5219, -2178, -2178, 21894,  1272,
      27,    27,  1549,    27, -2178,  1554,  1557,   -57, -2178,  1465,
    1455, 21894, -2178, 21894,  1242, 21894,  1244,   473, -2178, 24635,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,   479, -2178,
     135, -2178,  1578, -2178,    40, -2178, -2178,    14, -2178, -2178,
     482, -2178, -2178,  1462, -2178,   499, -2178, -2178, 25025,    39,
      39, -2178, -2178, -2178, -2178, 19845,  1413, -2178, -2178,   113,
   25025, -2178, -2178, -2178,    27, -2178,    27,    27, -2178,  1644,
    5219, 25025, 25025, -2178, 25025, -2178,   520, -2178,  1438, -2178,
   -2178, -2178, -2178, -2178, -2178,    27,  1251, -2178, -2178, -2178,
   -2178,    85, -2178,  1519, -2178, -2178, -2178, -2178, -2178,   521,
    1307,   525,   544, -2178, -2178, 25025, -2178, -2178, -2178, -2178,
    1469,  1262,  1265,  1595, -2178, -2178, -2178, -2178,  1516, 11218,
   -2178,  1268,  1506, -2178, -2178,   548,  5219,  1274,  1288, -2178,
    1668, -2178, 21894, -2178, -2178,   425, -2178, -2178
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -2178, -2178, -2178, -2178, -2178, -2178,   373, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178,  -479, -2178, -2178, -1498, -2178, -2178,
   -2178,  1422, -2178,  1253,  -331, -1267, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178,    77,  -285,   393,   426,    99,   150,
   -2178, -2178,  -269, -2178,  -276, -2178, -2178,  -283,  -281, -2178,
   -2178, -1553,  -314, -1169, -2178,  -531, -1503, -2178,  -398, -2178,
    -432, -1374,  -641,  -599, -2178,  -397,  -511, -2178, -1204, -2178,
   -2178, -1819,  -442, -1501,  -522, -2178, -2178, -2178, -2178,   136,
   -2178, -2178, -2178,  -636,  -351,   -75, -1995, -2178, -2178, -2178,
   -2178,   281,   805, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
     539, -2178, -2178, -2178, -2178, -2178,  -738,   750, -2178, -2178,
   -2178, -2178, -2178, -2178,   491,  1661,   271, -2178, -2178,  1330,
   -2178, -2178, -1195,   -26, -2178,  1126,  -469,  -193,   554, -2177,
   -2178, -2178, -2178,  -146,   -10, -2178, -2178,  -810,  -484,   225,
   -2178, -2178, -2178,  -453, -2178,   730,  -417, -2178, -2178, -2178,
    1290, -2178, -2178, -2178, -2178, -2178, -2178, -2178,   148, -1167,
   -2178, -2178, -2178, -2178, -1464, -2178, -1340, -2178,  -957, -2178,
   -2178, -1365,  -474, -2178,  -856,  1291, -1278, -2178, -2178, -1086,
   -2178, -2178, -2178, -1579,  -938, -2178, -2178, -1967, -1245, -2178,
   -2178,  -439, -1284, -1476, -2178, -2178, -2178, -2178,  -661,   558,
   -2178, -2178, -2178, -2178, -2178,  -582,  -338,  1311, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178,  1038,   808,   433,
   -2178, -2178,  -639, -1578, -2178, -2178, -2178, -2178,  -330, -1194,
   -1493,  -182, -2178, -2178, -1610,  -714, -2178, -2178, -2178, -2178,
    1354, -2178, -2178, -2178, -2178, -2178, -2178,  1056,   771, -1286,
    1332, -2178, -2178, -2178, -2178, -2178, -2178, -2178,  -876,  -604,
   -2178,  -568, -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,
   -2178,  1048, -2178, -2178, -2178, -2178, -2178,   878, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178,    65,  -501, -2178,  -409,
    -561, -2178,  -510, -2178,  -299,  -684, -1940,  -171,   882, -1930,
    -459, -1453,     0, -2178,    -2,  -358,  -878, -2178, -2178, -2178,
   -2178, -2178,   542, -2178,   259,   267,    28, -2178,  -151, -1704,
   -2178, -2178,  1381, -2178,   610, -2178, -2178, -2178, -2178, -2178,
   -2178, -2178, -2178, -2178, -2178, -2178, -2178, -2178,  1391, -2178,
     847, -2178, -2178, -2178, -2178, -2178,  -415, -2178,   848,   279,
    -133,  -224, -2178,    54, -2178, -2178, -2178,  -408, -2178, -2178,
   -2178, -2178, -2178, -2178, -1734,  -598, -2178, -2012, -2178, -2178,
   -2178
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1290
static const short yytable[] =
{
     247,   999,   245,  1481,   372,   488,   489,   490,   958,  1723,
     895,   729,   562,   732,   733,   734,   735,   887,  1540,   889,
     388,   745,  1605,  1606,  1472,  1608,  1754,  1587,  1177,  1298,
    1729,  1208,  1772,   -67,  1624,   913,  1210,  1620,   409,   754,
     755,  1863,  1213,  1951,  1613,  1527,   792,   804,  1791,  1523,
    1935,  1493,  1144,  1526,  1527,  2164,  1425,    23,   968,  1527,
     654,  2148, -1194,  1867,  1557,  1495,   416, -1193,   415,   750,
     752,  1520,  1495,  1477,   919,  1495,   925,   926,  1238,   757,
    1191,  1521,  1191,  1799,  2218,  1576,  1856, -1244, -1289,  1782,
    1832,  -969,   858,  1806,  1807,   609,  1782,  1322,   868,  1792,
    1793,  2112,  1192,   943,  1797,  1798,  1902,  1732,  1809,  2225,
     394,   724,  1854,   577,   577,  1928,   831,  1223,  2175,   969,
    2113,  2148,  1784,   380,  1181,  1959,  1818,   831,   433,  1181,
     610,   920,  1837,   419,  1819,  1756,  1322,  1001,  1922,  2101,
     905,  1004,  2361,   903,  1820,  1464,  2262,   593,  2198,  1179,
     268,  1622,  1577,   591,  1923,   832,   611,  1845,  2228,  2203,
     694,   955,  1740,  2224,  1495,  -698,   832,   725,  1856,   501,
    1953,   694,  1188,  1496,   594,  2226,   688,  2285,   930,  1497,
    1496,  2230,  1520,  1496,  2286,   833,  1497,  2112,  1224,  1497,
    2106,  1714,  1521,  1947,  1710,   529,   833,  1465,  1833,   591,
    2251,  2124,   728,  2337,  1811,  1812,  2113,  1189,  2277,  2073,
     834,   931,   595,   970,  1528,  1498,  2231,   788,  2107,   904,
     971,   834,  1498,  1206,  2406,  1498,  2338,   695,  2084,  2362,
    1920,   972,  1323,   646,  2125,   656,  2229,  2406,   695,   906,
    1193,  1544,   417,   921,   602,  1848,  1529,   824,  1466,  1757,
    2149,   269,  1545,   647,  1846,  1529,   434,   612,   603,  2309,
    1499,   381,  2199,   249,   270,  1182,   441,  1500,   442,   956,
    1182,  1323,  1496,   471,  1500,  1924,  1800,  1500,  1497,  1802,
     973,  1804,  1397,   481,  2150,  -834,   572,   573,  1810,  1814,
    1815,  1816,  1821,   395,  1962,  2232,   835,  1183,  1921,  2333,
    1929,   494,  1183,  1671,  1262,  1733,   924,   835,  1857,   421,
    2149,  1834,  1211,  -698,  1498,  2359,  1960,  1060,  1216,  1578,
    1734,  1903, -1194,   520,   587,   588,   589, -1193,   271,   590,
     590,  1760,  2114,  1737,  2094,  1624,  1741,  1742,  1491,  1783,
     893, -1194,  1782,   420,  1864,  2339, -1193,   973, -1244,   572,
     573,   951,  1215,  1449,  1698,   553,   554,   555,   556,  2389,
     973,  1478,  1194,  1122,  1194,  -698,  1500,   557,   561,   563,
     255,  2097,  2374,   459,   572,   573,  1142,  1501,   868,   416,
    1835,   597,   857,  2151,  1501,  2212,   951,  1501,  2085,  1530,
    1857,  2074,  1502,  1913,  1914,  2075,   416,  1522,  1946,  1502,
    2308,    42,  1502,  2160,   604,   460,  2274,   613,   614,   615,
     616,   617,   618,   973,   973,   387,  -698,   859,  1390,   699,
     416,   416,   700,   396,  2076,   914,   705,   860,   397,   707,
     708,  -834,   461,   713,   407,  1931,  1316,  1503,  2133,   839,
    1138,  1932,   718,   411,  1503,  2134,   915,  1503,  1772,   251,
     252,  1933,  1862,  2311,  2100,   731,   577,  1218,  1441,   412,
     736,  1219,   737,   738,   739,   740,   741,   413,  1442,   840,
    2075,  2177,  1614,   747,   748,   749,  1501,   418,  2238,  1908,
    1391,   753,  1615,  2191,  1134,  1616,  1495,   758,  2239,   861,
     760,  1502,  2240,   762,   763,   764,   765,   766,   767,   768,
     769,   770,  1782,   785,   786,   787,  2137,   789,   790,   791,
    2154,   794,   795,   796,   797,   798,   799,   800,   801,   577,
     802,  2161,   806,   807,   808,   809,   810,   811,   812,   816,
    1443,  2332,   422,  1952,  -834,  1728,  1503,   826,   424,   828,
     829,   830,  1917,   841,   577,   426,   831,   838,  2275,  2166,
    2077,  2078,  2312,   429,   845,   846,   847,   848,   849,   850,
     851,  1936,   854,   855,   856,  1912,   427,  1345,   863,   864,
     865,   866,  1392,   869,   870,   872,   874,   875,   876,   877,
     878,   862,  1674,  1957,  2024,   832,  1878,  1495,  2313,  1495,
     879,  1332,  1328,  2314,  1496,   256,   416,   416,   884,   416,
    1497,  1784,  1389,  1341,  1342,   892,  1489,   577,   868,  1490,
     258,   945,   951,   431,  1893,   833,  1727,   968,  2053,  2054,
    1744,  1745,  1444,  1784,  1354,  2077,  2078,   432,  2138,  1552,
    1553,  1785,  1558,  1360,  1702,  1299,  1498,   443,  2062,  1365,
     834,   946,  1598,   392,  1755,   393,  1370,   445,   257,  1743,
    1298,  1374,   852,  -146,   853,  1585,   416,   416,   463,  2178,
    2179,  -253,  2264,   583,   584,   585,   586,   587,   588,   589,
    1473,  1474,   590,  1440,   650,   651,  2139,   653,   969,   868,
    -834,  1599,   416,   416,   942,  1623,   464,   416,  1500,  1980,
     959,   960,  1981,   465,   961,  1496,   964,  1496,  1460,  1461,
    2140,  1497,   466,  1497,   416,   297,   989,   994,  1228,   993,
    1229,  1600,  1786,  1230,   416,   947,  1000,   416,  2068,  2068,
    2068,   416,   416,  2290,  1424,   467,   835,   584,   585,   586,
     587,   588,   589,   468,  -146,   590,  1601,  1498,  1541,  1498,
     469,  1031,  2180,   470,  2089,  2192,  2205,  2194,   472,  2092,
    1613,  2064,  2065,   585,   586,   587,   588,   589,   473,  1383,
     590,  1384,   258,  2328,  1787,  1555,   819,   820,   821,   822,
     823,  1434,   970,  1435,   591,  -127,   474,  1985,   259,   971,
    1333,  1544,  1823,  1334,  1335,  2141,  -146,  2142,  2181,  1500,
     972,  1500,  1545,  2206,  2207,  2208,  1949,  1950,  1501,  1972,
    1973,  1336,  2143,  1110,  1110,  1110,  1337,  2017,  1973,  2121,
    2008,  1338,   592,  1502,  2099,   715,   585,   586,   587,   588,
     589,   475,  1602,   590,  1251,  1252,  1253,  1254,   476,  1255,
    1256,  1257,  1258,  1135,  1824,  2109,   973,  2162,  2163,   260,
     561,   477,  1136,   482,  1825,   483,  1556,   484,  1826,  2220,
    2163,  1143,   286,   485,  2144,  2317,  2163,   486,  1503,  2322,
    2323,  1172,   487,  1173,   491,   288,   492,  2190,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,  2353,  2354,
    1827,  1828,   493,  1829,  2358,  2163,  1525,  2364,  2365,  1200,
     496,   291,  2188,  2189,   497,  2214,   498,  1202,   500,  1501,
     416,  1501,  1205,  2393,  2367,  2365,  1672,   561,   868,   771,
     772,   773,   774,   600,  1502,  1212,  1502,   416,   502,  1214,
     294,   295,  2303,  2304,  2305,  2384,  2385,   775,   776,   777,
    2395,  2354,  2279,   503,   574,   504,  1233,  1259,  1232,   778,
     779,   505,  1233,   780,  1232,   506,   296,  1245,   416,  2396,
    2354,   607,   781,  2411,  1950,  2369,  2370,   656,  1700,  1503,
     868,  1503,  1112,  1113,  2245,  2246,  2070,  2071,  2249,   782,
     783,   416,   507,   297,   508,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,  2259,  2381,  2382,  2261,   416,
     509,  1313,   510,   713,   511,  1320,   512,   513,  1327,   514,
     515,   516,  1330,   517,   575,   518,  2221,  1331,   521,   522,
     523,   524,   525,  1343,   576,  1344,   526,   527,  1346,  1347,
     528,   530,  1697,   531,   532,  1349,   533,  2222,  2223,  1352,
     534,   535,   307,   536,   537,   538,   539,  1358,   540,  1359,
    1736,   574,   541,  1362,  1363,  1364,   577,   542,   543,  1367,
     544,   545,  1369,   546,  1371,   547,  1372,  1373,   548,  1375,
     549,   550,   551,   552,  1376,  1377,  1378,  1379,  1380,  1381,
    1382,  1776,  1385,  1386,  1387,  1388,   580,   693,  1393,  1394,
    1395,  1396,   704,  1398,  1399,  1401,  1403,  1404,  1405,  1406,
    1407,   715,  1408,  1409,   716,  1410,   717,  1411,  1412,  1413,
     720,   721,   722,   725,  1417,   743,   756,   746,   759,   761,
     446,   575,  -600,   827,   843,  1419,   844,   857,  1420,  1421,
     880,   576,   881,  1910,   447,   883,   888,   890,   891,  1725,
     893,  2417,   896,   901,   907,  1427,  1428,  1429,  1430,  1431,
    1432,  1433,   902,  1436,  1437,  1438,   909,   910,   911,  1445,
    1446,  1447,  1448,   577,  1450,  1451,  1453,  1455,  1456,  1457,
    1458,  1459,   578,   579,   912,   918,   922,   923,   582,   448,
     929,   927,  1462,  1871,  1872,   933,   416,   935,   884,   895,
     936,  -145,   938,   580,  1541,   939,  1542,   977,   978,   979,
     980,   981,   982,   983,   944,   984,   985,   954,   449,  -970,
     988,   991,  1881,  1882,   997,   995,  1002,  1007,  1010,  1013,
    1011,  -145,  1014,   416,  1543,  1492,  1026,  1494,  1015,  1016,
     416,   450,  1505,  1025,  1507,  1024,  1030,  1544,  1033,  1036,
    1896,  1897,  1037,   581,   416,   416,   942,  1514,  1545,  1040,
    1055,  1064,   561,  1116,  1117,  1118,  1119,  1120,  1121,  1969,
    1137,  1129,  1539,   583,   584,   585,   586,   587,   588,   589,
    1131,  1132,   590,  1133,  1139,  1141,   577,   451,  1174,  1175,
     452,  1176,  1178,  1180,  1203,   582,  1209,  1226,  1225,  1237,
    1236,  1262,  1892,  1240,   453,  1301,  1302,  1303,  1304,  1305,
    1306,  1307,  -145,  1308,  1594,  1309,  1310,   454,  1312,  1318,
     455,   252,  1325,   973,  1329,  1350,  -698,  1348,  1943,  1357,
    1361,  1366,   694,  1355,  1621,  1356,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,  1368,  1414,  1415,  1416,
    1418,  1423,  1422,  1439,  1463,  1469,  1192,  -698,  1640,  1191,
    1642,  1484,  1485,  1487,  -145,  1647,  1648,  1483,  1506,  1488,
    -698,  1510,  1512,  1511,  1515,  1516,  1518,  1541,  1193,  1519,
     583,   584,   585,   586,   587,   588,   589,  1554,  1559,   590,
    1560,  1563,  1564,  1565,  1566,  1130,  1567,  1568,  2216,   695,
    1569,  1673,   574,  1570,  1571,   253,  1572,  1573,  1574,  1575,
    1676,  1580,  1677,  1581,  1582,  1583,  1584,   382,   383,  1586,
     385,  1588,  1595,  1596,  1686,  1687,  1688,  1597,  1619,  1604,
     399,  1607,   401,   402,  1623,  1629,  1695,   404,   405,  1630,
    1631,  1632,  1633,  1645,  1634,  -698,  1643,  1646,  1649,  1669,
    1652,  1653,  1657,  1701,  -698,  -698,  1658,  1696,  1660,  1662,
    1666,  -698,  1704,  1690,  1705,  -698,  1694,  -698,  1699,  1707,
    1708,  -698,   575,  1711,  1712,  1715,  2061,  1716,  1726,  1219,
    1730,  1731,   576,  1738,  1746,  1280,  1794,  1753,  1768,  1780,
    1795,  1796,  1803,  1805,  1831,  1838,  1319,  1861,  1860,  1865,
    1720,  1722,  1852,  1899,  1874,   561,  1890,  -698,  1891,  1904,
    1909,  1776,  1907,  1911,   577,  -698,  1915,  1918,  1919,  1927,
    2018,  -698,  1929,   578,   579,  1937,  1955,  1956,  1945,   960,
     561,  1964,  1948,  1965,   561,  1245,  1764,  1958,  2025,  2016,
     561,  2035,  2028,  2031,   580,  2020,  2044,  2032,  1202,  2045,
    2048,  2049,  -698,  2047,  2051,  2055,  2057,  2058,  2072,  -698,
    1594,  2059,  2060,  2086,  2088,  2091,  1527,  1594,  2102,  2082,
    1594,  1594,  2103,  2126,  2118,  1594,  1594,  2105,  -698,  2119,
    1801,  2128,  -698,  -698,  2131,  2173,  -698,  2135,  2136,  2184,
    2186,  2187,  2153,  2200,   581,  2155,  2165,   416,  2168,  1817,
    2196,  2201,  2171,  1594,  2202,  -698,  2211,  1594,  1844,  2252,
    2217,  2219,  2234,  2235,  2150,  2236,  2342,  2343,  2237,  2345,
    2244,  2247,  2248,  2253,  2254,  2256,  2257,  2258,  1594,  2260,
    2267,  2271,  2272,  2280,  2282,  2281,   582,  1866,  2283,  2289,
    2294,  2299,  2302,  2296,  2318,  2300,  2319,  2172,  2323,  1868,
    2340,  2349,  1943,  2326,  1869,  1870,  2344,  2327,  -698,  2329,
    2330,  2346,  2331,  2334,  2347,  1873,  2351,  2350,  2352,  -698,
    2360,  1875,  2366,  2379,  1848,  1876,  2388,  2390,  1877,  2398,
    2376,  -698,  2377,  2378,  -698,  1880,  2399,   895,  1883,  2401,
    2402,  1884,  2403,  -746,  1885,  1886,  2410,  2415,   622,  2413,
    2263,  2387,   706,  1609,   623,   430,  2159,  1855,  2111,  1591,
    1546,  1849,  2104,  1895,  2414,  2110,  2122,  1788,  2123,   624,
    2156,   583,   584,   585,   586,   587,   588,   589,  -698,  -698,
     590,  2324,  2227,   625,  2255,  1906,  2394,  2386,  2363,  2233,
    2316,  2266,  2325,  1963,  1839,  1470,  1300,  1513,  1217,   414,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
    1940,   691,  1709,  1507,  1764,  2307,   900,  2090,  1476,  1340,
    1939,   626,  2292,  2416,  1480,   730,   719,  1245,  1248,  1625,
    2405,  2215,  1006,  2095,   690,   992,  1317,   742,   714,  1187,
    1003,  1898,  2336,  2284,  1954,  2373,   627,  2348,   628,  2098,
     629,  1201,  1517,  1759,  1752,  2087,  1235,  1938,  1468,  2301,
     630,   631,  1239,  1594,   632,  1751,  2081,   686,  1966,  1926,
     633,  2306,     0,     0,     0,     0,     0,     0,   634,     0,
     635,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   416,
    1970,     0,     0,     0,     0,     0,   636,     0,     0,  2250,
       0,     0,     0,  1974,   637,     0,   416,     0,  1975,     0,
    2015,     0,     0,     0,     0,     0,     0,     0,     0,  2023,
       0,     0,     0,     0,     0,     0,   575,     0,     0,  2039,
       0,     0,     0,     0,     0,     0,   576,     0,     0,     0,
       0,     0,   638,     0,  2046,     0,   639,     0,     0,   640,
     641,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1462,     0,  2063,   577,     0,
    2066,     0,     0, -1149,     0,     0,     1,     0,     2,     0,
       0,     0,   488,   489,   490,     0,     0,   561,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     4,   580,     5,
    1776,     6,     0,     0,     7,     0,     8,     0,  1202,     9,
      10,    11,     0,  1594,    12,    13,  2023,    14,    15,  1594,
      16,     0,     0,     0,     0,    17,    18,    19,     0,    20,
      21,  1594,    22,    23,    24,    25,     0,    26,     0,    27,
       0,     0,    28,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2167,    33,    34,
    2169,     0,     0,     0,  2170,     0,     0,     0,     0,     0,
     582,     0,     0,     0,     0,   660,     0,     0,  1966,     0,
       0,    35,     0,     0,     0,   661,     0,     0,   662,     0,
     663,     0,   664,     0,   665,     0,     0,     0,     0,   666,
       0,     0,     0,     0,     0,     0,     0,   667,     0,     0,
       0,     0,   668,   669,     0,     0,     0,     0,     0,  1764,
     670,     0,     0,   671,     0,     0,   672,     0,     0,     0,
       0,     0,     0,     0,     0,  1966,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2023,     0,     0,   583,   584,   585,   586,   587,
     588,   589,     0,     0,   590,     0,     0,     0,     0,     0,
     673,     0,    36,     0,     0,     0,    37,  1267,    38,     0,
     674,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,   675,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2023,     0,     0,     0,     0,  2278,     0,     0,     0,
       0,   416,    40,  2273,     0,     0,     0,     0,     0,     0,
    2291,     0,  2293,     0,  2295,  1269,  1270,     0,     0,     0,
       0,     0,     0,     0,  2298,     0,     0,     0,  1271,  1272,
       0,     0,     0,     0,     0,     0,     0,     0,  1273,     0,
       0,  1274,     0,     0,     0,     0,     0,  2023,   676,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   677,     0,
     678,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   679,     0,  1277,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2335,     0,     0,     0,     0,  1966,     0,     0,     0,   680,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,  1278,     0,     0,     0,     0,     0,     0,  1279,     0,
       0,     0,     0,     0,     0,     0,     0,  2357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1281,
       0,     0,     0,     0,     0,     0,     0,    42,  1282,  1283,
    1284,     0,     0,     0,     0,     0,  2368,     0,     0,     0,
       0,     0,     0,     0,  1286,     0,     0,     0,  2375,     0,
    2380,     0,     0,     0,     0,     0,     0,     0,     0,  2298,
    2298,     0,  2383,  1287,     0,     0,     0,     0,     0,     0,
       0,     0,  1288,     0,     0,     0,     0,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,  1289,     0,
       0,     0,     0,  2397,     0,    90,     0,     0,   275,    92,
      93,     0,    94,    95,    96,   276,  2412,  1202,    97,     0,
      98,     0,    99,   100,   101,   277,   102,     0,     0,   103,
       0,   104,   278,   279,   105,     0,     0,   106,   107,   108,
     109,   110,   111,     0,     0,   112,   113,   114,   280,   115,
     281,   116,   282,     0,     0,   118,   119,     0,     0,     0,
       0,   120,   121,   122,   123,   283,   124,   125,   126,   813,
    1290,   127,     0,   284,   128,   129,     0,   130,     0,     0,
     131,     0,   285,  1292,   132,     0,     0,   133,     0,     0,
     134,   135,     0,   136,   137,     0,     0,   138,   139,     0,
     140,   141,   142,   143,   286,     0,     0,     0,   144,     0,
     145,     0,   146,   287,     0,     0,   147,   288,     0,   148,
     149,     0,     0,   150,     0,     0,   151,     0,     0,   152,
     153,  1610,     0,     0,   814,   289,   154,     0,     0,     0,
     155,   290,   156,   291,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   292,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,   177,   178,
     293,   179,   294,   295,   180,     0,   181,     0,     0,     0,
       0,     0,     0,     0,   182,   183,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,     0,   296,     0,
       0,   192,     0,   193,     0,   194,   195,     0,     0,   196,
     197,   198,     0,   199,   200,   201,     0,     0,   202,     0,
     203,     0,     0,   204,     0,   297,     0,   815,   205,   206,
     298,   299,   300,   301,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,     0,   210,     0,     0,     0,   211,
       0,   212,     0,     0,   302,   213,   303,   214,   304,     0,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,   219,     0,   220,   221,   305,
     306,     0,     0,     0,   307,     0,     0,     0,     0,     0,
     224,   308,     0,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,     0,     0,     0,   225,   319,   320,   321,
       0,   322,   323,   324,   325,   326,   327,   328,     0,   329,
     330,     0,     0,   331,   227,   332,   228,   333,   334,   335,
     336,   337,   338,     0,   339,   230,   231,   340,   341,   342,
     343,     0,   344,   345,   346,   347,   348,   235,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,     0,   236,     0,   362,   363,   364,   238,     0,     0,
     239,     0,   240,     0,   241,   242,   243,     0,     0,   365,
       0,     0,     0,     0,   366,     0,     0,   367,     0,     0,
     368,   369,     0,   370,   371,    85,    86,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,   275,    92,    93,     0,
      94,    95,    96,   276,     0,     0,    97,     0,    98,     0,
      99,   100,   101,   277,   102,     0,     0,   103,     0,   104,
     278,   279,   105,     0,     0,   106,   107,   108,   109,   110,
     111,     0,     0,   112,   113,   114,   280,   115,   281,   116,
     282,     0,     0,   118,   119,  1761,     0,     0,     0,   120,
     121,   122,   123,   283,   124,   125,   126,     0,     0,   127,
       0,   284,   128,   129,     0,   130,     0,     0,   131,     0,
     285,     0,   132,  1762,     0,   133,     0,     0,   134,   135,
       0,   136,   137,     0,     0,   138,   139,     0,   140,   141,
     142,   143,   286,     0,     0,     0,   144,     0,   145,     0,
     146,   287,     0,     0,   147,   288,     0,   148,   149,     0,
       0,   150,     0,     0,   151,     0,     0,   152,   153,     0,
       0,     0,     0,   289,   154,     0,     0,     0,   155,   290,
     156,   291,     0,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   292,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,     0,   177,   178,   293,   179,
     294,   295,   180,  1763,   181,     0,     0,     0,     0,     0,
       0,     0,   182,   183,     0,     0,     0,   184,   185,   186,
     187,   188,   189,   190,   191,     0,   296,     0,     0,   192,
       0,   193,     0,   194,   195,     0,     0,   196,   197,   198,
       0,   199,   200,   201,     0,     0,   202,     0,   203,     0,
       0,   204,     0,   297,     0,     0,   205,   206,   298,   299,
     300,   301,     0,     0,   207,   208,     0,     0,     0,   209,
       0,     0,     0,   210,     0,     0,     0,   211,     0,   212,
       0,     0,   302,   213,   303,   214,   304,     0,     0,   216,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   219,     0,   220,   221,   305,   306,     0,
       0,     0,   307,     0,     0,     0,     0,     0,   224,   308,
       0,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,     0,     0,     0,   225,   319,   320,   321,     0,   322,
     323,   324,   325,   326,   327,   328,     0,   329,   330,     0,
       0,   331,   227,   332,   228,   333,   334,   335,   336,   337,
     338,     0,   339,   230,   231,   340,   341,   342,   343,     0,
     344,   345,   346,   347,   348,   235,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,     0,
     236,     0,   362,   363,   364,   238,     0,     0,   239,     0,
     240,     0,   241,   242,   243,     0,     0,   365,     0,     0,
       0,     0,   366,     0,     0,   367,     0,     0,   368,   369,
       0,   370,   371,    85,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,   275,    92,    93,     0,    94,    95,
      96,   276,     0,     0,    97,     0,    98,     0,    99,   100,
     101,   277,   102,     0,     0,   103,     0,   104,   278,   279,
     105,     0,     0,   106,   107,   108,   109,   110,   111,     0,
       0,   112,   113,   114,   280,   115,   281,   116,   282,     0,
       0,   118,   119,     0,     0,     0,     0,   120,   121,   122,
     123,   283,   124,   125,   126,     0,     0,   127,     0,   284,
     128,   129,     0,   130,     0,     0,   131,     0,   285,     0,
     132,   437,     0,   133,     0,     0,   134,   135,     0,   136,
     137,     0,     0,   138,   139,     0,   140,   141,   142,   143,
     286,     0,     0,     0,   144,     0,   145,     0,   146,   287,
       0,     0,   147,   288,     0,   148,   149,     0,     0,   150,
       0,     0,   151,     0,     0,   152,   153,     0,     0,     0,
       0,   289,   154,     0,     0,     0,   155,   290,   156,   291,
       0,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   292,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,     0,   177,   178,   293,   179,   294,   295,
     180,     0,   181,     0,     0,     0,     0,     0,     0,     0,
     182,   183,     0,     0,     0,   184,   185,   186,   187,   188,
     189,   190,   191,     0,   296,     0,     0,   192,     0,   193,
       0,   194,   195,     0,     0,   196,   197,   198,     0,   199,
     200,   201,     0,     0,   202,     0,   203,     0,     0,   204,
       0,   297,     0,     0,   205,   206,   298,   299,   300,   301,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
       0,   210,     0,     0,     0,   211,     0,   212,     0,     0,
     302,   213,   303,   214,   304,     0,     0,   216,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   218,
       0,   219,     0,   220,   221,   305,   306,     0,     0,     0,
     307,     0,     0,     0,     0,     0,   224,   308,     0,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     0,
       0,     0,   225,   319,   320,   321,     0,   322,   323,   324,
     325,   326,   327,   328,     0,   329,   330,     0,     0,   331,
     227,   332,   228,   333,   334,   335,   336,   337,   338,     0,
     339,   230,   231,   340,   341,   342,   343,     0,   344,   345,
     346,   347,   348,   235,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,     0,   236,     0,
     362,   363,   364,   238,     0,     0,   239,     0,   240,     0,
     241,   242,   243,     0,     0,   365,     0,     0,     0,     0,
     366,     0,     0,   367,     0,     0,   368,   369,     0,   370,
     371,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,   275,    92,    93,     0,    94,    95,    96,   276,
       0,     0,    97,     0,    98,     0,    99,   100,   101,   277,
     102,     0,     0,   103,     0,   104,   278,   279,   105,     0,
       0,   106,   107,   108,   109,   110,   111,     0,     0,   112,
     113,   114,   280,   115,   281,   116,   282,     0,     0,   118,
     119,     0,     0,     0,     0,   120,   121,   122,   123,   283,
     124,   125,   126,     0,     0,   127,     0,   284,   128,   129,
       0,   130,     0,     0,   131,     0,   285,     0,   132,     0,
       0,   133,     0,     0,   134,   135,     0,   136,   137,     0,
       0,   138,   139,     0,   140,   141,   142,   143,   286,     0,
       0,     0,   144,     0,   145,     0,   146,   287,     0,     0,
     147,   288,     0,   148,   149,     0,     0,   150,     0,     0,
     151,     0,     0,   152,   153,     0,     0,     0,     0,   289,
     154,     0,     0,     0,   155,   290,   156,   291,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     292,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,     0,   177,   178,   293,   179,   294,   295,   180,     0,
     181,     0,     0,     0,     0,     0,     0,     0,   182,   183,
       0,     0,     0,   184,   185,   186,   187,   188,   189,   190,
     191,     0,   296,     0,     0,   192,     0,   193,     0,   194,
     195,     0,     0,   196,   197,   198,     0,   199,   200,   201,
       0,     0,   202,     0,   203,     0,     0,   204,     0,   297,
       0,     0,   205,   206,   298,   299,   300,   301,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,     0,   210,
       0,     0,     0,   211,     0,   212,     0,     0,   302,   213,
     303,   214,   304,     0,     0,   216,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   219,
       0,   220,   221,   305,   306,     0,     0,     0,   307,     0,
       0,     0,     0,     0,   224,   308,     0,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,     0,     0,     0,
     225,   319,   320,   321,     0,   322,   323,   324,   325,   326,
     327,   328,     0,   329,   330,     0,     0,   331,   227,   332,
     228,   333,   334,   335,   336,   337,   338,     0,   339,   230,
     231,   340,   341,   342,   343,     0,   344,   345,   346,   347,
     348,   235,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,     0,   236,     0,   362,   363,
     364,   238,     0,     0,   239,     0,   240,     0,   241,   242,
     243,     0,     0,   365,     0,     0,     0,     0,   366,     0,
       0,   367,   759,     0,   368,   369,     0,   370,   371,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
     275,    92,    93,     0,    94,    95,    96,   276,     0,     0,
      97,     0,    98,     0,    99,   100,   101,   277,   102,     0,
       0,   103,     0,   104,   278,   279,   105,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,   112,   113,   114,
     280,   115,   281,   116,   282,     0,     0,   118,   119,     0,
       0,     0,     0,   120,   121,   122,   123,   283,   124,   125,
     126,     0,     0,   127,     0,   284,   128,   129,     0,   130,
       0,     0,   131,     0,   285,     0,   132,     0,     0,   133,
       0,     0,   134,   135,     0,   136,   137,     0,     0,   138,
     139,     0,   140,   141,   142,   143,   286,     0,     0,     0,
     144,     0,   145,     0,   146,   287,     0,     0,   147,   288,
       0,   148,   149,     0,     0,   150,     0,     0,   151,     0,
       0,   152,   153,     0,     0,     0,     0,   289,   154,     0,
       0,     0,   155,   290,   156,   291,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   292,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177,   178,   293,   179,   294,   295,   180,     0,   181,     0,
       0,     0,     0,     0,     0,     0,   182,   183,     0,     0,
       0,   184,   185,   186,   187,   188,   189,   190,   191,     0,
     296,     0,     0,   192,     0,   193,     0,   194,   195,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,     0,   203,     0,     0,   204,     0,   297,     0,     0,
     205,   206,   298,   299,   300,   301,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,   210,     0,     0,
       0,   211,     0,   212,     0,     0,   302,   213,   303,   214,
     304,     0,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   219,     0,   220,
     221,   305,   306,     0,     0,     0,   307,     0,     0,     0,
       0,     0,   224,   308,     0,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,     0,     0,     0,   225,   319,
     320,   321,     0,   322,   323,   324,   325,   326,   327,   328,
       0,   329,   330,     0,     0,   331,   227,   332,   228,   333,
     334,   335,   336,   337,   338,     0,   339,   230,   231,   340,
     341,   342,   343,     0,   344,   345,   346,   347,   348,   235,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,     0,   236,     0,   362,   363,   364,   238,
       0,     0,   239,     0,   240,     0,   241,   242,   243,     0,
       0,   365,     0,     0,     0,     0,   366,     0,     0,   367,
     793,     0,   368,   369,     0,   370,   371,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,   275,    92,
      93,     0,    94,    95,    96,   276,     0,     0,    97,     0,
      98,     0,    99,   100,   101,   277,   102,     0,     0,   103,
       0,   104,   278,   279,   105,     0,     0,   106,   107,   108,
     109,   110,   111,     0,     0,   112,   113,   114,   280,   115,
     281,   116,   282,     0,     0,   118,   119,     0,     0,     0,
       0,   120,   121,   122,   123,   283,   124,   125,   126,     0,
       0,   127,     0,   284,   128,   129,     0,   130,     0,     0,
     131,     0,   285,     0,   132,     0,     0,   133,     0,     0,
     134,   135,     0,   136,   137,     0,     0,   138,   139,     0,
     140,   141,   142,   143,   286,     0,     0,     0,   144,     0,
     145,     0,   146,   287,     0,     0,   147,   288,     0,   148,
     149,     0,     0,   150,     0,     0,   151,     0,     0,   152,
     153,     0,     0,     0,     0,   289,   154,     0,     0,     0,
     155,   290,   156,   291,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   292,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,   177,   178,
     293,   179,   294,   295,   180,     0,   181,     0,     0,     0,
       0,     0,     0,     0,   182,   183,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,     0,   296,     0,
       0,   192,     0,   193,     0,   194,   195,     0,     0,   196,
     197,   198,     0,   199,   200,   201,     0,     0,   202,     0,
     203,     0,     0,   204,     0,   297,     0,     0,   205,   206,
     298,   299,   300,   301,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,     0,   210,     0,     0,     0,   211,
       0,   212,     0,     0,   302,   213,   303,   214,   304,     0,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,   219,     0,   220,   221,   305,
     306,     0,     0,     0,   307,     0,     0,     0,     0,     0,
     224,   308,     0,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,     0,     0,     0,   225,   319,   320,   321,
       0,   322,   323,   324,   325,   326,   327,   328,     0,   329,
     330,     0,     0,   331,   227,   332,   228,   333,   334,   335,
     336,   337,   338,     0,   339,   230,   231,   340,   341,   342,
     343,     0,   344,   345,   346,   347,   348,   235,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,     0,   236,     0,   362,   363,   364,   238,     0,     0,
     239,     0,   240,     0,   241,   242,   243,     0,     0,   365,
       0,     0,     0,     0,   366,     0,     0,   367,   805,     0,
     368,   369,     0,   370,   371,    85,    86,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,   275,    92,    93,     0,
      94,    95,    96,   276,     0,     0,    97,     0,    98,     0,
      99,   100,   101,   277,   102,     0,     0,   103,     0,   104,
     278,   279,   105,     0,     0,   106,   107,   108,   109,   110,
     111,     0,     0,   112,   113,   114,   280,   115,   281,   116,
     282,     0,     0,   118,   119,     0,     0,     0,     0,   120,
     121,   122,   123,   283,   124,   125,   126,     0,     0,   127,
       0,   284,   128,   129,     0,   130,     0,     0,   131,     0,
     285,     0,   132,     0,     0,   133,     0,     0,   134,   135,
       0,   136,   137,     0,     0,   138,   139,     0,   140,   141,
     142,   143,   286,     0,     0,     0,   144,     0,   145,     0,
     146,   287,     0,     0,   147,   288,     0,   148,   149,     0,
       0,   150,     0,     0,   151,     0,     0,   152,   153,     0,
       0,     0,     0,   289,   154,     0,     0,     0,   155,   290,
     156,   291,     0,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   292,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,     0,   177,   178,   293,   179,
     294,   295,   180,     0,   181,     0,     0,     0,     0,     0,
       0,     0,   182,   183,     0,     0,     0,   184,   185,   186,
     187,   188,   189,   190,   191,     0,   296,     0,     0,   192,
       0,   193,     0,   194,   195,     0,     0,   196,   197,   198,
       0,   199,   200,   201,     0,     0,   202,     0,   203,     0,
       0,   204,     0,   297,     0,     0,   205,   206,   298,   299,
     300,   301,     0,     0,   207,   208,     0,     0,     0,   209,
       0,     0,     0,   210,     0,     0,     0,   211,     0,   212,
       0,     0,   302,   213,   303,   214,   304,     0,     0,   216,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   219,     0,   220,   221,   305,   306,     0,
       0,     0,   307,     0,     0,     0,     0,     0,   224,   308,
       0,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,     0,     0,     0,   225,   319,   320,   321,     0,   322,
     323,   324,   325,   326,   327,   328,     0,   329,   330,     0,
       0,   331,   227,   332,   228,   333,   334,   335,   336,   337,
     338,     0,   339,   230,   231,   340,   341,   342,   343,     0,
     344,   345,   346,   347,   348,   235,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,     0,
     236,     0,   362,   363,   364,   238,     0,     0,   239,     0,
     240,     0,   241,   242,   243,     0,     0,   365,     0,     0,
       0,     0,   366,     0,     0,   367,   825,     0,   368,   369,
       0,   370,   371,    85,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,   275,    92,    93,     0,    94,    95,
      96,   276,     0,     0,    97,     0,    98,     0,    99,   100,
     101,   277,   102,     0,     0,   103,     0,   104,   278,   279,
     105,     0,     0,   106,   107,   108,   109,   110,   111,     0,
       0,   112,   113,   114,   280,   115,   281,   116,   282,     0,
       0,   118,   119,     0,     0,     0,     0,   120,   121,   122,
     123,   283,   124,   125,   126,     0,     0,   127,     0,   284,
     128,   129,     0,   130,     0,     0,   131,     0,   285,     0,
     132,     0,     0,   133,     0,     0,   134,   135,     0,   136,
     137,     0,     0,   138,   139,     0,   140,   141,   142,   143,
     286,     0,     0,     0,   144,     0,   145,     0,   146,   287,
       0,     0,   147,   288,     0,   148,   149,     0,     0,   150,
       0,     0,   151,     0,     0,   152,   153,     0,     0,     0,
       0,   289,   154,     0,     0,     0,   155,   290,   156,   291,
       0,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   292,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,     0,   177,   178,   293,   179,   294,   295,
     180,     0,   181,     0,     0,     0,     0,     0,     0,     0,
     182,   183,     0,     0,     0,   184,   185,   186,   187,   188,
     189,   190,   191,     0,   296,     0,     0,   192,     0,   193,
       0,   194,   195,     0,     0,   196,   197,   198,     0,   199,
     200,   201,     0,     0,   202,     0,   203,     0,     0,   204,
       0,   297,     0,     0,   205,   206,   298,   299,   300,   301,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
       0,   210,     0,     0,     0,   211,     0,   212,     0,     0,
     302,   213,   303,   214,   304,     0,     0,   216,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   218,
       0,   219,     0,   220,   221,   305,   306,     0,     0,     0,
     307,     0,     0,     0,     0,     0,   224,   308,     0,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     0,
       0,     0,   225,   319,   320,   321,     0,   322,   323,   324,
     325,   326,   327,   328,     0,   329,   330,     0,     0,   331,
     227,   332,   228,   333,   334,   335,   336,   337,   338,     0,
     339,   230,   231,   340,   341,   342,   343,     0,   344,   345,
     346,   347,   348,   235,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,     0,   236,     0,
     362,   363,   364,   238,     0,     0,   239,     0,   240,     0,
     241,   242,   243,     0,     0,   365,     0,     0,     0,     0,
     366,     0,     0,   367,     0,     0,   368,   369,     0,   370,
     371,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,   275,    92,    93,     0,    94,    95,    96,   276,
       0,     0,    97,     0,    98,     0,    99,   100,   101,   277,
     102,     0,     0,   103,     0,   104,   278,   279,   105,     0,
       0,   106,   107,   108,   109,   110,   111,     0,     0,   112,
     113,   114,   280,   115,   281,   116,   282,     0,     0,   118,
     119,     0,     0,     0,     0,   120,   121,   122,   123,   283,
     124,   125,   126,     0,     0,   127,     0,   284,   128,   129,
       0,   130,     0,     0,   131,     0,   285,     0,   132,     0,
       0,   133,     0,     0,   134,   135,     0,   136,   137,     0,
       0,   138,   139,     0,   140,   141,   142,   143,   286,     0,
       0,     0,   144,     0,   145,     0,   146,   287,     0,     0,
     147,   288,     0,   148,   149,     0,     0,   150,     0,     0,
     151,     0,     0,   152,   153,     0,     0,     0,     0,   289,
     154,     0,     0,     0,   155,   290,   156,   291,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     292,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,     0,   177,   178,   293,   179,   294,   295,   180,     0,
     181,     0,     0,     0,     0,     0,     0,     0,   182,   183,
       0,     0,     0,   184,   185,   186,   187,   188,   189,   190,
     191,     0,   296,     0,     0,   192,     0,   193,     0,   194,
     195,     0,     0,   196,   197,   198,     0,   199,   200,   201,
       0,     0,   202,     0,   203,     0,     0,   204,     0,   297,
       0,     0,   205,   206,   298,   299,   300,   301,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,     0,   210,
       0,     0,     0,   211,     0,   212,     0,     0,   302,   213,
     303,   214,   304,     0,     0,   216,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   219,
       0,   220,   221,   305,   306,     0,     0,     0,   307,     0,
       0,     0,     0,     0,   224,   308,     0,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,     0,     0,     0,
     225,   319,   320,   321,     0,   322,   323,   324,   325,   326,
     327,   328,     0,   329,   330,     0,     0,   331,   227,   332,
     228,   333,   334,   335,   336,   337,   338,     0,   339,   230,
     231,   340,   341,   342,   343,     0,   344,   345,   346,   347,
     348,   235,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,     0,   236,     0,   362,   363,
     364,   238,     0,     0,   239,     0,   240,     0,   241,   242,
     243,     0,     0,   365,     0,     0,     0,     0,   366,     0,
       0,   519,     0,     0,   368,   369,     0,   370,   371,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
     275,    92,    93,     0,    94,    95,    96,   276,     0,     0,
      97,     0,    98,     0,    99,   100,   101,   277,   102,     0,
       0,   103,     0,   104,   278,   279,   105,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,   112,   113,   114,
     280,   115,   281,   116,   282,     0,     0,   118,   119,     0,
       0,     0,     0,   120,   121,   122,   123,   283,   124,   125,
     126,     0,     0,   127,     0,   284,   128,   129,     0,   130,
       0,     0,   131,     0,   285,     0,   132,     0,     0,   133,
       0,     0,   134,   135,     0,   136,   137,     0,     0,   138,
     139,     0,   140,   141,   142,   143,   286,     0,     0,     0,
     144,     0,   145,     0,   146,   287,     0,     0,   147,   288,
       0,   148,   149,     0,     0,   150,     0,     0,   151,     0,
       0,   152,   153,     0,     0,     0,     0,   289,   154,     0,
       0,     0,   155,   290,   156,   291,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   292,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177,   178,   293,   179,   294,   295,   180,     0,   181,     0,
       0,     0,     0,     0,     0,     0,   182,   183,     0,     0,
       0,   184,   185,   186,   187,   188,   189,   190,   191,     0,
     296,     0,     0,   192,     0,   193,     0,   194,   195,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,     0,   203,     0,     0,   204,     0,   297,     0,     0,
     205,   206,   298,   299,   300,   301,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,   210,     0,     0,
       0,   211,     0,   212,     0,     0,   302,   213,   303,   214,
     304,     0,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   219,     0,   220,
     221,   305,   306,     0,     0,     0,   307,     0,     0,     0,
       0,     0,   224,   308,     0,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,     0,     0,     0,   225,   319,
     320,   321,     0,   322,   323,   324,   325,   326,   327,   328,
       0,   329,   330,     0,     0,   331,   227,   332,   228,   871,
     334,   335,   336,   337,   338,     0,   339,   230,   231,   340,
     341,   342,   343,     0,   344,   345,   346,   347,   348,   235,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,     0,   236,     0,   362,   363,   364,   238,
       0,     0,   239,     0,   240,     0,   241,   242,   243,     0,
       0,   365,     0,     0,     0,     0,   366,     0,     0,   367,
       0,     0,   368,   369,     0,   370,   371,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,   275,    92,
      93,     0,    94,    95,    96,   276,     0,     0,    97,     0,
      98,     0,    99,   100,   101,   277,   102,     0,     0,   103,
       0,   104,   278,   279,   105,     0,     0,   106,   107,   108,
     109,   110,   111,     0,     0,   112,   113,   114,   280,   115,
     281,   116,   282,     0,     0,   118,   119,     0,     0,     0,
       0,   120,   121,   122,   123,   283,   124,   125,   126,     0,
       0,   127,     0,   284,   128,   129,     0,   130,     0,     0,
     131,     0,   285,     0,   132,     0,     0,   133,     0,     0,
     134,   135,     0,   136,   137,     0,     0,   138,   139,     0,
     140,   141,   142,   143,   286,     0,     0,     0,   144,     0,
     145,     0,   146,   287,     0,     0,   147,   288,     0,   148,
     149,     0,     0,   150,     0,     0,   151,     0,     0,   152,
     153,     0,     0,     0,     0,   289,   154,     0,     0,     0,
     155,   290,   156,   291,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   292,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,   177,   178,
     293,   179,   294,   295,   180,     0,   181,     0,     0,     0,
       0,     0,     0,     0,   182,   183,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,     0,   296,     0,
       0,   192,     0,   193,     0,   194,   195,     0,     0,   196,
     197,   198,     0,   199,   200,   201,     0,     0,   202,     0,
     203,     0,     0,   204,     0,   297,     0,     0,   205,   206,
     298,   299,   300,   301,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,     0,   210,     0,     0,     0,   211,
       0,   212,     0,     0,   302,   213,   303,   214,   304,     0,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,   219,     0,   220,   221,   305,
     306,     0,     0,     0,   307,     0,     0,     0,     0,     0,
     224,   308,     0,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,     0,     0,     0,   225,   319,   320,   321,
       0,   322,   323,   324,   325,   326,   327,   328,     0,   329,
     330,     0,     0,   331,   227,   332,   228,   873,   334,   335,
     336,   337,   338,     0,   339,   230,   231,   340,   341,   342,
     343,     0,   344,   345,   346,   347,   348,   235,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,     0,   236,     0,   362,   363,   364,   238,     0,     0,
     239,     0,   240,     0,   241,   242,   243,     0,     0,   365,
       0,     0,     0,     0,   366,     0,     0,   367,     0,     0,
     368,   369,     0,   370,   371,    85,    86,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,   275,    92,    93,     0,
      94,    95,    96,   276,     0,     0,    97,     0,    98,     0,
      99,   100,   101,   277,   102,     0,     0,   103,     0,   104,
     278,   279,   105,     0,     0,   106,   107,   108,   109,   110,
     111,     0,     0,   112,   113,   114,   280,   115,   281,   116,
     282,     0,     0,   118,   119,     0,     0,     0,     0,   120,
     121,   122,   123,   283,   124,   125,   126,     0,     0,   127,
       0,   284,   128,   129,     0,   130,     0,     0,   131,     0,
     285,     0,   132,     0,     0,   133,     0,     0,   134,   135,
       0,   136,   137,     0,     0,   138,   139,     0,   140,   141,
     142,   143,   286,     0,     0,     0,   144,     0,   145,     0,
     146,   287,     0,     0,   147,   288,     0,   148,   149,     0,
       0,   150,     0,     0,   151,     0,     0,   152,   153,     0,
       0,     0,     0,   289,   154,     0,     0,     0,   155,   290,
     156,   291,     0,     0,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   292,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,     0,   177,   178,   293,   179,
     294,   295,   180,     0,   181,     0,     0,     0,     0,     0,
       0,     0,   182,   183,     0,     0,     0,   184,   185,   186,
     187,   188,   189,   190,   191,     0,   296,     0,     0,   192,
       0,   193,     0,   194,   195,     0,     0,   196,   197,   198,
       0,   199,   200,   201,     0,     0,   202,     0,   203,     0,
       0,   204,     0,   297,     0,     0,   205,   206,   298,   299,
     300,   301,     0,     0,   207,   208,     0,     0,     0,   209,
       0,     0,     0,   210,     0,     0,     0,   211,     0,   212,
       0,     0,   302,   213,   303,   214,   304,     0,     0,   216,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   219,     0,   220,   221,   305,   306,     0,
       0,     0,   307,     0,     0,     0,     0,     0,   224,   308,
       0,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,     0,     0,     0,   225,   319,   320,   321,     0,   322,
     323,   324,   325,   326,   327,   328,     0,   329,   330,     0,
       0,   331,   227,   332,   228,  1400,   334,   335,   336,   337,
     338,     0,   339,   230,   231,   340,   341,   342,   343,     0,
     344,   345,   346,   347,   348,   235,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,     0,
     236,     0,   362,   363,   364,   238,     0,     0,   239,     0,
     240,     0,   241,   242,   243,     0,     0,   365,     0,     0,
       0,     0,   366,     0,     0,   367,     0,     0,   368,   369,
       0,   370,   371,    85,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,   275,    92,    93,     0,    94,    95,
      96,   276,     0,     0,    97,     0,    98,     0,    99,   100,
     101,   277,   102,     0,     0,   103,     0,   104,   278,   279,
     105,     0,     0,   106,   107,   108,   109,   110,   111,     0,
       0,   112,   113,   114,   280,   115,   281,   116,   282,     0,
       0,   118,   119,     0,     0,     0,     0,   120,   121,   122,
     123,   283,   124,   125,   126,     0,     0,   127,     0,   284,
     128,   129,     0,   130,     0,     0,   131,     0,   285,     0,
     132,     0,     0,   133,     0,     0,   134,   135,     0,   136,
     137,     0,     0,   138,   139,     0,   140,   141,   142,   143,
     286,     0,     0,     0,   144,     0,   145,     0,   146,   287,
       0,     0,   147,   288,     0,   148,   149,     0,     0,   150,
       0,     0,   151,     0,     0,   152,   153,     0,     0,     0,
       0,   289,   154,     0,     0,     0,   155,   290,   156,   291,
       0,     0,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   292,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,     0,   177,   178,   293,   179,   294,   295,
     180,     0,   181,     0,     0,     0,     0,     0,     0,     0,
     182,   183,     0,     0,     0,   184,   185,   186,   187,   188,
     189,   190,   191,     0,   296,     0,     0,   192,     0,   193,
       0,   194,   195,     0,     0,   196,   197,   198,     0,   199,
     200,   201,     0,     0,   202,     0,   203,     0,     0,   204,
       0,   297,     0,     0,   205,   206,   298,   299,   300,   301,
       0,     0,   207,   208,     0,     0,     0,   209,     0,     0,
       0,   210,     0,     0,     0,   211,     0,   212,     0,     0,
     302,   213,   303,   214,   304,     0,     0,   216,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   218,
       0,   219,     0,   220,   221,   305,   306,     0,     0,     0,
     307,     0,     0,     0,     0,     0,   224,   308,     0,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     0,
       0,     0,   225,   319,   320,   321,     0,   322,   323,   324,
     325,   326,   327,   328,     0,   329,   330,     0,     0,   331,
     227,   332,   228,  1402,   334,   335,   336,   337,   338,     0,
     339,   230,   231,   340,   341,   342,   343,     0,   344,   345,
     346,   347,   348,   235,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,     0,   236,     0,
     362,   363,   364,   238,     0,     0,   239,     0,   240,     0,
     241,   242,   243,     0,     0,   365,     0,     0,     0,     0,
     366,     0,     0,   367,     0,     0,   368,   369,     0,   370,
     371,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,   275,    92,    93,     0,    94,    95,    96,   276,
       0,     0,    97,     0,    98,     0,    99,   100,   101,   277,
     102,     0,     0,   103,     0,   104,   278,   279,   105,     0,
       0,   106,   107,   108,   109,   110,   111,     0,     0,   112,
     113,   114,   280,   115,   281,   116,   282,     0,     0,   118,
     119,     0,     0,     0,     0,   120,   121,   122,   123,   283,
     124,   125,   126,     0,     0,   127,     0,   284,   128,   129,
       0,   130,     0,     0,   131,     0,   285,     0,   132,     0,
       0,   133,     0,     0,   134,   135,     0,   136,   137,     0,
       0,   138,   139,     0,   140,   141,   142,   143,   286,     0,
       0,     0,   144,     0,   145,     0,   146,   287,     0,     0,
     147,   288,     0,   148,   149,     0,     0,   150,     0,     0,
     151,     0,     0,   152,   153,     0,     0,     0,     0,   289,
     154,     0,     0,     0,   155,   290,   156,   291,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     292,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,     0,   177,   178,   293,   179,   294,   295,   180,     0,
     181,     0,     0,     0,     0,     0,     0,     0,   182,   183,
       0,     0,     0,   184,   185,   186,   187,   188,   189,   190,
     191,     0,   296,     0,     0,   192,     0,   193,     0,   194,
     195,     0,     0,   196,   197,   198,     0,   199,   200,   201,
       0,     0,   202,     0,   203,     0,     0,   204,     0,   297,
       0,     0,   205,   206,   298,   299,   300,   301,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,     0,   210,
       0,     0,     0,   211,     0,   212,     0,     0,   302,   213,
     303,   214,   304,     0,     0,   216,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   219,
       0,   220,   221,   305,   306,     0,     0,     0,   307,     0,
       0,     0,     0,     0,   224,   308,     0,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,     0,     0,     0,
     225,   319,   320,   321,     0,   322,   323,   324,   325,   326,
     327,   328,     0,   329,   330,     0,     0,   331,   227,   332,
     228,  1452,   334,   335,   336,   337,   338,     0,   339,   230,
     231,   340,   341,   342,   343,     0,   344,   345,   346,   347,
     348,   235,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,     0,   236,     0,   362,   363,
     364,   238,     0,     0,   239,     0,   240,     0,   241,   242,
     243,     0,     0,   365,     0,     0,     0,     0,   366,     0,
       0,   367,     0,     0,   368,   369,     0,   370,   371,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
     275,    92,    93,     0,    94,    95,    96,   276,     0,     0,
      97,     0,    98,     0,    99,   100,   101,   277,   102,     0,
       0,   103,     0,   104,   278,   279,   105,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,   112,   113,   114,
     280,   115,   281,   116,   282,     0,     0,   118,   119,     0,
       0,     0,     0,   120,   121,   122,   123,   283,   124,   125,
     126,     0,     0,   127,     0,   284,   128,   129,     0,   130,
       0,     0,   131,     0,   285,     0,   132,     0,     0,   133,
       0,     0,   134,   135,     0,   136,   137,     0,     0,   138,
     139,     0,   140,   141,   142,   143,   286,     0,     0,     0,
     144,     0,   145,     0,   146,   287,     0,     0,   147,   288,
       0,   148,   149,     0,     0,   150,     0,     0,   151,     0,
       0,   152,   153,     0,     0,     0,     0,   289,   154,     0,
       0,     0,   155,   290,   156,   291,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   292,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177,   178,   293,   179,   294,   295,   180,     0,   181,     0,
       0,     0,     0,     0,     0,     0,   182,   183,     0,     0,
       0,   184,   185,   186,   187,   188,   189,   190,   191,     0,
     296,     0,     0,   192,     0,   193,     0,   194,   195,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,     0,   203,     0,     0,   204,     0,   297,     0,     0,
     205,   206,   298,   299,   300,   301,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,   210,     0,     0,
       0,   211,     0,   212,     0,     0,   302,   213,   303,   214,
     304,     0,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   219,     0,   220,
     221,   305,   306,     0,     0,     0,   307,     0,     0,     0,
       0,     0,   224,   308,     0,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,     0,     0,     0,   225,   319,
     320,   321,     0,   322,   323,   324,   325,   326,   327,   328,
       0,   329,   330,     0,     0,   331,   227,   332,   228,  1454,
     334,   335,   336,   337,   338,     0,   339,   230,   231,   340,
     341,   342,   343,     0,   344,   345,   346,   347,   348,   235,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,     0,   236,     0,   362,   363,   364,   238,
       0,     0,   239,     0,   240,     0,   241,   242,   243,     0,
       0,   365,     0,     0,     0,     0,   366,     0,     0,   367,
       0,     0,   368,   369,     0,   370,   371,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,    91,    92,
      93,     0,    94,    95,    96,     0,     0,     0,    97,     0,
      98,     0,    99,   100,   101,     0,   102,     0,     0,   103,
       0,   104,     0,     0,   105,     0,     0,   106,   107,   108,
     109,   110,   111,  1527,     0,   112,   113,   114,     0,   115,
       0,   116,   117,     0,     0,   118,   119,     0,     0,     0,
       0,   120,   121,   122,   123,     0,   124,   125,   126,     0,
       0,   127,     0,     0,   128,   129,     0,   130,     0,     0,
     131,  1542,     0,     0,   132,     0,     0,   133,     0,     0,
     134,   135,     0,   136,   137,     0,     0,   138,   139,     0,
     140,   141,   142,   143,     0,     0,     0,     0,   144,  1543,
     145,     0,   146,     0,     0,     0,   147,     0,     0,   148,
     149,     0,  1544,   150,     0,     0,   151,     0,     0,   152,
     153,     0,     0,  1545,     0,     0,   154,     0,     0,     0,
     155,     0,   156,     0,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,     0,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,   177,   178,
       0,   179,     0,     0,   180,     0,   181,     0,     0,     0,
       0,     0,     0,     0,   182,   183,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,     0,     0,     0,
       0,   192,     0,   193,     0,   194,   195,     0,     0,   196,
     197,   198,     0,   199,   200,   201,     0,     0,   202,     0,
     203,     0,     0,   204,     0,     0,     0,     0,   205,   206,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,     0,   210,     0,     0,     0,   211,
       0,   212,     0,     0,     0,   213,     0,   214,   215,     0,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,   219,     0,   220,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,   227,     0,   228,     0,     0,     0,
       0,     0,     0,     0,   229,   230,   231,   232,     0,   233,
       0,     0,     0,     0,     0,     0,   234,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,   237,     0,     0,   238,     0,     0,
     239,     0,   240,     0,   241,   242,   243,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1590,    90,     0,     0,    91,    92,
      93,     0,    94,    95,    96,     0,     0,     0,    97,     0,
      98,     0,    99,   100,   101,     0,   102,     0,     0,   103,
       0,   104,     0,     0,   105,     0,     0,   106,   107,   108,
     109,   110,   111,     0,     0,   112,   113,   114,     0,   115,
       0,   116,   117,     0,     0,   118,   119,     0,     0,     0,
       0,   120,   121,   122,   123,     0,   124,   125,   126,     0,
       0,   127,     0,     0,   128,   129,     0,   130,     0,     0,
     131,  1542,     0,     0,   132,     0,     0,   133,     0,     0,
     134,   135,     0,   136,   137,     0,     0,   138,   139,     0,
     140,   141,   142,   143,     0,     0,     0,     0,   144,  1543,
     145,     0,   146,     0,     0,     0,   147,     0,     0,   148,
     149,     0,  1544,   150,     0,     0,   151,     0,     0,   152,
     153,     0,     0,  1545,     0,     0,   154,     0,     0,     0,
     155,     0,   156,     0,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,     0,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,   177,   178,
       0,   179,     0,     0,   180,     0,   181,     0,     0,     0,
       0,     0,     0,     0,   182,   183,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,     0,     0,     0,
       0,   192,     0,   193,     0,   194,   195,     0,     0,   196,
     197,   198,     0,   199,   200,   201,     0,     0,   202,     0,
     203,     0,     0,   204,     0,     0,     0,     0,   205,   206,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,     0,   210,     0,     0,     0,   211,
       0,   212,     0,     0,     0,   213,     0,   214,   215,     0,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,   219,     0,   220,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,   227,     0,   228,     0,     0,     0,
       0,     0,     0,     0,   229,   230,   231,   232,     0,   233,
       0,     0,     0,     0,     0,     0,   234,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,   237,     0,     0,   238,     0,     0,
     239,     0,   240,     0,   241,   242,   243,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1590,    90,     0,     0,    91,    92,
      93,     0,    94,    95,    96,     0,     0,     0,    97,     0,
      98,     0,    99,   100,   101,     0,   102,     0,     0,   103,
       0,   104,     0,     0,   105,     0,     0,   106,   107,   108,
     109,   110,   111,    23,     0,   112,   113,   114,     0,   115,
       0,   116,   117,     0,     0,   118,   119,     0,     0,     0,
       0,   120,   121,   122,   123,     0,   124,   125,   126,     0,
       0,   127,     0,     0,   128,   129,     0,   130,     0,     0,
     131,     0,     0,     0,   132,     0,     0,   133,     0,     0,
     134,   135,     0,   136,   137,     0,     0,   138,   139,     0,
     140,   141,   142,   143,     0,     0,     0,     0,   144,     0,
     145,     0,   146,     0,     0,     0,   147,     0,     0,   148,
     149,     0,     0,   150,     0,     0,   151,     0,     0,   152,
     153,     0,     0,     0,     0,     0,   154,     0,     0,     0,
     155,     0,   156,     0,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,     0,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,   177,   178,
       0,   179,     0,     0,   180,     0,   181,     0,     0,     0,
       0,     0,     0,     0,   182,   183,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,     0,     0,     0,
       0,   192,     0,   193,     0,   194,   195,     0,     0,   196,
     197,   198,     0,   199,   200,   201,     0,     0,   202,     0,
     203,     0,     0,   204,     0,     0,     0,     0,   205,   206,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,     0,   210,     0,     0,     0,   211,
       0,   212,     0,     0,     0,   213,     0,   214,   215,     0,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,   219,     0,   220,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,   227,     0,   228,     0,     0,     0,
       0,     0,     0,     0,   229,   230,   231,   232,     0,   233,
       0,     0,     0,     0,     0,     0,   234,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,   237,     0,     0,   238,     0,     0,
     239,     0,   240,     0,   241,   242,   243,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,   244,    90,     0,     0,    91,    92,
      93,     0,    94,    95,    96,     0,     0,     0,    97,     0,
      98,     0,    99,   100,   101,     0,   102,     0,     0,   103,
       0,   104,     0,     0,   105,     0,     0,   106,   107,   108,
     109,   110,   111,  1527,     0,   112,   113,   114,     0,   115,
       0,   116,   117,     0,     0,   118,   119,     0,     0,     0,
       0,   120,   121,   122,   123,     0,   124,   125,   126,     0,
       0,   127,     0,     0,   128,   129,     0,   130,     0,     0,
     131,     0,     0,     0,   132,     0,     0,   133,     0,     0,
     134,   135,     0,   136,   137,     0,     0,   138,   139,     0,
     140,   141,   142,   143,     0,     0,     0,     0,   144,     0,
     145,     0,   146,     0,     0,     0,   147,     0,     0,   148,
     149,     0,     0,   150,     0,     0,   151,     0,     0,   152,
     153,     0,     0,     0,     0,     0,   154,     0,     0,     0,
     155,     0,   156,     0,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,     0,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,   177,   178,
       0,   179,     0,     0,   180,     0,   181,     0,     0,     0,
       0,     0,     0,     0,   182,   183,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,     0,     0,     0,
       0,   192,     0,   193,     0,   194,   195,     0,     0,   196,
     197,   198,     0,   199,   200,   201,     0,     0,   202,     0,
     203,     0,     0,   204,     0,     0,     0,     0,   205,   206,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,     0,   210,     0,     0,     0,   211,
       0,   212,     0,     0,     0,   213,     0,   214,   215,     0,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,   219,     0,   220,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,   227,     0,   228,     0,     0,     0,
       0,     0,     0,     0,   229,   230,   231,   232,     0,   233,
       0,     0,     0,     0,     0,     0,   234,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,   237,     0,     0,   238,     0,     0,
     239,     0,   240,     0,   241,   242,   243,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,  1771,     0,
       0,     0,     0,     0,   371,    90,     0,     0,    91,    92,
      93,     0,    94,    95,    96,     0,     0,     0,    97,     0,
      98,     0,    99,   100,   101,     0,   102,     0,     0,   103,
       0,   104,     0,     0,   105,     0,     0,   106,   107,   108,
     109,   110,   111,     0,     0,   112,   113,   114,     0,   115,
       0,   116,   117,     0,     0,   118,   119,     0,     0,     0,
       0,   120,   121,   122,   123,     0,   124,   125,   126,     0,
       0,   127,     0,     0,   128,   129,     0,   130,     0,     0,
     131,     0,     0,     0,   132,     0,     0,   133,     0,     0,
     134,   135,     0,   136,   137,     0,     0,   138,   139,     0,
     140,   141,   142,   143,     0,     0,     0,     0,   144,     0,
     145,     0,   146,     0,     0,     0,   147,     0,     0,   148,
     149,     0,     0,   150,     0,     0,   151,   950,     0,   152,
     153,     0,     0,     0,     0,     0,   154,     0,     0,     0,
     155,     0,   156,     0,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,     0,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,   177,   178,
       0,   179,     0,     0,   180,     0,   181,     0,     0,     0,
       0,     0,     0,     0,   182,   183,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,     0,     0,     0,
       0,   192,     0,   193,     0,   194,   195,     0,     0,   196,
     197,   198,     0,   199,   200,   201,     0,     0,   202,     0,
     203,     0,     0,   204,     0,     0,     0,     0,   205,   206,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,     0,   210,     0,     0,     0,   211,
       0,   212,     0,     0,     0,   213,     0,   214,   215,     0,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,   219,     0,   220,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,   227,     0,   228,     0,     0,     0,
       0,     0,     0,     0,   229,   230,   231,   232,     0,   233,
       0,     0,     0,     0,     0,     0,   234,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,   237,     0,     0,   238,     0,     0,
     239,     0,   240,     0,   241,   242,   243,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   244,    90,     0,     0,    91,    92,
      93,     0,    94,    95,    96,     0,     0,     0,    97,     0,
      98,     0,    99,   100,   101,     0,   102,     0,     0,   103,
       0,   104,     0,     0,   105,     0,     0,   106,   107,   108,
     109,   110,   111,     0,     0,   112,   113,   114,     0,   115,
       0,   116,   117,     0,     0,   118,   119,     0,     0,     0,
       0,   120,   121,   122,   123,     0,   124,   125,   126,     0,
       0,   127,     0,     0,   128,   129,     0,   130,     0,     0,
     131,     0,     0,     0,   132,     0,     0,   133,     0,     0,
     134,   135,     0,   136,   137,     0,     0,   138,   139,     0,
     140,   141,   142,   143,     0,     0,     0,     0,   144,     0,
     145,     0,   146,     0,     0,     0,   147,     0,     0,   148,
     149,     0,     0,   150,     0,     0,   151,     0,     0,   152,
     153,     0,     0,     0,     0,     0,   154,     0,     0,     0,
     155,     0,   156,     0,     0,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,     0,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,     0,   177,   178,
       0,   179,     0,     0,   180,     0,   181,     0,     0,     0,
       0,     0,     0,     0,   182,   183,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,     0,     0,     0,
       0,   192,     0,   193,     0,   194,   195,     0,     0,   196,
     197,   198,     0,   199,   200,   201,     0,     0,   202,     0,
     203,     0,     0,   204,     0,     0,     0,     0,   205,   206,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,   209,     0,     0,     0,   210,     0,     0,     0,   211,
       0,   212,     0,     0,     0,   213,     0,   214,   215,     0,
       0,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,     0,   219,     0,   220,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,   227,     0,   228,     0,     0,     0,
       0,     0,     0,     0,   229,   230,   231,   232,     0,   233,
       0,     0,     0,     0,     0,     0,   234,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,   237,     0,     0,   238,     0,     0,
     239,     0,   240,     0,   241,   242,   243,     0,     0,     0,
       0,  1231,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,   244,     0,     0,     0,     0,     0,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
       0,     0,     0,    97,     0,    98,     0,    99,   100,   101,
       0,   102,     0,     0,   103,     0,   104,     0,     0,   105,
       0,     0,   106,   107,   108,   109,   110,   111,     0,     0,
     112,   113,   114,     0,   115,     0,   116,   117,     0,     0,
     118,   119,     0,     0,     0,     0,   120,   121,   122,   123,
       0,   124,   125,   126,     0,     0,   127,     0,     0,   128,
     129,     0,   130,     0,     0,   131,     0,     0,     0,   132,
       0,     0,   133,     0,     0,   134,   135,     0,   136,   137,
       0,     0,   138,   139,     0,   140,   141,   142,   143,     0,
       0,     0,     0,   144,     0,   145,     0,   146,     0,     0,
       0,   147,     0,     0,   148,   149,     0,     0,   150,     0,
       0,   151,     0,     0,   152,   153,     0,     0,     0,     0,
       0,   154,     0,     0,     0,   155,     0,   156,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,     0,   177,   178,     0,   179,     0,     0,   180,
       0,   181,     0,     0,     0,     0,     0,     0,     0,   182,
     183,     0,     0,     0,   184,   185,   186,   187,   188,   189,
     190,   191,     0,     0,     0,     0,   192,     0,   193,     0,
     194,   195,     0,     0,   196,   197,   198,     0,   199,   200,
     201,     0,     0,   202,     0,   203,     0,     0,   204,     0,
       0,     0,     0,   205,   206,     0,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,     0,
     210,     0,     0,     0,   211,     0,   212,     0,     0,     0,
     213,     0,   214,   215,     0,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
     219,     0,   220,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,   227,
       0,   228,     0,     0,     0,     0,     0,     0,     0,   229,
     230,   231,   232,     0,   233,     0,     0,     0,     0,     0,
       0,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,   237,
       0,     0,   238,     0,     0,   239,     0,   240,     0,   241,
     242,   243,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,  1589,     0,     0,     0,     0,     0,     0,  1590,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
       0,     0,     0,    97,     0,    98,     0,    99,   100,   101,
       0,   102,     0,     0,   103,     0,   104,     0,     0,   105,
       0,     0,   106,   107,   108,   109,   110,   111,     0,     0,
     112,   113,   114,     0,   115,     0,   116,   117,     0,     0,
     118,   119,     0,     0,     0,     0,   120,   121,   122,   123,
       0,   124,   125,   126,     0,     0,   127,     0,     0,   128,
     129,     0,   130,     0,     0,   131,     0,     0,     0,   132,
       0,     0,   133,     0,     0,   134,   135,     0,   136,   137,
       0,     0,   138,   139,     0,   140,   141,   142,   143,     0,
       0,     0,     0,   144,     0,   145,     0,   146,     0,     0,
       0,   147,     0,     0,   148,   149,     0,     0,   150,     0,
       0,   151,     0,     0,   152,   153,     0,     0,     0,     0,
       0,   154,     0,     0,     0,   155,     0,   156,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,     0,   177,   178,     0,   179,     0,     0,   180,
       0,   181,     0,     0,     0,     0,     0,     0,     0,   182,
     183,     0,     0,     0,   184,   185,   186,   187,   188,   189,
     190,   191,     0,     0,     0,     0,   192,     0,   193,     0,
     194,   195,     0,     0,   196,   197,   198,     0,   199,   200,
     201,     0,     0,   202,     0,   203,     0,     0,   204,     0,
       0,     0,     0,   205,   206,     0,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,     0,
     210,     0,     0,     0,   211,     0,   212,     0,     0,     0,
     213,     0,   214,   215,     0,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
     219,     0,   220,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,   227,
       0,   228,     0,     0,     0,     0,     0,     0,     0,   229,
     230,   231,   232,     0,   233,     0,     0,     0,     0,     0,
       0,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,   237,
       0,     0,   238,     0,     0,   239,     0,   240,     0,   241,
     242,   243,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,  2404,     0,     0,     0,     0,     0,   371,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
       0,     0,     0,    97,     0,    98,     0,    99,   100,   101,
       0,   102,     0,     0,   103,     0,   104,     0,     0,   105,
       0,     0,   106,   107,   108,   109,   110,   111,     0,     0,
     112,   113,   114,     0,   115,     0,   116,   117,     0,     0,
     118,   119,     0,     0,     0,     0,   120,   121,   122,   123,
       0,   124,   125,   126,     0,     0,   127,     0,     0,   128,
     129,     0,   130,     0,     0,   131,     0,     0,     0,   132,
       0,     0,   133,     0,     0,   134,   135,     0,   136,   137,
       0,     0,   138,   139,     0,   140,   141,   142,   143,     0,
       0,     0,     0,   144,     0,   145,     0,   146,     0,     0,
       0,   147,     0,     0,   148,   149,     0,     0,   150,     0,
       0,   151,     0,     0,   152,   153,     0,     0,     0,     0,
       0,   154,     0,     0,     0,   155,     0,   156,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,     0,   177,   178,     0,   179,     0,     0,   180,
       0,   181,     0,     0,     0,     0,     0,     0,     0,   182,
     183,     0,     0,     0,   184,   185,   186,   187,   188,   189,
     190,   191,     0,     0,     0,     0,   192,     0,   193,     0,
     194,   195,     0,     0,   196,   197,   198,     0,   199,   200,
     201,     0,     0,   202,     0,   203,     0,     0,   204,     0,
       0,     0,     0,   205,   206,     0,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,     0,
     210,     0,     0,     0,   211,     0,   212,     0,     0,     0,
     213,     0,   214,   215,     0,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
     219,     0,   220,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,   227,
       0,   228,     0,     0,     0,     0,     0,     0,     0,   229,
     230,   231,   232,     0,   233,     0,     0,     0,     0,     0,
       0,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,   237,
       0,     0,   238,     0,     0,   239,     0,   240,     0,   241,
     242,   243,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
       0,     0,     0,    97,     0,    98,     0,    99,   100,   101,
       0,   102,     0,     0,   103,     0,   104,     0,     0,   105,
       0,     0,   106,   107,   108,   109,   110,   111,     0,     0,
     112,   113,   114,     0,   115,     0,   116,   117,     0,     0,
     118,   119,     0,     0,     0,     0,   120,   121,   122,   123,
       0,   124,   125,   126,     0,     0,   127,     0,     0,   128,
     129,     0,   130,     0,     0,   131,     0,     0,     0,   132,
       0,     0,   133,     0,     0,   134,   135,     0,   136,   137,
       0,     0,   138,   139,     0,   140,   141,   142,   143,     0,
       0,     0,     0,   144,     0,   145,     0,   146,     0,     0,
       0,   147,     0,     0,   148,   149,     0,     0,   150,     0,
       0,   151,     0,     0,   152,   153,     0,     0,     0,     0,
       0,   154,     0,     0,     0,   155,     0,   156,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,     0,   177,   178,     0,   179,     0,     0,   180,
       0,   181,     0,     0,     0,     0,     0,     0,     0,   182,
     183,     0,     0,     0,   184,   185,   186,   187,   188,   189,
     190,   191,     0,     0,     0,     0,   192,     0,   193,     0,
     194,   195,     0,     0,   196,   197,   198,     0,   199,   200,
     201,     0,     0,   202,     0,   203,     0,     0,   204,     0,
       0,     0,     0,   205,   206,     0,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,     0,
     210,     0,     0,     0,   211,     0,   212,     0,     0,     0,
     213,     0,   214,   215,     0,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
     219,     0,   220,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,   227,
       0,   228,     0,     0,     0,     0,     0,     0,     0,   229,
     230,   231,   232,     0,   233,     0,     0,     0,     0,     0,
       0,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,   237,
       0,     0,   238,     0,     0,   239,     0,   240,     0,   241,
     242,   243,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
       0,     0,     0,    97,     0,    98,     0,    99,   100,   101,
       0,   102,     0,     0,   103,     0,   104,     0,     0,   105,
       0,     0,   106,   107,   108,   109,   110,   111,     0,     0,
     112,   113,   114,     0,   115,     0,   116,   117,     0,     0,
     118,   119,     0,     0,     0,     0,   120,   121,   122,   123,
       0,   124,   125,   126,     0,     0,   127,     0,     0,   128,
     129,     0,   130,     0,     0,   131,     0,     0,     0,   132,
       0,     0,   133,     0,     0,   134,   135,     0,   136,   137,
       0,     0,   138,   139,     0,   140,   141,   142,   143,     0,
       0,     0,     0,   144,     0,   145,     0,   146,     0,     0,
       0,   147,     0,     0,   148,   149,     0,     0,   150,     0,
       0,   151,     0,     0,   152,   153,     0,     0,     0,     0,
       0,   154,     0,     0,     0,   155,     0,   156,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,     0,   177,   178,     0,   179,     0,     0,   180,
       0,   181,     0,     0,     0,     0,     0,     0,     0,   182,
     183,     0,     0,     0,   184,   185,   186,   187,   188,   189,
     190,   191,     0,     0,     0,     0,   192,     0,   193,     0,
     194,   195,     0,     0,   196,   197,   198,     0,   199,   200,
     201,     0,     0,   202,     0,   203,     0,     0,   204,     0,
       0,     0,     0,   205,   206,     0,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,     0,
     210,     0,     0,     0,   211,     0,   212,     0,     0,     0,
     213,     0,   214,   215,     0,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
     219,     0,   220,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,   227,
       0,   228,     0,     0,     0,     0,     0,     0,     0,   229,
     230,   231,   232,     0,   233,     0,     0,     0,     0,     0,
       0,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,   237,
       0,     0,   238,     0,     0,   239,     0,   240,     0,   241,
     242,   243,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1590,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
       0,     0,     0,    97,     0,    98,     0,    99,   100,   101,
       0,   102,     0,     0,   103,     0,   104,     0,     0,   105,
       0,     0,   106,   107,   108,   109,   110,   111,     0,     0,
     112,   113,   114,     0,   115,     0,   116,   117,     0,     0,
     118,   119,     0,     0,     0,     0,   120,   121,   122,   123,
       0,   124,   125,   126,     0,     0,   127,     0,     0,   128,
     129,     0,   130,     0,     0,   131,     0,     0,     0,   132,
       0,     0,   133,     0,     0,   134,   135,     0,   136,   137,
       0,     0,   138,   139,     0,   140,   141,   142,   143,     0,
       0,     0,     0,   144,     0,   145,     0,   146,     0,     0,
       0,   147,     0,     0,   148,   149,     0,     0,   150,     0,
       0,   151,     0,     0,   152,   153,     0,     0,     0,     0,
       0,   154,   558,     0,     0,   155,     0,   156,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,     0,   177,   178,     0,   179,     0,     0,   180,
       0,   181,     0,     0,     0,     0,     0,     0,     0,   182,
     183,     0,     0,     0,   184,   185,   186,   187,   188,   189,
     190,   191,     0,     0,     0,     0,   192,     0,   193,     0,
     194,   195,     0,     0,   196,   197,   198,     0,   199,   200,
     201,     0,     0,   202,     0,   203,     0,     0,   204,     0,
     559,     0,     0,   205,   206,     0,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,     0,
     210,     0,     0,     0,   211,     0,   212,     0,     0,     0,
     213,     0,   214,   215,     0,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
     219,     0,   220,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,   227,
       0,   228,     0,     0,     0,     0,     0,     0,     0,   229,
     230,   231,   232,     0,   233,     0,     0,     0,     0,     0,
       0,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,   237,
       0,     0,   238,     0,     0,   239,     0,   240,     0,   241,
     242,   243,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   560,     0,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
       0,     0,     0,    97,     0,    98,     0,    99,   100,   101,
       0,   102,     0,     0,   103,     0,   104,     0,     0,   105,
       0,     0,   106,   107,   108,   109,   110,   111,     0,     0,
     112,   113,   114,     0,   115,     0,   116,   117,     0,     0,
     118,   119,     0,     0,     0,     0,   120,   121,   122,   123,
       0,   124,   125,   126,     0,     0,   127,     0,     0,   128,
     129,     0,   130,     0,     0,   131,     0,     0,     0,   132,
       0,     0,   133,     0,     0,   134,   135,     0,   136,   137,
       0,     0,   138,   139,     0,   140,   141,   142,   143,     0,
       0,     0,     0,   144,     0,   145,     0,   146,     0,     0,
       0,   147,     0,     0,   148,   149,     0,     0,   150,     0,
       0,   151,     0,     0,   152,   153,     0,     0,     0,     0,
       0,   154,   558,     0,     0,   155,     0,   156,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,     0,   177,   178,     0,   179,     0,     0,   180,
       0,   181,     0,     0,     0,     0,     0,     0,     0,   182,
     183,     0,     0,     0,   184,   185,   186,   187,   188,   189,
     190,   191,     0,     0,     0,     0,   192,     0,   193,     0,
     194,   195,     0,     0,   196,   197,   198,     0,   199,   200,
     201,     0,     0,   202,     0,   203,     0,     0,   204,     0,
     559,     0,     0,   205,   206,     0,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,     0,
     210,     0,     0,     0,   211,     0,   212,     0,     0,     0,
     213,     0,   214,   215,     0,     0,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
     219,     0,   220,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,   227,
       0,   228,     0,     0,     0,     0,     0,     0,     0,   229,
     230,   231,   232,     0,   233,     0,     0,     0,     0,     0,
       0,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,   237,
       0,     0,   238,     0,     0,   239,     0,   240,     0,   241,
     242,   243,    85,    86,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1524,     0,
      90,     0,     0,    91,    92,    93,     0,    94,    95,    96,
       0,     0,     0,    97,     0,    98,     0,    99,   100,   101,
       0,   102,     0,     0,   103,     0,   104,     0,     0,   105,
       0,     0,   106,   107,   108,   109,   110,   111,     0,     0,
     112,   113,   114,     0,   115,     0,   116,   117,     0,     0,
     118,   119,     0,     0,     0,     0,   120,   121,   122,   123,
       0,   124,   125,   126,     0,     0,   127,     0,     0,   128,
     129,     0,   130,     0,     0,   131,     0,     0,     0,   132,
       0,     0,   133,     0,     0,   134,   135,     0,   136,   137,
       0,     0,   138,   139,     0,   140,   141,   142,   143,     0,
       0,     0,     0,   144,     0,   145,     0,   146,     0,     0,
       0,   147,     0,     0,   148,   149,     0,     0,   150,     0,
       0,   151,     0,     0,   152,   153,     0,     0,     0,     0,
       0,   154,     0,     0,     0,   155,     0,   156,     0,     0,
       0,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,     0,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,     0,   177,   178,     0,   179,     0,     0,   180,
       0,   181,     0,     0,     0,     0,     0,     0,     0,   182,
     183,     0,     0,     0,   184,   185,   186,   187,   188,   189,
     190,   191,     0,     0,     0,     0,   192,     0,   193,     0,
     194,   195,     0,     0,   196,   197,   198,     0,   199,   200,
     201,     0,     0,   202,     0,   203,     0,     0,   204,     0,
       0,     0,     0,  1241,   206,     0,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,   209,     0,     0,     0,
     210,     0,     0,     0,   211,     0,   212,     0,     0,  1242,
     213,     0,   214,   215,     0,     0,   216,   217,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   218,     0,
     219,     0,   220,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,     0,     0,     0,     0,
       0,   225,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,     0,     0,     0,     0,     0,     0,   226,   227,
       0,   228,     0,     0,   574,     0,     0,     0,     0,   229,
     230,   231,   232,     0,  1243,     0,     0,     0,     0,     0,
       0,   234,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   574,     0,     0,     0,     0,   236,     0,   237,
       0,     0,   238,     0,     0,   239,     0,   240,   574,   241,
     242,   243,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1244,     0,
       0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   576,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,     0,     0,     0,     0,     0,
       0,     0,   575,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,     0,     0,   577,     0,   575,     0,
       0,     0,     0,     0,     0,   578,   579,     0,   576,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,     0,
       0,     0,     0,     0,   577,     0,   580,     0,     0,     0,
       0,   574,     0,   578,   579,     0,     0,     0,     0,     0,
     577,     0,     0,     0,     0,     0,     0,     0,     0,   578,
     579,     0,     0,     0,   580,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     580,     0,     0,     0,     0,   574,   581,     0,     0,     0,
       0,     0,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   575,     0,     0,   581,     0,     0,     0,     0,     0,
       0,   576,     0,     0,     0,     0,     0,     0,   582,     0,
     581,     0,     0,     0,     0,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,     0,     0,     0,     0,     0,
       0,     0,     0,   577,     0,   575,   582,     0,   574,     0,
       0,     0,   578,   579,     0,   576,     0,     0,     0,     0,
       0,     0,   582,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   580,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   577,     0,     0,
       0,   574,     0,     0,     0,     0,   578,   579,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
       0,     0,   590,     0,  1022,  1023,     0,   580,   575,     0,
       0,     0,     0,   581,     0,     0,     0,     0,   576,     0,
       0,   583,   584,   585,   586,   587,   588,   589,     0,     0,
     590,     0,  1034,  1035,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,     0,     0,   590,     0,  1046,  1047,
     577,   575,     0,     0,     0,   582,     0,   581,     0,   578,
     579,   576,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,     0,     0,     0,     0,     0,     0,     0,     0,
     580,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   577,     0,     0,     0,     0,     0,   582,
       0,     0,   578,   579,     0,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,     0,     0,     0,     0,     0,
       0,     0,     0,   580,     0,     0,     0,     0,   574,     0,
     581,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,     0,     0,   590,
       0,  1048,  1049,     0,     0,     0,     0,     0,     0,     0,
       0,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   582,   581,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   583,   584,   585,   586,   587,   588,
     589,     0,     0,   590,     0,  1052,  1053,     0,   575,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   576,     0,
       0,     0,     0,     0,     0,   582,     0,     0,     0,     0,
    1107,     0,     0,     0,     0,     0,     0,   574,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,     0,     0,
     577,   575,     0,     0,     0,     0,     0,     0,     0,   578,
     579,   576,     0,     0,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,     0,     0,   590,     0,  1058,  1059,
     580,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   577,     0,     0,     0,     0,     0,     0,
       0,     0,   578,   579,   574,     0,     0,   575,     0,     0,
     583,   584,   585,   586,   587,   588,   589,   576,     0,   590,
       0,   837,  1063,   580,     0,     0,     0,     0,     0,     0,
     581,     0,     0,     0,     0,     0,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,     0,     0,     0,   577,
       0,     0,     0,     0,     0,     0,     0,     0,   578,   579,
       0,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,   582,   581,   575,     0,     0,     0,     0,   580,
       0,     0,     0,     0,   576,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,     0,     0,     0,     0,     0,
       0,     0,   574,     0,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,     0,   582,   577,     0,     0,     0,
       0,     0,     0,     0,     0,   578,   579,   574,     0,   581,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   580,     0,     0,     0,
       0,   574,     0,     0,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,     0,     0,   590,     0,  1104,  1105,
     574,   582,   575,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,     0,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,     0,   581,   575,     0,     0,
     583,   584,   585,   586,   587,   588,   589,   576,     0,   590,
       0,     0,  1108,     0,   577,     0,     0,     0,     0,     0,
       0,   575,     0,   578,   579,     0,     0,     0,     0,     0,
       0,   576,     0,     0,     0,     0,     0,     0,   582,   577,
     575,     0,     0,     0,   580,     0,     0,     0,   578,   579,
     576,   574,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,   577,     0,   590,     0,  1124,  1125,   580,
       0,     0,   578,   579,     0,     0,     0,     0,     0,     0,
       0,     0,   577,     0,     0,     0,     0,     0,     0,     0,
       0,   578,   579,   580,   581,     0,     0,     0,     0,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,     0,
       0,     0,   580,     0,     0,     0,     0,     0,     0,   581,
       0,   575,     0,   583,   584,   585,   586,   587,   588,   589,
       0,   576,   590,     0,  1127,  1128,   582,     0,     0,     0,
       0,     0,     0,   581,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   582,   581,   577,     0,   574,     0,     0,     0,     0,
       0,     0,   578,   579,     0,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   582,     0,     0,     0,     0,
       0,     0,     0,   580,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   582,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   583,   584,   585,   586,   587,   588,   589,     0,     0,
     590,     0,  1664,  1665,     0,   575,     0,     0,     0,     0,
       0,   574,     0,   581,     0,   576,   583,   584,   585,   586,
     587,   588,   589,     0,     0,   590,     0,  1667,  1668,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,     0,
     583,   584,   585,   586,   587,   588,   589,   577,     0,   590,
       0,  1683,  1684,     0,     0,   582,   578,   579,     0,   583,
     584,   585,   586,   587,   588,   589,     0,     0,   590,     0,
    2033,  2034,     0,     0,     0,     0,     0,   580,     0,     0,
       0,   575,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   576,     0,     0,     0,   574,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   577,     0,     0,     0,   581,     0,     0,
       0,     0,   578,   579,     0,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,     0,     0,   590,
       0,  2269,  2270,   580,     0,     0,     0,     0,     0,     0,
       0,     0,   574,     0,     0,   575,     0,     0,     0,   582,
       0,     0,     0,     0,     0,   576,     0,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   581,     0,     0,     0,   577,     0,     0,
       0,     0,     0,     0,     0,     0,   578,   579,     0,     0,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
       0,     0,   575,     0,     0,     0,     0,   580,     0,     0,
       0,     0,   576,   574,     0,   582,     0,     0,     0,     0,
       0,     0,     0,     0,   583,   584,   585,   586,   587,   588,
     589,     0,     0,   590,     0,     0,  1012,     0,     0,     0,
       0,     0,     0,     0,   577,     0,     0,     0,     0,     0,
       0,     0,     0,   578,   579,     0,   574,   581,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,     0,     0,     0,     0,     0,
       0,     0,     0,   575,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   576,     0,     0,     0,     0,     0,   582,
     583,   584,   585,   586,   587,   588,   589,     0,     0,   590,
       0,     0,  1017,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,     0,   581,   577,   575,     0,     0,     0,
       0,     0,     0,     0,   578,   579,   576,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,     0,     0,     0,
       0,     0,     0,     0,     0,   580,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   582,     0,   577,     0,
       0,     0,     0,     0,     0,     0,     0,   578,   579,   574,
       0,     0,     0,     0,   583,   584,   585,   586,   587,   588,
     589,     0,     0,   590,     0,     0,  1019,     0,   580,     0,
       0,     0,     0,   574,     0,   581,     0,     0,     0,     0,
       0,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,     0,   582,   581,   575,
       0,   583,   584,   585,   586,   587,   588,   589,     0,   576,
     590,     0,     0,  1020,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   575,     0,     0,     0,   574,     0,     0,
       0,     0,     0,   576,     0,     0,     0,     0,     0,     0,
     582,   577,     0,     0,     0,     0,     0,     0,     0,     0,
     578,   579,   574,     0,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,     0,   577,     0,     0,     0,     0,
       0,   580,     0,     0,   578,   579,     0,     0,     0,     0,
       0,     0,   583,   584,   585,   586,   587,   588,   589,     0,
       0,   590,     0,     0,  1021,   580,     0,   575,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   576,     0,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,     0,
     574,   581,   575,     0,     0,   583,   584,   585,   586,   587,
     588,   589,   576,     0,   590,     0,     0,  1028,     0,   577,
       0,     0,     0,     0,     0,   581,     0,     0,   578,   579,
       0,     0,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,     0,   582,   577,     0,     0,     0,     0,   580,
       0,     0,     0,   578,   579,   574,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   582,     0,     0,
     575,     0,     0,     0,   580,     0,     0,     0,     0,     0,
     576,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   574,   581,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   577,     0,     0,     0,     0,     0,     0,     0,
       0,   578,   579,     0,   581,   575,     0,     0,   583,   584,
     585,   586,   587,   588,   589,   576,     0,   590,     0,     0,
    1029,   582,   580,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   583,   584,   585,   586,   587,   588,   589,     0,
       0,   590,     0,     0,  1041,     0,   582,   577,   575,     0,
       0,     0,     0,     0,     0,     0,   578,   579,   576,     0,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
       0,     0,   581,     0,     0,     0,     0,   580,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     577,     0,     0,     0,     0,     0,     0,     0,     0,   578,
     579,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,     0,   582,   590,     0,     0,  1043,     0,
     580,     0,     0,     0,     0,     0,   574,   581,     0,     0,
       0,   583,   584,   585,   586,   587,   588,   589,     0,     0,
     590,     0,     0,  1044,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,     0,     0,     0,     0,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,     0,   582,
     581,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,     0,     0,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,     0,     0,   575,     0,     0,   583,
     584,   585,   586,   587,   588,   589,   576,     0,   590,     0,
     574,  1045,   582,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   574,     0,     0,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   577,     0,
       0,     0,     0,     0,     0,     0,     0,   578,   579,     0,
     574,     0,     0,     0,   583,   584,   585,   586,   587,   588,
     589,     0,     0,   590,     0,     0,  1050,     0,   580,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     575,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     576,     0,     0,   574,   575,     0,     0,   583,   584,   585,
     586,   587,   588,   589,   576,     0,   590,   575,     0,  1051,
       0,     0,     0,     0,     0,     0,     0,   576,   581,     0,
     575,     0,   577,     0,     0,     0,     0,     0,     0,     0,
     576,   578,   579,     0,     0,     0,   577,     0,     0,     0,
       0,     0,     0,     0,     0,   578,   579,     0,     0,   577,
       0,     0,   580,     0,     0,     0,     0,     0,   578,   579,
     582,     0,   577,   575,     0,     0,   580,     0,     0,     0,
       0,   578,   579,   576,     0,     0,     0,     0,     0,   580,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   580,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   581,     0,     0,   577,     0,     0,     0,     0,
       0,     0,     0,     0,   578,   579,   581,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,     0,     0,   581,
       0,     0,     0,     0,     0,   580,     0,     0,     0,     0,
       0,     0,   581,     0,   582,   583,   584,   585,   586,   587,
     588,   589,     0,     0,   590,     0,     0,  1054,   582,     0,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
       0,   582,     0,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   582,   581,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,     0,     0,
       0,     0,     0,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,     0,     0,     0,   574,   582,     0,   583,
     584,   585,   586,   587,   588,   589,     0,     0,   590,   574,
       0,  1056,     0,   583,   584,   585,   586,   587,   588,   589,
       0,     0,   590,   575,     0,  1057,   583,   584,   585,   586,
     587,   588,   589,   576,   574,   590,     0,     0,  1062,   583,
     584,   585,   586,   587,   588,   589,     0,     0,   590,   574,
       0,  1066,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   577,   575,     0,     0,     0,
       0,     0,     0,     0,   578,   579,   576,     0,     0,   575,
       0,     0,   583,   584,   585,   586,   587,   588,   589,   576,
       0,   590,     0,     0,  1067,   580,     0,     0,     0,     0,
       0,     0,     0,     0,   575,     0,     0,     0,   577,     0,
       0,     0,     0,     0,   576,     0,     0,   578,   579,   575,
       0,   577,     0,     0,     0,     0,     0,     0,     0,   576,
     578,   579,     0,     0,     0,     0,     0,     0,   580,     0,
       0,     0,     0,     0,     0,   581,   577,     0,     0,     0,
       0,   580,     0,     0,     0,   578,   579,     0,     0,     0,
       0,   577,     0,     0,     0,     0,     0,     0,     0,     0,
     578,   579,     0,     0,     0,     0,   580,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   582,   581,     0,
       0,   580,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   581,     0,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   581,     0,     0,     0,
     582,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   581,     0,   582,     0,     0,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   582,   574,
       0,     0,   583,   584,   585,   586,   587,   588,   589,     0,
       0,   590,     0,   582,  1068,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,     0,     0,     0,     0,     0,
       0,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,   574,     0,     0,   583,   584,   585,   586,   587,
     588,   589,     0,     0,   590,     0,     0,  1069,   583,   584,
     585,   586,   587,   588,   589,     0,     0,   590,     0,   575,
    1102,     0,     0,     0,     0,     0,     0,     0,     0,   576,
       0,   574,     0,   583,   584,   585,   586,   587,   588,   589,
       0,     0,   590,     0,     0,  1103,     0,   574,   583,   584,
     585,   586,   587,   588,   589,     0,     0,   590,     0,     0,
    1109,   577,   575,     0,     0,     0,     0,     0,     0,     0,
     578,   579,   576,     0,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,     0,     0,     0,     0,     0,     0,
       0,   580,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   575,     0,     0,   577,     0,     0,     0,     0,     0,
       0,   576,     0,   578,   579,     0,     0,   575,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   576,     0,     0,
       0,     0,     0,     0,   580,     0,     0,     0,     0,     0,
     574,   581,     0,   577,     0,     0,     0,     0,     0,     0,
       0,     0,   578,   579,     0,     0,     0,     0,     0,   577,
       0,     0,     0,     0,     0,     0,     0,     0,   578,   579,
       0,     0,     0,   580,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   582,   581,     0,     0,     0,     0,   580,
       0,     0,     0,     0,     0,     0,     0,     0,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,     0,     0,
     575,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     576,     0,     0,   581,     0,     0,   582,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,     0,     0,   581,
       0,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,   577,     0,     0,     0,     0,     0,     0,     0,
       0,   578,   579,     0,   574,   582,     0,     0,   583,   584,
     585,   586,   587,   588,   589,     0,     0,   590,     0,     0,
    1627,   582,   580,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   574,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,     0,     0,     0,   574,     0,     0,
       0,   583,   584,   585,   586,   587,   588,   589,     0,     0,
     590,     0,     0,  1639,     0,     0,     0,     0,     0,     0,
       0,     0,   581,     0,   575,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   576,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,     0,     0,   590,
     574,     0,  1655,   575,     0,     0,   583,   584,   585,   586,
     587,   588,   589,   576,   582,   590,   577,   575,  1661,     0,
       0,     0,     0,     0,     0,   578,   579,   576,     0,     0,
       0,     0,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,     0,     0,     0,   577,   580,     0,     0,  1114,
       0,     0,     0,     0,   578,   579,     0,     0,     0,   577,
       0,     0,     0,     0,     0,     0,     0,     0,   578,   579,
     575,     0,     0,     0,     0,   580,     0,     0,     0,     0,
     576,     0,     0,     0,     0,     0,     0,     0,     0,   580,
       0,     0,     0,     0,     0,     0,   581,     0,   574,   583,
     584,   585,   586,   587,   588,   589,     0,     0,   590,     0,
       0,  1678,   577,     0,     0,     0,     0,     0,     0,     0,
       0,   578,   579,     0,     0,   581,     0,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,     0,   582,   581,
       0,     0,   580,     0,     0,     0,     0,     0,     0,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,     0,
       0,     0,     0,     0,     0,     0,     0,   582,   575,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   576,     0,
       0,   582,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   581,   574,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1681,     0,     0,
     577,     0,     0,     0,     0,   574,     0,     0,     0,   578,
     579,     0,     0,   583,   584,   585,   586,   587,   588,   589,
       0,     0,   590,     0,   582,  1685,     0,     0,     0,     0,
     580,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   583,   584,   585,   586,   587,   588,   589,     0,
       0,   590,     0,   575,  2027,     0,   583,   584,   585,   586,
     587,   588,   589,   576,     0,   590,     0,  1682,     0,     0,
       0,     0,     0,     0,     0,   575,     0,     0,     0,     0,
     581,     0,     0,     0,     0,   576,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   577,     0,     0,     0,     0,
       0,     0,     0,     0,   578,   579,     0,     0,     0,   583,
     584,   585,   586,   587,   588,   589,     0,   577,   590,     0,
    1115,     0,   582,     0,     0,   580,   578,   579,     0,     0,
       0,     0,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,     0,     0,     0,     0,     0,   580,     0,     0,
       0,     0,     0,     0,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   581,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   581,   574,     0,
       0,     0,     0,     0,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,     0,     0,   590,   582,   837,     0,
     574,     0,     0,     0,     0,     0,     0,     0,     0,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   582,
       0,     0,   574,     0,     0,     0,     0,     0,     0,     0,
       0,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,     0,     0,     0,     0,     0,     0,   575,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   576,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     575,     0,     0,     0,     0,   574,     0,     0,     0,     0,
     576,     0,   583,   584,   585,   586,   587,   588,   589,     0,
     577,   590,   575,  1027,     0,     0,     0,   574,     0,   578,
     579,     0,   576,     0,   583,   584,   585,   586,   587,   588,
     589,     0,   577,   590,     0,  1042,     0,     0,     0,     0,
     580,   578,   579,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   577,     0,     0,     0,     0,     0,
       0,     0,   580,   578,   579,   575,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   576,     0,     0,     0,     0,
       0,     0,     0,     0,   580,     0,     0,   575,     0,     0,
     581,     0,     0,     0,     0,     0,     0,   576,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   577,     0,     0,
       0,     0,   581,     0,     0,     0,   578,   579,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   577,
       0,     0,   582,     0,   581,     0,     0,   580,   578,   579,
       0,     0,     0,     0,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   582,     0,     0,     0,     0,   580,
       0,     0,     0,     0,     0,     0,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,   582,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   581,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   581,
     574,     0,     0,     0,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,     0,     0,   590,     0,  1061,   582,
       0,     0,   574,     0,     0,     0,     0,     0,     0,   583,
     584,   585,   586,   587,   588,   589,     0,     0,   590,     0,
    1065,   582,     0,     0,   574,     0,     0,     0,     0,     0,
       0,   583,   584,   585,   586,   587,   588,   589,     0,     0,
     590,     0,  1070,     0,     0,     0,     0,     0,     0,     0,
     575,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     576,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,   575,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,   583,   584,   585,   586,   587,   588,
     589,     0,   577,   590,   575,  1071,     0,     0,     0,     0,
       0,   578,   579,     0,   576,     0,   583,   584,   585,   586,
     587,   588,   589,     0,   577,   590,     0,  1072,     0,     0,
       0,     0,   580,   578,   579,     0,     0,   574,     0,     0,
       0,     0,     0,     0,     0,     0,   577,     0,     0,     0,
       0,     0,     0,     0,   580,   578,   579,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   580,     0,     0,     0,
       0,     0,   581,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   581,     0,     0,   575,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   576,     0,     0,
       0,     0,     0,     0,   582,     0,   581,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   582,     0,     0,   577,
       0,     0,     0,     0,     0,     0,     0,     0,   578,   579,
       0,     0,     0,     0,     0,     0,     0,     0,   582,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   580,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   574,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,     0,     0,     0,     0,     0,   583,
     584,   585,   586,   587,   588,   589,     0,     0,   590,     0,
    1073,     0,     0,     0,     0,     0,     0,     0,     0,   581,
       0,   583,   584,   585,   586,   587,   588,   589,     0,     0,
     590,     0,  1101,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   583,   584,   585,   586,   587,   588,   589,
     574,     0,   590,   575,  1106,     0,     0,     0,     0,     0,
       0,   582,     0,   576,     0,     0,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,     0,     0,     0,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,     0,
       0,     0,     0,     0,     0,   577,     0,     0,     0,   574,
       0,     0,     0,     0,   578,   579,     0,     0,     0,     0,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     575,     0,     0,     0,     0,   580,     0,     0,     0,     0,
     576,     0,   574,     0,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,     0,   574,   583,   584,   585,   586,
     587,   588,   589,     0,     0,   590,     0,  1123,     0,     0,
       0,     0,   577,     0,     0,     0,     0,     0,     0,   575,
       0,   578,   579,     0,     0,   581,   574,     0,     0,   576,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   580,     0,     0,     0,     0,     0,     0,     0,
     574,     0,  1636,     0,     0,     0,     0,     0,     0,     0,
       0,   577,   576,     0,     0,   575,     0,   582,     0,     0,
     578,   579,     0,     0,     0,   576,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   580,   581,     0,   577,     0,   575,     0,     0,     0,
       0,     0,     0,   578,   579,     0,   576,   577,     0,     0,
       0,     0,     0,     0,     0,     0,   578,   579,     0,     0,
     575,     0,     0,     0,   580,     0,     0,     0,     0,     0,
     576,     0,     0,     0,   582,     0,     0,   580,   577,     0,
       0,   581,     0,     0,     0,     0,     0,   578,   579,     0,
       0,     0,   583,   584,   585,   586,   587,   588,   589,     0,
       0,   590,   577,  1126,     0,     0,     0,     0,   580,     0,
       0,   578,   579,     0,   581,     0,     0,     0,     0,     0,
       0,     0,     0,   582,     0,     0,     0,   581,     0,     0,
       0,     0,   580,     0,     0,     0,     0,     0,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,     0,     0,
       0,     0,     0,     0,     0,     0,   582,     0,   581,   583,
     584,   585,   586,   587,   588,   589,     0,     0,   590,   582,
    1628,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,   581,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,     0,     0,     0,     0,     0,     0,     0,
     582,     0,     0,     0,   574,     0,     0,     0,   583,   584,
     585,   586,   587,   588,   589,     0,     0,   590,     0,  1635,
       0,     0,     0,     0,   582,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   574,     0,     0,
       0,   583,   584,   585,   586,   587,   588,   589,     0,   574,
     590,     0,  1637,     0,   583,   584,   585,   586,   587,   588,
     589,     0,     0,   590,     0,  1638,     0,     0,     0,     0,
       0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   576,   583,   584,   585,   586,   587,
     588,   589,     0,     0,   590,     0,  1641,   564,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   575,     0,   583,
     584,   585,   586,   587,   588,   589,   577,   576,   590,   575,
    1650,     0,     0,     0,     0,   578,   579,     0,     0,   576,
       0,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,     0,     0,     0,     0,   580,     0,     0,   577,
       0,     0,     0,     0,     0,     0,     0,     0,   578,   579,
       0,   577,     0,   574,     0,     0,     0,     0,     0,     0,
     578,   579,     0,     0,     0,     0,     0,     0,     0,   580,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   580,     0,     0,     0,     0,   581,   574,     0,     0,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   581,
       0,     0,     0,   575,     0,     0,     0,     0,   582,     0,
       0,   581,     0,   576,     0,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   574,   575,     0,     0,
       0,   582,     0,     0,     0,   577,     0,   576,     0,     0,
       0,     0,     0,   582,   578,   579,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   580,     0,     0,     0,   577,
       0,   574,     0,     0,     0,     0,     0,     0,   578,   579,
       0,     0,     0,   583,   584,   585,   586,   587,   588,   589,
       0,     0,   590,     0,  1651,     0,   575,     0,     0,   580,
       0,     0,     0,     0,     0,     0,   576,     0,     0,     0,
       0,     0,     0,     0,     0,   581,   583,   584,   585,   586,
     587,   588,   589,     0,     0,   590,     0,  1654,   583,   584,
     585,   586,   587,   588,   589,     0,     0,   590,   577,  1656,
       0,   575,     0,     0,     0,     0,     0,   578,   579,   581,
       0,   576,     0,     0,     0,     0,     0,   582,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   580,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   577,     0,     0,     0,     0,     0,     0,
       0,   582,   578,   579,     0,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,     0,     0,     0,     0,     0,
       0,     0,     0,   580,     0,     0,     0,     0,   581,     0,
       0,     0,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   583,   584,   585,   586,   587,   588,   589,     0,
       0,   590,     0,  1659,     0,     0,     0,     0,     0,     0,
     582,   574,     0,   581,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,     0,     0,   590,     0,  1663,   574,     0,
       0,     0,     0,     0,     0,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   582,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,     0,
       0,   575,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   576,     0,     0,     0,   583,   584,   585,   586,   587,
     588,   589,     0,     0,   590,     0,  1670,     0,   575,     0,
       0,   574,     0,     0,     0,     0,     0,     0,   576,     0,
       0,     0,     0,   577,     0,     0,     0,     0,     0,     0,
       0,     0,   578,   579,     0,   574,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,     0,     0,   590,
     577,  1679,     0,   580,     0,     0,     0,     0,     0,   578,
     579,     0,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,     0,     0,     0,     0,     0,     0,     0,     0,
     580,   575,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   576,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   581,     0,   575,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   576,     0,     0,     0,     0,
       0,     0,     0,   577,     0,     0,     0,     0,   574,     0,
     581,     0,   578,   579,     0,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   582,     0,   577,     0,     0,
       0,     0,     0,   580,     0,     0,   578,   579,     0,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,     0,
       0,     0,   582,     0,     0,     0,     0,   580,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   575,     0,
       0,   574,     0,   581,     0,     0,     0,     0,   576,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   574,     0,   581,     0,     0,
     583,   584,   585,   586,   587,   588,   589,     0,     0,   590,
     577,  1680,     0,     0,     0,   582,     0,     0,     0,   578,
     579,     0,     0,     0,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,     0,     0,   590,     0,  1689,   582,
     580,   575,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   576,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,     0,     0,     0,   575,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   576,     0,     0,     0,     0,
       0,     0,     0,   577,     0,     0,     0,     0,     0,     0,
     581,     0,   578,   579,     0,     0,     0,     0,     0,     0,
     583,   584,   585,   586,   587,   588,   589,   577,     0,   590,
       0,  1691,     0,   580,     0,     0,   578,   579,   574,     0,
       0,     0,     0,     0,   583,   584,   585,   586,   587,   588,
     589,     0,   582,   590,     0,  1692,     0,   580,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   581,     0,     0,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   581,   575,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   576,     0,
       0,     0,     0,     0,     0,   582,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,     0,     0,   590,     0,  1693,   582,
     577,     0,   574,     0,     0,     0,     0,     0,     0,   578,
     579,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     580,     0,     0,     0,     0,     0,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,     0,     0,     0,     0,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     583,   584,   585,   586,   587,   588,   589,     0,     0,   590,
       0,  1887,   575,     0,     0,     0,     0,   574,     0,     0,
     581,     0,   576,     0,   583,   584,   585,   586,   587,   588,
     589,     0,     0,   590,     0,  1888,     0,     0,     0,     0,
       0,     0,   574,     0,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   577,     0,   574,     0,     0,     0,
       0,     0,   582,   578,   579,     0,     0,     0,     0,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,     0,
       0,     0,     0,     0,   580,     0,     0,   575,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   576,     0,     0,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
     574,     0,   575,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,     0,     0,   575,     0,     0,   577,
       0,     0,     0,     0,   581,   574,   576,     0,   578,   579,
       0,     0,     0,     0,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,   577,     0,   590,     0,  1889,   580,
       0,     0,     0,   578,   579,     0,   574,     0,   577,     0,
       0,     0,     0,     0,     0,     0,   582,   578,   579,     0,
     575,     0,     0,     0,   580,     0,     0,     0,     0,     0,
     576,     0,     0,     0,     0,     0,     0,     0,   580,     0,
       0,     0,     0,     0,     0,   575,     0,     0,     0,   581,
       0,     0,     0,     0,     0,   576,     0,     0,     0,     0,
       0,     0,   577,     0,     0,     0,     0,     0,     0,     0,
       0,   578,   579,     0,   581,     0,   575,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   576,   577,   581,     0,
       0,   582,   580,     0,     0,     0,   578,   579,     0,     0,
       0,   583,   584,   585,   586,   587,   588,   589,     0,     0,
     590,     0,  2029,     0,     0,     0,   582,   580,   577,     0,
       0,     0,     0,     0,     0,     0,     0,   578,   579,     0,
     582,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,   581,     0,     0,     0,     0,     0,   580,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   581,     0,     0,
       0,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,     0,   582,   590,     0,  2036,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   574,   581,     0,
       0,   583,   584,   585,   586,   587,   588,   589,     0,   582,
     590,     0,  2037,     0,     0,   583,   584,   585,   586,   587,
     588,   589,     0,     0,   590,     0,  2038,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     582,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,     0,     0,     0,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,     0,     0,     0,   575,     0,   583,
     584,   585,   586,   587,   588,   589,     0,   576,   590,     0,
    2040,     0,     0,     0,     0,     0,     0,     0,     0,  1267,
       0,     0,     0,     0,   583,   584,   585,   586,   587,   588,
     589,     0,     0,   590,     0,  2041,     0,   574,     0,   577,
       0,     0,     0,     0,     0,     0,     0,     0,   578,   579,
     574,     0,     0,     0,     0,   583,   584,   585,   586,   587,
     588,   589,     0,     0,   590,     0,  2042,  1269,  1270,   580,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1271,  1272,     0,     0,     0,     0,     0,     0,     0,     0,
    1273,     0,     0,  1274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   575,     0,     0,
       0,     0,     0,     0,     0,     0,  1264,   576,  1265,   581,
     575,     0,     0,  1266,     0,  1267,     0,     0,  1277,     0,
     576,     0,     0,  1268,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   577,
       0,     0,     0,     0,     0,     0,     0,     0,   578,   579,
       0,   582,   577,  1278,     0,     0,     0,     0,     0,     0,
    1279,   578,   579,  1269,  1270,     0,     0,     0,     0,   580,
       0,     0,     0,     0,     0,     0,  1271,  1272,     0,     0,
       0,  1281,   580,     0,     0,     0,  1273,     0,     0,  1274,
    1282,  1283,  1284,  1275,     0,     0,  1276,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1286,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   581,
       0,     0,     0,     0,  1277,  1287,     0,     0,     0,     0,
       0,     0,   581,     0,  1288,     0,   583,   584,   585,   586,
     587,   588,   589,     0,     0,   590,     0,  2043,     0,     0,
    1289,     0,     0,     0,     0,     0,     0,     0,     0,  1278,
       0,   582,     0,     0,     0,     0,  1279,     0,     0,     0,
       0,     0,     0,     0,   582,     0,     0,     0,     0,     0,
       0,     0,     0,  1280,     0,     0,     0,  1281,     0,     0,
       0,     0,     0,     0,     0,     0,  1282,  1283,  1284,     0,
       0,     0,     0,     0,  1285,     0,     0,     0,     0,     0,
       0,     0,  1286,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1290,     0,     0,     0,     0,     0,     0,     0,
       0,  1287,     0,     0,     0,  1292,     0,     0,     0,     0,
    1288,     0,     0,     0,     0,     0,   583,   584,   585,   586,
     587,   588,   589,     0,     0,   590,  1289,  2268,     0,   583,
     584,   585,   586,   587,   588,   589,     0,     0,   590,     0,
    2372,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,    91,    92,    93,     0,    94,    95,    96,     0,
       0,     0,    97,     0,    98,     0,    99,   100,   101,     0,
     102,     0,     0,   103,     0,   104,     0,     0,   105,     0,
       0,   106,   107,   108,   109,   110,   111,     0,  1290,   112,
     113,   114,     0,   115,     0,   116,   117,     0,  1291,   118,
     119,  1292,     0,     0,     0,   120,   121,   122,   123,     0,
     124,   125,   126,     0,     0,   127,     0,     0,   128,   129,
       0,   130,     0,     0,   131,     0,     0,     0,   132,     0,
       0,   133,     0,     0,   134,   135,     0,   136,   137,     0,
       0,   138,   139,     0,   140,   141,   142,   143,     0,     0,
       0,     0,   144,     0,   145,     0,   146,     0,     0,     0,
     147,     0,     0,   148,   149,     0,     0,   150,     0,     0,
     151,     0,     0,   152,   153,     0,     0,     0,     0,     0,
     154,     0,     0,     0,   155,     0,   156,     0,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,     0,   177,   178,     0,   179,     0,     0,   180,     0,
     181,     0,     0,     0,     0,     0,     0,     0,   182,   183,
       0,     0,     0,   184,   185,   186,   187,   188,   189,   190,
     191,     0,     0,     0,     0,   192,     0,   193,     0,   194,
     195,     0,     0,   196,   197,   198,     0,   199,   200,   201,
       0,     0,   202,     0,   203,     0,     0,   204,     0,     0,
       0,     0,   205,   206,     0,     0,     0,     0,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,     0,   210,
       0,     0,     0,   211,     0,   212,     0,     0,     0,   213,
       0,   214,   215,     0,     0,   216,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   219,
       0,   220,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   226,   227,     0,
     228,     0,     0,     0,     0,     0,     0,     0,   229,   230,
     231,   232,     0,   233,     0,     0,     0,     0,     0,     0,
     234,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,     0,   237,     0,
       0,   238,     0,     0,   239,     0,   240,     0,   241,   242,
     243,     0,     0,     0,     0,  1319,    85,    86,    87,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,    91,    92,    93,
       0,    94,    95,    96,     0,     0,     0,    97,     0,    98,
       0,    99,   100,   101,     0,   102,     0,     0,   103,     0,
     104,     0,     0,   105,     0,     0,   106,   107,   108,   109,
     110,   111,     0,     0,   112,   113,   114,     0,   115,     0,
     116,   117,     0,     0,   118,   119,     0,     0,     0,     0,
     120,   121,   122,   123,     0,   124,   125,   126,     0,     0,
     127,     0,     0,   128,   129,     0,   130,     0,     0,   131,
       0,     0,     0,   132,     0,     0,   133,     0,     0,   134,
     135,     0,   136,   137,     0,     0,   138,   139,     0,   140,
     141,   142,   143,     0,     0,     0,     0,   144,     0,   145,
       0,   146,     0,     0,     0,   147,     0,     0,   148,   149,
       0,     0,   150,     0,     0,   151,     0,     0,   152,   153,
       0,     0,     0,     0,     0,   154,     0,     0,     0,   155,
       0,   156,     0,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,     0,   177,   178,     0,
     179,     0,     0,   180,     0,   181,     0,     0,     0,     0,
       0,     0,     0,   182,   183,     0,     0,     0,   184,   185,
     186,   187,   188,   189,   190,   191,     0,     0,     0,     0,
     192,     0,   193,     0,   194,   195,     0,     0,   196,   197,
     198,     0,   199,   200,   201,     0,     0,   202,     0,   203,
       0,     0,   204,     0,     0,     0,     0,   205,   206,     0,
       0,     0,     0,     0,     0,   207,   208,     0,     0,     0,
     209,     0,     0,     0,   210,     0,     0,     0,   211,     0,
     212,     0,     0,     0,   213,     0,   214,   215,     0,     0,
     216,   217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   219,     0,   220,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   226,   227,     0,   228,     0,     0,     0,     0,
       0,     0,     0,   229,   230,   231,   232,     0,   233,     0,
       0,     0,     0,     0,     0,   234,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   236,     0,   237,     0,     0,   238,     0,     0,   239,
       0,   240,     0,   241,   242,   243,     0,     0,     0,     0,
    1721,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,    91,    92,    93,     0,    94,    95,    96,     0,
       0,     0,    97,     0,    98,     0,    99,   100,   101,     0,
     102,     0,     0,   103,     0,   104,     0,     0,   105,     0,
       0,   106,   107,   108,   109,   110,   111,     0,     0,   112,
     113,   114,     0,   115,     0,   116,   117,     0,     0,   118,
     119,     0,     0,     0,     0,   120,   121,   122,   123,     0,
     124,   125,   126,     0,     0,   127,     0,     0,   128,   129,
       0,   130,     0,     0,   131,     0,     0,     0,   132,     0,
       0,   133,     0,     0,   134,   135,     0,   136,   137,     0,
       0,   138,   139,     0,   140,   141,   142,   143,     0,     0,
       0,     0,   144,     0,   145,     0,   146,     0,     0,     0,
     147,     0,     0,   148,   149,     0,     0,   150,     0,     0,
     151,     0,     0,   152,   153,     0,     0,     0,     0,     0,
     154,     0,     0,     0,   155,     0,   156,     0,     0,     0,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
       0,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,     0,   177,   178,     0,   179,     0,     0,   180,     0,
     181,     0,     0,     0,     0,     0,     0,     0,   182,   183,
       0,     0,     0,   184,   185,   186,   187,   188,   189,   190,
     191,     0,     0,     0,     0,   192,     0,   193,     0,   194,
     195,     0,     0,   196,   197,   198,     0,   199,   200,   201,
       0,     0,   202,     0,   203,     0,     0,   204,     0,     0,
       0,     0,   205,   206,     0,     0,     0,     0,     0,     0,
     207,   208,     0,     0,     0,   209,     0,     0,     0,   210,
       0,     0,     0,   211,     0,   212,     0,     0,     0,   213,
       0,   214,   215,     0,     0,   216,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   219,
       0,   220,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   226,   227,     0,
     228,     0,     0,     0,     0,     0,     0,     0,   229,   230,
     231,   232,     0,   233,     0,     0,     0,     0,     0,     0,
     234,   235,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,     0,   237,     0,
       0,   238,     0,     0,   239,     0,   240,     0,   241,   242,
     243,     0,     0,     0,     0,  1747,    85,    86,    87,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,     0,     0,    91,    92,    93,
       0,    94,    95,    96,     0,     0,     0,    97,     0,    98,
       0,    99,   100,   101,     0,   102,     0,     0,   103,     0,
     104,     0,     0,   105,     0,     0,   106,   107,   108,   109,
     110,   111,     0,     0,   112,   113,   114,     0,   115,     0,
     116,   117,     0,     0,   118,   119,     0,     0,     0,     0,
     120,   121,   122,   123,     0,   124,   125,   126,     0,     0,
     127,     0,     0,   128,   129,     0,   130,     0,     0,   131,
       0,     0,     0,   132,     0,     0,   133,     0,     0,   134,
     135,     0,   136,   137,     0,     0,   138,   139,     0,   140,
     141,   142,   143,     0,     0,     0,     0,   144,     0,   145,
       0,   146,     0,     0,     0,   147,     0,     0,   148,   149,
       0,     0,   150,     0,     0,   151,     0,     0,   152,   153,
       0,     0,     0,     0,     0,   154,     0,     0,     0,   155,
       0,   156,     0,     0,     0,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,     0,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,     0,   177,   178,     0,
     179,     0,     0,   180,     0,   181,     0,     0,     0,     0,
       0,     0,     0,   182,   183,     0,     0,     0,   184,   185,
     186,   187,   188,   189,   190,   191,     0,     0,     0,     0,
     192,     0,   193,     0,   194,   195,     0,     0,   196,   197,
     198,     0,   199,   200,   201,     0,     0,   202,     0,   203,
       0,     0,   204,     0,     0,     0,     0,   205,   206,     0,
       0,     0,     0,     0,     0,   207,   208,     0,     0,     0,
     209,     0,     0,     0,   210,     0,     0,     0,   211,     0,
     212,     0,     0,     0,   213,     0,   214,   215,     0,     0,
     216,   217,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   218,     0,   219,     0,   220,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
       0,     0,     0,     0,     0,   225,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,     0,     0,     0,     0,
       0,     0,   226,   227,     0,   228,     0,     0,   574,     0,
       0,     0,     0,   229,   230,   231,   232,     0,   233,     0,
       0,     0,     0,     0,     0,   234,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   574,  1018,     0,     0,
       0,   236,     0,   237,     0,     0,   238,     0,     0,   239,
       0,   240,   574,   241,   242,   243,     0,     0,     0,     0,
    2056,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   575,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   576,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,     0,
       0,     0,     0,     0,     0,     0,   575,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   576,     0,     0,     0,
     577,     0,   575,     0,     0,     0,     0,     0,     0,   578,
     579,     0,   576,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,     0,     0,     0,     0,     0,   577,     0,
     580,     0,     0,     0,     0,   574,     0,   578,   579,     0,
       0,     0,     0,     0,   577,     0,     0,     0,     0,     0,
       0,     0,     0,   578,   579,     0,     0,     0,   580,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,     0,     0,     0,     0,   574,
     581,     0,     0,     0,     0,     0,     0,     0,  1074,  1075,
    1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083,     0,     0,
       0,     0,     0,     0,     0,   575,     0,     0,   581,     0,
       0,     0,     0,     0,     0,   576,     0,     0,     0,     0,
       0,     0,   582,     0,   581,     0,     0,     0,     0,     0,
       0,     0,     0,   771,   772,   773,   774,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   577,     0,   575,
     582,   775,   776,   777,  1084,     0,   578,   579,     0,   576,
       0,     0,     0,   778,   779,     0,   582,   780,     0,     0,
       0,     0,     0,     0,     0,     0,   781,   580,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   577,     0,   782,   783,     0,     0,     0,     0,     0,
     578,   579,     0,     0,     0,     0,     0,   583,   584,   585,
     586,   587,   588,   589,     0,     0,   590,     0,     0,     0,
       0,   580,     0,     0,  1085,     0,     0,   581,     0,     0,
       0,     0,     0,     0,  1086,   583,   584,   585,   586,   587,
     588,   589,  1644,     0,   590,     0,     0,     0,     0,     0,
       0,   583,   584,   585,   586,   587,   588,   589,     0,     0,
     590,     0,     0,     0,     0,     0,  1087,     0,     0,   582,
       0,   581,     0,     0,     0,  1088,  1089,  1145,  1146,  1147,
    1148,  1149,  1150,  1151,  1152,  1153,  1154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1090,     0,     0,     0,
       0,     0,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,
    1153,  1154,     0,   582,  1145,  1146,  1147,  1148,  1149,  1150,
    1151,  1152,  1153,  1154,     0,  1145,  1146,  1147,  1148,  1149,
    1150,  1151,  1152,  1153,  1154,     0,     0,     0,     0,     0,
       0,     0,     0,  1155,     0,  2030,  1091,     0,     0,     0,
       0,     0,     0,     0,   583,   584,   585,   586,   587,   588,
     589,     0,     0,   590,     0,     0,     0,     0,  1426,     0,
    1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,
    1675,     0,     0,     0,     0,     0,     0,     0,  1092,     0,
       0,  1703,     0,     0,     0,     0,     0,     0,   583,   584,
     585,   586,   587,   588,   589,     0,     0,   590,     0,     0,
       0,     0,     0,  1156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1157,     0,  1145,  1146,  1147,  1148,  1149,
    1150,  1151,  1152,  1153,  1154,     0,  1879,     0,  1156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1157,     0,
    1156,     0,     0,     0,     0,  1158,     0,     0,     0,     0,
    1157,  1156,     0,     0,  1159,  1160,     0,     0,     0,     0,
       0,  1157,     0,  1093,  1094,  1095,  1096,  1097,  1098,  1099,
    1158,     0,  1100,     0,     0,  1161,     0,     0,     0,  1159,
    1160,  1894,  1158,     0,     0,     0,     0,     0,     0,     0,
       0,  1159,  1160,  1158,     0,     0,  1156,     0,     0,     0,
    1161,     0,  1159,  1160,     0,     0,  1157,     0,     0,     0,
       0,     0,  1161,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1161,     0,  1162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1158,     0,
       0,     0,     0,     0,     0,     0,     0,  1159,  1160,     0,
    1162,  1156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1157,  1162,     0,     0,     0,     0,  1163,  1161,     0,
       0,     0,     0,  1162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1163,  1158,     0,     0,     0,     0,     0,     0,
       0,     0,  1159,  1160,  1163,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1163,     0,     0,  1162,     0,
       0,     0,     0,  1161,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1164,  1165,  1166,  1167,  1168,  1169,  1170,     0,
    1163,  1171,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1162,     0,     0,     0,  1164,  1165,  1166,
    1167,  1168,  1169,  1170,     0,     0,  1171,     0,     0,  1164,
    1165,  1166,  1167,  1168,  1169,  1170,     0,     0,  1171,     0,
    1164,  1165,  1166,  1167,  1168,  1169,  1170,     0,     0,  1171,
       0,     0,     0,     0,     0,  1163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1164,  1165,  1166,  1167,  1168,
    1169,  1170,     0,     0,  1171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
    1164,  1165,  1166,  1167,  1168,  1169,  1170,    90,     0,  1171,
      91,    92,    93,     0,    94,    95,    96,     0,     0,     0,
      97,     0,    98,     0,    99,   100,   101,     0,   102,     0,
       0,   103,     0,   104,     0,     0,   105,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,   112,   113,   114,
       0,   115,     0,   116,   117,     0,     0,   118,   119,     0,
       0,     0,     0,   120,   121,   122,   123,     0,   124,   125,
     126,     0,     0,   127,     0,     0,   128,   129,     0,   130,
       0,     0,   131,     0,     0,     0,   132,     0,     0,   133,
       0,     0,   134,   135,     0,   136,   137,     0,     0,   138,
     139,     0,   140,   141,   142,   143,     0,     0,     0,     0,
     144,     0,   145,     0,   146,     0,     0,     0,   147,   955,
       0,   148,   149,     0,     0,   150,     0,     0,   151,     0,
       0,   152,   153,     0,     0,     0,     0,     0,   154,     0,
       0,     0,   155,     0,   156,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177,   178,     0,   179,     0,     0,   180,     0,   181,     0,
       0,     0,     0,     0,     0,     0,   182,   183,     0,     0,
       0,   184,   185,   186,   187,   188,   189,   190,   191,     0,
       0,     0,     0,   192,     0,   193,     0,   194,   195,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,     0,   203,     0,     0,   204,     0,   956,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,   210,     0,     0,
       0,   211,     0,   212,     0,     0,     0,   213,     0,   214,
     215,     0,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   219,     0,   220,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   227,     0,   228,     0,
       0,     0,     0,     0,     0,     0,   229,   230,   231,   232,
       0,   233,     0,     0,     0,     0,     0,     0,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,   237,     0,     0,   238,
       0,     0,   239,     0,   240,     0,   241,   242,   243,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
      91,    92,    93,     0,    94,    95,    96,     0,     0,     0,
      97,     0,    98,     0,    99,   100,   101,     0,   102,     0,
       0,   103,     0,   104,     0,     0,   105,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,   112,   113,   114,
       0,   115,     0,   116,   117,     0,     0,   118,   119,     0,
       0,     0,     0,   120,   121,   122,   123,     0,   124,   125,
     126,     0,     0,   127,     0,     0,   128,   129,     0,   130,
       0,     0,   131,     0,     0,     0,   132,     0,     0,   133,
       0,     0,   134,   135,     0,   136,   137,     0,     0,   138,
     139,     0,   140,   141,   142,   143,     0,     0,     0,     0,
     144,     0,   145,     0,   146,     0,     0,     0,   147,     0,
       0,   148,   149,     0,     0,   150,     0,     0,   151,     0,
       0,   152,   153,     0,     0,     0,     0,     0,   154,   558,
       0,     0,   155,     0,   156,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177,   178,     0,   179,     0,     0,   180,     0,   181,     0,
       0,     0,     0,     0,     0,     0,   182,   183,     0,     0,
       0,   184,   185,   186,   187,   188,   189,   190,   191,     0,
       0,     0,     0,   192,     0,   193,     0,   194,   195,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,     0,   203,     0,     0,   204,     0,   559,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,   210,     0,     0,
       0,   211,     0,   212,     0,     0,     0,   213,     0,   214,
     215,     0,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   219,     0,   220,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   227,     0,   228,     0,
       0,     0,     0,     0,     0,     0,   229,   230,   231,   232,
       0,   233,     0,     0,     0,     0,     0,     0,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,   237,     0,     0,   238,
       0,     0,   239,     0,   240,     0,   241,   242,   243,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
      91,    92,    93,     0,    94,    95,    96,     0,     0,     0,
      97,     0,    98,     0,    99,   100,   101,     0,   102,     0,
       0,   103,     0,   104,     0,     0,   105,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,   112,   113,   114,
       0,   115,     0,   116,   117,     0,     0,   118,   119,     0,
       0,  1717,     0,   120,   121,   122,   123,     0,   124,   125,
     126,     0,     0,   127,     0,     0,   128,   129,     0,   130,
       0,     0,   131,     0,     0,     0,   132,     0,     0,   133,
       0,     0,   134,   135,     0,   136,   137,     0,     0,   138,
     139,     0,   140,   141,   142,   143,     0,     0,     0,     0,
     144,     0,   145,     0,   146,     0,     0,     0,   147,     0,
       0,   148,   149,     0,     0,   150,     0,     0,   151,     0,
       0,   152,   153,     0,     0,     0,     0,     0,   154,     0,
       0,     0,   155,     0,   156,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177,   178,     0,   179,     0,     0,   180,     0,   181,     0,
       0,     0,     0,     0,     0,     0,   182,   183,     0,     0,
       0,   184,   185,   186,   187,   188,   189,   190,   191,     0,
       0,     0,     0,   192,     0,   193,     0,   194,   195,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,     0,   203,     0,     0,   204,     0,  1718,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,   210,     0,     0,
       0,   211,     0,   212,     0,     0,     0,   213,     0,   214,
     215,     0,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   219,     0,   220,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   227,     0,   228,     0,
       0,     0,     0,     0,     0,     0,   229,   230,   231,   232,
       0,   233,     0,     0,     0,     0,     0,     0,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,   237,     0,     0,   238,
       0,     0,   239,     0,   240,     0,   241,   242,   243,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
      91,    92,    93,     0,    94,    95,    96,     0,     0,     0,
      97,     0,    98,     0,    99,   100,   101,     0,   102,     0,
       0,   103,     0,   104,     0,     0,   105,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,   112,   113,   114,
       0,   115,     0,   116,   117,     0,     0,   118,   119,     0,
       0,     0,     0,   120,   121,   122,   123,     0,   124,   125,
     126,     0,     0,   127,     0,     0,   128,   129,     0,   130,
       0,     0,   131,     0,     0,     0,   132,     0,     0,   133,
       0,     0,   134,   135,     0,   136,   137,     0,     0,   138,
     139,     0,   140,   141,   142,   143,     0,     0,     0,   709,
     144,     0,   145,     0,   146,     0,     0,     0,   147,     0,
       0,   148,   149,     0,     0,   150,     0,     0,   151,     0,
       0,   152,   153,     0,     0,     0,     0,     0,   154,     0,
       0,     0,   155,     0,   156,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177,   178,     0,   179,     0,     0,   180,     0,   181,     0,
       0,     0,     0,     0,     0,     0,   182,   183,     0,     0,
       0,   184,   185,   186,   187,   188,   189,   190,   191,     0,
       0,     0,     0,   192,     0,   193,     0,   194,   195,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,     0,   203,     0,     0,   204,     0,     0,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,   210,     0,     0,
       0,   211,     0,   212,     0,     0,     0,   213,     0,   214,
     215,     0,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   219,     0,   220,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   227,     0,   228,     0,
       0,     0,     0,     0,     0,     0,   229,   230,   231,   232,
       0,   233,     0,     0,     0,     0,     0,     0,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,   237,     0,     0,   238,
       0,     0,   239,     0,   240,     0,   241,   242,   243,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
      91,    92,    93,     0,    94,    95,    96,     0,     0,     0,
      97,     0,    98,     0,    99,   100,   101,     0,   102,     0,
       0,   103,     0,   104,     0,     0,   105,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,   112,   113,   114,
       0,   115,     0,   116,   117,     0,     0,   118,   119,     0,
       0,     0,     0,   120,   121,   122,   123,     0,   124,   125,
     126,     0,     0,   127,     0,     0,   128,   129,     0,   130,
       0,     0,   131,     0,     0,     0,   132,     0,     0,   133,
       0,     0,   134,   135,     0,   136,   137,     0,     0,   138,
     139,     0,   140,   141,   142,   143,     0,     0,     0,     0,
     144,     0,   145,     0,   146,     0,     0,     0,   147,     0,
       0,   148,   149,     0,     0,   150,     0,     0,   151,     0,
       0,   152,   153,     0,     0,     0,     0,     0,   154,     0,
       0,     0,   155,     0,   156,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177,   178,     0,   179,     0,     0,   180,     0,   181,     0,
       0,     0,     0,     0,     0,     0,   182,   183,     0,     0,
       0,   184,   185,   186,   187,   188,   189,   190,   191,     0,
       0,     0,     0,   192,     0,   193,     0,   194,   195,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,     0,   203,     0,     0,   204,     0,  1905,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,   210,     0,     0,
       0,   211,     0,   212,     0,     0,     0,   213,     0,   214,
     215,     0,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   219,     0,   220,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   227,     0,   228,     0,
       0,     0,     0,     0,     0,     0,   229,   230,   231,   232,
       0,   233,     0,     0,     0,     0,     0,     0,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,   237,     0,     0,   238,
       0,     0,   239,     0,   240,     0,   241,   242,   243,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
      91,    92,    93,     0,    94,    95,    96,     0,     0,     0,
      97,     0,    98,     0,    99,   100,   101,     0,   102,     0,
       0,   103,     0,   104,     0,     0,   105,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,   112,   113,   114,
       0,   115,     0,   116,   117,     0,     0,   118,   119,     0,
       0,     0,     0,   120,   121,   122,   123,     0,   124,   125,
     126,     0,     0,   127,     0,     0,   128,   129,     0,   130,
       0,     0,   131,     0,     0,     0,   132,     0,     0,   133,
       0,     0,   134,   135,     0,   136,   137,     0,     0,   138,
     139,     0,   140,   141,   142,   143,     0,     0,     0,     0,
     144,     0,   145,     0,   146,     0,     0,     0,   147,     0,
       0,   148,   149,     0,     0,   150,     0,     0,   151,     0,
       0,   152,   153,     0,     0,     0,     0,     0,   154,     0,
       0,     0,   155,     0,   156,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177,   178,     0,   179,     0,     0,   180,     0,   181,     0,
       0,     0,     0,     0,     0,     0,   182,   183,     0,  2355,
       0,   184,   185,   186,   187,   188,   189,   190,   191,     0,
       0,     0,     0,   192,     0,   193,     0,   194,   195,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,     0,   203,     0,     0,   204,     0,     0,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,   210,     0,     0,
       0,   211,     0,   212,     0,     0,     0,   213,     0,   214,
     215,     0,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   219,     0,   220,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   227,     0,   228,     0,
       0,     0,     0,     0,     0,     0,   229,   230,   231,   232,
       0,   233,     0,     0,     0,     0,     0,     0,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,   237,     0,     0,   238,
       0,     0,   239,     0,   240,     0,   241,   242,   243,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
      91,    92,    93,     0,    94,    95,    96,     0,     0,     0,
      97,     0,    98,     0,    99,   100,   101,     0,   102,     0,
       0,   103,     0,   104,     0,     0,   105,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,   112,   113,   114,
       0,   115,     0,   116,   117,     0,     0,   118,   119,     0,
       0,     0,     0,   120,   121,   122,   123,     0,   124,   125,
     126,     0,     0,   127,     0,     0,   128,   129,     0,   130,
       0,     0,   131,     0,     0,     0,   132,     0,     0,   133,
       0,     0,   134,   135,     0,   136,   137,     0,     0,   138,
     139,     0,   140,   141,   142,   143,     0,     0,     0,     0,
     144,     0,   145,     0,   146,     0,     0,     0,   147,     0,
       0,   148,   149,     0,     0,   150,     0,     0,   151,     0,
       0,   152,   153,     0,     0,     0,     0,     0,   154,     0,
       0,     0,   155,     0,   156,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177,   178,     0,   179,     0,     0,   180,     0,   181,     0,
       0,     0,     0,     0,     0,     0,   182,   183,     0,     0,
       0,   184,   185,   186,   187,   188,   189,   190,   191,     0,
       0,     0,     0,   192,     0,   193,     0,   194,   195,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,     0,   203,     0,     0,   204,     0,     0,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,   210,     0,     0,
       0,   211,     0,   212,     0,     0,     0,   213,     0,   214,
     215,     0,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   219,     0,   220,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   227,     0,   228,     0,
       0,     0,     0,     0,     0,     0,   229,   230,   231,   232,
       0,   233,     0,     0,     0,     0,     0,     0,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,   237,     0,     0,   238,
       0,     0,   239,     0,   240,     0,   241,   242,   243,    85,
      86,    87,   962,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
      91,    92,    93,     0,    94,    95,    96,     0,     0,     0,
      97,     0,    98,     0,    99,   100,   101,     0,   102,     0,
       0,   103,     0,   104,     0,     0,   105,     0,     0,   106,
     107,   108,   109,   110,   111,     0,     0,   112,   113,   114,
       0,   115,     0,   116,   117,     0,     0,   118,   119,     0,
       0,     0,     0,   120,   121,   122,   123,     0,   124,   125,
     126,     0,     0,   127,     0,     0,   128,   129,     0,   130,
       0,     0,   131,     0,     0,     0,   132,     0,     0,   133,
       0,     0,   134,   135,     0,   136,   137,     0,     0,   138,
     139,     0,   140,   141,   963,   143,     0,     0,     0,     0,
     144,     0,   145,     0,   146,     0,     0,     0,   147,     0,
       0,   148,   149,     0,     0,   150,     0,     0,   151,     0,
       0,   152,   153,     0,     0,     0,     0,     0,   154,     0,
       0,     0,   155,     0,   156,     0,     0,     0,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,     0,
     177,   178,     0,   179,     0,     0,   180,     0,   181,     0,
       0,     0,     0,     0,     0,     0,   182,   183,     0,     0,
       0,   184,   185,   186,   187,   188,   189,   190,   191,  1976,
    1977,  1978,     0,   192,     0,   193,     0,   194,   195,     0,
       0,   196,   197,   198,     0,   199,   200,   201,     0,     0,
     202,     0,   203,     0,     0,   204,     0,     0,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,   209,     0,     0,     0,   210,     0,     0,
       0,   211,     0,   212,     0,     0,     0,   213,     0,   214,
     215,     0,     0,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,     0,   219,  1979,   220,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,     0,     0,     0,     0,     0,     0,     0,
    1980,     0,     0,  1981,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   227,     0,   228,     0,
       0,     0,     0,     0,     0,     0,   229,   230,   231,   232,
       0,   233,     0,     0,     0,     0,  1982,     0,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,     0,   237,     0,     0,   238,
       0,     0,   239,     0,   240,     0,   241,   242,   243,     0,
       0,     0,     0,     0,     0,     0,  1983,  1984,  1985,     0,
       0,  1986,  1987,  1988,  1989,  1990,     0,  1991,  1992,     0,
    1993,  1994,  1995,  1996,  1997,  1998,     0,     0,  1999,   660,
    2000,     0,  2001,  2002,  2003,  2004,  2005,  2006,     0,   661,
    2007,  2008,   662,     0,   663,     0,   664,     0,   665,     0,
       0,     0,     0,   666,     0,     0,     0,     0,     0,     0,
       0,   667,     0,     0,     0,     0,   668,   669,     0,     0,
       0,     0,     0,     0,   670,     0,     0,   671,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2009,     0,
       0,     0,     0,     0,   673,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   674,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   675,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   676,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   677,     0,   678,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   679,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   680
};

static const short yycheck[] =
{
       2,   715,     2,  1198,    14,   304,   305,   306,   692,  1485,
     608,   464,   370,   466,   467,   468,   469,   599,  1263,   601,
      22,   480,  1306,  1307,  1191,  1309,  1519,  1294,   884,   967,
    1494,   909,  1530,     3,  1320,   639,   912,  1315,    40,   492,
     493,  1620,   918,  1777,  1311,    60,   520,   531,  1549,  1243,
    1754,  1218,   862,  1247,    60,  2022,  1142,    60,   117,    60,
     398,    82,     3,    85,  1268,    34,    68,     3,    68,   486,
     487,     9,    34,    47,   642,    34,   658,   659,   124,   496,
     124,    19,   124,  1559,  2096,     9,   138,     3,     3,  1542,
    1583,   193,   576,  1569,  1570,    74,  1549,    89,   582,  1552,
    1553,   173,   144,   685,  1557,  1558,   191,   148,   102,  2104,
      62,   462,  1610,   187,   187,   221,   121,   243,  2048,   178,
     192,    82,    93,   101,   117,    38,   102,   121,   162,   117,
     109,    95,  1585,     4,   110,   242,    89,   719,   122,  1958,
     136,   723,   102,   159,   120,   162,  2158,    97,   242,   887,
     139,  1318,    76,   242,   138,   160,   135,    22,   125,    75,
       9,   134,  1502,  2103,    34,     3,   160,    74,   138,   315,
    1780,     9,    74,   142,   124,  2105,   103,   234,    29,   148,
     142,    36,     9,   142,   241,   190,   148,   173,   926,   148,
      77,  1475,    19,  1771,  1472,   341,   190,   214,     6,   242,
    2140,   271,   109,    35,   209,   210,   192,   109,  2175,    51,
     215,    62,   162,   272,   229,   184,    71,   516,   105,   235,
     279,   215,   184,   907,  2401,   184,    58,    76,    94,   189,
     192,   290,   224,    43,   304,   162,   203,  2414,    76,   235,
     282,   139,   244,   207,    48,   216,   261,   546,   265,   356,
     271,   240,   150,    63,   119,   261,   290,   236,    62,  2226,
     229,   239,   356,   138,   253,   258,   268,   236,   270,   242,
     258,   224,   142,   283,   236,   259,  1560,   236,   148,  1563,
     406,  1565,  1092,   293,   305,   260,    17,    18,  1572,  1573,
    1574,  1575,   268,   245,  1795,  2114,   301,   290,   260,  2266,
     406,   311,   290,  1389,   263,   346,   657,   301,   360,   411,
     271,   119,   916,   162,   184,  2310,   229,   406,   922,   243,
     361,   406,   263,   333,   398,   399,   400,   263,   317,   403,
     403,  1525,   404,  1500,  1944,  1621,  1503,  1504,  1214,  1543,
     255,   282,  1795,   214,  1622,  2275,   282,   406,   264,    17,
      18,   689,   920,  1163,  1440,   365,   366,   367,   368,  2371,
     406,   335,   406,   406,   406,   214,   236,   369,   370,   371,
      48,  1949,  2339,   103,    17,    18,   860,   346,   862,   381,
     188,   381,   404,   404,   346,  2089,   724,   346,   254,   404,
     360,   233,   361,  1733,  1734,   237,   398,   335,   404,   361,
    2219,   404,   361,   404,   208,   135,   264,   386,   387,   388,
     389,   390,   391,   406,   406,   243,   265,   145,   155,   421,
     422,   423,   422,    62,   266,   124,   428,   155,   239,   431,
     432,   406,   162,   435,   194,   214,   411,   406,  1991,   127,
     857,   220,   444,    60,   406,  1998,   145,   406,  1946,   238,
     239,   230,  1619,    89,  1955,   465,   187,   404,   145,     0,
     470,   408,   472,   473,   474,   475,   476,     3,   155,   157,
     237,  2050,   281,   483,   484,   485,   346,   193,   292,  1724,
     217,   491,   291,  2062,   842,   294,    34,   497,   302,   217,
     500,   361,   306,   503,   504,   505,   506,   507,   508,   509,
     510,   511,  1955,   513,   514,   515,  2009,   517,   518,   519,
    2013,   521,   522,   523,   524,   525,   526,   527,   528,   187,
     530,  2019,   532,   533,   534,   535,   536,   537,   538,   539,
     217,  2265,   239,  1778,   260,   405,   406,   547,   379,   549,
     550,   551,  1736,   231,   187,   243,   121,   557,   406,  2025,
     392,   393,   188,   239,   564,   565,   566,   567,   568,   569,
     570,  1755,   572,   573,   574,  1732,   342,  1026,   578,   579,
     580,   581,   309,   583,   584,   585,   586,   587,   588,   589,
     590,   309,  1392,  1787,  1862,   160,  1672,    34,   224,    34,
     592,    82,  1009,   229,   142,    73,   598,   599,   598,   601,
     148,    93,  1086,  1020,  1021,   607,  1210,   187,  1092,  1213,
     240,   127,   950,   253,  1700,   190,  1492,   117,  1902,  1903,
     405,   406,   309,    93,  1041,   392,   393,   139,    30,  1265,
    1266,   123,  1268,  1050,  1444,   973,   184,   342,  1916,  1056,
     215,   157,   121,    64,  1522,    66,  1063,   239,   126,  1505,
    1588,  1068,   187,   123,   189,  1291,   658,   659,   404,   112,
     113,   139,  2160,   394,   395,   396,   397,   398,   399,   400,
     200,   201,   403,  1157,   393,   394,    78,   396,   178,  1163,
     406,   160,   684,   685,   684,   411,   404,   689,   236,   183,
     692,   693,   186,   404,   696,   142,   698,   142,  1172,  1173,
     102,   148,   404,   148,   706,   242,   706,   709,   932,   709,
     934,   190,   204,   937,   716,   231,   716,   719,  1922,  1923,
    1924,   723,   724,  2187,  1141,   404,   301,   395,   396,   397,
     398,   399,   400,   404,   204,   403,   215,   184,    96,   184,
     404,   751,   195,   404,  1938,   192,   128,   192,   404,  1943,
    2017,  1918,  1919,   396,   397,   398,   399,   400,   404,   187,
     403,   189,   240,  2256,   256,   123,   541,   542,   543,   544,
     545,   187,   272,   189,   242,   253,   404,   271,   256,   279,
     271,   139,    81,   274,   275,   187,   256,   189,   241,   236,
     290,   236,   150,   175,   176,   177,   405,   406,   346,   405,
     406,   292,   204,   813,   814,   815,   297,   405,   406,   303,
     304,   302,   411,   361,   405,   406,   396,   397,   398,   399,
     400,   404,   301,   403,     6,     7,     8,     9,   404,    11,
      12,    13,    14,   843,   133,   405,   406,   405,   406,   317,
     842,   404,   844,   404,   143,   404,   204,   404,   147,   405,
     406,   861,   121,   404,   256,   405,   406,   404,   406,   405,
     406,   871,   404,   873,   404,   134,   404,  2061,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   405,   406,
     179,   180,   404,   182,   405,   406,  1244,   405,   406,   899,
     404,   160,  2059,  2060,   404,  2090,   404,   899,   404,   346,
     902,   346,   902,  2379,   405,   406,  1390,   909,  1392,   320,
     321,   322,   323,    48,   361,   917,   361,   919,   404,   919,
     189,   190,  2206,  2207,  2208,   405,   406,   338,   339,   340,
     405,   406,  2177,   404,    75,   404,   938,   119,   938,   350,
     351,   404,   944,   354,   944,   404,   215,   949,   950,   405,
     406,    59,   363,   405,   406,  2329,  2330,   162,  1442,   406,
    1444,   406,   814,   815,  2133,  2134,  1923,  1924,  2137,   380,
     381,   973,   404,   242,   404,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,  2154,  2351,  2352,  2157,   991,
     404,   991,   404,   995,   404,   997,   404,   404,  1008,   404,
     404,   404,  1012,   404,   145,   404,   275,  1017,   404,   404,
     404,   404,   404,  1023,   155,  1025,   404,   404,  1028,  1029,
     404,   404,  1439,   404,   404,  1035,   404,   296,   297,  1039,
     404,   404,   301,   404,   404,   404,   404,  1047,   404,  1049,
    1499,    75,   404,  1053,  1054,  1055,   187,   404,   404,  1059,
     404,   404,  1062,   404,  1064,   404,  1066,  1067,   404,  1069,
     404,   404,   404,   404,  1074,  1075,  1076,  1077,  1078,  1079,
    1080,  1530,  1082,  1083,  1084,  1085,   217,   411,  1088,  1089,
    1090,  1091,   187,  1093,  1094,  1095,  1096,  1097,  1098,  1099,
    1100,   406,  1102,  1103,   192,  1105,   116,  1107,  1108,  1109,
      88,   264,   406,    74,  1114,   307,   378,   405,   405,   405,
      48,   145,   405,   405,    19,  1125,   411,   404,  1128,  1129,
      48,   155,   157,  1727,    62,   124,   159,    88,   406,  1487,
     255,  2415,   398,    39,   155,  1145,  1146,  1147,  1148,  1149,
    1150,  1151,   239,  1153,  1154,  1155,   335,   235,    48,  1159,
    1160,  1161,  1162,   187,  1164,  1165,  1166,  1167,  1168,  1169,
    1170,  1171,   196,   197,   238,   235,   262,   406,   309,   107,
     238,   240,  1174,  1647,  1648,   100,  1178,   205,  1178,  1777,
     194,    93,   192,   217,    96,   406,    98,   163,   164,   165,
     166,   167,   168,   169,   192,   171,   172,   405,   136,   193,
     116,   192,  1676,  1677,   411,   406,   214,   405,   405,   405,
     398,   123,   405,  1215,   126,  1215,   406,  1219,   405,   405,
    1222,   159,  1222,   404,  1226,   405,   405,   139,   405,   405,
    1704,  1705,   405,   267,  1236,  1237,  1236,  1237,   150,   405,
     124,   397,  1244,   405,   405,   405,   405,   405,   405,  1831,
     189,   406,  1262,   394,   395,   396,   397,   398,   399,   400,
     411,   411,   403,   411,   115,   404,   187,   205,   411,   141,
     208,    48,   406,   243,   145,   309,   335,   404,   238,   243,
     406,   263,  1699,   406,   222,     9,     9,     9,     9,     9,
       9,     9,   204,     9,  1296,     9,   406,   235,   251,   124,
     238,   239,    47,   406,   405,   327,     3,   406,  1767,   242,
     242,   190,     9,   344,  1316,   344,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   190,   124,   124,   124,
     190,   242,   405,   404,   242,   242,   144,    34,  1348,   124,
    1350,   242,   124,   410,   256,  1355,  1356,   411,   242,    62,
      47,   411,   243,   411,   242,   124,   146,    96,   282,   229,
     394,   395,   396,   397,   398,   399,   400,     9,     9,   403,
       9,     9,   114,     9,   149,   409,   149,   114,  2092,    76,
       9,  1391,    75,     9,    87,     4,     9,     9,     9,     9,
    1400,     9,  1402,     9,     9,   229,     9,    16,    17,     9,
      19,   406,   242,   242,  1414,  1415,  1416,   242,   260,   242,
      29,   242,    31,    32,   411,   281,  1426,    36,    37,   281,
     405,   405,   405,   378,   405,   122,   384,   405,   405,   189,
     405,   405,   405,  1443,   131,   132,   405,   189,   406,   405,
     405,   138,  1452,   406,  1454,   142,   405,   144,   404,   265,
     157,   148,   145,   242,   242,   145,  1915,    71,   264,   408,
     148,   148,   155,   199,   398,   198,   242,   153,   404,   404,
     150,   150,     9,     9,   404,   242,   398,   404,   252,   405,
    1482,  1483,   411,   131,   190,  1487,   190,   184,   405,   364,
     165,  1950,   411,   346,   187,   192,   406,   148,   148,   341,
      76,   198,   406,   196,   197,   404,   150,   150,   406,  1511,
    1512,   242,   405,   242,  1516,  1517,  1526,   404,   282,   405,
    1522,   406,   352,   405,   217,   242,   406,   405,  1530,   405,
      87,   132,   229,   144,    95,   352,     9,   199,    87,   236,
    1542,   148,   148,   214,   242,   406,    60,  1549,   102,   264,
    1552,  1553,   102,   304,   404,  1557,  1558,   406,   255,   404,
    1562,   404,   259,   260,   289,   239,   263,   404,   404,   156,
     242,   148,   404,   242,   267,   404,   404,  1579,   405,  1579,
     404,   242,  2035,  1585,   242,   282,   405,  1589,  1590,   189,
     405,   404,   190,   190,   305,   404,  2280,  2281,   190,  2283,
     404,   190,   190,   150,   150,   229,   190,   190,  1610,   190,
     190,   405,   405,    87,   112,    87,   309,  1627,    87,    75,
     260,   404,   194,   260,   405,   242,   405,  2044,   406,  1639,
     358,   166,  2091,   405,  1644,  1645,    87,   405,   335,   405,
     405,    87,   405,   405,    87,  1655,   404,   192,   404,   346,
      72,  1661,   190,     9,   216,  1665,   405,   138,  1668,   190,
    2344,   358,  2346,  2347,   361,  1675,   404,  2265,  1678,   404,
      75,  1681,   156,   405,  1684,  1685,   170,     9,    27,   405,
    2159,  2365,   429,  1310,    33,   263,  2017,  1610,  1973,  1296,
    1264,  1592,  1961,  1703,   406,  1971,  1979,  1547,  1979,    48,
    2014,   394,   395,   396,   397,   398,   399,   400,   405,   406,
     403,  2242,  2110,    62,  2146,  1717,   409,  2358,  2317,  2116,
    2231,  2163,  2244,  1798,  1588,  1186,   976,  1236,   923,    68,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
    1766,   411,  1471,  1745,  1754,  2214,   620,  1940,  1194,  1019,
    1760,   100,  2191,  2414,  1196,   464,   445,  1759,   950,  1326,
    2399,  2091,   724,  1945,   410,   709,   995,   477,   436,   891,
     722,  1706,  2273,  2182,  1784,  2336,   125,  2287,   127,  1950,
     129,   899,  1240,  1524,  1517,  1936,   939,  1759,  1178,  2204,
     139,   140,   944,  1795,   143,  1516,  1929,   406,  1808,  1745,
     149,  2209,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1831,
    1832,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,  2138,
      -1,    -1,    -1,  1845,   193,    -1,  1848,    -1,  1848,    -1,
    1852,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1861,
      -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,  1879,
      -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,
      -1,    -1,   231,    -1,  1894,    -1,   235,    -1,    -1,   238,
     239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1907,    -1,  1917,   187,    -1,
    1920,    -1,    -1,   262,    -1,    -1,     3,    -1,     5,    -1,
      -1,    -1,  2221,  2222,  2223,    -1,    -1,  1929,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,   217,    26,
    2399,    28,    -1,    -1,    31,    -1,    33,    -1,  1950,    36,
      37,    38,    -1,  1955,    41,    42,  1958,    44,    45,  1961,
      47,    -1,    -1,    -1,    -1,    52,    53,    54,    -1,    56,
      57,  1973,    59,    60,    61,    62,    -1,    64,    -1,    66,
      -1,    -1,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2027,   105,   106,
    2030,    -1,    -1,    -1,  2034,    -1,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    23,    -1,    -1,  2048,    -1,
      -1,   128,    -1,    -1,    -1,    33,    -1,    -1,    36,    -1,
      38,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,  2089,
      68,    -1,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2114,    -1,    -1,   394,   395,   396,   397,   398,
     399,   400,    -1,    -1,   403,    -1,    -1,    -1,    -1,    -1,
     118,    -1,   219,    -1,    -1,    -1,   223,    30,   225,    -1,
     128,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2163,    -1,    -1,    -1,    -1,  2176,    -1,    -1,    -1,
      -1,  2173,   259,  2173,    -1,    -1,    -1,    -1,    -1,    -1,
    2190,    -1,  2192,    -1,  2194,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2196,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,    -1,    -1,    -1,  2219,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
     218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2270,    -1,    -1,    -1,    -1,  2275,    -1,    -1,    -1,   257,
      -1,    -1,    -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2299,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   404,   211,   212,
     213,    -1,    -1,    -1,    -1,    -1,  2328,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,  2340,    -1,
    2350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2351,
    2352,    -1,  2354,   246,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,   271,    -1,
      -1,    -1,    -1,  2385,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    32,  2406,  2399,    35,    -1,
      37,    -1,    39,    40,    41,    42,    43,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     343,    88,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      97,    -1,    99,   356,   101,    -1,    -1,   104,    -1,    -1,
     107,   108,    -1,   110,   111,    -1,    -1,   114,   115,    -1,
     117,   118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
     127,    -1,   129,   130,    -1,    -1,   133,   134,    -1,   136,
     137,    -1,    -1,   140,    -1,    -1,   143,    -1,    -1,   146,
     147,   404,    -1,    -1,   151,   152,   153,    -1,    -1,    -1,
     157,   158,   159,   160,    -1,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,   215,    -1,
      -1,   218,    -1,   220,    -1,   222,   223,    -1,    -1,   226,
     227,   228,    -1,   230,   231,   232,    -1,    -1,   235,    -1,
     237,    -1,    -1,   240,    -1,   242,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,    -1,    -1,   271,   272,   273,   274,   275,    -1,
      -1,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,   292,    -1,   294,   295,   296,
     297,    -1,    -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,
     307,   308,    -1,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,    -1,    -1,    -1,   323,   324,   325,   326,
      -1,   328,   329,   330,   331,   332,   333,   334,    -1,   336,
     337,    -1,    -1,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    -1,   351,   352,   353,   354,   355,   356,
     357,    -1,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,    -1,   379,    -1,   381,   382,   383,   384,    -1,    -1,
     387,    -1,   389,    -1,   391,   392,   393,    -1,    -1,   396,
      -1,    -1,    -1,    -1,   401,    -1,    -1,   404,    -1,    -1,
     407,   408,    -1,   410,   411,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    25,    26,    27,    -1,
      29,    30,    31,    32,    -1,    -1,    35,    -1,    37,    -1,
      39,    40,    41,    42,    43,    -1,    -1,    46,    -1,    48,
      49,    50,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    -1,    88,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    97,    -1,
      99,    -1,   101,   102,    -1,   104,    -1,    -1,   107,   108,
      -1,   110,   111,    -1,    -1,   114,   115,    -1,   117,   118,
     119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,    -1,
     129,   130,    -1,    -1,   133,   134,    -1,   136,   137,    -1,
      -1,   140,    -1,    -1,   143,    -1,    -1,   146,   147,    -1,
      -1,    -1,    -1,   152,   153,    -1,    -1,    -1,   157,   158,
     159,   160,    -1,    -1,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,   192,   193,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,   202,    -1,    -1,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,    -1,   215,    -1,    -1,   218,
      -1,   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,
      -1,   230,   231,   232,    -1,    -1,   235,    -1,   237,    -1,
      -1,   240,    -1,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,    -1,    -1,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,   268,
      -1,    -1,   271,   272,   273,   274,   275,    -1,    -1,   278,
     279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   290,    -1,   292,    -1,   294,   295,   296,   297,    -1,
      -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,   307,   308,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,    -1,    -1,    -1,   323,   324,   325,   326,    -1,   328,
     329,   330,   331,   332,   333,   334,    -1,   336,   337,    -1,
      -1,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,   351,   352,   353,   354,   355,   356,   357,    -1,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,    -1,
     379,    -1,   381,   382,   383,   384,    -1,    -1,   387,    -1,
     389,    -1,   391,   392,   393,    -1,    -1,   396,    -1,    -1,
      -1,    -1,   401,    -1,    -1,   404,    -1,    -1,   407,   408,
      -1,   410,   411,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    25,    26,    27,    -1,    29,    30,
      31,    32,    -1,    -1,    35,    -1,    37,    -1,    39,    40,
      41,    42,    43,    -1,    -1,    46,    -1,    48,    49,    50,
      51,    -1,    -1,    54,    55,    56,    57,    58,    59,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    88,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,
     101,   102,    -1,   104,    -1,    -1,   107,   108,    -1,   110,
     111,    -1,    -1,   114,   115,    -1,   117,   118,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,   127,    -1,   129,   130,
      -1,    -1,   133,   134,    -1,   136,   137,    -1,    -1,   140,
      -1,    -1,   143,    -1,    -1,   146,   147,    -1,    -1,    -1,
      -1,   152,   153,    -1,    -1,    -1,   157,   158,   159,   160,
      -1,    -1,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,   202,    -1,    -1,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,    -1,   215,    -1,    -1,   218,    -1,   220,
      -1,   222,   223,    -1,    -1,   226,   227,   228,    -1,   230,
     231,   232,    -1,    -1,   235,    -1,   237,    -1,    -1,   240,
      -1,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
      -1,    -1,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,   266,    -1,   268,    -1,    -1,
     271,   272,   273,   274,   275,    -1,    -1,   278,   279,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,
      -1,   292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,
     301,    -1,    -1,    -1,    -1,    -1,   307,   308,    -1,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,    -1,
      -1,    -1,   323,   324,   325,   326,    -1,   328,   329,   330,
     331,   332,   333,   334,    -1,   336,   337,    -1,    -1,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
     351,   352,   353,   354,   355,   356,   357,    -1,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,    -1,   379,    -1,
     381,   382,   383,   384,    -1,    -1,   387,    -1,   389,    -1,
     391,   392,   393,    -1,    -1,   396,    -1,    -1,    -1,    -1,
     401,    -1,    -1,   404,    -1,    -1,   407,   408,    -1,   410,
     411,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    25,    26,    27,    -1,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,    42,
      43,    -1,    -1,    46,    -1,    48,    49,    50,    51,    -1,
      -1,    54,    55,    56,    57,    58,    59,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    88,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,
      -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,    -1,
      -1,   114,   115,    -1,   117,   118,   119,   120,   121,    -1,
      -1,    -1,   125,    -1,   127,    -1,   129,   130,    -1,    -1,
     133,   134,    -1,   136,   137,    -1,    -1,   140,    -1,    -1,
     143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,   152,
     153,    -1,    -1,    -1,   157,   158,   159,   160,    -1,    -1,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,    -1,   215,    -1,    -1,   218,    -1,   220,    -1,   222,
     223,    -1,    -1,   226,   227,   228,    -1,   230,   231,   232,
      -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,    -1,    -1,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   266,    -1,   268,    -1,    -1,   271,   272,
     273,   274,   275,    -1,    -1,   278,   279,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,   292,
      -1,   294,   295,   296,   297,    -1,    -1,    -1,   301,    -1,
      -1,    -1,    -1,    -1,   307,   308,    -1,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,    -1,    -1,    -1,
     323,   324,   325,   326,    -1,   328,   329,   330,   331,   332,
     333,   334,    -1,   336,   337,    -1,    -1,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,    -1,   351,   352,
     353,   354,   355,   356,   357,    -1,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,    -1,   379,    -1,   381,   382,
     383,   384,    -1,    -1,   387,    -1,   389,    -1,   391,   392,
     393,    -1,    -1,   396,    -1,    -1,    -1,    -1,   401,    -1,
      -1,   404,   405,    -1,   407,   408,    -1,   410,   411,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    32,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    42,    43,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,    88,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,   108,    -1,   110,   111,    -1,    -1,   114,
     115,    -1,   117,   118,   119,   120,   121,    -1,    -1,    -1,
     125,    -1,   127,    -1,   129,   130,    -1,    -1,   133,   134,
      -1,   136,   137,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,   152,   153,    -1,
      -1,    -1,   157,   158,   159,   160,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
     215,    -1,    -1,   218,    -1,   220,    -1,   222,   223,    -1,
      -1,   226,   227,   228,    -1,   230,   231,   232,    -1,    -1,
     235,    -1,   237,    -1,    -1,   240,    -1,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,    -1,    -1,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,   271,   272,   273,   274,
     275,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,   294,
     295,   296,   297,    -1,    -1,    -1,   301,    -1,    -1,    -1,
      -1,    -1,   307,   308,    -1,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    -1,    -1,    -1,   323,   324,
     325,   326,    -1,   328,   329,   330,   331,   332,   333,   334,
      -1,   336,   337,    -1,    -1,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,   351,   352,   353,   354,
     355,   356,   357,    -1,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,    -1,   379,    -1,   381,   382,   383,   384,
      -1,    -1,   387,    -1,   389,    -1,   391,   392,   393,    -1,
      -1,   396,    -1,    -1,    -1,    -1,   401,    -1,    -1,   404,
     405,    -1,   407,   408,    -1,   410,   411,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    32,    -1,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    42,    43,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      -1,    88,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      97,    -1,    99,    -1,   101,    -1,    -1,   104,    -1,    -1,
     107,   108,    -1,   110,   111,    -1,    -1,   114,   115,    -1,
     117,   118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
     127,    -1,   129,   130,    -1,    -1,   133,   134,    -1,   136,
     137,    -1,    -1,   140,    -1,    -1,   143,    -1,    -1,   146,
     147,    -1,    -1,    -1,    -1,   152,   153,    -1,    -1,    -1,
     157,   158,   159,   160,    -1,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,   215,    -1,
      -1,   218,    -1,   220,    -1,   222,   223,    -1,    -1,   226,
     227,   228,    -1,   230,   231,   232,    -1,    -1,   235,    -1,
     237,    -1,    -1,   240,    -1,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,    -1,    -1,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,    -1,    -1,   271,   272,   273,   274,   275,    -1,
      -1,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,   292,    -1,   294,   295,   296,
     297,    -1,    -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,
     307,   308,    -1,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,    -1,    -1,    -1,   323,   324,   325,   326,
      -1,   328,   329,   330,   331,   332,   333,   334,    -1,   336,
     337,    -1,    -1,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    -1,   351,   352,   353,   354,   355,   356,
     357,    -1,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,    -1,   379,    -1,   381,   382,   383,   384,    -1,    -1,
     387,    -1,   389,    -1,   391,   392,   393,    -1,    -1,   396,
      -1,    -1,    -1,    -1,   401,    -1,    -1,   404,   405,    -1,
     407,   408,    -1,   410,   411,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    25,    26,    27,    -1,
      29,    30,    31,    32,    -1,    -1,    35,    -1,    37,    -1,
      39,    40,    41,    42,    43,    -1,    -1,    46,    -1,    48,
      49,    50,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    -1,    88,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    97,    -1,
      99,    -1,   101,    -1,    -1,   104,    -1,    -1,   107,   108,
      -1,   110,   111,    -1,    -1,   114,   115,    -1,   117,   118,
     119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,    -1,
     129,   130,    -1,    -1,   133,   134,    -1,   136,   137,    -1,
      -1,   140,    -1,    -1,   143,    -1,    -1,   146,   147,    -1,
      -1,    -1,    -1,   152,   153,    -1,    -1,    -1,   157,   158,
     159,   160,    -1,    -1,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,    -1,   193,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,   202,    -1,    -1,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,    -1,   215,    -1,    -1,   218,
      -1,   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,
      -1,   230,   231,   232,    -1,    -1,   235,    -1,   237,    -1,
      -1,   240,    -1,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,    -1,    -1,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,   268,
      -1,    -1,   271,   272,   273,   274,   275,    -1,    -1,   278,
     279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   290,    -1,   292,    -1,   294,   295,   296,   297,    -1,
      -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,   307,   308,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,    -1,    -1,    -1,   323,   324,   325,   326,    -1,   328,
     329,   330,   331,   332,   333,   334,    -1,   336,   337,    -1,
      -1,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,   351,   352,   353,   354,   355,   356,   357,    -1,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,    -1,
     379,    -1,   381,   382,   383,   384,    -1,    -1,   387,    -1,
     389,    -1,   391,   392,   393,    -1,    -1,   396,    -1,    -1,
      -1,    -1,   401,    -1,    -1,   404,   405,    -1,   407,   408,
      -1,   410,   411,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    25,    26,    27,    -1,    29,    30,
      31,    32,    -1,    -1,    35,    -1,    37,    -1,    39,    40,
      41,    42,    43,    -1,    -1,    46,    -1,    48,    49,    50,
      51,    -1,    -1,    54,    55,    56,    57,    58,    59,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    88,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,
     101,    -1,    -1,   104,    -1,    -1,   107,   108,    -1,   110,
     111,    -1,    -1,   114,   115,    -1,   117,   118,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,   127,    -1,   129,   130,
      -1,    -1,   133,   134,    -1,   136,   137,    -1,    -1,   140,
      -1,    -1,   143,    -1,    -1,   146,   147,    -1,    -1,    -1,
      -1,   152,   153,    -1,    -1,    -1,   157,   158,   159,   160,
      -1,    -1,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,   202,    -1,    -1,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,    -1,   215,    -1,    -1,   218,    -1,   220,
      -1,   222,   223,    -1,    -1,   226,   227,   228,    -1,   230,
     231,   232,    -1,    -1,   235,    -1,   237,    -1,    -1,   240,
      -1,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
      -1,    -1,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,   266,    -1,   268,    -1,    -1,
     271,   272,   273,   274,   275,    -1,    -1,   278,   279,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,
      -1,   292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,
     301,    -1,    -1,    -1,    -1,    -1,   307,   308,    -1,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,    -1,
      -1,    -1,   323,   324,   325,   326,    -1,   328,   329,   330,
     331,   332,   333,   334,    -1,   336,   337,    -1,    -1,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
     351,   352,   353,   354,   355,   356,   357,    -1,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,    -1,   379,    -1,
     381,   382,   383,   384,    -1,    -1,   387,    -1,   389,    -1,
     391,   392,   393,    -1,    -1,   396,    -1,    -1,    -1,    -1,
     401,    -1,    -1,   404,    -1,    -1,   407,   408,    -1,   410,
     411,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    25,    26,    27,    -1,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,    42,
      43,    -1,    -1,    46,    -1,    48,    49,    50,    51,    -1,
      -1,    54,    55,    56,    57,    58,    59,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    88,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,
      -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,    -1,
      -1,   114,   115,    -1,   117,   118,   119,   120,   121,    -1,
      -1,    -1,   125,    -1,   127,    -1,   129,   130,    -1,    -1,
     133,   134,    -1,   136,   137,    -1,    -1,   140,    -1,    -1,
     143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,   152,
     153,    -1,    -1,    -1,   157,   158,   159,   160,    -1,    -1,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,    -1,   215,    -1,    -1,   218,    -1,   220,    -1,   222,
     223,    -1,    -1,   226,   227,   228,    -1,   230,   231,   232,
      -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,    -1,    -1,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   266,    -1,   268,    -1,    -1,   271,   272,
     273,   274,   275,    -1,    -1,   278,   279,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,   292,
      -1,   294,   295,   296,   297,    -1,    -1,    -1,   301,    -1,
      -1,    -1,    -1,    -1,   307,   308,    -1,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,    -1,    -1,    -1,
     323,   324,   325,   326,    -1,   328,   329,   330,   331,   332,
     333,   334,    -1,   336,   337,    -1,    -1,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,    -1,   351,   352,
     353,   354,   355,   356,   357,    -1,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,    -1,   379,    -1,   381,   382,
     383,   384,    -1,    -1,   387,    -1,   389,    -1,   391,   392,
     393,    -1,    -1,   396,    -1,    -1,    -1,    -1,   401,    -1,
      -1,   404,    -1,    -1,   407,   408,    -1,   410,   411,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    32,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    42,    43,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,    88,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,   108,    -1,   110,   111,    -1,    -1,   114,
     115,    -1,   117,   118,   119,   120,   121,    -1,    -1,    -1,
     125,    -1,   127,    -1,   129,   130,    -1,    -1,   133,   134,
      -1,   136,   137,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,   152,   153,    -1,
      -1,    -1,   157,   158,   159,   160,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
     215,    -1,    -1,   218,    -1,   220,    -1,   222,   223,    -1,
      -1,   226,   227,   228,    -1,   230,   231,   232,    -1,    -1,
     235,    -1,   237,    -1,    -1,   240,    -1,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,    -1,    -1,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,   271,   272,   273,   274,
     275,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,   294,
     295,   296,   297,    -1,    -1,    -1,   301,    -1,    -1,    -1,
      -1,    -1,   307,   308,    -1,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    -1,    -1,    -1,   323,   324,
     325,   326,    -1,   328,   329,   330,   331,   332,   333,   334,
      -1,   336,   337,    -1,    -1,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,   351,   352,   353,   354,
     355,   356,   357,    -1,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,    -1,   379,    -1,   381,   382,   383,   384,
      -1,    -1,   387,    -1,   389,    -1,   391,   392,   393,    -1,
      -1,   396,    -1,    -1,    -1,    -1,   401,    -1,    -1,   404,
      -1,    -1,   407,   408,    -1,   410,   411,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    32,    -1,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    42,    43,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      -1,    88,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      97,    -1,    99,    -1,   101,    -1,    -1,   104,    -1,    -1,
     107,   108,    -1,   110,   111,    -1,    -1,   114,   115,    -1,
     117,   118,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
     127,    -1,   129,   130,    -1,    -1,   133,   134,    -1,   136,
     137,    -1,    -1,   140,    -1,    -1,   143,    -1,    -1,   146,
     147,    -1,    -1,    -1,    -1,   152,   153,    -1,    -1,    -1,
     157,   158,   159,   160,    -1,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    -1,   185,   186,
     187,   188,   189,   190,   191,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,   215,    -1,
      -1,   218,    -1,   220,    -1,   222,   223,    -1,    -1,   226,
     227,   228,    -1,   230,   231,   232,    -1,    -1,   235,    -1,
     237,    -1,    -1,   240,    -1,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,    -1,    -1,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,    -1,    -1,   271,   272,   273,   274,   275,    -1,
      -1,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,   292,    -1,   294,   295,   296,
     297,    -1,    -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,
     307,   308,    -1,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,    -1,    -1,    -1,   323,   324,   325,   326,
      -1,   328,   329,   330,   331,   332,   333,   334,    -1,   336,
     337,    -1,    -1,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    -1,   351,   352,   353,   354,   355,   356,
     357,    -1,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,    -1,   379,    -1,   381,   382,   383,   384,    -1,    -1,
     387,    -1,   389,    -1,   391,   392,   393,    -1,    -1,   396,
      -1,    -1,    -1,    -1,   401,    -1,    -1,   404,    -1,    -1,
     407,   408,    -1,   410,   411,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    25,    26,    27,    -1,
      29,    30,    31,    32,    -1,    -1,    35,    -1,    37,    -1,
      39,    40,    41,    42,    43,    -1,    -1,    46,    -1,    48,
      49,    50,    51,    -1,    -1,    54,    55,    56,    57,    58,
      59,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    -1,    88,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    97,    -1,
      99,    -1,   101,    -1,    -1,   104,    -1,    -1,   107,   108,
      -1,   110,   111,    -1,    -1,   114,   115,    -1,   117,   118,
     119,   120,   121,    -1,    -1,    -1,   125,    -1,   127,    -1,
     129,   130,    -1,    -1,   133,   134,    -1,   136,   137,    -1,
      -1,   140,    -1,    -1,   143,    -1,    -1,   146,   147,    -1,
      -1,    -1,    -1,   152,   153,    -1,    -1,    -1,   157,   158,
     159,   160,    -1,    -1,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
     189,   190,   191,    -1,   193,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,   202,    -1,    -1,    -1,   206,   207,   208,
     209,   210,   211,   212,   213,    -1,   215,    -1,    -1,   218,
      -1,   220,    -1,   222,   223,    -1,    -1,   226,   227,   228,
      -1,   230,   231,   232,    -1,    -1,   235,    -1,   237,    -1,
      -1,   240,    -1,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,    -1,    -1,   253,   254,    -1,    -1,    -1,   258,
      -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,   268,
      -1,    -1,   271,   272,   273,   274,   275,    -1,    -1,   278,
     279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   290,    -1,   292,    -1,   294,   295,   296,   297,    -1,
      -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,   307,   308,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,    -1,    -1,    -1,   323,   324,   325,   326,    -1,   328,
     329,   330,   331,   332,   333,   334,    -1,   336,   337,    -1,
      -1,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,   351,   352,   353,   354,   355,   356,   357,    -1,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,    -1,
     379,    -1,   381,   382,   383,   384,    -1,    -1,   387,    -1,
     389,    -1,   391,   392,   393,    -1,    -1,   396,    -1,    -1,
      -1,    -1,   401,    -1,    -1,   404,    -1,    -1,   407,   408,
      -1,   410,   411,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    25,    26,    27,    -1,    29,    30,
      31,    32,    -1,    -1,    35,    -1,    37,    -1,    39,    40,
      41,    42,    43,    -1,    -1,    46,    -1,    48,    49,    50,
      51,    -1,    -1,    54,    55,    56,    57,    58,    59,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    88,    -1,    90,
      91,    92,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,
     101,    -1,    -1,   104,    -1,    -1,   107,   108,    -1,   110,
     111,    -1,    -1,   114,   115,    -1,   117,   118,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,   127,    -1,   129,   130,
      -1,    -1,   133,   134,    -1,   136,   137,    -1,    -1,   140,
      -1,    -1,   143,    -1,    -1,   146,   147,    -1,    -1,    -1,
      -1,   152,   153,    -1,    -1,    -1,   157,   158,   159,   160,
      -1,    -1,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,    -1,   185,   186,   187,   188,   189,   190,
     191,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,   202,    -1,    -1,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,    -1,   215,    -1,    -1,   218,    -1,   220,
      -1,   222,   223,    -1,    -1,   226,   227,   228,    -1,   230,
     231,   232,    -1,    -1,   235,    -1,   237,    -1,    -1,   240,
      -1,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
      -1,    -1,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,
      -1,   262,    -1,    -1,    -1,   266,    -1,   268,    -1,    -1,
     271,   272,   273,   274,   275,    -1,    -1,   278,   279,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,
      -1,   292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,
     301,    -1,    -1,    -1,    -1,    -1,   307,   308,    -1,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,    -1,
      -1,    -1,   323,   324,   325,   326,    -1,   328,   329,   330,
     331,   332,   333,   334,    -1,   336,   337,    -1,    -1,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
     351,   352,   353,   354,   355,   356,   357,    -1,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,    -1,   379,    -1,
     381,   382,   383,   384,    -1,    -1,   387,    -1,   389,    -1,
     391,   392,   393,    -1,    -1,   396,    -1,    -1,    -1,    -1,
     401,    -1,    -1,   404,    -1,    -1,   407,   408,    -1,   410,
     411,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    25,    26,    27,    -1,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,    42,
      43,    -1,    -1,    46,    -1,    48,    49,    50,    51,    -1,
      -1,    54,    55,    56,    57,    58,    59,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    88,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,
      -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,    -1,
      -1,   114,   115,    -1,   117,   118,   119,   120,   121,    -1,
      -1,    -1,   125,    -1,   127,    -1,   129,   130,    -1,    -1,
     133,   134,    -1,   136,   137,    -1,    -1,   140,    -1,    -1,
     143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,   152,
     153,    -1,    -1,    -1,   157,   158,   159,   160,    -1,    -1,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,    -1,   185,   186,   187,   188,   189,   190,   191,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,    -1,   215,    -1,    -1,   218,    -1,   220,    -1,   222,
     223,    -1,    -1,   226,   227,   228,    -1,   230,   231,   232,
      -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,    -1,    -1,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   266,    -1,   268,    -1,    -1,   271,   272,
     273,   274,   275,    -1,    -1,   278,   279,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,   292,
      -1,   294,   295,   296,   297,    -1,    -1,    -1,   301,    -1,
      -1,    -1,    -1,    -1,   307,   308,    -1,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,    -1,    -1,    -1,
     323,   324,   325,   326,    -1,   328,   329,   330,   331,   332,
     333,   334,    -1,   336,   337,    -1,    -1,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,    -1,   351,   352,
     353,   354,   355,   356,   357,    -1,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,    -1,   379,    -1,   381,   382,
     383,   384,    -1,    -1,   387,    -1,   389,    -1,   391,   392,
     393,    -1,    -1,   396,    -1,    -1,    -1,    -1,   401,    -1,
      -1,   404,    -1,    -1,   407,   408,    -1,   410,   411,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    32,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    42,    43,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,    88,    -1,    90,    91,    92,    -1,    94,
      -1,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,   108,    -1,   110,   111,    -1,    -1,   114,
     115,    -1,   117,   118,   119,   120,   121,    -1,    -1,    -1,
     125,    -1,   127,    -1,   129,   130,    -1,    -1,   133,   134,
      -1,   136,   137,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,   152,   153,    -1,
      -1,    -1,   157,   158,   159,   160,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,   187,   188,   189,   190,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
     215,    -1,    -1,   218,    -1,   220,    -1,   222,   223,    -1,
      -1,   226,   227,   228,    -1,   230,   231,   232,    -1,    -1,
     235,    -1,   237,    -1,    -1,   240,    -1,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,    -1,    -1,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,   271,   272,   273,   274,
     275,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,   294,
     295,   296,   297,    -1,    -1,    -1,   301,    -1,    -1,    -1,
      -1,    -1,   307,   308,    -1,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,    -1,    -1,    -1,   323,   324,
     325,   326,    -1,   328,   329,   330,   331,   332,   333,   334,
      -1,   336,   337,    -1,    -1,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,   351,   352,   353,   354,
     355,   356,   357,    -1,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,    -1,   379,    -1,   381,   382,   383,   384,
      -1,    -1,   387,    -1,   389,    -1,   391,   392,   393,    -1,
      -1,   396,    -1,    -1,    -1,    -1,   401,    -1,    -1,   404,
      -1,    -1,   407,   408,    -1,   410,   411,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    -1,    43,    -1,    -1,    46,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    66,
      -1,    68,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    83,    84,    85,    -1,
      -1,    88,    -1,    -1,    91,    92,    -1,    94,    -1,    -1,
      97,    98,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,
     107,   108,    -1,   110,   111,    -1,    -1,   114,   115,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,   125,   126,
     127,    -1,   129,    -1,    -1,    -1,   133,    -1,    -1,   136,
     137,    -1,   139,   140,    -1,    -1,   143,    -1,    -1,   146,
     147,    -1,    -1,   150,    -1,    -1,   153,    -1,    -1,    -1,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,    -1,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    -1,   185,   186,
      -1,   188,    -1,    -1,   191,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,    -1,    -1,
      -1,   218,    -1,   220,    -1,   222,   223,    -1,    -1,   226,
     227,   228,    -1,   230,   231,   232,    -1,    -1,   235,    -1,
     237,    -1,    -1,   240,    -1,    -1,    -1,    -1,   245,   246,
      -1,    -1,    -1,    -1,    -1,    -1,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,
      -1,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,   292,    -1,   294,   295,   296,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   340,   341,    -1,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,   352,   353,   354,    -1,   356,
      -1,    -1,    -1,    -1,    -1,    -1,   363,   364,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,    -1,   381,    -1,    -1,   384,    -1,    -1,
     387,    -1,   389,    -1,   391,   392,   393,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   411,    22,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    -1,    43,    -1,    -1,    46,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    68,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    83,    84,    85,    -1,
      -1,    88,    -1,    -1,    91,    92,    -1,    94,    -1,    -1,
      97,    98,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,
     107,   108,    -1,   110,   111,    -1,    -1,   114,   115,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,   125,   126,
     127,    -1,   129,    -1,    -1,    -1,   133,    -1,    -1,   136,
     137,    -1,   139,   140,    -1,    -1,   143,    -1,    -1,   146,
     147,    -1,    -1,   150,    -1,    -1,   153,    -1,    -1,    -1,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,    -1,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    -1,   185,   186,
      -1,   188,    -1,    -1,   191,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,    -1,    -1,
      -1,   218,    -1,   220,    -1,   222,   223,    -1,    -1,   226,
     227,   228,    -1,   230,   231,   232,    -1,    -1,   235,    -1,
     237,    -1,    -1,   240,    -1,    -1,    -1,    -1,   245,   246,
      -1,    -1,    -1,    -1,    -1,    -1,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,
      -1,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,   292,    -1,   294,   295,   296,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   340,   341,    -1,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,   352,   353,   354,    -1,   356,
      -1,    -1,    -1,    -1,    -1,    -1,   363,   364,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,    -1,   381,    -1,    -1,   384,    -1,    -1,
     387,    -1,   389,    -1,   391,   392,   393,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   411,    22,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    -1,    43,    -1,    -1,    46,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    66,
      -1,    68,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    83,    84,    85,    -1,
      -1,    88,    -1,    -1,    91,    92,    -1,    94,    -1,    -1,
      97,    -1,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,
     107,   108,    -1,   110,   111,    -1,    -1,   114,   115,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,   125,    -1,
     127,    -1,   129,    -1,    -1,    -1,   133,    -1,    -1,   136,
     137,    -1,    -1,   140,    -1,    -1,   143,    -1,    -1,   146,
     147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,    -1,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    -1,   185,   186,
      -1,   188,    -1,    -1,   191,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,    -1,    -1,
      -1,   218,    -1,   220,    -1,   222,   223,    -1,    -1,   226,
     227,   228,    -1,   230,   231,   232,    -1,    -1,   235,    -1,
     237,    -1,    -1,   240,    -1,    -1,    -1,    -1,   245,   246,
      -1,    -1,    -1,    -1,    -1,    -1,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,
      -1,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,   292,    -1,   294,   295,   296,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   340,   341,    -1,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,   352,   353,   354,    -1,   356,
      -1,    -1,    -1,    -1,    -1,    -1,   363,   364,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,    -1,   381,    -1,    -1,   384,    -1,    -1,
     387,    -1,   389,    -1,   391,   392,   393,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,   404,    -1,    -1,
      -1,    -1,    -1,    -1,   411,    22,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    -1,    43,    -1,    -1,    46,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    66,
      -1,    68,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    83,    84,    85,    -1,
      -1,    88,    -1,    -1,    91,    92,    -1,    94,    -1,    -1,
      97,    -1,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,
     107,   108,    -1,   110,   111,    -1,    -1,   114,   115,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,   125,    -1,
     127,    -1,   129,    -1,    -1,    -1,   133,    -1,    -1,   136,
     137,    -1,    -1,   140,    -1,    -1,   143,    -1,    -1,   146,
     147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,    -1,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    -1,   185,   186,
      -1,   188,    -1,    -1,   191,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,    -1,    -1,
      -1,   218,    -1,   220,    -1,   222,   223,    -1,    -1,   226,
     227,   228,    -1,   230,   231,   232,    -1,    -1,   235,    -1,
     237,    -1,    -1,   240,    -1,    -1,    -1,    -1,   245,   246,
      -1,    -1,    -1,    -1,    -1,    -1,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,
      -1,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,   292,    -1,   294,   295,   296,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   340,   341,    -1,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,   352,   353,   354,    -1,   356,
      -1,    -1,    -1,    -1,    -1,    -1,   363,   364,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,    -1,   381,    -1,    -1,   384,    -1,    -1,
     387,    -1,   389,    -1,   391,   392,   393,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,   405,    -1,
      -1,    -1,    -1,    -1,   411,    22,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    -1,    43,    -1,    -1,    46,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    68,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    83,    84,    85,    -1,
      -1,    88,    -1,    -1,    91,    92,    -1,    94,    -1,    -1,
      97,    -1,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,
     107,   108,    -1,   110,   111,    -1,    -1,   114,   115,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,   125,    -1,
     127,    -1,   129,    -1,    -1,    -1,   133,    -1,    -1,   136,
     137,    -1,    -1,   140,    -1,    -1,   143,   144,    -1,   146,
     147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,    -1,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    -1,   185,   186,
      -1,   188,    -1,    -1,   191,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,    -1,    -1,
      -1,   218,    -1,   220,    -1,   222,   223,    -1,    -1,   226,
     227,   228,    -1,   230,   231,   232,    -1,    -1,   235,    -1,
     237,    -1,    -1,   240,    -1,    -1,    -1,    -1,   245,   246,
      -1,    -1,    -1,    -1,    -1,    -1,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,
      -1,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,   292,    -1,   294,   295,   296,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   340,   341,    -1,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,   352,   353,   354,    -1,   356,
      -1,    -1,    -1,    -1,    -1,    -1,   363,   364,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,    -1,   381,    -1,    -1,   384,    -1,    -1,
     387,    -1,   389,    -1,   391,   392,   393,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   411,    22,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    -1,    -1,    35,    -1,
      37,    -1,    39,    40,    41,    -1,    43,    -1,    -1,    46,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    55,    56,
      57,    58,    59,    -1,    -1,    62,    63,    64,    -1,    66,
      -1,    68,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    -1,    83,    84,    85,    -1,
      -1,    88,    -1,    -1,    91,    92,    -1,    94,    -1,    -1,
      97,    -1,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,
     107,   108,    -1,   110,   111,    -1,    -1,   114,   115,    -1,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,   125,    -1,
     127,    -1,   129,    -1,    -1,    -1,   133,    -1,    -1,   136,
     137,    -1,    -1,   140,    -1,    -1,   143,    -1,    -1,   146,
     147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
     157,    -1,   159,    -1,    -1,    -1,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,    -1,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,    -1,   185,   186,
      -1,   188,    -1,    -1,   191,    -1,   193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,
     207,   208,   209,   210,   211,   212,   213,    -1,    -1,    -1,
      -1,   218,    -1,   220,    -1,   222,   223,    -1,    -1,   226,
     227,   228,    -1,   230,   231,   232,    -1,    -1,   235,    -1,
     237,    -1,    -1,   240,    -1,    -1,    -1,    -1,   245,   246,
      -1,    -1,    -1,    -1,    -1,    -1,   253,   254,    -1,    -1,
      -1,   258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,   268,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,
      -1,   278,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,   292,    -1,   294,   295,   296,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   340,   341,    -1,   343,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,   352,   353,   354,    -1,   356,
      -1,    -1,    -1,    -1,    -1,    -1,   363,   364,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   379,    -1,   381,    -1,    -1,   384,    -1,    -1,
     387,    -1,   389,    -1,   391,   392,   393,    -1,    -1,    -1,
      -1,   398,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   411,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    68,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    91,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,
      -1,    -1,   114,   115,    -1,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,    -1,   127,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,    -1,    -1,   140,    -1,
      -1,   143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,    -1,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,    -1,   185,   186,    -1,   188,    -1,    -1,   191,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,    -1,    -1,    -1,   218,    -1,   220,    -1,
     222,   223,    -1,    -1,   226,   227,   228,    -1,   230,   231,
     232,    -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,
      -1,    -1,    -1,   245,   246,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,    -1,    -1,    -1,
     272,    -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,
     292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,
      -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
     352,   353,   354,    -1,   356,    -1,    -1,    -1,    -1,    -1,
      -1,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,   381,
      -1,    -1,   384,    -1,    -1,   387,    -1,   389,    -1,   391,
     392,   393,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,   411,
      22,    -1,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    68,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    91,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,
      -1,    -1,   114,   115,    -1,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,    -1,   127,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,    -1,    -1,   140,    -1,
      -1,   143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,    -1,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,    -1,   185,   186,    -1,   188,    -1,    -1,   191,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,    -1,    -1,    -1,   218,    -1,   220,    -1,
     222,   223,    -1,    -1,   226,   227,   228,    -1,   230,   231,
     232,    -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,
      -1,    -1,    -1,   245,   246,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,    -1,    -1,    -1,
     272,    -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,
     292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,
      -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
     352,   353,   354,    -1,   356,    -1,    -1,    -1,    -1,    -1,
      -1,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,   381,
      -1,    -1,   384,    -1,    -1,   387,    -1,   389,    -1,   391,
     392,   393,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,   405,    -1,    -1,    -1,    -1,    -1,   411,
      22,    -1,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    68,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    91,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,
      -1,    -1,   114,   115,    -1,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,    -1,   127,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,    -1,    -1,   140,    -1,
      -1,   143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,    -1,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,    -1,   185,   186,    -1,   188,    -1,    -1,   191,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,    -1,    -1,    -1,   218,    -1,   220,    -1,
     222,   223,    -1,    -1,   226,   227,   228,    -1,   230,   231,
     232,    -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,
      -1,    -1,    -1,   245,   246,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,    -1,    -1,    -1,
     272,    -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,
     292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,
      -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
     352,   353,   354,    -1,   356,    -1,    -1,    -1,    -1,    -1,
      -1,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,   381,
      -1,    -1,   384,    -1,    -1,   387,    -1,   389,    -1,   391,
     392,   393,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   411,
      22,    -1,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    68,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    91,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,
      -1,    -1,   114,   115,    -1,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,    -1,   127,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,    -1,    -1,   140,    -1,
      -1,   143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,    -1,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,    -1,   185,   186,    -1,   188,    -1,    -1,   191,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,    -1,    -1,    -1,   218,    -1,   220,    -1,
     222,   223,    -1,    -1,   226,   227,   228,    -1,   230,   231,
     232,    -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,
      -1,    -1,    -1,   245,   246,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,    -1,    -1,    -1,
     272,    -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,
     292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,
      -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
     352,   353,   354,    -1,   356,    -1,    -1,    -1,    -1,    -1,
      -1,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,   381,
      -1,    -1,   384,    -1,    -1,   387,    -1,   389,    -1,   391,
     392,   393,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   411,
      22,    -1,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    68,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    91,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,
      -1,    -1,   114,   115,    -1,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,    -1,   127,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,    -1,    -1,   140,    -1,
      -1,   143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,    -1,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,    -1,   185,   186,    -1,   188,    -1,    -1,   191,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,    -1,    -1,    -1,   218,    -1,   220,    -1,
     222,   223,    -1,    -1,   226,   227,   228,    -1,   230,   231,
     232,    -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,
      -1,    -1,    -1,   245,   246,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,    -1,    -1,    -1,
     272,    -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,
     292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,
      -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
     352,   353,   354,    -1,   356,    -1,    -1,    -1,    -1,    -1,
      -1,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,   381,
      -1,    -1,   384,    -1,    -1,   387,    -1,   389,    -1,   391,
     392,   393,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   411,
      22,    -1,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    68,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    91,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,
      -1,    -1,   114,   115,    -1,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,    -1,   127,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,    -1,    -1,   140,    -1,
      -1,   143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,   154,    -1,    -1,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,    -1,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,    -1,   185,   186,    -1,   188,    -1,    -1,   191,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,    -1,    -1,    -1,   218,    -1,   220,    -1,
     222,   223,    -1,    -1,   226,   227,   228,    -1,   230,   231,
     232,    -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,
     242,    -1,    -1,   245,   246,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,    -1,    -1,    -1,
     272,    -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,
     292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,
      -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
     352,   353,   354,    -1,   356,    -1,    -1,    -1,    -1,    -1,
      -1,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,   381,
      -1,    -1,   384,    -1,    -1,   387,    -1,   389,    -1,   391,
     392,   393,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,    -1,
      22,    -1,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    68,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    91,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,
      -1,    -1,   114,   115,    -1,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,    -1,   127,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,    -1,    -1,   140,    -1,
      -1,   143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,   154,    -1,    -1,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,    -1,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,    -1,   185,   186,    -1,   188,    -1,    -1,   191,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,    -1,    -1,    -1,   218,    -1,   220,    -1,
     222,   223,    -1,    -1,   226,   227,   228,    -1,   230,   231,
     232,    -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,
     242,    -1,    -1,   245,   246,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,    -1,    -1,    -1,
     272,    -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,
     292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,
      -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
     352,   353,   354,    -1,   356,    -1,    -1,    -1,    -1,    -1,
      -1,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,   381,
      -1,    -1,   384,    -1,    -1,   387,    -1,   389,    -1,   391,
     392,   393,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,    -1,
      22,    -1,    -1,    25,    26,    27,    -1,    29,    30,    31,
      -1,    -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    64,    -1,    66,    -1,    68,    69,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      -1,    83,    84,    85,    -1,    -1,    88,    -1,    -1,    91,
      92,    -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
      -1,    -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,
      -1,    -1,   114,   115,    -1,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,   125,    -1,   127,    -1,   129,    -1,    -1,
      -1,   133,    -1,    -1,   136,   137,    -1,    -1,   140,    -1,
      -1,   143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,   157,    -1,   159,    -1,    -1,
      -1,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,    -1,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,    -1,   185,   186,    -1,   188,    -1,    -1,   191,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
     202,    -1,    -1,    -1,   206,   207,   208,   209,   210,   211,
     212,   213,    -1,    -1,    -1,    -1,   218,    -1,   220,    -1,
     222,   223,    -1,    -1,   226,   227,   228,    -1,   230,   231,
     232,    -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,
      -1,    -1,    -1,   245,   246,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,   268,    -1,    -1,   271,
     272,    -1,   274,   275,    -1,    -1,   278,   279,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   290,    -1,
     292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,   323,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,
      -1,   343,    -1,    -1,    75,    -1,    -1,    -1,    -1,   351,
     352,   353,   354,    -1,   356,    -1,    -1,    -1,    -1,    -1,
      -1,   363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,   379,    -1,   381,
      -1,    -1,   384,    -1,    -1,   387,    -1,   389,    75,   391,
     392,   393,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,    -1,
      -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   155,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   155,    -1,    -1,    -1,   187,    -1,   145,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,    -1,   155,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,   187,    -1,   217,    -1,    -1,    -1,
      -1,    75,    -1,   196,   197,    -1,    -1,    -1,    -1,    -1,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     197,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,    -1,    -1,    -1,    -1,    75,   267,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,
     267,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,   145,   309,    -1,    75,    -1,
      -1,    -1,   196,   197,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,   196,   197,    -1,    -1,
      -1,    -1,    -1,   394,   395,   396,   397,   398,   399,   400,
      -1,    -1,   403,    -1,   405,   406,    -1,   217,   145,    -1,
      -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,   155,    -1,
      -1,   394,   395,   396,   397,   398,   399,   400,    -1,    -1,
     403,    -1,   405,   406,    -1,    -1,    -1,   394,   395,   396,
     397,   398,   399,   400,    -1,    -1,   403,    -1,   405,   406,
     187,   145,    -1,    -1,    -1,   309,    -1,   267,    -1,   196,
     197,   155,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,   309,
      -1,    -1,   196,   197,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    75,    -1,
     267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     394,   395,   396,   397,   398,   399,   400,    -1,    -1,   403,
      -1,   405,   406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    75,   309,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,    -1,   403,    -1,   405,   406,    -1,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    75,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
     187,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     197,   155,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,
     397,   398,   399,   400,    -1,    -1,   403,    -1,   405,   406,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,   197,    75,    -1,    -1,   145,    -1,    -1,
     394,   395,   396,   397,   398,   399,   400,   155,    -1,   403,
      -1,   405,   406,   217,    -1,    -1,    -1,    -1,    -1,    -1,
     267,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,   309,   267,   145,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,   155,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,   309,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,    75,    -1,   267,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,
     397,   398,   399,   400,    -1,    -1,   403,    -1,   405,   406,
      75,   309,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   155,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,   267,   145,    -1,    -1,
     394,   395,   396,   397,   398,   399,   400,   155,    -1,   403,
      -1,    -1,   406,    -1,   187,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,   196,   197,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,   309,   187,
     145,    -1,    -1,    -1,   217,    -1,    -1,    -1,   196,   197,
     155,    75,    -1,    -1,    -1,    -1,   394,   395,   396,   397,
     398,   399,   400,   187,    -1,   403,    -1,   405,   406,   217,
      -1,    -1,   196,   197,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   197,   217,   267,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,   267,
      -1,   145,    -1,   394,   395,   396,   397,   398,   399,   400,
      -1,   155,   403,    -1,   405,   406,   309,    -1,    -1,    -1,
      -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,   267,   187,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,   196,   197,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   394,   395,   396,   397,   398,   399,   400,    -1,    -1,
     403,    -1,   405,   406,    -1,   145,    -1,    -1,    -1,    -1,
      -1,    75,    -1,   267,    -1,   155,   394,   395,   396,   397,
     398,   399,   400,    -1,    -1,   403,    -1,   405,   406,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
     394,   395,   396,   397,   398,   399,   400,   187,    -1,   403,
      -1,   405,   406,    -1,    -1,   309,   196,   197,    -1,   394,
     395,   396,   397,   398,   399,   400,    -1,    -1,   403,    -1,
     405,   406,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,    75,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,   267,    -1,    -1,
      -1,    -1,   196,   197,    -1,    -1,    -1,    -1,    -1,    -1,
     394,   395,   396,   397,   398,   399,   400,    -1,    -1,   403,
      -1,   405,   406,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,   145,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,    -1,   155,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   267,    -1,    -1,    -1,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,   197,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,   145,    -1,    -1,    -1,    -1,   217,    -1,    -1,
      -1,    -1,   155,    75,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,    -1,   403,    -1,    -1,   406,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   197,    -1,    75,   267,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,   309,
     394,   395,   396,   397,   398,   399,   400,    -1,    -1,   403,
      -1,    -1,   406,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,   267,   187,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,   197,   155,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,    75,
      -1,    -1,    -1,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,    -1,   403,    -1,    -1,   406,    -1,   217,    -1,
      -1,    -1,    -1,    75,    -1,   267,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,   309,   267,   145,
      -1,   394,   395,   396,   397,   398,   399,   400,    -1,   155,
     403,    -1,    -1,   406,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,
     309,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,   197,    75,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,   187,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,
      -1,    -1,   394,   395,   396,   397,   398,   399,   400,    -1,
      -1,   403,    -1,    -1,   406,   217,    -1,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      75,   267,   145,    -1,    -1,   394,   395,   396,   397,   398,
     399,   400,   155,    -1,   403,    -1,    -1,   406,    -1,   187,
      -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,   196,   197,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,   309,   187,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,   196,   197,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,
     145,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,   267,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   197,    -1,   267,   145,    -1,    -1,   394,   395,
     396,   397,   398,   399,   400,   155,    -1,   403,    -1,    -1,
     406,   309,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   394,   395,   396,   397,   398,   399,   400,    -1,
      -1,   403,    -1,    -1,   406,    -1,   309,   187,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,   197,   155,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,   267,    -1,    -1,    -1,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     197,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,   397,
     398,   399,   400,    -1,   309,   403,    -1,    -1,   406,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    75,   267,    -1,    -1,
      -1,   394,   395,   396,   397,   398,   399,   400,    -1,    -1,
     403,    -1,    -1,   406,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,   309,
     267,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,   145,    -1,    -1,   394,
     395,   396,   397,   398,   399,   400,   155,    -1,   403,    -1,
      75,   406,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    75,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,    -1,
      75,    -1,    -1,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,    -1,   403,    -1,    -1,   406,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    75,   145,    -1,    -1,   394,   395,   396,
     397,   398,   399,   400,   155,    -1,   403,   145,    -1,   406,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,   267,    -1,
     145,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,   196,   197,    -1,    -1,    -1,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,    -1,    -1,   187,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,   196,   197,
     309,    -1,   187,   145,    -1,    -1,   217,    -1,    -1,    -1,
      -1,   196,   197,   155,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,   197,   267,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,   267,
      -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,   309,   394,   395,   396,   397,   398,
     399,   400,    -1,    -1,   403,    -1,    -1,   406,   309,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,   309,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    75,   309,   267,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    75,   309,    -1,   394,
     395,   396,   397,   398,   399,   400,    -1,    -1,   403,    75,
      -1,   406,    -1,   394,   395,   396,   397,   398,   399,   400,
      -1,    -1,   403,   145,    -1,   406,   394,   395,   396,   397,
     398,   399,   400,   155,    75,   403,    -1,    -1,   406,   394,
     395,   396,   397,   398,   399,   400,    -1,    -1,   403,    75,
      -1,   406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   187,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,   197,   155,    -1,    -1,   145,
      -1,    -1,   394,   395,   396,   397,   398,   399,   400,   155,
      -1,   403,    -1,    -1,   406,   217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,   187,    -1,
      -1,    -1,    -1,    -1,   155,    -1,    -1,   196,   197,   145,
      -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,
     196,   197,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,   267,   187,    -1,    -1,    -1,
      -1,   217,    -1,    -1,    -1,   196,   197,    -1,    -1,    -1,
      -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,   197,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   267,    -1,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   267,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   267,    -1,   309,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    75,
      -1,    -1,   394,   395,   396,   397,   398,   399,   400,    -1,
      -1,   403,    -1,   309,   406,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    75,    -1,    -1,   394,   395,   396,   397,   398,
     399,   400,    -1,    -1,   403,    -1,    -1,   406,   394,   395,
     396,   397,   398,   399,   400,    -1,    -1,   403,    -1,   145,
     406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,
      -1,    75,    -1,   394,   395,   396,   397,   398,   399,   400,
      -1,    -1,   403,    -1,    -1,   406,    -1,    75,   394,   395,
     396,   397,   398,   399,   400,    -1,    -1,   403,    -1,    -1,
     406,   187,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,   197,   155,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,   196,   197,    -1,    -1,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      75,   267,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,   197,    -1,    -1,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,   267,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
     145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,   267,    -1,    -1,   309,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,   267,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   197,    -1,    75,   309,    -1,    -1,   394,   395,
     396,   397,   398,   399,   400,    -1,    -1,   403,    -1,    -1,
     406,   309,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    75,    -1,    -1,
      -1,   394,   395,   396,   397,   398,   399,   400,    -1,    -1,
     403,    -1,    -1,   406,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,   145,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,
     394,   395,   396,   397,   398,   399,   400,    -1,    -1,   403,
      75,    -1,   406,   145,    -1,    -1,   394,   395,   396,   397,
     398,   399,   400,   155,   309,   403,   187,   145,   406,    -1,
      -1,    -1,    -1,    -1,    -1,   196,   197,   155,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,   187,   217,    -1,    -1,   124,
      -1,    -1,    -1,    -1,   196,   197,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,
     145,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,    75,   394,
     395,   396,   397,   398,   399,   400,    -1,    -1,   403,    -1,
      -1,   406,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   197,    -1,    -1,   267,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,   309,   267,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,
      -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,
     187,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,   196,
     197,    -1,    -1,   394,   395,   396,   397,   398,   399,   400,
      -1,    -1,   403,    -1,   309,   406,    -1,    -1,    -1,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   394,   395,   396,   397,   398,   399,   400,    -1,
      -1,   403,    -1,   145,   406,    -1,   394,   395,   396,   397,
     398,   399,   400,   155,    -1,   403,    -1,   405,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     267,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,   197,    -1,    -1,    -1,   394,
     395,   396,   397,   398,   399,   400,    -1,   187,   403,    -1,
     405,    -1,   309,    -1,    -1,   217,   196,   197,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   267,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,
     397,   398,   399,   400,    -1,    -1,   403,   309,   405,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   309,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,
     155,    -1,   394,   395,   396,   397,   398,   399,   400,    -1,
     187,   403,   145,   405,    -1,    -1,    -1,    75,    -1,   196,
     197,    -1,   155,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,   187,   403,    -1,   405,    -1,    -1,    -1,    -1,
     217,   196,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,   196,   197,   145,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,   145,    -1,    -1,
     267,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,   196,   197,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,
      -1,    -1,   309,    -1,   267,    -1,    -1,   217,   196,   197,
      -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   309,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   309,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,
      75,    -1,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,
     397,   398,   399,   400,    -1,    -1,   403,    -1,   405,   309,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,   394,
     395,   396,   397,   398,   399,   400,    -1,    -1,   403,    -1,
     405,   309,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,   394,   395,   396,   397,   398,   399,   400,    -1,    -1,
     403,    -1,   405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   155,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,   187,   403,   145,   405,    -1,    -1,    -1,    -1,
      -1,   196,   197,    -1,   155,    -1,   394,   395,   396,   397,
     398,   399,   400,    -1,   187,   403,    -1,   405,    -1,    -1,
      -1,    -1,   217,   196,   197,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,   196,   197,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,    -1,    -1,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,   309,    -1,   267,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,   394,
     395,   396,   397,   398,   399,   400,    -1,    -1,   403,    -1,
     405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,
      -1,   394,   395,   396,   397,   398,   399,   400,    -1,    -1,
     403,    -1,   405,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   394,   395,   396,   397,   398,   399,   400,
      75,    -1,   403,   145,   405,    -1,    -1,    -1,    -1,    -1,
      -1,   309,    -1,   155,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     145,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,
     155,    -1,    75,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    75,   394,   395,   396,   397,
     398,   399,   400,    -1,    -1,   403,    -1,   405,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,   196,   197,    -1,    -1,   267,    75,    -1,    -1,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   187,   155,    -1,    -1,   145,    -1,   309,    -1,    -1,
     196,   197,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   267,    -1,   187,    -1,   145,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   197,    -1,   155,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,   197,    -1,    -1,
     145,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,   309,    -1,    -1,   217,   187,    -1,
      -1,   267,    -1,    -1,    -1,    -1,    -1,   196,   197,    -1,
      -1,    -1,   394,   395,   396,   397,   398,   399,   400,    -1,
      -1,   403,   187,   405,    -1,    -1,    -1,    -1,   217,    -1,
      -1,   196,   197,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,    -1,    -1,   267,    -1,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,   267,   394,
     395,   396,   397,   398,   399,   400,    -1,    -1,   403,   309,
     405,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,   267,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    75,    -1,    -1,    -1,   394,   395,
     396,   397,   398,   399,   400,    -1,    -1,   403,    -1,   405,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,   394,   395,   396,   397,   398,   399,   400,    -1,    75,
     403,    -1,   405,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,    -1,   403,    -1,   405,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   155,   394,   395,   396,   397,   398,
     399,   400,    -1,    -1,   403,    -1,   405,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   145,    -1,   394,
     395,   396,   397,   398,   399,   400,   187,   155,   403,   145,
     405,    -1,    -1,    -1,    -1,   196,   197,    -1,    -1,   155,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,
      -1,   187,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
     196,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,    -1,    -1,   267,    75,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   309,    -1,
      -1,   267,    -1,   155,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,   145,    -1,    -1,
      -1,   309,    -1,    -1,    -1,   187,    -1,   155,    -1,    -1,
      -1,    -1,    -1,   309,   196,   197,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,   187,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,
      -1,    -1,    -1,   394,   395,   396,   397,   398,   399,   400,
      -1,    -1,   403,    -1,   405,    -1,   145,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   267,   394,   395,   396,   397,
     398,   399,   400,    -1,    -1,   403,    -1,   405,   394,   395,
     396,   397,   398,   399,   400,    -1,    -1,   403,   187,   405,
      -1,   145,    -1,    -1,    -1,    -1,    -1,   196,   197,   267,
      -1,   155,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,   196,   197,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,   267,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   394,   395,   396,   397,   398,   399,   400,    -1,
      -1,   403,    -1,   405,    -1,    -1,    -1,    -1,    -1,    -1,
     309,    75,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,   397,
     398,   399,   400,    -1,    -1,   403,    -1,   405,    75,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,   394,   395,   396,   397,   398,
     399,   400,    -1,    -1,   403,    -1,   405,    -1,   145,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,   197,    -1,    75,    -1,    -1,    -1,    -1,
     394,   395,   396,   397,   398,   399,   400,    -1,    -1,   403,
     187,   405,    -1,   217,    -1,    -1,    -1,    -1,    -1,   196,
     197,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   267,    -1,   145,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    75,    -1,
     267,    -1,   196,   197,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   309,    -1,   187,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,   196,   197,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
      -1,    75,    -1,   267,    -1,    -1,    -1,    -1,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,   267,    -1,    -1,
     394,   395,   396,   397,   398,   399,   400,    -1,    -1,   403,
     187,   405,    -1,    -1,    -1,   309,    -1,    -1,    -1,   196,
     197,    -1,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,
     397,   398,   399,   400,    -1,    -1,   403,    -1,   405,   309,
     217,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   155,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
     267,    -1,   196,   197,    -1,    -1,    -1,    -1,    -1,    -1,
     394,   395,   396,   397,   398,   399,   400,   187,    -1,   403,
      -1,   405,    -1,   217,    -1,    -1,   196,   197,    75,    -1,
      -1,    -1,    -1,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,   309,   403,    -1,   405,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   267,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,
     397,   398,   399,   400,    -1,    -1,   403,    -1,   405,   309,
     187,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     197,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     394,   395,   396,   397,   398,   399,   400,    -1,    -1,   403,
      -1,   405,   145,    -1,    -1,    -1,    -1,    75,    -1,    -1,
     267,    -1,   155,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,    -1,   403,    -1,   405,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   187,    -1,    75,    -1,    -1,    -1,
      -1,    -1,   309,   196,   197,    -1,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      75,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   155,    -1,    -1,    -1,   145,    -1,    -1,   187,
      -1,    -1,    -1,    -1,   267,    75,   155,    -1,   196,   197,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,
     397,   398,   399,   400,   187,    -1,   403,    -1,   405,   217,
      -1,    -1,    -1,   196,   197,    -1,    75,    -1,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,   196,   197,    -1,
     145,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,   267,
      -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   197,    -1,   267,    -1,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,   187,   267,    -1,
      -1,   309,   217,    -1,    -1,    -1,   196,   197,    -1,    -1,
      -1,   394,   395,   396,   397,   398,   399,   400,    -1,    -1,
     403,    -1,   405,    -1,    -1,    -1,   309,   217,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,    -1,
     309,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,   267,    -1,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,   397,
     398,   399,   400,    -1,   309,   403,    -1,   405,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,   267,    -1,
      -1,   394,   395,   396,   397,   398,   399,   400,    -1,   309,
     403,    -1,   405,    -1,    -1,   394,   395,   396,   397,   398,
     399,   400,    -1,    -1,   403,    -1,   405,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,   145,    -1,   394,
     395,   396,   397,   398,   399,   400,    -1,   155,   403,    -1,
     405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,    -1,   403,    -1,   405,    -1,    75,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,
      75,    -1,    -1,    -1,    -1,   394,   395,   396,   397,   398,
     399,   400,    -1,    -1,   403,    -1,   405,    78,    79,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,   155,    23,   267,
     145,    -1,    -1,    28,    -1,    30,    -1,    -1,   139,    -1,
     155,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,
      -1,   309,   187,   174,    -1,    -1,    -1,    -1,    -1,    -1,
     181,   196,   197,    78,    79,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,   202,   217,    -1,    -1,    -1,   101,    -1,    -1,   104,
     211,   212,   213,   108,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,
      -1,    -1,    -1,    -1,   139,   246,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,   255,    -1,   394,   395,   396,   397,
     398,   399,   400,    -1,    -1,   403,    -1,   405,    -1,    -1,
     271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,
      -1,   309,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   198,    -1,    -1,    -1,   202,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,   212,   213,    -1,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,   356,    -1,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,   397,
     398,   399,   400,    -1,    -1,   403,   271,   405,    -1,   394,
     395,   396,   397,   398,   399,   400,    -1,    -1,   403,    -1,
     405,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,    -1,
      43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,    -1,
      -1,    54,    55,    56,    57,    58,    59,    -1,   343,    62,
      63,    64,    -1,    66,    -1,    68,    69,    -1,   353,    72,
      73,   356,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      83,    84,    85,    -1,    -1,    88,    -1,    -1,    91,    92,
      -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,    -1,
      -1,   114,   115,    -1,   117,   118,   119,   120,    -1,    -1,
      -1,    -1,   125,    -1,   127,    -1,   129,    -1,    -1,    -1,
     133,    -1,    -1,   136,   137,    -1,    -1,   140,    -1,    -1,
     143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
      -1,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,    -1,   185,   186,    -1,   188,    -1,    -1,   191,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,    -1,    -1,    -1,    -1,   218,    -1,   220,    -1,   222,
     223,    -1,    -1,   226,   227,   228,    -1,   230,   231,   232,
      -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,    -1,
      -1,    -1,   245,   246,    -1,    -1,    -1,    -1,    -1,    -1,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   266,    -1,   268,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,   292,
      -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,    -1,
     343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,   352,
     353,   354,    -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,
     363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,   381,    -1,
      -1,   384,    -1,    -1,   387,    -1,   389,    -1,   391,   392,
     393,    -1,    -1,    -1,    -1,   398,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    -1,    -1,    35,    -1,    37,
      -1,    39,    40,    41,    -1,    43,    -1,    -1,    46,    -1,
      48,    -1,    -1,    51,    -1,    -1,    54,    55,    56,    57,
      58,    59,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      68,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    -1,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    91,    92,    -1,    94,    -1,    -1,    97,
      -1,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,   107,
     108,    -1,   110,   111,    -1,    -1,   114,   115,    -1,   117,
     118,   119,   120,    -1,    -1,    -1,    -1,   125,    -1,   127,
      -1,   129,    -1,    -1,    -1,   133,    -1,    -1,   136,   137,
      -1,    -1,   140,    -1,    -1,   143,    -1,    -1,   146,   147,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,   157,
      -1,   159,    -1,    -1,    -1,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,    -1,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,    -1,   185,   186,    -1,
     188,    -1,    -1,   191,    -1,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,    -1,    -1,    -1,    -1,
     218,    -1,   220,    -1,   222,   223,    -1,    -1,   226,   227,
     228,    -1,   230,   231,   232,    -1,    -1,   235,    -1,   237,
      -1,    -1,   240,    -1,    -1,    -1,    -1,   245,   246,    -1,
      -1,    -1,    -1,    -1,    -1,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,
     268,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,    -1,
     278,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   290,    -1,   292,    -1,   294,   295,   296,   297,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   340,   341,    -1,   343,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   351,   352,   353,   354,    -1,   356,    -1,
      -1,    -1,    -1,    -1,    -1,   363,   364,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   379,    -1,   381,    -1,    -1,   384,    -1,    -1,   387,
      -1,   389,    -1,   391,   392,   393,    -1,    -1,    -1,    -1,
     398,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    25,    26,    27,    -1,    29,    30,    31,    -1,
      -1,    -1,    35,    -1,    37,    -1,    39,    40,    41,    -1,
      43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,    -1,
      -1,    54,    55,    56,    57,    58,    59,    -1,    -1,    62,
      63,    64,    -1,    66,    -1,    68,    69,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
      83,    84,    85,    -1,    -1,    88,    -1,    -1,    91,    92,
      -1,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,    -1,
      -1,   104,    -1,    -1,   107,   108,    -1,   110,   111,    -1,
      -1,   114,   115,    -1,   117,   118,   119,   120,    -1,    -1,
      -1,    -1,   125,    -1,   127,    -1,   129,    -1,    -1,    -1,
     133,    -1,    -1,   136,   137,    -1,    -1,   140,    -1,    -1,
     143,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,   157,    -1,   159,    -1,    -1,    -1,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
      -1,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,    -1,   185,   186,    -1,   188,    -1,    -1,   191,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,   202,
      -1,    -1,    -1,   206,   207,   208,   209,   210,   211,   212,
     213,    -1,    -1,    -1,    -1,   218,    -1,   220,    -1,   222,
     223,    -1,    -1,   226,   227,   228,    -1,   230,   231,   232,
      -1,    -1,   235,    -1,   237,    -1,    -1,   240,    -1,    -1,
      -1,    -1,   245,   246,    -1,    -1,    -1,    -1,    -1,    -1,
     253,   254,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   266,    -1,   268,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,   292,
      -1,   294,   295,   296,   297,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,    -1,
     343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,   352,
     353,   354,    -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,
     363,   364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,   381,    -1,
      -1,   384,    -1,    -1,   387,    -1,   389,    -1,   391,   392,
     393,    -1,    -1,    -1,    -1,   398,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    25,    26,    27,
      -1,    29,    30,    31,    -1,    -1,    -1,    35,    -1,    37,
      -1,    39,    40,    41,    -1,    43,    -1,    -1,    46,    -1,
      48,    -1,    -1,    51,    -1,    -1,    54,    55,    56,    57,
      58,    59,    -1,    -1,    62,    63,    64,    -1,    66,    -1,
      68,    69,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    -1,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    91,    92,    -1,    94,    -1,    -1,    97,
      -1,    -1,    -1,   101,    -1,    -1,   104,    -1,    -1,   107,
     108,    -1,   110,   111,    -1,    -1,   114,   115,    -1,   117,
     118,   119,   120,    -1,    -1,    -1,    -1,   125,    -1,   127,
      -1,   129,    -1,    -1,    -1,   133,    -1,    -1,   136,   137,
      -1,    -1,   140,    -1,    -1,   143,    -1,    -1,   146,   147,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,   157,
      -1,   159,    -1,    -1,    -1,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,    -1,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,    -1,   185,   186,    -1,
     188,    -1,    -1,   191,    -1,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,   207,
     208,   209,   210,   211,   212,   213,    -1,    -1,    -1,    -1,
     218,    -1,   220,    -1,   222,   223,    -1,    -1,   226,   227,
     228,    -1,   230,   231,   232,    -1,    -1,   235,    -1,   237,
      -1,    -1,   240,    -1,    -1,    -1,    -1,   245,   246,    -1,
      -1,    -1,    -1,    -1,    -1,   253,   254,    -1,    -1,    -1,
     258,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,
     268,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,    -1,
     278,   279,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   290,    -1,   292,    -1,   294,   295,   296,   297,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,   323,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,   340,   341,    -1,   343,    -1,    -1,    75,    -1,
      -1,    -1,    -1,   351,   352,   353,   354,    -1,   356,    -1,
      -1,    -1,    -1,    -1,    -1,   363,   364,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,   379,    -1,   381,    -1,    -1,   384,    -1,    -1,   387,
      -1,   389,    75,   391,   392,   393,    -1,    -1,    -1,    -1,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,
     187,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,   196,
     197,    -1,   155,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,   187,    -1,
     217,    -1,    -1,    -1,    -1,    75,    -1,   196,   197,    -1,
      -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,   197,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    75,
     267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,   309,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,   321,   322,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,   145,
     309,   338,   339,   340,    75,    -1,   196,   197,    -1,   155,
      -1,    -1,    -1,   350,   351,    -1,   309,   354,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   363,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   187,    -1,   380,   381,    -1,    -1,    -1,    -1,    -1,
     196,   197,    -1,    -1,    -1,    -1,    -1,   394,   395,   396,
     397,   398,   399,   400,    -1,    -1,   403,    -1,    -1,    -1,
      -1,   217,    -1,    -1,   145,    -1,    -1,   267,    -1,    -1,
      -1,    -1,    -1,    -1,   155,   394,   395,   396,   397,   398,
     399,   400,   385,    -1,   403,    -1,    -1,    -1,    -1,    -1,
      -1,   394,   395,   396,   397,   398,   399,   400,    -1,    -1,
     403,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,   309,
      -1,   267,    -1,    -1,    -1,   196,   197,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,   309,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,   385,   267,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,    -1,   403,    -1,    -1,    -1,    -1,    75,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,   394,   395,
     396,   397,   398,   399,   400,    -1,    -1,   403,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    75,    -1,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,
     145,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
     155,   145,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,
      -1,   155,    -1,   394,   395,   396,   397,   398,   399,   400,
     187,    -1,   403,    -1,    -1,   217,    -1,    -1,    -1,   196,
     197,    75,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,   197,   187,    -1,    -1,   145,    -1,    -1,    -1,
     217,    -1,   196,   197,    -1,    -1,   155,    -1,    -1,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,   267,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,   197,    -1,
     267,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   155,   267,    -1,    -1,    -1,    -1,   309,   217,    -1,
      -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,   187,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,   197,   309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,   267,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   394,   395,   396,   397,   398,   399,   400,    -1,
     309,   403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   267,    -1,    -1,    -1,   394,   395,   396,
     397,   398,   399,   400,    -1,    -1,   403,    -1,    -1,   394,
     395,   396,   397,   398,   399,   400,    -1,    -1,   403,    -1,
     394,   395,   396,   397,   398,   399,   400,    -1,    -1,   403,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   394,   395,   396,   397,   398,
     399,   400,    -1,    -1,   403,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
     394,   395,   396,   397,   398,   399,   400,    22,    -1,   403,
      25,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,   108,    -1,   110,   111,    -1,    -1,   114,
     115,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
     125,    -1,   127,    -1,   129,    -1,    -1,    -1,   133,   134,
      -1,   136,   137,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,    -1,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,    -1,   188,    -1,    -1,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
      -1,    -1,    -1,   218,    -1,   220,    -1,   222,   223,    -1,
      -1,   226,   227,   228,    -1,   230,   231,   232,    -1,    -1,
     235,    -1,   237,    -1,    -1,   240,    -1,   242,    -1,    -1,
     245,   246,    -1,    -1,    -1,    -1,    -1,    -1,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,    -1,   272,    -1,   274,
     275,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,   294,
     295,   296,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,   341,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,   352,   353,   354,
      -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,   363,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,   384,
      -1,    -1,   387,    -1,   389,    -1,   391,   392,   393,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,   108,    -1,   110,   111,    -1,    -1,   114,
     115,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
     125,    -1,   127,    -1,   129,    -1,    -1,    -1,   133,    -1,
      -1,   136,   137,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,   154,
      -1,    -1,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,    -1,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,    -1,   188,    -1,    -1,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
      -1,    -1,    -1,   218,    -1,   220,    -1,   222,   223,    -1,
      -1,   226,   227,   228,    -1,   230,   231,   232,    -1,    -1,
     235,    -1,   237,    -1,    -1,   240,    -1,   242,    -1,    -1,
     245,   246,    -1,    -1,    -1,    -1,    -1,    -1,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,    -1,   272,    -1,   274,
     275,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,   294,
     295,   296,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,   341,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,   352,   353,   354,
      -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,   363,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,   384,
      -1,    -1,   387,    -1,   389,    -1,   391,   392,   393,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    78,    79,    80,    81,    -1,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,   108,    -1,   110,   111,    -1,    -1,   114,
     115,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
     125,    -1,   127,    -1,   129,    -1,    -1,    -1,   133,    -1,
      -1,   136,   137,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,    -1,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,    -1,   188,    -1,    -1,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
      -1,    -1,    -1,   218,    -1,   220,    -1,   222,   223,    -1,
      -1,   226,   227,   228,    -1,   230,   231,   232,    -1,    -1,
     235,    -1,   237,    -1,    -1,   240,    -1,   242,    -1,    -1,
     245,   246,    -1,    -1,    -1,    -1,    -1,    -1,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,    -1,   272,    -1,   274,
     275,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,   294,
     295,   296,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,   341,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,   352,   353,   354,
      -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,   363,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,   384,
      -1,    -1,   387,    -1,   389,    -1,   391,   392,   393,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,   108,    -1,   110,   111,    -1,    -1,   114,
     115,    -1,   117,   118,   119,   120,    -1,    -1,    -1,   124,
     125,    -1,   127,    -1,   129,    -1,    -1,    -1,   133,    -1,
      -1,   136,   137,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,    -1,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,    -1,   188,    -1,    -1,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
      -1,    -1,    -1,   218,    -1,   220,    -1,   222,   223,    -1,
      -1,   226,   227,   228,    -1,   230,   231,   232,    -1,    -1,
     235,    -1,   237,    -1,    -1,   240,    -1,    -1,    -1,    -1,
     245,   246,    -1,    -1,    -1,    -1,    -1,    -1,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,    -1,   272,    -1,   274,
     275,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,   294,
     295,   296,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,   341,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,   352,   353,   354,
      -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,   363,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,   384,
      -1,    -1,   387,    -1,   389,    -1,   391,   392,   393,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,   108,    -1,   110,   111,    -1,    -1,   114,
     115,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
     125,    -1,   127,    -1,   129,    -1,    -1,    -1,   133,    -1,
      -1,   136,   137,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,    -1,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,    -1,   188,    -1,    -1,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
      -1,    -1,    -1,   218,    -1,   220,    -1,   222,   223,    -1,
      -1,   226,   227,   228,    -1,   230,   231,   232,    -1,    -1,
     235,    -1,   237,    -1,    -1,   240,    -1,   242,    -1,    -1,
     245,   246,    -1,    -1,    -1,    -1,    -1,    -1,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,    -1,   272,    -1,   274,
     275,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,   294,
     295,   296,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,   341,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,   352,   353,   354,
      -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,   363,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,   384,
      -1,    -1,   387,    -1,   389,    -1,   391,   392,   393,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,   108,    -1,   110,   111,    -1,    -1,   114,
     115,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
     125,    -1,   127,    -1,   129,    -1,    -1,    -1,   133,    -1,
      -1,   136,   137,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,    -1,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,    -1,   188,    -1,    -1,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,   204,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
      -1,    -1,    -1,   218,    -1,   220,    -1,   222,   223,    -1,
      -1,   226,   227,   228,    -1,   230,   231,   232,    -1,    -1,
     235,    -1,   237,    -1,    -1,   240,    -1,    -1,    -1,    -1,
     245,   246,    -1,    -1,    -1,    -1,    -1,    -1,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,    -1,   272,    -1,   274,
     275,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,   294,
     295,   296,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,   341,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,   352,   353,   354,
      -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,   363,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,   384,
      -1,    -1,   387,    -1,   389,    -1,   391,   392,   393,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,   108,    -1,   110,   111,    -1,    -1,   114,
     115,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
     125,    -1,   127,    -1,   129,    -1,    -1,    -1,   133,    -1,
      -1,   136,   137,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,    -1,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,    -1,   188,    -1,    -1,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
      -1,    -1,    -1,   218,    -1,   220,    -1,   222,   223,    -1,
      -1,   226,   227,   228,    -1,   230,   231,   232,    -1,    -1,
     235,    -1,   237,    -1,    -1,   240,    -1,    -1,    -1,    -1,
     245,   246,    -1,    -1,    -1,    -1,    -1,    -1,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,    -1,   272,    -1,   274,
     275,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,   292,    -1,   294,
     295,   296,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,   341,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,   352,   353,   354,
      -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,   363,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,   384,
      -1,    -1,   387,    -1,   389,    -1,   391,   392,   393,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      35,    -1,    37,    -1,    39,    40,    41,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    -1,    62,    63,    64,
      -1,    66,    -1,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    80,    81,    -1,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    91,    92,    -1,    94,
      -1,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,   104,
      -1,    -1,   107,   108,    -1,   110,   111,    -1,    -1,   114,
     115,    -1,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
     125,    -1,   127,    -1,   129,    -1,    -1,    -1,   133,    -1,
      -1,   136,   137,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,   157,    -1,   159,    -1,    -1,    -1,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,    -1,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
     185,   186,    -1,   188,    -1,    -1,   191,    -1,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,   202,    -1,    -1,
      -1,   206,   207,   208,   209,   210,   211,   212,   213,    82,
      83,    84,    -1,   218,    -1,   220,    -1,   222,   223,    -1,
      -1,   226,   227,   228,    -1,   230,   231,   232,    -1,    -1,
     235,    -1,   237,    -1,    -1,   240,    -1,    -1,    -1,    -1,
     245,   246,    -1,    -1,    -1,    -1,    -1,    -1,   253,   254,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,    -1,   272,    -1,   274,
     275,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,   292,   161,   294,
     295,   296,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,   186,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,   341,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,   352,   353,   354,
      -1,   356,    -1,    -1,    -1,    -1,   229,    -1,   363,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,   384,
      -1,    -1,   387,    -1,   389,    -1,   391,   392,   393,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   269,   270,   271,    -1,
      -1,   274,   275,   276,   277,   278,    -1,   280,   281,    -1,
     283,   284,   285,   286,   287,   288,    -1,    -1,   291,    23,
     293,    -1,   295,   296,   297,   298,   299,   300,    -1,    33,
     303,   304,    36,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,
      -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   257
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,     3,     5,    23,    24,    26,    28,    31,    33,    36,
      37,    38,    41,    42,    44,    45,    47,    52,    53,    54,
      56,    57,    59,    60,    61,    62,    64,    66,    69,    70,
      71,    80,    93,   105,   106,   128,   219,   223,   225,   229,
     259,   360,   404,   413,   414,   415,   419,   487,   500,   501,
     505,   507,   509,   514,   516,   521,   523,   527,   528,   613,
     615,   621,   624,   648,   653,   664,   666,   676,   678,   680,
     686,   690,   692,   693,   694,   720,   732,   738,   739,   746,
     748,   770,   773,   774,   775,     4,     5,     6,     7,     8,
      22,    25,    26,    27,    29,    30,    31,    35,    37,    39,
      40,    41,    43,    46,    48,    51,    54,    55,    56,    57,
      58,    59,    62,    63,    64,    66,    68,    69,    72,    73,
      78,    79,    80,    81,    83,    84,    85,    88,    91,    92,
      94,    97,   101,   104,   107,   108,   110,   111,   114,   115,
     117,   118,   119,   120,   125,   127,   129,   133,   136,   137,
     140,   143,   146,   147,   153,   157,   159,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   185,   186,   188,
     191,   193,   201,   202,   206,   207,   208,   209,   210,   211,
     212,   213,   218,   220,   222,   223,   226,   227,   228,   230,
     231,   232,   235,   237,   240,   245,   246,   253,   254,   258,
     262,   266,   268,   272,   274,   275,   278,   279,   290,   292,
     294,   295,   296,   297,   307,   323,   340,   341,   343,   351,
     352,   353,   354,   356,   363,   364,   379,   381,   384,   387,
     389,   391,   392,   393,   411,   714,   715,   716,   719,   138,
     496,   238,   239,   734,   771,    48,    73,   126,   240,   256,
     317,   432,   433,   434,   444,   482,   654,   614,   139,   240,
     253,   317,   620,   681,   622,    25,    32,    42,    49,    50,
      65,    67,    69,    82,    90,    99,   121,   130,   134,   152,
     158,   160,   173,   187,   189,   190,   215,   242,   247,   248,
     249,   250,   271,   273,   275,   296,   297,   301,   308,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   324,
     325,   326,   328,   329,   330,   331,   332,   333,   334,   336,
     337,   340,   342,   344,   345,   346,   347,   348,   349,   351,
     354,   355,   356,   357,   359,   360,   361,   362,   363,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   381,   382,   383,   396,   401,   404,   407,   408,
     410,   411,   546,   547,   550,   552,   706,   708,   712,   716,
     101,   239,   734,   734,   691,   734,   687,   243,   716,   531,
     532,   667,    64,    66,    62,   245,    62,   239,   665,   734,
     649,   734,   734,   749,   734,   734,   747,   194,   722,   716,
     625,    60,     0,     3,   527,   714,   716,   716,   193,     4,
     214,   411,   239,   515,   379,   772,   243,   342,   435,   239,
     433,   253,   139,   162,   290,   662,   663,   102,   546,   646,
     647,   716,   716,   342,   619,   239,    48,    62,   107,   136,
     159,   205,   208,   222,   235,   238,   682,   683,   734,   103,
     135,   162,   627,   404,   404,   404,   404,   404,   404,   404,
     404,   546,   404,   404,   404,   404,   404,   404,   561,   562,
     563,   546,   404,   404,   404,   404,   404,   404,   706,   706,
     706,   404,   404,   404,   546,   565,   404,   404,   404,   545,
     404,   545,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     546,   404,   404,   404,   404,   404,   404,   404,   404,   545,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   546,   546,   546,   546,   716,   154,   242,
     410,   716,   717,   716,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    75,   145,   155,   187,   196,   197,
     217,   267,   309,   394,   395,   396,   397,   398,   399,   400,
     403,   242,   411,    97,   124,   162,   697,   714,   733,   522,
      48,   510,    48,    62,   208,   688,   689,    59,   529,    74,
     109,   135,   236,   386,   387,   388,   389,   390,   391,   535,
     536,   537,    27,    33,    48,    62,   100,   125,   127,   129,
     139,   140,   143,   149,   157,   159,   185,   193,   231,   235,
     238,   239,   481,   668,   672,   725,    43,    63,   503,   504,
     503,   503,   502,   503,   618,   714,   162,   652,   508,   517,
      23,    33,    36,    38,    40,    42,    47,    55,    60,    61,
      68,    71,    74,   118,   128,   139,   206,   216,   218,   232,
     257,   750,   751,   752,   524,   506,   750,   721,   103,   628,
     652,   531,   677,   411,     9,    76,   585,   586,   740,   716,
     714,   617,   618,   416,   187,   716,   435,   716,   716,   124,
     655,   659,   660,   716,   662,   406,   192,   116,   716,   619,
      88,   264,   406,   684,   496,    74,   555,   587,   109,   555,
     587,   546,   555,   555,   555,   555,   546,   546,   546,   546,
     546,   546,   562,   307,   564,   712,   405,   546,   546,   546,
     558,   559,   558,   546,   555,   555,   378,   558,   546,   405,
     546,   405,   546,   546,   546,   546,   546,   546,   546,   546,
     546,   320,   321,   322,   323,   338,   339,   340,   350,   351,
     354,   363,   380,   381,   584,   546,   546,   546,   706,   546,
     546,   546,   584,   405,   546,   546,   546,   546,   546,   546,
     546,   546,   546,   548,   550,   405,   546,   546,   546,   546,
     546,   546,   546,    86,   151,   244,   546,   551,   558,   551,
     551,   551,   551,   551,   706,   405,   546,   405,   546,   546,
     546,   121,   160,   190,   215,   301,   604,   405,   546,   127,
     157,   231,   726,    19,   411,   546,   546,   546,   546,   546,
     546,   546,   187,   189,   546,   546,   546,   404,   550,   145,
     155,   217,   309,   546,   546,   546,   546,   549,   550,   546,
     546,   344,   546,   344,   546,   546,   546,   546,   546,   716,
      48,   157,   696,   124,   714,   735,   736,   617,   159,   617,
      88,   406,   716,   255,   776,   777,   398,   539,   540,   541,
     537,    39,   239,   159,   235,   136,   235,   155,   671,   335,
     235,    48,   238,   671,   124,   145,   670,   673,   235,   673,
      95,   207,   262,   406,   496,   617,   617,   240,   754,   238,
      29,    62,   753,   100,   755,   205,   194,   756,   192,   406,
     525,   526,   714,   617,   192,   127,   157,   231,   723,   724,
     144,   618,   629,   630,   405,   134,   242,   679,   707,   716,
     716,   716,     7,   119,   716,   741,   742,   488,   117,   178,
     272,   279,   290,   406,   518,   519,   520,   163,   164,   165,
     166,   167,   168,   169,   171,   172,   417,   418,   116,   714,
     422,   192,   659,   714,   716,   406,   657,   411,   661,   647,
     714,   617,   214,   683,   617,   685,   629,   405,   556,   553,
     405,   398,   406,   405,   405,   405,   405,   406,    76,   406,
     406,   406,   405,   406,   405,   404,   406,   405,   406,   406,
     405,   546,   560,   405,   405,   406,   405,   405,   567,   568,
     405,   406,   405,   406,   406,   406,   405,   406,   405,   406,
     406,   406,   405,   406,   406,   124,   406,   406,   405,   406,
     406,   405,   406,   406,   397,   405,   406,   406,   406,   406,
     405,   405,   405,   405,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    75,   145,   155,   187,   196,   197,
     217,   267,   309,   394,   395,   396,   397,   398,   399,   400,
     403,   405,   406,   406,   405,   406,   405,   124,   406,   406,
     546,   570,   570,   570,   124,   405,   405,   405,   405,   405,
     405,   405,   406,   405,   405,   406,   405,   405,   406,   406,
     409,   411,   411,   411,   717,   546,   716,   189,   558,   115,
     591,   404,   550,   546,   549,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    75,   145,   155,   187,   196,
     197,   217,   267,   309,   394,   395,   396,   397,   398,   399,
     400,   403,   546,   546,   411,   141,    48,   586,   406,   518,
     243,   117,   258,   290,   511,   512,   513,   689,    74,   109,
     782,   124,   144,   282,   406,   533,   534,   600,   611,   543,
     546,   710,   716,   145,   674,   714,   707,   717,   718,   335,
     670,   671,   716,   670,   714,   673,   671,   504,   404,   408,
     571,   576,   577,   243,   518,   238,   404,   763,   763,   763,
     763,   398,   714,   716,   760,   752,   406,   243,   124,   760,
     406,   245,   271,   356,   410,   716,   727,   728,   630,   626,
     530,     6,     7,     8,     9,    11,    12,    13,    14,   119,
     743,   745,   263,   588,    21,    23,    28,    30,    38,    78,
      79,    91,    92,   101,   104,   108,   111,   139,   174,   181,
     198,   202,   211,   212,   213,   219,   227,   246,   255,   271,
     343,   353,   356,   437,   438,   489,   490,   491,   596,   618,
     519,     9,     9,     9,     9,     9,     9,     9,     9,     9,
     406,   420,   251,   714,   658,   656,   411,   660,   124,   398,
     716,   616,    89,   224,   497,    47,   623,   546,   558,   405,
     546,   546,    82,   271,   274,   275,   292,   297,   302,   557,
     557,   558,   558,   546,   546,   712,   546,   546,   406,   546,
     327,   566,   546,   569,   558,   344,   344,   242,   546,   546,
     558,   242,   546,   546,   546,   558,   190,   546,   190,   546,
     558,   546,   546,   546,   558,   546,   546,   546,   546,   546,
     546,   546,   546,   187,   189,   546,   546,   546,   546,   550,
     155,   217,   309,   546,   546,   546,   546,   549,   546,   546,
     344,   546,   344,   546,   546,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   124,   124,   124,   546,   190,   546,
     546,   546,   405,   242,   558,   591,    75,   546,   546,   546,
     546,   546,   546,   546,   187,   189,   546,   546,   546,   404,
     550,   145,   155,   217,   309,   546,   546,   546,   546,   549,
     546,   546,   344,   546,   344,   546,   546,   546,   546,   546,
     584,   584,   716,   242,   162,   214,   265,   737,   736,   242,
     512,   778,   571,   200,   201,   601,   540,    47,   335,   538,
     611,   534,   542,   411,   242,   124,   675,   410,    62,   671,
     671,   670,   714,   571,   716,    34,   142,   148,   184,   229,
     236,   346,   361,   406,   575,   714,   242,   716,   764,   765,
     411,   411,   243,   526,   714,   242,   124,   724,   146,   229,
       9,    19,   335,   641,   410,   717,   641,    60,   229,   261,
     404,   429,   631,   635,   777,   779,   780,   781,   744,   546,
     600,    96,    98,   126,   139,   150,   449,   452,   453,   479,
     480,   495,   495,   495,     9,   123,   204,   480,   495,     9,
       9,   641,   642,     9,   114,     9,   149,   149,   114,     9,
       9,    87,     9,     9,     9,     9,     9,    76,   243,   499,
       9,     9,     9,   229,     9,   495,     9,   437,   406,   404,
     411,   448,   454,   713,   716,   242,   242,   242,   121,   160,
     190,   215,   301,   605,   242,   604,   604,   242,   604,   418,
     404,   423,   436,   437,   281,   291,   294,   445,   421,   260,
     588,   716,   571,   411,   661,   631,   554,   406,   405,   281,
     281,   405,   405,   405,   405,   405,   145,   405,   405,   406,
     546,   405,   546,   384,   385,   378,   405,   546,   546,   405,
     405,   405,   405,   405,   405,   406,   405,   405,   405,   405,
     406,   406,   405,   405,   405,   406,   405,   405,   406,   189,
     405,   591,   550,   546,   549,    75,   546,   546,   406,   405,
     405,   335,   405,   405,   406,   406,   546,   546,   546,   405,
     406,   405,   405,   405,   405,   546,   189,   558,   591,   404,
     550,   546,   549,    75,   546,   546,   695,   265,   157,   528,
     588,   242,   242,   602,   604,   145,    71,    76,   242,   544,
     716,   398,   716,   605,   669,   717,   264,   670,   405,   576,
     148,   148,   148,   346,   361,   651,   712,   571,   199,   578,
     578,   571,   571,   586,   405,   406,   398,   398,   718,   761,
     762,   761,   727,   153,   642,   718,   242,   356,   730,   726,
     641,    74,   102,   192,   546,   731,   430,   632,   404,   638,
     643,   405,   429,   634,   709,   710,   712,   636,   595,   596,
     404,   485,   713,   480,    93,   123,   204,   256,   451,   450,
     451,   485,   713,   713,   242,   150,   150,   713,   713,   605,
     604,   716,   604,     9,   604,     9,   605,   605,   597,   102,
     604,   209,   210,   441,   604,   604,   604,   714,   102,   110,
     120,   268,   440,    81,   133,   143,   147,   179,   180,   182,
     439,   404,   642,     6,   119,   188,   442,   713,   242,   491,
     446,   447,   448,   449,   716,    22,   119,   498,   216,   450,
     474,   455,   411,   424,   429,   446,   138,   360,   426,   698,
     252,   404,   571,   595,   588,   405,   546,    85,   546,   546,
     546,   584,   584,   546,   190,   546,   546,   546,   591,    75,
     546,   584,   584,   546,   546,   546,   546,   405,   405,   405,
     190,   405,   558,   591,    75,   546,   584,   584,   698,   131,
     592,   612,   191,   406,   364,   242,   716,   411,   600,   165,
     671,   346,   571,   578,   578,   406,   650,   641,   148,   148,
     192,   260,   122,   138,   259,   579,   765,   341,   221,   406,
     766,   214,   220,   230,   729,   731,   641,   404,   728,   546,
     535,   639,   640,   712,   644,   406,   404,   635,   405,   405,
     406,   776,   600,   646,   546,   150,   150,   480,   404,    38,
     229,   492,   485,   497,   242,   242,   546,   598,   711,   617,
     716,   493,   405,   406,   716,   714,    82,    83,    84,   161,
     183,   186,   229,   269,   270,   271,   274,   275,   276,   277,
     278,   280,   281,   283,   284,   285,   286,   287,   288,   291,
     293,   295,   296,   297,   298,   299,   300,   303,   304,   381,
     456,   459,   460,   461,   462,   716,   405,   405,    76,   431,
     242,   483,   484,   716,   588,   282,   603,   406,   352,   405,
     385,   405,   405,   405,   406,   406,   405,   405,   405,   546,
     405,   405,   405,   405,   406,   405,   546,   144,    87,   132,
     589,    95,   699,   604,   604,   352,   398,     9,   199,   148,
     148,   712,   588,   546,   571,   571,   546,   572,   480,   580,
     580,   580,    87,    51,   233,   237,   266,   392,   393,   758,
     759,   762,   264,   767,    94,   254,   214,   730,   242,   641,
     539,   406,   641,   645,   646,   643,   637,   635,   709,   405,
     485,   483,   102,   102,   454,   406,    77,   105,   599,   405,
     456,   447,   173,   192,   404,   475,   476,   477,   404,   404,
     468,   303,   459,   460,   271,   304,   304,   458,   404,   463,
     464,   289,   457,   463,   463,   404,   404,   468,    30,    78,
     102,   187,   189,   204,   256,   470,   471,   472,    82,   271,
     305,   404,   473,   404,   468,   404,   464,   469,   425,   436,
     404,   429,   405,   406,   599,   404,   605,   546,   405,   546,
     546,   555,   558,   239,   593,   711,   590,   595,   112,   113,
     195,   241,   700,   701,   156,   702,   242,   148,   571,   571,
     641,   595,   192,   573,   192,   574,   404,   581,   242,   356,
     242,   242,   242,    75,   757,   128,   175,   176,   177,   768,
     769,   405,   731,   443,   534,   640,   647,   405,   779,   404,
     405,   275,   296,   297,   708,   498,   711,   470,   125,   203,
      36,    71,   483,   477,   190,   190,   404,   190,   292,   302,
     306,   465,   466,   467,   404,   465,   465,   190,   190,   465,
     706,   708,   189,   150,   150,   472,   229,   190,   190,   465,
     190,   465,   779,   426,   429,   427,   484,   190,   405,   405,
     406,   405,   405,   714,   264,   406,   594,   599,   546,   600,
      87,    87,   112,    87,   701,   234,   241,   703,   704,    75,
     576,   546,   603,   546,   260,   546,   260,   583,   716,   404,
     242,   758,   194,   604,   604,   604,   769,   538,   483,   599,
     494,    89,   188,   224,   229,   478,   478,   405,   405,   405,
     486,   707,   405,   406,   467,   486,   405,   405,   642,   405,
     405,   405,   776,   599,   405,   546,   699,    35,    58,   711,
     358,   606,   707,   707,    87,   707,    87,    87,   704,   166,
     192,   404,   404,   405,   406,   204,   582,   716,   405,   498,
      72,   102,   189,   475,   405,   406,   190,   405,   716,   473,
     473,   428,   405,   702,   599,   716,   707,   707,   707,     9,
     546,   583,   583,   716,   405,   406,   474,   707,   405,   779,
     138,   705,   607,   605,   409,   405,   405,   716,   190,   404,
     633,   404,    75,   156,   405,   634,   541,   608,   609,   610,
     170,   405,   546,   405,   406,     9,   610,   604
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
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


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
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
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

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
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
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

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

  if (yyss + yystacksize - 1 <= yyssp)
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
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
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

      if (yyss + yystacksize - 1 <= yyssp)
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
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
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 610 "sql_yacc.yy"
    {
	   THD *thd=current_thd;
	   if (!thd->bootstrap &&
	      (!(thd->lex.select_lex.options & OPTION_FOUND_COMMENT)))
	   {
	     send_error(&current_thd->net,ER_EMPTY_QUERY);
	     YYABORT;
 	   }
	   else
	   {
	     thd->lex.sql_command = SQLCOM_EMPTY_QUERY;
	   }
	}
    break;

  case 3:
#line 623 "sql_yacc.yy"
    {}
    break;

  case 42:
#line 669 "sql_yacc.yy"
    {
	  LEX *lex = Lex;
	  lex->sql_command = SQLCOM_CHANGE_MASTER;
	  bzero((char*) &lex->mi, sizeof(lex->mi));
        }
    break;

  case 43:
#line 675 "sql_yacc.yy"
    {}
    break;

  case 46:
#line 684 "sql_yacc.yy"
    {
	 Lex->mi.host = yyvsp[0].lex_str.str;
       }
    break;

  case 47:
#line 689 "sql_yacc.yy"
    {
	 Lex->mi.user = yyvsp[0].lex_str.str;
       }
    break;

  case 48:
#line 694 "sql_yacc.yy"
    {
	 Lex->mi.password = yyvsp[0].lex_str.str;
       }
    break;

  case 49:
#line 699 "sql_yacc.yy"
    {
	 Lex->mi.log_file_name = yyvsp[0].lex_str.str;
       }
    break;

  case 50:
#line 704 "sql_yacc.yy"
    {
	 Lex->mi.port = yyvsp[0].ulong_num;
       }
    break;

  case 51:
#line 709 "sql_yacc.yy"
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

  case 52:
#line 726 "sql_yacc.yy"
    {
	 Lex->mi.connect_retry = yyvsp[0].ulong_num;
       }
    break;

  case 53:
#line 731 "sql_yacc.yy"
    {
	 Lex->mi.relay_log_name = yyvsp[0].lex_str.str;
       }
    break;

  case 54:
#line 736 "sql_yacc.yy"
    {
	 Lex->mi.relay_log_pos = yyvsp[0].ulong_num;
         /* Adjust if < BIN_LOG_HEADER_SIZE (same comment as Lex->mi.pos) */
         Lex->mi.relay_log_pos = max(BIN_LOG_HEADER_SIZE, Lex->mi.relay_log_pos);
       }
    break;

  case 55:
#line 747 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command= SQLCOM_CREATE_TABLE;
	  if (!add_table_to_list(yyvsp[0].table,
				 (yyvsp[-3].num & HA_LEX_CREATE_TMP_TABLE ?
				   &tmp_table_alias : (LEX_STRING*) 0),
				 TL_OPTION_UPDATING))
	    YYABORT;
	  lex->create_list.empty();
	  lex->key_list.empty();
	  lex->col_list.empty();
	  lex->change=NullS;
	  bzero((char*) &lex->create_info,sizeof(lex->create_info));
	  lex->create_info.options=yyvsp[-3].num | yyvsp[-1].num;
	  lex->create_info.db_type= (enum db_type) lex->thd->variables.table_type;
	}
    break;

  case 56:
#line 764 "sql_yacc.yy"
    {Lex->select= &Lex->select_lex;}
    break;

  case 57:
#line 766 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_CREATE_INDEX;
	    if (!add_table_to_list(yyvsp[0].table, NULL, TL_OPTION_UPDATING))
	      YYABORT;
	    lex->create_list.empty();
	    lex->key_list.empty();
	    lex->col_list.empty();
	    lex->change=NullS;
	  }
    break;

  case 58:
#line 777 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->key_list.push_back(new Key(yyvsp[-8].key_type,yyvsp[-6].lex_str.str,lex->col_list));
	    lex->col_list.empty();
	  }
    break;

  case 59:
#line 783 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command=SQLCOM_CREATE_DB;
	    lex->name=yyvsp[0].lex_str.str;
            lex->create_info.options=yyvsp[-1].num;
	  }
    break;

  case 60:
#line 790 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command = SQLCOM_CREATE_FUNCTION;
	    lex->udf.name=yyvsp[0].lex_str.str;
	    lex->udf.name_length=yyvsp[0].lex_str.length;
	    lex->udf.type= yyvsp[-2].udf_type;
	  }
    break;

  case 61:
#line 798 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->udf.returns=(Item_result) yyvsp[-2].num;
	    lex->udf.dl=yyvsp[0].lex_str.str;
	  }
    break;

  case 62:
#line 805 "sql_yacc.yy"
    {}
    break;

  case 63:
#line 806 "sql_yacc.yy"
    {}
    break;

  case 64:
#line 809 "sql_yacc.yy"
    {}
    break;

  case 65:
#line 810 "sql_yacc.yy"
    { Select->braces= 1;}
    break;

  case 66:
#line 810 "sql_yacc.yy"
    {}
    break;

  case 67:
#line 814 "sql_yacc.yy"
    {}
    break;

  case 68:
#line 816 "sql_yacc.yy"
    { Select->braces= 0;}
    break;

  case 69:
#line 816 "sql_yacc.yy"
    {}
    break;

  case 70:
#line 818 "sql_yacc.yy"
    { Select->braces= 1;}
    break;

  case 71:
#line 818 "sql_yacc.yy"
    {}
    break;

  case 72:
#line 823 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->lock_option= using_update_log ? TL_READ_NO_INSERT : TL_READ;
	    if (lex->sql_command == SQLCOM_INSERT)
	      lex->sql_command= SQLCOM_INSERT_SELECT;
	    else if (lex->sql_command == SQLCOM_REPLACE)
	      lex->sql_command= SQLCOM_REPLACE_SELECT;
	    lex->select->table_list.save_and_clear(&lex->save_list);
	    mysql_init_select(lex);
          }
    break;

  case 73:
#line 834 "sql_yacc.yy"
    { Lex->select->table_list.push_front(&Lex->save_list); }
    break;

  case 74:
#line 838 "sql_yacc.yy"
    {}
    break;

  case 75:
#line 839 "sql_yacc.yy"
    {}
    break;

  case 76:
#line 842 "sql_yacc.yy"
    { yyval.num= 0; }
    break;

  case 77:
#line 843 "sql_yacc.yy"
    { yyval.num= yyvsp[0].num;}
    break;

  case 78:
#line 846 "sql_yacc.yy"
    { yyval.num=yyvsp[0].num; }
    break;

  case 79:
#line 847 "sql_yacc.yy"
    { yyval.num= yyvsp[-1].num | yyvsp[0].num; }
    break;

  case 80:
#line 850 "sql_yacc.yy"
    { yyval.num=HA_LEX_CREATE_TMP_TABLE; }
    break;

  case 81:
#line 853 "sql_yacc.yy"
    { yyval.num= 0; }
    break;

  case 82:
#line 854 "sql_yacc.yy"
    { yyval.num=HA_LEX_CREATE_IF_NOT_EXISTS; }
    break;

  case 87:
#line 865 "sql_yacc.yy"
    { Lex->create_info.db_type= yyvsp[0].db_type; }
    break;

  case 88:
#line 866 "sql_yacc.yy"
    { Lex->create_info.max_rows= yyvsp[0].ulonglong_number; Lex->create_info.used_fields|= HA_CREATE_USED_MAX_ROWS;}
    break;

  case 89:
#line 867 "sql_yacc.yy"
    { Lex->create_info.min_rows= yyvsp[0].ulonglong_number; Lex->create_info.used_fields|= HA_CREATE_USED_MIN_ROWS;}
    break;

  case 90:
#line 868 "sql_yacc.yy"
    { Lex->create_info.avg_row_length=yyvsp[0].ulong_num; Lex->create_info.used_fields|= HA_CREATE_USED_AVG_ROW_LENGTH;}
    break;

  case 91:
#line 869 "sql_yacc.yy"
    { Lex->create_info.password=yyvsp[0].lex_str.str; }
    break;

  case 92:
#line 870 "sql_yacc.yy"
    { Lex->create_info.comment=yyvsp[0].lex_str.str; }
    break;

  case 93:
#line 871 "sql_yacc.yy"
    { Lex->create_info.auto_increment_value=yyvsp[0].ulonglong_number; Lex->create_info.used_fields|= HA_CREATE_USED_AUTO;}
    break;

  case 94:
#line 872 "sql_yacc.yy"
    { Lex->create_info.table_options|= yyvsp[0].ulong_num ? HA_OPTION_PACK_KEYS : HA_OPTION_NO_PACK_KEYS; Lex->create_info.used_fields|= HA_CREATE_USED_PACK_KEYS;}
    break;

  case 95:
#line 873 "sql_yacc.yy"
    { Lex->create_info.table_options&= ~(HA_OPTION_PACK_KEYS | HA_OPTION_NO_PACK_KEYS); Lex->create_info.used_fields|= HA_CREATE_USED_PACK_KEYS;}
    break;

  case 96:
#line 874 "sql_yacc.yy"
    { Lex->create_info.table_options|= yyvsp[0].ulong_num ? HA_OPTION_CHECKSUM : HA_OPTION_NO_CHECKSUM; }
    break;

  case 97:
#line 875 "sql_yacc.yy"
    { Lex->create_info.table_options|= yyvsp[0].ulong_num ? HA_OPTION_DELAY_KEY_WRITE : HA_OPTION_NO_DELAY_KEY_WRITE; }
    break;

  case 98:
#line 876 "sql_yacc.yy"
    { Lex->create_info.row_type= yyvsp[0].row_type; }
    break;

  case 99:
#line 877 "sql_yacc.yy"
    { Lex->create_info.raid_type= yyvsp[0].ulong_num; Lex->create_info.used_fields|= HA_CREATE_USED_RAID;}
    break;

  case 100:
#line 878 "sql_yacc.yy"
    { Lex->create_info.raid_chunks= yyvsp[0].ulong_num; Lex->create_info.used_fields|= HA_CREATE_USED_RAID;}
    break;

  case 101:
#line 879 "sql_yacc.yy"
    { Lex->create_info.raid_chunksize= yyvsp[0].ulong_num*RAID_BLOCK_SIZE; Lex->create_info.used_fields|= HA_CREATE_USED_RAID;}
    break;

  case 102:
#line 881 "sql_yacc.yy"
    {
	    /* Move the union list to the merge_list */
	    LEX *lex=Lex;
	    TABLE_LIST *table_list= (TABLE_LIST*) lex->select->table_list.first;
	    lex->create_info.merge_list= lex->select->table_list;
	    lex->create_info.merge_list.elements--;
	    lex->create_info.merge_list.first= (byte*) (table_list->next);
	    lex->select->table_list.elements=1;
	    lex->select->table_list.next= (byte**) &(table_list->next);
	    table_list->next=0;
	    lex->create_info.used_fields|= HA_CREATE_USED_UNION;
	  }
    break;

  case 103:
#line 893 "sql_yacc.yy"
    {}
    break;

  case 104:
#line 894 "sql_yacc.yy"
    {}
    break;

  case 105:
#line 895 "sql_yacc.yy"
    { Lex->create_info.merge_insert_method= yyvsp[0].ulong_num; Lex->create_info.used_fields|= HA_CREATE_USED_INSERT_METHOD;}
    break;

  case 106:
#line 896 "sql_yacc.yy"
    { Lex->create_info.data_file_name= yyvsp[0].lex_str.str; }
    break;

  case 107:
#line 897 "sql_yacc.yy"
    { Lex->create_info.index_file_name= yyvsp[0].lex_str.str; }
    break;

  case 108:
#line 900 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_ISAM; }
    break;

  case 109:
#line 901 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_MYISAM; }
    break;

  case 110:
#line 902 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_MRG_MYISAM; }
    break;

  case 111:
#line 903 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_HEAP; }
    break;

  case 112:
#line 904 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_HEAP; }
    break;

  case 113:
#line 905 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_BERKELEY_DB; }
    break;

  case 114:
#line 906 "sql_yacc.yy"
    { yyval.db_type= DB_TYPE_INNODB; }
    break;

  case 115:
#line 909 "sql_yacc.yy"
    { yyval.row_type= ROW_TYPE_DEFAULT; }
    break;

  case 116:
#line 910 "sql_yacc.yy"
    { yyval.row_type= ROW_TYPE_FIXED; }
    break;

  case 117:
#line 911 "sql_yacc.yy"
    { yyval.row_type= ROW_TYPE_DYNAMIC; }
    break;

  case 118:
#line 912 "sql_yacc.yy"
    { yyval.row_type= ROW_TYPE_COMPRESSED; }
    break;

  case 119:
#line 915 "sql_yacc.yy"
    { yyval.ulong_num= RAID_TYPE_0; }
    break;

  case 120:
#line 916 "sql_yacc.yy"
    { yyval.ulong_num= RAID_TYPE_0; }
    break;

  case 121:
#line 917 "sql_yacc.yy"
    { yyval.ulong_num=yyvsp[0].ulong_num;}
    break;

  case 122:
#line 920 "sql_yacc.yy"
    { yyval.ulong_num= MERGE_INSERT_DISABLED; }
    break;

  case 123:
#line 921 "sql_yacc.yy"
    { yyval.ulong_num= MERGE_INSERT_TO_FIRST; }
    break;

  case 124:
#line 922 "sql_yacc.yy"
    { yyval.ulong_num= MERGE_INSERT_TO_LAST; }
    break;

  case 127:
#line 929 "sql_yacc.yy"
    { yyval.udf_type = UDFTYPE_FUNCTION; }
    break;

  case 128:
#line 930 "sql_yacc.yy"
    { yyval.udf_type = UDFTYPE_AGGREGATE; }
    break;

  case 129:
#line 933 "sql_yacc.yy"
    {yyval.num = (int) STRING_RESULT; }
    break;

  case 130:
#line 934 "sql_yacc.yy"
    {yyval.num = (int) REAL_RESULT; }
    break;

  case 131:
#line 935 "sql_yacc.yy"
    {yyval.num = (int) INT_RESULT; }
    break;

  case 137:
#line 950 "sql_yacc.yy"
    {
	    Lex->col_list.empty();		/* Alloced by sql_alloc */
	  }
    break;

  case 138:
#line 957 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->key_list.push_back(new Key(yyvsp[-4].key_type,yyvsp[-3].simple_string,lex->col_list));
	    lex->col_list.empty();		/* Alloced by sql_alloc */
	  }
    break;

  case 139:
#line 963 "sql_yacc.yy"
    {
	    Lex->col_list.empty();		/* Alloced by sql_alloc */
	  }
    break;

  case 140:
#line 967 "sql_yacc.yy"
    {
	    Lex->col_list.empty();		/* Alloced by sql_alloc */
	  }
    break;

  case 141:
#line 971 "sql_yacc.yy"
    {
	    Lex->col_list.empty();		/* Alloced by sql_alloc */
	  }
    break;

  case 148:
#line 994 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
	   lex->length=lex->dec=0; lex->type=0; lex->interval=0;
	   lex->default_value=0;
	 }
    break;

  case 149:
#line 1000 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (add_field_to_list(yyvsp[-3].lex_str.str,
				(enum enum_field_types) yyvsp[-1].num,
				lex->length,lex->dec,lex->type,
				lex->default_value,lex->change,
				lex->interval))
	    YYABORT;
	}
    break;

  case 150:
#line 1011 "sql_yacc.yy"
    { Lex->length=yyvsp[-1].simple_string; yyval.num=yyvsp[-2].num; }
    break;

  case 151:
#line 1012 "sql_yacc.yy"
    { yyval.num=yyvsp[-2].num; }
    break;

  case 152:
#line 1013 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_FLOAT; }
    break;

  case 153:
#line 1014 "sql_yacc.yy"
    { Lex->length=(char*) "1";
					  yyval.num=FIELD_TYPE_TINY; }
    break;

  case 154:
#line 1016 "sql_yacc.yy"
    { Lex->length=(char*) "1";
					  yyval.num=FIELD_TYPE_TINY; }
    break;

  case 155:
#line 1018 "sql_yacc.yy"
    { Lex->length=yyvsp[-2].lex_str.str;
					  yyval.num=FIELD_TYPE_STRING; }
    break;

  case 156:
#line 1020 "sql_yacc.yy"
    { Lex->length=(char*) "1";
					  yyval.num=FIELD_TYPE_STRING; }
    break;

  case 157:
#line 1022 "sql_yacc.yy"
    { Lex->length=yyvsp[-1].lex_str.str;
					  Lex->type|=BINARY_FLAG;
					  yyval.num=FIELD_TYPE_STRING; }
    break;

  case 158:
#line 1025 "sql_yacc.yy"
    { Lex->length=yyvsp[-2].lex_str.str;
					  yyval.num=FIELD_TYPE_VAR_STRING; }
    break;

  case 159:
#line 1027 "sql_yacc.yy"
    { Lex->length=yyvsp[-1].lex_str.str;
					  Lex->type|=BINARY_FLAG;
					  yyval.num=FIELD_TYPE_VAR_STRING; }
    break;

  case 160:
#line 1030 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_YEAR; Lex->length=yyvsp[-1].simple_string; }
    break;

  case 161:
#line 1031 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DATE; }
    break;

  case 162:
#line 1032 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_TIME; }
    break;

  case 163:
#line 1033 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_TIMESTAMP; }
    break;

  case 164:
#line 1034 "sql_yacc.yy"
    { Lex->length=yyvsp[-1].lex_str.str;
					  yyval.num=FIELD_TYPE_TIMESTAMP; }
    break;

  case 165:
#line 1036 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DATETIME; }
    break;

  case 166:
#line 1037 "sql_yacc.yy"
    { Lex->type|=BINARY_FLAG;
					  yyval.num=FIELD_TYPE_TINY_BLOB; }
    break;

  case 167:
#line 1039 "sql_yacc.yy"
    { Lex->type|=BINARY_FLAG;
					  yyval.num=FIELD_TYPE_BLOB; }
    break;

  case 168:
#line 1041 "sql_yacc.yy"
    { Lex->type|=BINARY_FLAG;
					  yyval.num=FIELD_TYPE_MEDIUM_BLOB; }
    break;

  case 169:
#line 1043 "sql_yacc.yy"
    { Lex->type|=BINARY_FLAG;
					  yyval.num=FIELD_TYPE_LONG_BLOB; }
    break;

  case 170:
#line 1045 "sql_yacc.yy"
    { Lex->type|=BINARY_FLAG;
					  yyval.num=FIELD_TYPE_MEDIUM_BLOB; }
    break;

  case 171:
#line 1047 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_MEDIUM_BLOB; }
    break;

  case 172:
#line 1048 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_TINY_BLOB; }
    break;

  case 173:
#line 1049 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_BLOB; }
    break;

  case 174:
#line 1050 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_MEDIUM_BLOB; }
    break;

  case 175:
#line 1051 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_LONG_BLOB; }
    break;

  case 176:
#line 1053 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DECIMAL;}
    break;

  case 177:
#line 1055 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DECIMAL;}
    break;

  case 178:
#line 1056 "sql_yacc.yy"
    {Lex->interval_list.empty();}
    break;

  case 179:
#line 1057 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->interval=typelib(lex->interval_list);
	    yyval.num=FIELD_TYPE_ENUM;
	  }
    break;

  case 180:
#line 1062 "sql_yacc.yy"
    { Lex->interval_list.empty();}
    break;

  case 181:
#line 1063 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->interval=typelib(lex->interval_list);
	    yyval.num=FIELD_TYPE_SET;
	  }
    break;

  case 182:
#line 1070 "sql_yacc.yy"
    {}
    break;

  case 183:
#line 1071 "sql_yacc.yy"
    {}
    break;

  case 184:
#line 1072 "sql_yacc.yy"
    {}
    break;

  case 185:
#line 1075 "sql_yacc.yy"
    {}
    break;

  case 186:
#line 1076 "sql_yacc.yy"
    {}
    break;

  case 187:
#line 1077 "sql_yacc.yy"
    {}
    break;

  case 188:
#line 1078 "sql_yacc.yy"
    {}
    break;

  case 189:
#line 1081 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_LONG; }
    break;

  case 190:
#line 1082 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_TINY; }
    break;

  case 191:
#line 1083 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_SHORT; }
    break;

  case 192:
#line 1084 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_INT24; }
    break;

  case 193:
#line 1085 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_LONGLONG; }
    break;

  case 194:
#line 1088 "sql_yacc.yy"
    { yyval.num= current_thd->sql_mode & MODE_REAL_AS_FLOAT ?
			      FIELD_TYPE_FLOAT : FIELD_TYPE_DOUBLE; }
    break;

  case 195:
#line 1090 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DOUBLE; }
    break;

  case 196:
#line 1091 "sql_yacc.yy"
    { yyval.num=FIELD_TYPE_DOUBLE; }
    break;

  case 197:
#line 1095 "sql_yacc.yy"
    {}
    break;

  case 198:
#line 1096 "sql_yacc.yy"
    { Lex->length=yyvsp[-1].lex_str.str; }
    break;

  case 199:
#line 1097 "sql_yacc.yy"
    {}
    break;

  case 200:
#line 1101 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->length=yyvsp[-3].lex_str.str; lex->dec=yyvsp[-1].lex_str.str;
	}
    break;

  case 201:
#line 1107 "sql_yacc.yy"
    {}
    break;

  case 202:
#line 1108 "sql_yacc.yy"
    {}
    break;

  case 203:
#line 1111 "sql_yacc.yy"
    {}
    break;

  case 204:
#line 1112 "sql_yacc.yy"
    {}
    break;

  case 205:
#line 1115 "sql_yacc.yy"
    {}
    break;

  case 206:
#line 1116 "sql_yacc.yy"
    { Lex->type|= UNSIGNED_FLAG;}
    break;

  case 207:
#line 1117 "sql_yacc.yy"
    { Lex->type|= UNSIGNED_FLAG | ZEROFILL_FLAG; }
    break;

  case 208:
#line 1120 "sql_yacc.yy"
    { yyval.simple_string=(char*) 0; }
    break;

  case 209:
#line 1121 "sql_yacc.yy"
    { yyval.simple_string=yyvsp[-1].lex_str.str; }
    break;

  case 210:
#line 1124 "sql_yacc.yy"
    {}
    break;

  case 211:
#line 1125 "sql_yacc.yy"
    {}
    break;

  case 212:
#line 1128 "sql_yacc.yy"
    {}
    break;

  case 213:
#line 1129 "sql_yacc.yy"
    {}
    break;

  case 214:
#line 1132 "sql_yacc.yy"
    {}
    break;

  case 216:
#line 1136 "sql_yacc.yy"
    { Lex->type&= ~ NOT_NULL_FLAG; }
    break;

  case 217:
#line 1137 "sql_yacc.yy"
    { Lex->type|= NOT_NULL_FLAG; }
    break;

  case 218:
#line 1138 "sql_yacc.yy"
    { Lex->default_value=yyvsp[0].item; }
    break;

  case 219:
#line 1139 "sql_yacc.yy"
    { Lex->type|= AUTO_INCREMENT_FLAG | NOT_NULL_FLAG; }
    break;

  case 220:
#line 1140 "sql_yacc.yy"
    { Lex->type|= PRI_KEY_FLAG | NOT_NULL_FLAG; }
    break;

  case 221:
#line 1141 "sql_yacc.yy"
    { Lex->type|= UNIQUE_FLAG; }
    break;

  case 222:
#line 1142 "sql_yacc.yy"
    { Lex->type|= UNIQUE_KEY_FLAG; }
    break;

  case 223:
#line 1143 "sql_yacc.yy"
    {}
    break;

  case 224:
#line 1146 "sql_yacc.yy"
    {}
    break;

  case 225:
#line 1147 "sql_yacc.yy"
    { Lex->type|=BINARY_FLAG; }
    break;

  case 226:
#line 1148 "sql_yacc.yy"
    {}
    break;

  case 227:
#line 1152 "sql_yacc.yy"
    {}
    break;

  case 228:
#line 1154 "sql_yacc.yy"
    {
	    Lex->col_list.empty();		/* Alloced by sql_alloc */
	  }
    break;

  case 229:
#line 1159 "sql_yacc.yy"
    {}
    break;

  case 230:
#line 1160 "sql_yacc.yy"
    {}
    break;

  case 231:
#line 1163 "sql_yacc.yy"
    {}
    break;

  case 232:
#line 1164 "sql_yacc.yy"
    {}
    break;

  case 233:
#line 1168 "sql_yacc.yy"
    {}
    break;

  case 234:
#line 1169 "sql_yacc.yy"
    {}
    break;

  case 235:
#line 1170 "sql_yacc.yy"
    {}
    break;

  case 236:
#line 1171 "sql_yacc.yy"
    {}
    break;

  case 237:
#line 1174 "sql_yacc.yy"
    {}
    break;

  case 238:
#line 1175 "sql_yacc.yy"
    {}
    break;

  case 239:
#line 1176 "sql_yacc.yy"
    {}
    break;

  case 240:
#line 1177 "sql_yacc.yy"
    {}
    break;

  case 241:
#line 1178 "sql_yacc.yy"
    {}
    break;

  case 242:
#line 1181 "sql_yacc.yy"
    { yyval.key_type= Key::PRIMARY; }
    break;

  case 243:
#line 1182 "sql_yacc.yy"
    { yyval.key_type= Key::MULTIPLE; }
    break;

  case 244:
#line 1183 "sql_yacc.yy"
    { yyval.key_type= Key::FULLTEXT; }
    break;

  case 245:
#line 1184 "sql_yacc.yy"
    { yyval.key_type= Key::FULLTEXT; }
    break;

  case 246:
#line 1185 "sql_yacc.yy"
    { yyval.key_type= Key::UNIQUE; }
    break;

  case 247:
#line 1186 "sql_yacc.yy"
    { yyval.key_type= Key::UNIQUE; }
    break;

  case 248:
#line 1189 "sql_yacc.yy"
    {}
    break;

  case 249:
#line 1190 "sql_yacc.yy"
    {}
    break;

  case 250:
#line 1193 "sql_yacc.yy"
    {}
    break;

  case 251:
#line 1194 "sql_yacc.yy"
    {}
    break;

  case 252:
#line 1195 "sql_yacc.yy"
    {}
    break;

  case 253:
#line 1198 "sql_yacc.yy"
    { yyval.key_type= Key::MULTIPLE; }
    break;

  case 254:
#line 1199 "sql_yacc.yy"
    { yyval.key_type= Key::UNIQUE; }
    break;

  case 255:
#line 1200 "sql_yacc.yy"
    { yyval.key_type= Key::FULLTEXT; }
    break;

  case 256:
#line 1203 "sql_yacc.yy"
    { Lex->col_list.push_back(yyvsp[-1].key_part); }
    break;

  case 257:
#line 1204 "sql_yacc.yy"
    { Lex->col_list.push_back(yyvsp[-1].key_part); }
    break;

  case 258:
#line 1207 "sql_yacc.yy"
    { yyval.key_part=new key_part_spec(yyvsp[0].lex_str.str); }
    break;

  case 259:
#line 1208 "sql_yacc.yy"
    { yyval.key_part=new key_part_spec(yyvsp[-3].lex_str.str,(uint) atoi(yyvsp[-1].lex_str.str)); }
    break;

  case 260:
#line 1211 "sql_yacc.yy"
    { yyval.simple_string=(char*) 0; }
    break;

  case 261:
#line 1212 "sql_yacc.yy"
    { yyval.simple_string=yyvsp[0].lex_str.str; }
    break;

  case 262:
#line 1215 "sql_yacc.yy"
    { Lex->interval_list.push_back(yyvsp[0].string); }
    break;

  case 263:
#line 1216 "sql_yacc.yy"
    { Lex->interval_list.push_back(yyvsp[0].string); }
    break;

  case 264:
#line 1224 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_ALTER_TABLE;
	  lex->name=0;
	  if (!add_table_to_list(yyvsp[0].table, NULL, TL_OPTION_UPDATING))
	    YYABORT;
	  lex->drop_primary=0;
	  lex->create_list.empty();
	  lex->key_list.empty();
	  lex->col_list.empty();
	  lex->drop_list.empty();
	  lex->alter_list.empty();
          lex->select->order_list.elements=0;
          lex->select->order_list.first=0;
          lex->select->order_list.next= (byte**) &lex->select->order_list.first;
	  lex->select->db=lex->name=0;
    	  bzero((char*) &lex->create_info,sizeof(lex->create_info));
	  lex->create_info.db_type= DB_TYPE_DEFAULT;
	  lex->create_info.row_type= ROW_TYPE_NOT_USED;
          lex->alter_keys_onoff=LEAVE_AS_IS;
          lex->simple_alter=1;
	}
    break;

  case 265:
#line 1247 "sql_yacc.yy"
    {}
    break;

  case 269:
#line 1255 "sql_yacc.yy"
    { Lex->change=0; }
    break;

  case 270:
#line 1258 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 271:
#line 1259 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 272:
#line 1260 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 273:
#line 1262 "sql_yacc.yy"
    {
	     LEX *lex=Lex;
	     lex->change= yyvsp[0].lex_str.str; lex->simple_alter=0;
	  }
    break;

  case 275:
#line 1268 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->length=lex->dec=0; lex->type=0; lex->interval=0;
	    lex->default_value=0;
            lex->simple_alter=0;
	  }
    break;

  case 276:
#line 1275 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    if (add_field_to_list(yyvsp[-3].lex_str.str,
				  (enum enum_field_types) yyvsp[-1].num,
				  lex->length,lex->dec,lex->type,
				  lex->default_value, yyvsp[-3].lex_str.str,
				  lex->interval))
	      YYABORT;
	  }
    break;

  case 278:
#line 1286 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->drop_list.push_back(new Alter_drop(Alter_drop::COLUMN,
					    yyvsp[-1].lex_str.str)); lex->simple_alter=0;
	  }
    break;

  case 279:
#line 1292 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->drop_primary=1; lex->simple_alter=0;
	  }
    break;

  case 280:
#line 1296 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 281:
#line 1298 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->drop_list.push_back(new Alter_drop(Alter_drop::KEY,
						    yyvsp[0].lex_str.str));
	    lex->simple_alter=0;
	  }
    break;

  case 282:
#line 1304 "sql_yacc.yy"
    { Lex->alter_keys_onoff=DISABLE; }
    break;

  case 283:
#line 1305 "sql_yacc.yy"
    { Lex->alter_keys_onoff=ENABLE; }
    break;

  case 284:
#line 1307 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->alter_list.push_back(new Alter_column(yyvsp[-3].lex_str.str,yyvsp[0].item));
	    lex->simple_alter=0;
	  }
    break;

  case 285:
#line 1313 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->alter_list.push_back(new Alter_column(yyvsp[-2].lex_str.str,(Item*) 0));
	    lex->simple_alter=0;
	  }
    break;

  case 286:
#line 1319 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->select->db=yyvsp[0].table->db.str;
	    lex->name= yyvsp[0].table->table.str;
            if (check_table_name(yyvsp[0].table->table.str,yyvsp[0].table->table.length) ||
                yyvsp[0].table->db.str && check_db_name(yyvsp[0].table->db.str))
            {
              net_printf(&lex->thd->net,ER_WRONG_TABLE_NAME,yyvsp[0].table->table.str);
              YYABORT;
            }
	  }
    break;

  case 287:
#line 1330 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 288:
#line 1331 "sql_yacc.yy"
    { Lex->simple_alter=0; }
    break;

  case 289:
#line 1334 "sql_yacc.yy"
    {}
    break;

  case 290:
#line 1335 "sql_yacc.yy"
    {}
    break;

  case 291:
#line 1338 "sql_yacc.yy"
    { Lex->duplicates=DUP_ERROR; }
    break;

  case 292:
#line 1339 "sql_yacc.yy"
    { Lex->duplicates=DUP_IGNORE; }
    break;

  case 293:
#line 1342 "sql_yacc.yy"
    {}
    break;

  case 294:
#line 1343 "sql_yacc.yy"
    {}
    break;

  case 295:
#line 1344 "sql_yacc.yy"
    {}
    break;

  case 296:
#line 1347 "sql_yacc.yy"
    {}
    break;

  case 297:
#line 1348 "sql_yacc.yy"
    { store_position_for_column(yyvsp[0].lex_str.str); }
    break;

  case 298:
#line 1349 "sql_yacc.yy"
    { store_position_for_column(first_keyword); }
    break;

  case 299:
#line 1352 "sql_yacc.yy"
    {}
    break;

  case 300:
#line 1353 "sql_yacc.yy"
    {}
    break;

  case 301:
#line 1354 "sql_yacc.yy"
    {}
    break;

  case 302:
#line 1355 "sql_yacc.yy"
    {}
    break;

  case 303:
#line 1362 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
           lex->sql_command = SQLCOM_SLAVE_START;
	   lex->type = 0;
         }
    break;

  case 304:
#line 1369 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
           lex->sql_command = SQLCOM_SLAVE_STOP;
	   lex->type = 0;
         }
    break;

  case 305:
#line 1376 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
           lex->sql_command = SQLCOM_SLAVE_START;
	   lex->type = 0;
         }
    break;

  case 306:
#line 1383 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
           lex->sql_command = SQLCOM_SLAVE_STOP;
	   lex->type = 0;
         }
    break;

  case 307:
#line 1390 "sql_yacc.yy"
    { Lex->sql_command = SQLCOM_BEGIN;}
    break;

  case 308:
#line 1391 "sql_yacc.yy"
    {}
    break;

  case 311:
#line 1399 "sql_yacc.yy"
    {}
    break;

  case 312:
#line 1400 "sql_yacc.yy"
    { Lex->slave_thd_opt|=SLAVE_SQL; }
    break;

  case 313:
#line 1401 "sql_yacc.yy"
    { Lex->slave_thd_opt|=SLAVE_IO; }
    break;

  case 314:
#line 1406 "sql_yacc.yy"
    {
	   Lex->sql_command = SQLCOM_RESTORE_TABLE;
	}
    break;

  case 315:
#line 1410 "sql_yacc.yy"
    {
	  Lex->backup_dir = yyvsp[0].lex_str.str;
        }
    break;

  case 316:
#line 1416 "sql_yacc.yy"
    {
	   Lex->sql_command = SQLCOM_BACKUP_TABLE;
	}
    break;

  case 317:
#line 1420 "sql_yacc.yy"
    {
	  Lex->backup_dir = yyvsp[0].lex_str.str;
        }
    break;

  case 318:
#line 1426 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
	   lex->sql_command = SQLCOM_REPAIR;
	   lex->check_opt.init();
	}
    break;

  case 319:
#line 1432 "sql_yacc.yy"
    {}
    break;

  case 320:
#line 1436 "sql_yacc.yy"
    { Lex->check_opt.flags = T_MEDIUM; }
    break;

  case 321:
#line 1437 "sql_yacc.yy"
    {}
    break;

  case 322:
#line 1440 "sql_yacc.yy"
    {}
    break;

  case 323:
#line 1441 "sql_yacc.yy"
    {}
    break;

  case 324:
#line 1444 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_QUICK; }
    break;

  case 325:
#line 1445 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_EXTEND; }
    break;

  case 326:
#line 1446 "sql_yacc.yy"
    { Lex->check_opt.sql_flags|= TT_USEFRM; }
    break;

  case 327:
#line 1450 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
	   lex->sql_command = SQLCOM_ANALYZE;
	   lex->check_opt.init();
	}
    break;

  case 328:
#line 1456 "sql_yacc.yy"
    {}
    break;

  case 329:
#line 1461 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
	   lex->sql_command = SQLCOM_CHECK;
	   lex->check_opt.init();
	}
    break;

  case 330:
#line 1467 "sql_yacc.yy"
    {}
    break;

  case 331:
#line 1471 "sql_yacc.yy"
    { Lex->check_opt.flags = T_MEDIUM; }
    break;

  case 332:
#line 1472 "sql_yacc.yy"
    {}
    break;

  case 333:
#line 1475 "sql_yacc.yy"
    {}
    break;

  case 334:
#line 1476 "sql_yacc.yy"
    {}
    break;

  case 335:
#line 1479 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_QUICK; }
    break;

  case 336:
#line 1480 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_FAST; }
    break;

  case 337:
#line 1481 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_MEDIUM; }
    break;

  case 338:
#line 1482 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_EXTEND; }
    break;

  case 339:
#line 1483 "sql_yacc.yy"
    { Lex->check_opt.flags|= T_CHECK_ONLY_CHANGED; }
    break;

  case 340:
#line 1487 "sql_yacc.yy"
    {
	   LEX *lex=Lex;
	   lex->sql_command = SQLCOM_OPTIMIZE;
	   lex->check_opt.init();
	}
    break;

  case 341:
#line 1493 "sql_yacc.yy"
    {}
    break;

  case 342:
#line 1498 "sql_yacc.yy"
    {
	   Lex->sql_command=SQLCOM_RENAME_TABLE;
	}
    break;

  case 343:
#line 1502 "sql_yacc.yy"
    {}
    break;

  case 346:
#line 1511 "sql_yacc.yy"
    {
	   if (!add_table_to_list(yyvsp[-2].table, NULL, TL_OPTION_UPDATING, TL_IGNORE) ||
	       !add_table_to_list(yyvsp[0].table, NULL, TL_OPTION_UPDATING, TL_IGNORE))
	     YYABORT;
 	}
    break;

  case 347:
#line 1523 "sql_yacc.yy"
    { Lex->sql_command=SQLCOM_SELECT; }
    break;

  case 348:
#line 1526 "sql_yacc.yy"
    { Select->braces= 0;	}
    break;

  case 350:
#line 1528 "sql_yacc.yy"
    { Select->braces= 1;}
    break;

  case 352:
#line 1532 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
          mysql_init_select(lex);
	}
    break;

  case 354:
#line 1539 "sql_yacc.yy"
    {}
    break;

  case 364:
#line 1558 "sql_yacc.yy"
    { Select->options|= SELECT_STRAIGHT_JOIN; }
    break;

  case 365:
#line 1560 "sql_yacc.yy"
    {
	    if (check_simple_select())
	      YYABORT;
	    Lex->lock_option= TL_READ_HIGH_PRIORITY;
	  }
    break;

  case 366:
#line 1565 "sql_yacc.yy"
    { Select->options|= SELECT_DISTINCT; }
    break;

  case 367:
#line 1566 "sql_yacc.yy"
    { Select->options|= SELECT_SMALL_RESULT; }
    break;

  case 368:
#line 1567 "sql_yacc.yy"
    { Select->options|= SELECT_BIG_RESULT; }
    break;

  case 369:
#line 1569 "sql_yacc.yy"
    {
	    if (check_simple_select())
	      YYABORT;
	    Select->options|= OPTION_BUFFER_RESULT;
	  }
    break;

  case 370:
#line 1575 "sql_yacc.yy"
    {
	    if (check_simple_select())
	      YYABORT;
	    Select->options|= OPTION_FOUND_ROWS;
	  }
    break;

  case 371:
#line 1580 "sql_yacc.yy"
    { current_thd->safe_to_cache_query=0; }
    break;

  case 372:
#line 1582 "sql_yacc.yy"
    {
	    Lex->select_lex.options|= OPTION_TO_QUERY_CACHE;
	  }
    break;

  case 373:
#line 1585 "sql_yacc.yy"
    {}
    break;

  case 375:
#line 1591 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    if (check_simple_select())
	      YYABORT;	
	    lex->lock_option= TL_WRITE;
	    lex->thd->safe_to_cache_query=0;
	  }
    break;

  case 376:
#line 1599 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    if (check_simple_select())
	      YYABORT;	
	    lex->lock_option= TL_READ_WITH_SHARED_LOCKS;
	    lex->thd->safe_to_cache_query=0;
	  }
    break;

  case 379:
#line 1612 "sql_yacc.yy"
    {
	    if (add_item_to_list(new Item_field(NULL,NULL,"*")))
	      YYABORT;
	  }
    break;

  case 380:
#line 1620 "sql_yacc.yy"
    {
	    if (add_item_to_list(yyvsp[-2].item))
	      YYABORT;
	    if (yyvsp[0].lex_str.str)
	      yyvsp[-2].item->set_name(yyvsp[0].lex_str.str);
	    else if (!yyvsp[-2].item->name)
	      yyvsp[-2].item->set_name(yyvsp[-3].simple_string,(uint) (yyvsp[-1].simple_string - yyvsp[-3].simple_string));
	  }
    break;

  case 381:
#line 1630 "sql_yacc.yy"
    { yyval.simple_string=(char*) Lex->tok_start; }
    break;

  case 382:
#line 1633 "sql_yacc.yy"
    { yyval.simple_string=(char*) Lex->tok_end; }
    break;

  case 383:
#line 1636 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 384:
#line 1637 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 385:
#line 1640 "sql_yacc.yy"
    { yyval.lex_str.str=0;}
    break;

  case 386:
#line 1641 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str; }
    break;

  case 387:
#line 1642 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str; }
    break;

  case 388:
#line 1643 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str; }
    break;

  case 389:
#line 1644 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str; }
    break;

  case 390:
#line 1647 "sql_yacc.yy"
    {}
    break;

  case 391:
#line 1648 "sql_yacc.yy"
    {}
    break;

  case 392:
#line 1651 "sql_yacc.yy"
    {yyval.item = yyvsp[0].item; }
    break;

  case 393:
#line 1652 "sql_yacc.yy"
    {yyval.item = yyvsp[0].item; }
    break;

  case 394:
#line 1657 "sql_yacc.yy"
    { yyval.item= new Item_func_in(yyvsp[-4].item,*yyvsp[-1].item_list); }
    break;

  case 395:
#line 1659 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_in(yyvsp[-5].item,*yyvsp[-1].item_list)); }
    break;

  case 396:
#line 1661 "sql_yacc.yy"
    { yyval.item= new Item_func_between(yyvsp[-4].item,yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 397:
#line 1663 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_between(yyvsp[-5].item,yyvsp[-2].item,yyvsp[0].item)); }
    break;

  case 398:
#line 1664 "sql_yacc.yy"
    { yyval.item= or_or_concat(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 399:
#line 1665 "sql_yacc.yy"
    { yyval.item= new Item_cond_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 400:
#line 1666 "sql_yacc.yy"
    { yyval.item= new Item_cond_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 401:
#line 1667 "sql_yacc.yy"
    { yyval.item= new Item_cond_and(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 402:
#line 1668 "sql_yacc.yy"
    { yyval.item= new Item_func_like(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].simple_string); }
    break;

  case 403:
#line 1669 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_like(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].simple_string));}
    break;

  case 404:
#line 1670 "sql_yacc.yy"
    { yyval.item= new Item_func_regex(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 405:
#line 1671 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_regex(yyvsp[-3].item,yyvsp[0].item)); }
    break;

  case 406:
#line 1672 "sql_yacc.yy"
    { yyval.item= new Item_func_isnull(yyvsp[-2].item); }
    break;

  case 407:
#line 1673 "sql_yacc.yy"
    { yyval.item= new Item_func_isnotnull(yyvsp[-3].item); }
    break;

  case 408:
#line 1674 "sql_yacc.yy"
    { yyval.item= new Item_func_eq(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 409:
#line 1675 "sql_yacc.yy"
    { yyval.item= new Item_func_equal(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 410:
#line 1676 "sql_yacc.yy"
    { yyval.item= new Item_func_ge(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 411:
#line 1677 "sql_yacc.yy"
    { yyval.item= new Item_func_gt(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 412:
#line 1678 "sql_yacc.yy"
    { yyval.item= new Item_func_le(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 413:
#line 1679 "sql_yacc.yy"
    { yyval.item= new Item_func_lt(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 414:
#line 1680 "sql_yacc.yy"
    { yyval.item= new Item_func_ne(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 415:
#line 1681 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_left(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 416:
#line 1682 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_right(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 417:
#line 1683 "sql_yacc.yy"
    { yyval.item= new Item_func_plus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 418:
#line 1684 "sql_yacc.yy"
    { yyval.item= new Item_func_minus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 419:
#line 1685 "sql_yacc.yy"
    { yyval.item= new Item_func_mul(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 420:
#line 1686 "sql_yacc.yy"
    { yyval.item= new Item_func_div(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 421:
#line 1687 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 422:
#line 1688 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 423:
#line 1689 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_and(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 424:
#line 1690 "sql_yacc.yy"
    { yyval.item= new Item_func_mod(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 425:
#line 1692 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].interval,0); }
    break;

  case 426:
#line 1694 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].interval,1); }
    break;

  case 427:
#line 1699 "sql_yacc.yy"
    { yyval.item= new Item_func_between(yyvsp[-4].item,yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 428:
#line 1701 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_between(yyvsp[-5].item,yyvsp[-2].item,yyvsp[0].item)); }
    break;

  case 429:
#line 1702 "sql_yacc.yy"
    { yyval.item= or_or_concat(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 430:
#line 1703 "sql_yacc.yy"
    { yyval.item= new Item_cond_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 431:
#line 1704 "sql_yacc.yy"
    { yyval.item= new Item_cond_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 432:
#line 1705 "sql_yacc.yy"
    { yyval.item= new Item_cond_and(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 433:
#line 1706 "sql_yacc.yy"
    { yyval.item= new Item_func_like(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].simple_string); }
    break;

  case 434:
#line 1707 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_like(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].simple_string)); }
    break;

  case 435:
#line 1708 "sql_yacc.yy"
    { yyval.item= new Item_func_regex(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 436:
#line 1709 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_regex(yyvsp[-3].item,yyvsp[0].item)); }
    break;

  case 437:
#line 1710 "sql_yacc.yy"
    { yyval.item= new Item_func_isnull(yyvsp[-2].item); }
    break;

  case 438:
#line 1711 "sql_yacc.yy"
    { yyval.item= new Item_func_isnotnull(yyvsp[-3].item); }
    break;

  case 439:
#line 1712 "sql_yacc.yy"
    { yyval.item= new Item_func_eq(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 440:
#line 1713 "sql_yacc.yy"
    { yyval.item= new Item_func_equal(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 441:
#line 1714 "sql_yacc.yy"
    { yyval.item= new Item_func_ge(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 442:
#line 1715 "sql_yacc.yy"
    { yyval.item= new Item_func_gt(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 443:
#line 1716 "sql_yacc.yy"
    { yyval.item= new Item_func_le(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 444:
#line 1717 "sql_yacc.yy"
    { yyval.item= new Item_func_lt(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 445:
#line 1718 "sql_yacc.yy"
    { yyval.item= new Item_func_ne(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 446:
#line 1719 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_left(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 447:
#line 1720 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_right(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 448:
#line 1721 "sql_yacc.yy"
    { yyval.item= new Item_func_plus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 449:
#line 1722 "sql_yacc.yy"
    { yyval.item= new Item_func_minus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 450:
#line 1723 "sql_yacc.yy"
    { yyval.item= new Item_func_mul(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 451:
#line 1724 "sql_yacc.yy"
    { yyval.item= new Item_func_div(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 452:
#line 1725 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 453:
#line 1726 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 454:
#line 1727 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_and(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 455:
#line 1728 "sql_yacc.yy"
    { yyval.item= new Item_func_mod(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 456:
#line 1730 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].interval,0); }
    break;

  case 457:
#line 1732 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].interval,1); }
    break;

  case 459:
#line 1738 "sql_yacc.yy"
    { yyval.item= new Item_func_in(yyvsp[-4].item,*yyvsp[-1].item_list); }
    break;

  case 460:
#line 1740 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_in(yyvsp[-5].item,*yyvsp[-1].item_list)); }
    break;

  case 461:
#line 1742 "sql_yacc.yy"
    { yyval.item= new Item_func_between(yyvsp[-4].item,yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 462:
#line 1744 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_between(yyvsp[-5].item,yyvsp[-2].item,yyvsp[0].item)); }
    break;

  case 463:
#line 1745 "sql_yacc.yy"
    { yyval.item= or_or_concat(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 464:
#line 1746 "sql_yacc.yy"
    { yyval.item= new Item_cond_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 465:
#line 1747 "sql_yacc.yy"
    { yyval.item= new Item_cond_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 466:
#line 1748 "sql_yacc.yy"
    { yyval.item= new Item_func_like(yyvsp[-3].item,yyvsp[-1].item,yyvsp[0].simple_string); }
    break;

  case 467:
#line 1749 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_like(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].simple_string)); }
    break;

  case 468:
#line 1750 "sql_yacc.yy"
    { yyval.item= new Item_func_regex(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 469:
#line 1751 "sql_yacc.yy"
    { yyval.item= new Item_func_not(new Item_func_regex(yyvsp[-3].item,yyvsp[0].item)); }
    break;

  case 470:
#line 1752 "sql_yacc.yy"
    { yyval.item= new Item_func_isnull(yyvsp[-2].item); }
    break;

  case 471:
#line 1753 "sql_yacc.yy"
    { yyval.item= new Item_func_isnotnull(yyvsp[-3].item); }
    break;

  case 472:
#line 1754 "sql_yacc.yy"
    { yyval.item= new Item_func_eq(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 473:
#line 1755 "sql_yacc.yy"
    { yyval.item= new Item_func_equal(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 474:
#line 1756 "sql_yacc.yy"
    { yyval.item= new Item_func_ge(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 475:
#line 1757 "sql_yacc.yy"
    { yyval.item= new Item_func_gt(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 476:
#line 1758 "sql_yacc.yy"
    { yyval.item= new Item_func_le(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 477:
#line 1759 "sql_yacc.yy"
    { yyval.item= new Item_func_lt(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 478:
#line 1760 "sql_yacc.yy"
    { yyval.item= new Item_func_ne(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 479:
#line 1761 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_left(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 480:
#line 1762 "sql_yacc.yy"
    { yyval.item= new Item_func_shift_right(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 481:
#line 1763 "sql_yacc.yy"
    { yyval.item= new Item_func_plus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 482:
#line 1764 "sql_yacc.yy"
    { yyval.item= new Item_func_minus(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 483:
#line 1765 "sql_yacc.yy"
    { yyval.item= new Item_func_mul(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 484:
#line 1766 "sql_yacc.yy"
    { yyval.item= new Item_func_div(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 485:
#line 1767 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_or(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 486:
#line 1768 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_xor(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 487:
#line 1769 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_and(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 488:
#line 1770 "sql_yacc.yy"
    { yyval.item= new Item_func_mod(yyvsp[-2].item,yyvsp[0].item); }
    break;

  case 489:
#line 1772 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].interval,0); }
    break;

  case 490:
#line 1774 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-4].item,yyvsp[-1].item,yyvsp[0].interval,1); }
    break;

  case 494:
#line 1781 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_set_user_var(yyvsp[-2].lex_str,yyvsp[0].item);
	    current_thd->safe_to_cache_query=0;
	  }
    break;

  case 495:
#line 1786 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_get_user_var(yyvsp[0].lex_str);
	    current_thd->safe_to_cache_query=0;
	  }
    break;

  case 496:
#line 1791 "sql_yacc.yy"
    {
	    if (!(yyval.item= get_system_var((enum_var_type) yyvsp[-1].num, yyvsp[0].lex_str)))
	      YYABORT;
	  }
    break;

  case 498:
#line 1796 "sql_yacc.yy"
    { yyval.item= new Item_func_neg(yyvsp[0].item); }
    break;

  case 499:
#line 1797 "sql_yacc.yy"
    { yyval.item= new Item_func_bit_neg(yyvsp[0].item); }
    break;

  case 500:
#line 1798 "sql_yacc.yy"
    { yyval.item= new Item_func_not(yyvsp[0].item); }
    break;

  case 501:
#line 1799 "sql_yacc.yy"
    { yyval.item= new Item_func_not(yyvsp[0].item); }
    break;

  case 502:
#line 1800 "sql_yacc.yy"
    { yyval.item= yyvsp[-1].item; }
    break;

  case 503:
#line 1801 "sql_yacc.yy"
    { yyval.item= yyvsp[-1].item; }
    break;

  case 504:
#line 1803 "sql_yacc.yy"
    { Select->ftfunc_list.push_back((Item_func_match *)
                   (yyval.item=new Item_func_match_nl(*yyvsp[-4].item_list,yyvsp[-1].item))); }
    break;

  case 505:
#line 1806 "sql_yacc.yy"
    { Select->ftfunc_list.push_back((Item_func_match *)
                   (yyval.item=new Item_func_match_bool(*yyvsp[-7].item_list,yyvsp[-4].item))); }
    break;

  case 506:
#line 1808 "sql_yacc.yy"
    { yyval.item= new Item_func_binary(yyvsp[0].item); }
    break;

  case 507:
#line 1809 "sql_yacc.yy"
    { yyval.item= create_func_cast(yyvsp[-3].item, yyvsp[-1].cast_type); }
    break;

  case 508:
#line 1811 "sql_yacc.yy"
    { yyval.item= new Item_func_case(* yyvsp[-2].item_list, yyvsp[-4].item, yyvsp[-1].item ); }
    break;

  case 509:
#line 1812 "sql_yacc.yy"
    { yyval.item= create_func_cast(yyvsp[-3].item, yyvsp[-1].cast_type); }
    break;

  case 510:
#line 1814 "sql_yacc.yy"
    { yyval.item= ((Item*(*)(void))(yyvsp[-2].symbol.symbol->create_func))();}
    break;

  case 511:
#line 1816 "sql_yacc.yy"
    { yyval.item= ((Item*(*)(Item*))(yyvsp[-3].symbol.symbol->create_func))(yyvsp[-1].item);}
    break;

  case 512:
#line 1818 "sql_yacc.yy"
    { yyval.item= ((Item*(*)(Item*,Item*))(yyvsp[-5].symbol.symbol->create_func))(yyvsp[-3].item,yyvsp[-1].item);}
    break;

  case 513:
#line 1820 "sql_yacc.yy"
    { yyval.item= ((Item*(*)(Item*,Item*,Item*))(yyvsp[-7].symbol.symbol->create_func))(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item);}
    break;

  case 514:
#line 1822 "sql_yacc.yy"
    { yyval.item= new Item_func_atan(yyvsp[-1].item); }
    break;

  case 515:
#line 1824 "sql_yacc.yy"
    { yyval.item= new Item_func_atan(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 516:
#line 1826 "sql_yacc.yy"
    { yyval.item= new Item_func_char(*yyvsp[-1].item_list); }
    break;

  case 517:
#line 1828 "sql_yacc.yy"
    { yyval.item= new Item_func_coalesce(* yyvsp[-1].item_list); }
    break;

  case 518:
#line 1830 "sql_yacc.yy"
    { yyval.item= new Item_func_concat(* yyvsp[-1].item_list); }
    break;

  case 519:
#line 1832 "sql_yacc.yy"
    { yyval.item= new Item_func_concat_ws(yyvsp[-3].item, *yyvsp[-1].item_list); }
    break;

  case 520:
#line 1834 "sql_yacc.yy"
    { yyval.item= new Item_func_curdate(); current_thd->safe_to_cache_query=0; }
    break;

  case 521:
#line 1836 "sql_yacc.yy"
    { yyval.item= new Item_func_curtime(); current_thd->safe_to_cache_query=0; }
    break;

  case 522:
#line 1838 "sql_yacc.yy"
    { 
	    yyval.item= new Item_func_curtime(yyvsp[-1].item); 
	    current_thd->safe_to_cache_query=0;
	  }
    break;

  case 523:
#line 1843 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-5].item,yyvsp[-2].item,yyvsp[-1].interval,0); }
    break;

  case 524:
#line 1845 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[-5].item,yyvsp[-2].item,yyvsp[-1].interval,1); }
    break;

  case 525:
#line 1847 "sql_yacc.yy"
    { 
	    yyval.item= new Item_func_database();
            current_thd->safe_to_cache_query=0; 
	  }
    break;

  case 526:
#line 1852 "sql_yacc.yy"
    { yyval.item= new Item_func_elt(yyvsp[-3].item, *yyvsp[-1].item_list); }
    break;

  case 527:
#line 1854 "sql_yacc.yy"
    { yyval.item= new Item_func_make_set(yyvsp[-3].item, *yyvsp[-1].item_list); }
    break;

  case 528:
#line 1856 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_encrypt(yyvsp[-1].item);
	    current_thd->safe_to_cache_query=0; 
	  }
    break;

  case 529:
#line 1860 "sql_yacc.yy"
    { yyval.item= new Item_func_encrypt(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 530:
#line 1862 "sql_yacc.yy"
    { yyval.item= new Item_func_decode(yyvsp[-3].item,yyvsp[-1].lex_str.str); }
    break;

  case 531:
#line 1864 "sql_yacc.yy"
    { yyval.item= new Item_func_encode(yyvsp[-3].item,yyvsp[-1].lex_str.str); }
    break;

  case 532:
#line 1866 "sql_yacc.yy"
    { yyval.item= new Item_func_des_decrypt(yyvsp[-1].item); }
    break;

  case 533:
#line 1868 "sql_yacc.yy"
    { yyval.item= new Item_func_des_decrypt(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 534:
#line 1870 "sql_yacc.yy"
    { yyval.item= new Item_func_des_encrypt(yyvsp[-1].item); }
    break;

  case 535:
#line 1872 "sql_yacc.yy"
    { yyval.item= new Item_func_des_encrypt(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 536:
#line 1874 "sql_yacc.yy"
    { yyval.item= new Item_func_export_set(yyvsp[-5].item, yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 537:
#line 1876 "sql_yacc.yy"
    { yyval.item= new Item_func_export_set(yyvsp[-7].item, yyvsp[-5].item, yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 538:
#line 1878 "sql_yacc.yy"
    { yyval.item= new Item_func_export_set(yyvsp[-9].item, yyvsp[-7].item, yyvsp[-5].item, yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 539:
#line 1880 "sql_yacc.yy"
    { yyval.item= new Item_func_format(yyvsp[-3].item,atoi(yyvsp[-1].lex_str.str)); }
    break;

  case 540:
#line 1882 "sql_yacc.yy"
    { yyval.item= new Item_func_from_unixtime(yyvsp[-1].item); }
    break;

  case 541:
#line 1884 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_date_format (new Item_func_from_unixtime(yyvsp[-3].item),yyvsp[-1].item,0);
	  }
    break;

  case 542:
#line 1888 "sql_yacc.yy"
    { yyval.item= new Item_func_field(yyvsp[-3].item, *yyvsp[-1].item_list); }
    break;

  case 543:
#line 1890 "sql_yacc.yy"
    { yyval.item= new Item_func_hour(yyvsp[-1].item); }
    break;

  case 544:
#line 1892 "sql_yacc.yy"
    { yyval.item= new Item_func_if(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 545:
#line 1894 "sql_yacc.yy"
    { yyval.item= new Item_func_insert(yyvsp[-7].item,yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 546:
#line 1897 "sql_yacc.yy"
    { yyval.item= new Item_date_add_interval(yyvsp[0].item,yyvsp[-3].item,yyvsp[-2].interval,0); }
    break;

  case 547:
#line 1899 "sql_yacc.yy"
    { yyval.item= new Item_func_interval(yyvsp[-3].item,* yyvsp[-1].item_list); }
    break;

  case 548:
#line 1901 "sql_yacc.yy"
    {
	    yyval.item= new Item_int((char*) "last_insert_id()",
			     current_thd->insert_id(),21);
	    current_thd->safe_to_cache_query=0;
	  }
    break;

  case 549:
#line 1907 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_set_last_insert_id(yyvsp[-1].item);
	    current_thd->safe_to_cache_query=0;
	  }
    break;

  case 550:
#line 1912 "sql_yacc.yy"
    { yyval.item= new Item_func_left(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 551:
#line 1914 "sql_yacc.yy"
    { yyval.item= new Item_func_locate(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 552:
#line 1916 "sql_yacc.yy"
    { yyval.item= new Item_func_locate(yyvsp[-3].item,yyvsp[-5].item,yyvsp[-1].item); }
    break;

  case 553:
#line 1918 "sql_yacc.yy"
    { yyvsp[-1].item_list->push_front(yyvsp[-3].item); yyval.item= new Item_func_max(*yyvsp[-1].item_list); }
    break;

  case 554:
#line 1920 "sql_yacc.yy"
    { yyvsp[-1].item_list->push_front(yyvsp[-3].item); yyval.item= new Item_func_min(*yyvsp[-1].item_list); }
    break;

  case 555:
#line 1922 "sql_yacc.yy"
    { yyval.item= new Item_func_log(yyvsp[-1].item); }
    break;

  case 556:
#line 1924 "sql_yacc.yy"
    { yyval.item= new Item_func_log(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 557:
#line 1926 "sql_yacc.yy"
    { 
	    yyval.item= new Item_master_pos_wait(yyvsp[-3].item, yyvsp[-1].item);
	    current_thd->safe_to_cache_query=0; 
	  }
    break;

  case 558:
#line 1931 "sql_yacc.yy"
    { 
	    yyval.item= new Item_master_pos_wait(yyvsp[-5].item, yyvsp[-3].item, yyvsp[-1].item);
	    current_thd->safe_to_cache_query=0; 
	  }
    break;

  case 559:
#line 1936 "sql_yacc.yy"
    { yyval.item= new Item_func_minute(yyvsp[-1].item); }
    break;

  case 560:
#line 1938 "sql_yacc.yy"
    { yyval.item= new Item_func_month(yyvsp[-1].item); }
    break;

  case 561:
#line 1940 "sql_yacc.yy"
    { yyval.item= new Item_func_now(); current_thd->safe_to_cache_query=0;}
    break;

  case 562:
#line 1942 "sql_yacc.yy"
    { yyval.item= new Item_func_now(yyvsp[-1].item); current_thd->safe_to_cache_query=0;}
    break;

  case 563:
#line 1944 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_password(yyvsp[-1].item);
	   }
    break;

  case 564:
#line 1948 "sql_yacc.yy"
    { yyval.item = new Item_func_locate(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 565:
#line 1950 "sql_yacc.yy"
    { yyval.item= new Item_func_rand(yyvsp[-1].item); current_thd->safe_to_cache_query=0;}
    break;

  case 566:
#line 1952 "sql_yacc.yy"
    { yyval.item= new Item_func_rand(); current_thd->safe_to_cache_query=0;}
    break;

  case 567:
#line 1954 "sql_yacc.yy"
    { yyval.item= new Item_func_replace(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 568:
#line 1956 "sql_yacc.yy"
    { yyval.item= new Item_func_right(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 569:
#line 1958 "sql_yacc.yy"
    { yyval.item= new Item_func_round(yyvsp[-1].item, new Item_int((char*)"0",0,1),0); }
    break;

  case 570:
#line 1959 "sql_yacc.yy"
    { yyval.item= new Item_func_round(yyvsp[-3].item,yyvsp[-1].item,0); }
    break;

  case 571:
#line 1961 "sql_yacc.yy"
    { yyval.item= new Item_func_second(yyvsp[-1].item); }
    break;

  case 572:
#line 1963 "sql_yacc.yy"
    { yyval.item= new Item_func_substr(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 573:
#line 1965 "sql_yacc.yy"
    { yyval.item= new Item_func_substr(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 574:
#line 1967 "sql_yacc.yy"
    { yyval.item= new Item_func_substr(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 575:
#line 1969 "sql_yacc.yy"
    { yyval.item= new Item_func_substr(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 576:
#line 1971 "sql_yacc.yy"
    { yyval.item= new Item_func_substr_index(yyvsp[-5].item,yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 577:
#line 1973 "sql_yacc.yy"
    { yyval.item= new Item_func_trim(yyvsp[-1].item,new Item_string(" ",1)); }
    break;

  case 578:
#line 1975 "sql_yacc.yy"
    { yyval.item= new Item_func_ltrim(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 579:
#line 1977 "sql_yacc.yy"
    { yyval.item= new Item_func_rtrim(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 580:
#line 1979 "sql_yacc.yy"
    { yyval.item= new Item_func_trim(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 581:
#line 1981 "sql_yacc.yy"
    { yyval.item= new Item_func_trim(yyvsp[-1].item,yyvsp[-3].item); }
    break;

  case 582:
#line 1983 "sql_yacc.yy"
    { yyval.item= new Item_func_round(yyvsp[-3].item,yyvsp[-1].item,1); }
    break;

  case 583:
#line 1985 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_sum_udf_str(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_sum_udf_str(yyvsp[-3].udf);
	  }
    break;

  case 584:
#line 1992 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_sum_udf_float(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_sum_udf_float(yyvsp[-3].udf);
	  }
    break;

  case 585:
#line 1999 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_sum_udf_int(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_sum_udf_int(yyvsp[-3].udf);
	  }
    break;

  case 586:
#line 2006 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_func_udf_str(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_func_udf_str(yyvsp[-3].udf);
	  }
    break;

  case 587:
#line 2013 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_func_udf_float(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_func_udf_float(yyvsp[-3].udf);
	  }
    break;

  case 588:
#line 2020 "sql_yacc.yy"
    {
	    if (yyvsp[-1].item_list != NULL)
	      yyval.item = new Item_func_udf_int(yyvsp[-3].udf, *yyvsp[-1].item_list);
	    else
	      yyval.item = new Item_func_udf_int(yyvsp[-3].udf);
	  }
    break;

  case 589:
#line 2027 "sql_yacc.yy"
    { 
            yyval.item= new Item_func_unique_users(yyvsp[-7].item,atoi(yyvsp[-5].lex_str.str),atoi(yyvsp[-3].lex_str.str), * yyvsp[-1].item_list);
	  }
    break;

  case 590:
#line 2031 "sql_yacc.yy"
    {
	    yyval.item= new Item_func_unix_timestamp();
	    current_thd->safe_to_cache_query=0;
	  }
    break;

  case 591:
#line 2036 "sql_yacc.yy"
    { yyval.item= new Item_func_unix_timestamp(yyvsp[-1].item); }
    break;

  case 592:
#line 2038 "sql_yacc.yy"
    { yyval.item= new Item_func_user(); current_thd->safe_to_cache_query=0; }
    break;

  case 593:
#line 2040 "sql_yacc.yy"
    { 
	    LEX *lex=Lex;
	    yyval.item= new Item_func_week(yyvsp[-1].item,new Item_int((char*) "0", 
                                   lex->thd->variables.default_week_format,1));
	  }
    break;

  case 594:
#line 2046 "sql_yacc.yy"
    { yyval.item= new Item_func_week(yyvsp[-3].item,yyvsp[-1].item); }
    break;

  case 595:
#line 2048 "sql_yacc.yy"
    { yyval.item= new Item_func_year(yyvsp[-1].item); }
    break;

  case 596:
#line 2050 "sql_yacc.yy"
    { yyval.item= new Item_func_yearweek(yyvsp[-1].item,new Item_int((char*) "0",0,1)); }
    break;

  case 597:
#line 2052 "sql_yacc.yy"
    { yyval.item= new Item_func_yearweek(yyvsp[-3].item, yyvsp[-1].item); }
    break;

  case 598:
#line 2054 "sql_yacc.yy"
    { 
	    yyval.item=new Item_func_benchmark(yyvsp[-3].ulong_num,yyvsp[-1].item);
	    current_thd->safe_to_cache_query=0;
	  }
    break;

  case 599:
#line 2059 "sql_yacc.yy"
    { yyval.item=new Item_extract( yyvsp[-3].interval, yyvsp[-1].item); }
    break;

  case 600:
#line 2062 "sql_yacc.yy"
    { yyval.item_list= NULL; }
    break;

  case 601:
#line 2063 "sql_yacc.yy"
    { yyval.item_list= yyvsp[0].item_list;}
    break;

  case 602:
#line 2067 "sql_yacc.yy"
    { yyval.item=new Item_sum_avg(yyvsp[-1].item); }
    break;

  case 603:
#line 2069 "sql_yacc.yy"
    { yyval.item=new Item_sum_and(yyvsp[-1].item); }
    break;

  case 604:
#line 2071 "sql_yacc.yy"
    { yyval.item=new Item_sum_or(yyvsp[-1].item); }
    break;

  case 605:
#line 2073 "sql_yacc.yy"
    { yyval.item=new Item_sum_count(new Item_int((int32) 0L,1)); }
    break;

  case 606:
#line 2075 "sql_yacc.yy"
    { yyval.item=new Item_sum_count(yyvsp[-1].item); }
    break;

  case 607:
#line 2077 "sql_yacc.yy"
    { Select->in_sum_expr++; }
    break;

  case 608:
#line 2079 "sql_yacc.yy"
    { Select->in_sum_expr--; }
    break;

  case 609:
#line 2081 "sql_yacc.yy"
    { yyval.item=new Item_sum_count_distinct(* yyvsp[-2].item_list); }
    break;

  case 610:
#line 2083 "sql_yacc.yy"
    { yyval.item= new Item_sum_unique_users(yyvsp[-7].item,atoi(yyvsp[-5].lex_str.str),atoi(yyvsp[-3].lex_str.str),yyvsp[-1].item); }
    break;

  case 611:
#line 2085 "sql_yacc.yy"
    { yyval.item=new Item_sum_min(yyvsp[-1].item); }
    break;

  case 612:
#line 2087 "sql_yacc.yy"
    { yyval.item=new Item_sum_max(yyvsp[-1].item); }
    break;

  case 613:
#line 2089 "sql_yacc.yy"
    { yyval.item=new Item_sum_std(yyvsp[-1].item); }
    break;

  case 614:
#line 2091 "sql_yacc.yy"
    { yyval.item=new Item_sum_sum(yyvsp[-1].item); }
    break;

  case 615:
#line 2095 "sql_yacc.yy"
    { Select->in_sum_expr++; }
    break;

  case 616:
#line 2097 "sql_yacc.yy"
    {
	  Select->in_sum_expr--;
	  yyval.item=yyvsp[0].item;
	}
    break;

  case 617:
#line 2103 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_BINARY; }
    break;

  case 618:
#line 2104 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_CHAR; }
    break;

  case 619:
#line 2105 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_SIGNED_INT; }
    break;

  case 620:
#line 2106 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_SIGNED_INT; }
    break;

  case 621:
#line 2107 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_UNSIGNED_INT; }
    break;

  case 622:
#line 2108 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_UNSIGNED_INT; }
    break;

  case 623:
#line 2109 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_DATE; }
    break;

  case 624:
#line 2110 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_TIME; }
    break;

  case 625:
#line 2111 "sql_yacc.yy"
    { yyval.cast_type=ITEM_CAST_DATETIME; }
    break;

  case 626:
#line 2115 "sql_yacc.yy"
    { Select->expr_list.push_front(new List<Item>); }
    break;

  case 627:
#line 2117 "sql_yacc.yy"
    { yyval.item_list= Select->expr_list.pop(); }
    break;

  case 628:
#line 2120 "sql_yacc.yy"
    { Select->expr_list.head()->push_back(yyvsp[0].item); }
    break;

  case 629:
#line 2121 "sql_yacc.yy"
    { Select->expr_list.head()->push_back(yyvsp[0].item); }
    break;

  case 630:
#line 2124 "sql_yacc.yy"
    { yyval.item_list= yyvsp[0].item_list; }
    break;

  case 631:
#line 2125 "sql_yacc.yy"
    { yyval.item_list= yyvsp[-1].item_list; }
    break;

  case 632:
#line 2128 "sql_yacc.yy"
    { Select->expr_list.push_front(new List<Item>); }
    break;

  case 633:
#line 2130 "sql_yacc.yy"
    { yyval.item_list= Select->expr_list.pop(); }
    break;

  case 634:
#line 2133 "sql_yacc.yy"
    { Select->expr_list.head()->push_back(yyvsp[0].item); }
    break;

  case 635:
#line 2134 "sql_yacc.yy"
    { Select->expr_list.head()->push_back(yyvsp[0].item); }
    break;

  case 636:
#line 2137 "sql_yacc.yy"
    { yyval.item= NULL; }
    break;

  case 637:
#line 2138 "sql_yacc.yy"
    { yyval.item= yyvsp[0].item; }
    break;

  case 638:
#line 2141 "sql_yacc.yy"
    { yyval.item= NULL; }
    break;

  case 639:
#line 2142 "sql_yacc.yy"
    { yyval.item= yyvsp[0].item; }
    break;

  case 640:
#line 2145 "sql_yacc.yy"
    { Select->when_list.push_front(new List<Item>); }
    break;

  case 641:
#line 2147 "sql_yacc.yy"
    { yyval.item_list= Select->when_list.pop(); }
    break;

  case 642:
#line 2151 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;	    
	    sel->when_list.head()->push_back(yyvsp[-2].item);
	    sel->when_list.head()->push_back(yyvsp[0].item);
	}
    break;

  case 643:
#line 2157 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;
	    sel->when_list.head()->push_back(yyvsp[-2].item);
	    sel->when_list.head()->push_back(yyvsp[0].item);
	  }
    break;

  case 644:
#line 2164 "sql_yacc.yy"
    { yyval.item=new Item_string(" ",1); }
    break;

  case 645:
#line 2165 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 646:
#line 2168 "sql_yacc.yy"
    { yyval.table_list=yyvsp[-1].table_list; }
    break;

  case 647:
#line 2169 "sql_yacc.yy"
    { yyval.table_list=yyvsp[0].table_list; }
    break;

  case 648:
#line 2170 "sql_yacc.yy"
    { yyval.table_list=yyvsp[0].table_list; }
    break;

  case 649:
#line 2171 "sql_yacc.yy"
    { yyval.table_list=yyvsp[0].table_list; }
    break;

  case 650:
#line 2173 "sql_yacc.yy"
    { yyval.table_list=yyvsp[0].table_list ; yyvsp[-2].table_list->next->straight=1; }
    break;

  case 651:
#line 2175 "sql_yacc.yy"
    { add_join_on(yyvsp[-2].table_list,yyvsp[0].item); yyval.table_list=yyvsp[-2].table_list; }
    break;

  case 652:
#line 2178 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;
	    sel->db1=yyvsp[-3].table_list->db; sel->table1=yyvsp[-3].table_list->alias;
	    sel->db2=yyvsp[-1].table_list->db; sel->table2=yyvsp[-1].table_list->alias;
	  }
    break;

  case 653:
#line 2184 "sql_yacc.yy"
    { add_join_on(yyvsp[-5].table_list,yyvsp[-1].item); yyval.table_list=yyvsp[-5].table_list; }
    break;

  case 654:
#line 2187 "sql_yacc.yy"
    { add_join_on(yyvsp[-2].table_list,yyvsp[0].item); yyvsp[-2].table_list->outer_join|=JOIN_TYPE_LEFT; yyval.table_list=yyvsp[-2].table_list; }
    break;

  case 655:
#line 2189 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;
	    sel->db1=yyvsp[-4].table_list->db; sel->table1=yyvsp[-4].table_list->alias;
	    sel->db2=yyvsp[0].table_list->db; sel->table2=yyvsp[0].table_list->alias;
	  }
    break;

  case 656:
#line 2195 "sql_yacc.yy"
    { add_join_on(yyvsp[-5].table_list,yyvsp[-1].item); yyvsp[-5].table_list->outer_join|=JOIN_TYPE_LEFT; yyval.table_list=yyvsp[-5].table_list; }
    break;

  case 657:
#line 2197 "sql_yacc.yy"
    {
	    add_join_natural(yyvsp[-5].table_list,yyvsp[-5].table_list->next);
	    yyvsp[-5].table_list->next->outer_join|=JOIN_TYPE_LEFT;
	    yyval.table_list=yyvsp[0].table_list;
	  }
    break;

  case 658:
#line 2203 "sql_yacc.yy"
    { add_join_on(yyvsp[-6].table_list,yyvsp[0].item); yyvsp[-6].table_list->outer_join|=JOIN_TYPE_RIGHT; yyval.table_list=yyvsp[-2].table_list; }
    break;

  case 659:
#line 2205 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;
	    sel->db1=yyvsp[-4].table_list->db; sel->table1=yyvsp[-4].table_list->alias;
	    sel->db2=yyvsp[0].table_list->db; sel->table2=yyvsp[0].table_list->alias;
	  }
    break;

  case 660:
#line 2211 "sql_yacc.yy"
    { add_join_on(yyvsp[-9].table_list,yyvsp[-1].item); yyvsp[-9].table_list->outer_join|=JOIN_TYPE_RIGHT; yyval.table_list=yyvsp[-5].table_list; }
    break;

  case 661:
#line 2213 "sql_yacc.yy"
    {
	    add_join_natural(yyvsp[-5].table_list->next,yyvsp[-5].table_list);
	    yyvsp[-5].table_list->outer_join|=JOIN_TYPE_RIGHT;
	    yyval.table_list=yyvsp[0].table_list;
	  }
    break;

  case 662:
#line 2219 "sql_yacc.yy"
    { add_join_natural(yyvsp[-3].table_list,yyvsp[-3].table_list->next); yyval.table_list=yyvsp[0].table_list; }
    break;

  case 663:
#line 2222 "sql_yacc.yy"
    {}
    break;

  case 664:
#line 2223 "sql_yacc.yy"
    {}
    break;

  case 665:
#line 2224 "sql_yacc.yy"
    {}
    break;

  case 666:
#line 2228 "sql_yacc.yy"
    {
	  SELECT_LEX *sel=Select;
	  sel->use_index_ptr=sel->ignore_index_ptr=0;
	  sel->table_join_options= 0;
	}
    break;

  case 667:
#line 2234 "sql_yacc.yy"
    {
	  SELECT_LEX *sel=Select;
	  if (!(yyval.table_list=add_table_to_list(yyvsp[-2].table, yyvsp[-1].lex_str_ptr, sel->table_join_options,
				     TL_UNLOCK, sel->use_index_ptr,
	                             sel->ignore_index_ptr)))
	    YYABORT;
	}
    break;

  case 668:
#line 2242 "sql_yacc.yy"
    { add_join_on(yyvsp[-3].table_list,yyvsp[-1].item); yyvsp[-3].table_list->outer_join|=JOIN_TYPE_LEFT; yyval.table_list=yyvsp[-3].table_list; }
    break;

  case 669:
#line 2245 "sql_yacc.yy"
    {}
    break;

  case 670:
#line 2246 "sql_yacc.yy"
    {}
    break;

  case 671:
#line 2249 "sql_yacc.yy"
    {}
    break;

  case 672:
#line 2251 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;
	    sel->use_index= *yyvsp[0].string_list;
	    sel->use_index_ptr= &sel->use_index;
	  }
    break;

  case 673:
#line 2257 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;
	    sel->use_index= *yyvsp[0].string_list;
	    sel->use_index_ptr= &sel->use_index;
	    sel->table_join_options|= TL_OPTION_FORCE_INDEX;
	  }
    break;

  case 674:
#line 2264 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;
	    sel->ignore_index= *yyvsp[0].string_list;
	    sel->ignore_index_ptr= &sel->ignore_index;
	  }
    break;

  case 675:
#line 2272 "sql_yacc.yy"
    { Select->interval_list.empty(); }
    break;

  case 676:
#line 2273 "sql_yacc.yy"
    { yyval.string_list= &Select->interval_list; }
    break;

  case 677:
#line 2277 "sql_yacc.yy"
    { Select->interval_list.push_back(new String((const char*) yyvsp[0].lex_str.str,yyvsp[0].lex_str.length)); }
    break;

  case 678:
#line 2279 "sql_yacc.yy"
    { Select->interval_list.push_back(new String((const char*) yyvsp[0].lex_str.str,yyvsp[0].lex_str.length)); }
    break;

  case 679:
#line 2281 "sql_yacc.yy"
    { Select->interval_list.push_back(new String("PRIMARY",7)); }
    break;

  case 680:
#line 2285 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;
	    if (!(yyval.item= new Item_func_eq(new Item_field(sel->db1,sel->table1, yyvsp[0].lex_str.str), new Item_field(sel->db2,sel->table2,yyvsp[0].lex_str.str))))
	      YYABORT;
	  }
    break;

  case 681:
#line 2291 "sql_yacc.yy"
    {
	    SELECT_LEX *sel=Select;
	    if (!(yyval.item= new Item_cond_and(new Item_func_eq(new Item_field(sel->db1,sel->table1,yyvsp[0].lex_str.str), new Item_field(sel->db2,sel->table2,yyvsp[0].lex_str.str)), yyvsp[-2].item)))
	      YYABORT;
	  }
    break;

  case 682:
#line 2298 "sql_yacc.yy"
    { yyval.interval=INTERVAL_DAY_HOUR; }
    break;

  case 683:
#line 2299 "sql_yacc.yy"
    { yyval.interval=INTERVAL_DAY_MINUTE; }
    break;

  case 684:
#line 2300 "sql_yacc.yy"
    { yyval.interval=INTERVAL_DAY_SECOND; }
    break;

  case 685:
#line 2301 "sql_yacc.yy"
    { yyval.interval=INTERVAL_DAY; }
    break;

  case 686:
#line 2302 "sql_yacc.yy"
    { yyval.interval=INTERVAL_HOUR_MINUTE; }
    break;

  case 687:
#line 2303 "sql_yacc.yy"
    { yyval.interval=INTERVAL_HOUR_SECOND; }
    break;

  case 688:
#line 2304 "sql_yacc.yy"
    { yyval.interval=INTERVAL_HOUR; }
    break;

  case 689:
#line 2305 "sql_yacc.yy"
    { yyval.interval=INTERVAL_MINUTE_SECOND; }
    break;

  case 690:
#line 2306 "sql_yacc.yy"
    { yyval.interval=INTERVAL_MINUTE; }
    break;

  case 691:
#line 2307 "sql_yacc.yy"
    { yyval.interval=INTERVAL_MONTH; }
    break;

  case 692:
#line 2308 "sql_yacc.yy"
    { yyval.interval=INTERVAL_SECOND; }
    break;

  case 693:
#line 2309 "sql_yacc.yy"
    { yyval.interval=INTERVAL_YEAR_MONTH; }
    break;

  case 694:
#line 2310 "sql_yacc.yy"
    { yyval.interval=INTERVAL_YEAR; }
    break;

  case 698:
#line 2318 "sql_yacc.yy"
    { yyval.lex_str_ptr=0; }
    break;

  case 699:
#line 2320 "sql_yacc.yy"
    { yyval.lex_str_ptr= (LEX_STRING*) sql_memdup(&yyvsp[0].lex_str,sizeof(LEX_STRING)); }
    break;

  case 702:
#line 2328 "sql_yacc.yy"
    { Select->where= 0; }
    break;

  case 703:
#line 2330 "sql_yacc.yy"
    {
	    Select->where= yyvsp[0].item;
	    if (yyvsp[0].item)
	      yyvsp[0].item->top_level_item();
	  }
    break;

  case 705:
#line 2339 "sql_yacc.yy"
    { Select->create_refs=1; }
    break;

  case 706:
#line 2340 "sql_yacc.yy"
    {
	  SELECT_LEX *sel=Select;
	  sel->having= yyvsp[0].item;
	  sel->create_refs=0;
	  if (yyvsp[0].item)
	    yyvsp[0].item->top_level_item();
	}
    break;

  case 707:
#line 2350 "sql_yacc.yy"
    { yyval.simple_string= yyvsp[0].lex_str.str; }
    break;

  case 708:
#line 2351 "sql_yacc.yy"
    { yyval.simple_string= (char*) "\\"; }
    break;

  case 711:
#line 2364 "sql_yacc.yy"
    { if (add_group_to_list(yyvsp[-1].item,(bool) yyvsp[0].num)) YYABORT; }
    break;

  case 712:
#line 2366 "sql_yacc.yy"
    { if (add_group_to_list(yyvsp[-1].item,(bool) yyvsp[0].num)) YYABORT; }
    break;

  case 713:
#line 2369 "sql_yacc.yy"
    {}
    break;

  case 714:
#line 2371 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    net_printf(&lex->thd->net, ER_NOT_SUPPORTED_YET, "CUBE");
	    YYABORT;	/* To be deleted in 4.1 */
	  }
    break;

  case 715:
#line 2377 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    net_printf(&lex->thd->net, ER_NOT_SUPPORTED_YET, "ROLLUP");
	    YYABORT;	/* To be deleted in 4.1 */
	  }
    break;

  case 718:
#line 2394 "sql_yacc.yy"
    { 
	  LEX *lex=Lex;
	  if (lex->select->olap != UNSPECIFIED_OLAP_TYPE)
	  {
	    net_printf(&lex->thd->net, ER_WRONG_USAGE,
		       "CUBE/ROLLUP",
		       "ORDER BY");
	    YYABORT;
	  }
	  lex->select->sort_default=1;
	}
    break;

  case 720:
#line 2408 "sql_yacc.yy"
    { if (add_order_to_list(yyvsp[-1].item,(bool) yyvsp[0].num)) YYABORT; }
    break;

  case 721:
#line 2410 "sql_yacc.yy"
    { if (add_order_to_list(yyvsp[-1].item,(bool) yyvsp[0].num)) YYABORT; }
    break;

  case 722:
#line 2413 "sql_yacc.yy"
    { yyval.num =  1; }
    break;

  case 723:
#line 2414 "sql_yacc.yy"
    { yyval.num =1; }
    break;

  case 724:
#line 2415 "sql_yacc.yy"
    { yyval.num =0; }
    break;

  case 725:
#line 2419 "sql_yacc.yy"
    {}
    break;

  case 726:
#line 2421 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    if (lex->select->olap != UNSPECIFIED_OLAP_TYPE)
	    {
	      net_printf(&lex->thd->net, ER_WRONG_USAGE, "CUBE/ROLLUP",
		        "LIMIT");
	      YYABORT;
	    }
	  }
    break;

  case 727:
#line 2431 "sql_yacc.yy"
    {}
    break;

  case 728:
#line 2436 "sql_yacc.yy"
    {
            SELECT_LEX *sel= Select;
            sel->select_limit= yyvsp[0].ulong_num;
            sel->offset_limit= 0L;
	  }
    break;

  case 729:
#line 2442 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    sel->select_limit= yyvsp[0].ulong_num;
	    sel->offset_limit= yyvsp[-2].ulong_num;
	  }
    break;

  case 730:
#line 2448 "sql_yacc.yy"
    {
	    SELECT_LEX *sel= Select;
	    sel->select_limit= yyvsp[-2].ulong_num;
	    sel->offset_limit= yyvsp[0].ulong_num;
	  }
    break;

  case 731:
#line 2457 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->select->select_limit= HA_POS_ERROR;
	}
    break;

  case 732:
#line 2462 "sql_yacc.yy"
    { Select->select_limit= (ha_rows) yyvsp[0].ulonglong_number; }
    break;

  case 733:
#line 2465 "sql_yacc.yy"
    { yyval.ulong_num= strtoul(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 734:
#line 2466 "sql_yacc.yy"
    { yyval.ulong_num= (ulong) strtoll(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 735:
#line 2467 "sql_yacc.yy"
    { yyval.ulong_num= (ulong) strtoull(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 736:
#line 2468 "sql_yacc.yy"
    { yyval.ulong_num= strtoul(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 737:
#line 2469 "sql_yacc.yy"
    { yyval.ulong_num= strtoul(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 738:
#line 2472 "sql_yacc.yy"
    { yyval.ulonglong_number= (ulonglong) strtoul(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 739:
#line 2473 "sql_yacc.yy"
    { yyval.ulonglong_number= strtoull(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 740:
#line 2474 "sql_yacc.yy"
    { yyval.ulonglong_number= (ulonglong) strtoll(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 741:
#line 2475 "sql_yacc.yy"
    { yyval.ulonglong_number= strtoull(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 742:
#line 2476 "sql_yacc.yy"
    { yyval.ulonglong_number= strtoull(yyvsp[0].lex_str.str,NULL,10); }
    break;

  case 744:
#line 2481 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->proc_list.elements=0;
	    lex->proc_list.first=0;
	    lex->proc_list.next= (byte**) &lex->proc_list.first;
	    if (add_proc_to_list(lex->thd, new Item_field(NULL,NULL,yyvsp[0].lex_str.str)))
	      YYABORT;
	    current_thd->safe_to_cache_query=0;
	  }
    break;

  case 746:
#line 2494 "sql_yacc.yy"
    {}
    break;

  case 747:
#line 2495 "sql_yacc.yy"
    {}
    break;

  case 750:
#line 2503 "sql_yacc.yy"
    {
	    LEX *lex= Lex;
	    if (add_proc_to_list(lex->thd, yyvsp[0].item))
	      YYABORT;
	    if (!yyvsp[0].item->name)
	      yyvsp[0].item->set_name(yyvsp[-1].simple_string,(uint) ((char*) lex->tok_end - yyvsp[-1].simple_string));
	  }
    break;

  case 751:
#line 2513 "sql_yacc.yy"
    {
	  THD *thd= current_thd;
	  thd->safe_to_cache_query= 0; 
	  if (!(thd->lex.exchange= new sql_exchange(yyvsp[0].lex_str.str,0)))
	    YYABORT;
	}
    break;

  case 753:
#line 2521 "sql_yacc.yy"
    {
	  THD *thd= current_thd;
	  thd->safe_to_cache_query= 0;
	  if (!(thd->lex.exchange= new sql_exchange(yyvsp[0].lex_str.str,1)))
	    YYABORT;
	}
    break;

  case 754:
#line 2533 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_DO;
	  if (!(lex->insert_list = new List_item))
	    YYABORT;
	}
    break;

  case 755:
#line 2540 "sql_yacc.yy"
    {}
    break;

  case 756:
#line 2549 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_DROP_TABLE;
	  lex->drop_temporary= yyvsp[-4].num;
	  lex->drop_if_exists= yyvsp[-2].num;
	}
    break;

  case 757:
#line 2555 "sql_yacc.yy"
    {}
    break;

  case 758:
#line 2556 "sql_yacc.yy"
    {
	     LEX *lex=Lex;
	     lex->sql_command= SQLCOM_DROP_INDEX;
	     lex->drop_list.empty();
	     lex->drop_list.push_back(new Alter_drop(Alter_drop::KEY,
						     yyvsp[-3].lex_str.str));
	     if (!add_table_to_list(yyvsp[-1].table, NULL, TL_OPTION_UPDATING))
	      YYABORT;
	  }
    break;

  case 759:
#line 2566 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_DROP_DB;
	    lex->drop_if_exists=yyvsp[-1].num;
	    lex->name=yyvsp[0].lex_str.str;
	 }
    break;

  case 760:
#line 2573 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command = SQLCOM_DROP_FUNCTION;
	    lex->udf.name=yyvsp[0].lex_str.str;
	  }
    break;

  case 763:
#line 2586 "sql_yacc.yy"
    { if (!add_table_to_list(yyvsp[0].table,NULL,TL_OPTION_UPDATING)) YYABORT; }
    break;

  case 764:
#line 2589 "sql_yacc.yy"
    { yyval.num= 0; }
    break;

  case 765:
#line 2590 "sql_yacc.yy"
    { yyval.num= 1; }
    break;

  case 766:
#line 2594 "sql_yacc.yy"
    { yyval.num= 0; }
    break;

  case 767:
#line 2595 "sql_yacc.yy"
    { yyval.num= 1; }
    break;

  case 768:
#line 2602 "sql_yacc.yy"
    { Lex->sql_command = SQLCOM_INSERT; }
    break;

  case 769:
#line 2604 "sql_yacc.yy"
    {
	  set_lock_for_tables(yyvsp[-2].lock_type);
	  Lex->select= &Lex->select_lex;
	}
    break;

  case 770:
#line 2609 "sql_yacc.yy"
    {}
    break;

  case 771:
#line 2614 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_REPLACE;
	  lex->duplicates= DUP_REPLACE;
	}
    break;

  case 772:
#line 2620 "sql_yacc.yy"
    {
	  set_lock_for_tables(yyvsp[-1].lock_type);
          Lex->select= &Lex->select_lex;
	}
    break;

  case 773:
#line 2625 "sql_yacc.yy"
    {}
    break;

  case 774:
#line 2629 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_CONCURRENT_INSERT; }
    break;

  case 775:
#line 2630 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_LOW_PRIORITY; }
    break;

  case 776:
#line 2631 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_DELAYED; }
    break;

  case 777:
#line 2632 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE; }
    break;

  case 778:
#line 2636 "sql_yacc.yy"
    { yyval.lock_type= yyvsp[0].lock_type; }
    break;

  case 779:
#line 2637 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_DELAYED; }
    break;

  case 780:
#line 2640 "sql_yacc.yy"
    {}
    break;

  case 781:
#line 2641 "sql_yacc.yy"
    {}
    break;

  case 782:
#line 2645 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->field_list.empty();
	  lex->many_values.empty();
	  lex->insert_list=0;
	}
    break;

  case 783:
#line 2653 "sql_yacc.yy"
    {}
    break;

  case 784:
#line 2654 "sql_yacc.yy"
    {}
    break;

  case 785:
#line 2655 "sql_yacc.yy"
    {}
    break;

  case 786:
#line 2657 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    if (!(lex->insert_list = new List_item) ||
		lex->many_values.push_back(lex->insert_list))
	      YYABORT;
	   }
    break;

  case 788:
#line 2666 "sql_yacc.yy"
    { }
    break;

  case 789:
#line 2667 "sql_yacc.yy"
    { }
    break;

  case 790:
#line 2668 "sql_yacc.yy"
    { }
    break;

  case 791:
#line 2671 "sql_yacc.yy"
    { Lex->field_list.push_back(yyvsp[0].item); }
    break;

  case 792:
#line 2672 "sql_yacc.yy"
    { Lex->field_list.push_back(yyvsp[0].item); }
    break;

  case 793:
#line 2675 "sql_yacc.yy"
    {}
    break;

  case 794:
#line 2676 "sql_yacc.yy"
    { Select->braces= 0;}
    break;

  case 795:
#line 2676 "sql_yacc.yy"
    {}
    break;

  case 796:
#line 2677 "sql_yacc.yy"
    { Select->braces= 1;}
    break;

  case 797:
#line 2677 "sql_yacc.yy"
    {}
    break;

  case 802:
#line 2691 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->field_list.push_back(yyvsp[-2].item) ||
	      lex->insert_list->push_back(yyvsp[0].item))
	    YYABORT;
	 }
    break;

  case 803:
#line 2698 "sql_yacc.yy"
    {}
    break;

  case 804:
#line 2699 "sql_yacc.yy"
    {}
    break;

  case 805:
#line 2703 "sql_yacc.yy"
    {}
    break;

  case 806:
#line 2704 "sql_yacc.yy"
    {}
    break;

  case 807:
#line 2709 "sql_yacc.yy"
    {
	    if (!(Lex->insert_list = new List_item))
	      YYABORT;
	 }
    break;

  case 808:
#line 2714 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->many_values.push_back(lex->insert_list))
	    YYABORT;
	 }
    break;

  case 809:
#line 2721 "sql_yacc.yy"
    {}
    break;

  case 811:
#line 2726 "sql_yacc.yy"
    {
	  if (Lex->insert_list->push_back(yyvsp[0].item))
	    YYABORT;
	}
    break;

  case 812:
#line 2731 "sql_yacc.yy"
    {
	    if (Lex->insert_list->push_back(yyvsp[0].item))
	      YYABORT;
	  }
    break;

  case 813:
#line 2738 "sql_yacc.yy"
    { yyval.item= yyvsp[0].item;}
    break;

  case 814:
#line 2739 "sql_yacc.yy"
    {yyval.item= new Item_default(); }
    break;

  case 815:
#line 2746 "sql_yacc.yy"
    { 
	  LEX *lex=Lex;
          lex->sql_command = SQLCOM_UPDATE;
          lex->select->order_list.elements=0;
          lex->select->order_list.first=0;
          lex->select->order_list.next= (byte**) &lex->select->order_list.first;
        }
    break;

  case 816:
#line 2755 "sql_yacc.yy"
    {
	  if (Lex->select->table_list.elements > 1)
	  {
	    LEX *lex=Lex;
            lex->sql_command= SQLCOM_MULTI_UPDATE;
	    lex->lock_option= yyvsp[-4].lock_type;
	  }
	  else
	    set_lock_for_tables(yyvsp[-4].lock_type);
	}
    break;

  case 817:
#line 2765 "sql_yacc.yy"
    {}
    break;

  case 818:
#line 2770 "sql_yacc.yy"
    {
	  if (add_item_to_list(yyvsp[-2].item) || add_value_to_list(yyvsp[0].item))
	    YYABORT;
	}
    break;

  case 819:
#line 2775 "sql_yacc.yy"
    {
	    if (add_item_to_list(yyvsp[-2].item) || add_value_to_list(yyvsp[0].item))
	      YYABORT;
	  }
    break;

  case 820:
#line 2781 "sql_yacc.yy"
    { yyval.lock_type= current_thd->update_lock_default; }
    break;

  case 821:
#line 2782 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_LOW_PRIORITY; }
    break;

  case 822:
#line 2788 "sql_yacc.yy"
    { 
	  LEX *lex=Lex;
	  lex->sql_command= SQLCOM_DELETE; lex->select->options=0;
	  lex->lock_option= lex->thd->update_lock_default;
	  lex->select->order_list.elements=0;
	  lex->select->order_list.first=0;
	  lex->select->order_list.next= (byte**) &lex->select->order_list.first;
	}
    break;

  case 823:
#line 2796 "sql_yacc.yy"
    {}
    break;

  case 824:
#line 2801 "sql_yacc.yy"
    {
	  if (!add_table_to_list(yyvsp[0].table, NULL, TL_OPTION_UPDATING,
				 Lex->lock_option))
	    YYABORT;
	}
    break;

  case 825:
#line 2807 "sql_yacc.yy"
    {}
    break;

  case 826:
#line 2809 "sql_yacc.yy"
    { mysql_init_multi_delete(Lex); }
    break;

  case 828:
#line 2812 "sql_yacc.yy"
    { mysql_init_multi_delete(Lex); }
    break;

  case 829:
#line 2814 "sql_yacc.yy"
    {}
    break;

  case 830:
#line 2818 "sql_yacc.yy"
    {}
    break;

  case 831:
#line 2819 "sql_yacc.yy"
    {}
    break;

  case 832:
#line 2823 "sql_yacc.yy"
    {
	   if (!add_table_to_list(new Table_ident(yyvsp[-1].lex_str), NULL,
				  TL_OPTION_UPDATING, Lex->lock_option))
	     YYABORT;
         }
    break;

  case 833:
#line 2829 "sql_yacc.yy"
    {
	     if (!add_table_to_list(new Table_ident(yyvsp[-3].lex_str,yyvsp[-1].lex_str,0), NULL,
				    TL_OPTION_UPDATING,
				    Lex->lock_option))
	      YYABORT;
	   }
    break;

  case 834:
#line 2838 "sql_yacc.yy"
    {}
    break;

  case 835:
#line 2839 "sql_yacc.yy"
    {}
    break;

  case 836:
#line 2843 "sql_yacc.yy"
    {}
    break;

  case 837:
#line 2844 "sql_yacc.yy"
    {}
    break;

  case 838:
#line 2847 "sql_yacc.yy"
    { Select->options|= OPTION_QUICK; }
    break;

  case 839:
#line 2848 "sql_yacc.yy"
    { Lex->lock_option= TL_WRITE_LOW_PRIORITY; }
    break;

  case 840:
#line 2852 "sql_yacc.yy"
    {
	  LEX* lex = Lex;
	  lex->sql_command= SQLCOM_TRUNCATE;
	  lex->select->options=0;
	  lex->select->order_list.elements=0;
          lex->select->order_list.first=0;
          lex->select->order_list.next= (byte**) &lex->select->order_list.first;
	}
    break;

  case 843:
#line 2868 "sql_yacc.yy"
    { Lex->wild=0;}
    break;

  case 844:
#line 2869 "sql_yacc.yy"
    {}
    break;

  case 845:
#line 2874 "sql_yacc.yy"
    { Lex->sql_command= SQLCOM_SHOW_DATABASES; }
    break;

  case 846:
#line 2876 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_SHOW_TABLES;
	    lex->select->db= yyvsp[-1].simple_string; lex->select->options=0;
	   }
    break;

  case 847:
#line 2882 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_SHOW_TABLES;
	    lex->select->options|= SELECT_DESCRIBE;
	    lex->select->db= yyvsp[-1].simple_string;
	  }
    break;

  case 848:
#line 2889 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_SHOW_OPEN_TABLES;
	    lex->select->db= yyvsp[-1].simple_string;
	    lex->select->options=0;
	  }
    break;

  case 849:
#line 2896 "sql_yacc.yy"
    {
	    Lex->sql_command= SQLCOM_SHOW_FIELDS;
	    if (yyvsp[-1].simple_string)
	      yyvsp[-2].table->change_db(yyvsp[-1].simple_string);
	    if (!add_table_to_list(yyvsp[-2].table, NULL, 0))
	      YYABORT;
	  }
    break;

  case 850:
#line 2907 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_NEW_MASTER;
	    Lex->mi.log_file_name = yyvsp[-8].lex_str.str;
	    Lex->mi.pos = yyvsp[-4].ulonglong_number;
	    Lex->mi.server_id = yyvsp[0].ulong_num;
          }
    break;

  case 851:
#line 2914 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_BINLOGS;
          }
    break;

  case 852:
#line 2918 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_SLAVE_HOSTS;
          }
    break;

  case 853:
#line 2922 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command = SQLCOM_SHOW_BINLOG_EVENTS;
	    lex->select->select_limit= lex->thd->variables.select_limit;
	    lex->select->offset_limit= 0L;
          }
    break;

  case 855:
#line 2929 "sql_yacc.yy"
    {
	    Lex->sql_command= SQLCOM_SHOW_KEYS;
	    if (yyvsp[0].simple_string)
	      yyvsp[-1].table->change_db(yyvsp[0].simple_string);
	    if (!add_table_to_list(yyvsp[-1].table, NULL, 0))
	      YYABORT;
	  }
    break;

  case 856:
#line 2937 "sql_yacc.yy"
    { Lex->sql_command= SQLCOM_SHOW_STATUS; }
    break;

  case 857:
#line 2939 "sql_yacc.yy"
    { Lex->sql_command = SQLCOM_SHOW_INNODB_STATUS;}
    break;

  case 858:
#line 2941 "sql_yacc.yy"
    { Lex->sql_command= SQLCOM_SHOW_PROCESSLIST;}
    break;

  case 859:
#line 2943 "sql_yacc.yy"
    {
	    THD *thd= current_thd;
	    thd->lex.sql_command= SQLCOM_SHOW_VARIABLES;
	    thd->lex.option_type= (enum_var_type) yyvsp[-2].num;
	  }
    break;

  case 860:
#line 2949 "sql_yacc.yy"
    { Lex->sql_command= SQLCOM_SHOW_LOGS; }
    break;

  case 861:
#line 2951 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->sql_command= SQLCOM_SHOW_GRANTS;
	    lex->grant_user=yyvsp[0].lex_user;
	    lex->grant_user->password.str=NullS;
	  }
    break;

  case 862:
#line 2958 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_CREATE;
	    if(!add_table_to_list(yyvsp[0].table, NULL, 0))
	      YYABORT;
	  }
    break;

  case 863:
#line 2964 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_MASTER_STAT;
          }
    break;

  case 864:
#line 2968 "sql_yacc.yy"
    {
	    Lex->sql_command = SQLCOM_SHOW_SLAVE_STAT;
          }
    break;

  case 865:
#line 2973 "sql_yacc.yy"
    { yyval.simple_string= 0; }
    break;

  case 866:
#line 2974 "sql_yacc.yy"
    { yyval.simple_string= yyvsp[0].lex_str.str; }
    break;

  case 868:
#line 2978 "sql_yacc.yy"
    { Lex->wild= yyvsp[0].string; }
    break;

  case 869:
#line 2981 "sql_yacc.yy"
    { Lex->verbose=0; }
    break;

  case 870:
#line 2982 "sql_yacc.yy"
    { Lex->verbose=1; }
    break;

  case 873:
#line 2989 "sql_yacc.yy"
    { Lex->mi.log_file_name = 0; }
    break;

  case 874:
#line 2990 "sql_yacc.yy"
    { Lex->mi.log_file_name = yyvsp[0].lex_str.str; }
    break;

  case 875:
#line 2993 "sql_yacc.yy"
    { Lex->mi.pos = 4; /* skip magic number */ }
    break;

  case 876:
#line 2994 "sql_yacc.yy"
    { Lex->mi.pos = yyvsp[0].ulonglong_number; }
    break;

  case 877:
#line 3000 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->wild=0;
	  lex->verbose=0;
	  lex->sql_command=SQLCOM_SHOW_FIELDS;
	  if (!add_table_to_list(yyvsp[0].table, NULL, 0))
	    YYABORT;
	}
    break;

  case 878:
#line 3008 "sql_yacc.yy"
    {}
    break;

  case 879:
#line 3010 "sql_yacc.yy"
    { Lex->select_lex.options|= SELECT_DESCRIBE; }
    break;

  case 882:
#line 3018 "sql_yacc.yy"
    {}
    break;

  case 883:
#line 3019 "sql_yacc.yy"
    { Lex->wild= yyvsp[0].string; }
    break;

  case 884:
#line 3021 "sql_yacc.yy"
    { Lex->wild= new String((const char*) yyvsp[0].lex_str.str,yyvsp[0].lex_str.length); }
    break;

  case 885:
#line 3028 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command= SQLCOM_FLUSH; lex->type=0;
	}
    break;

  case 886:
#line 3033 "sql_yacc.yy"
    {}
    break;

  case 889:
#line 3041 "sql_yacc.yy"
    { Lex->type|= REFRESH_TABLES; }
    break;

  case 890:
#line 3041 "sql_yacc.yy"
    {}
    break;

  case 891:
#line 3042 "sql_yacc.yy"
    { Lex->type|= REFRESH_TABLES | REFRESH_READ_LOCK; }
    break;

  case 892:
#line 3043 "sql_yacc.yy"
    { Lex->type|= REFRESH_QUERY_CACHE_FREE; }
    break;

  case 893:
#line 3044 "sql_yacc.yy"
    { Lex->type|= REFRESH_HOSTS; }
    break;

  case 894:
#line 3045 "sql_yacc.yy"
    { Lex->type|= REFRESH_GRANT; }
    break;

  case 895:
#line 3046 "sql_yacc.yy"
    { Lex->type|= REFRESH_LOG; }
    break;

  case 896:
#line 3047 "sql_yacc.yy"
    { Lex->type|= REFRESH_STATUS; }
    break;

  case 897:
#line 3048 "sql_yacc.yy"
    { Lex->type|= REFRESH_SLAVE; }
    break;

  case 898:
#line 3049 "sql_yacc.yy"
    { Lex->type|= REFRESH_MASTER; }
    break;

  case 899:
#line 3050 "sql_yacc.yy"
    { Lex->type|= REFRESH_DES_KEY_FILE; }
    break;

  case 900:
#line 3051 "sql_yacc.yy"
    { Lex->type|= REFRESH_USER_RESOURCES; }
    break;

  case 901:
#line 3054 "sql_yacc.yy"
    {;}
    break;

  case 902:
#line 3055 "sql_yacc.yy"
    {;}
    break;

  case 903:
#line 3059 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command= SQLCOM_RESET; lex->type=0;
	}
    break;

  case 904:
#line 3063 "sql_yacc.yy"
    {}
    break;

  case 907:
#line 3071 "sql_yacc.yy"
    { Lex->type|= REFRESH_SLAVE; }
    break;

  case 908:
#line 3072 "sql_yacc.yy"
    { Lex->type|= REFRESH_MASTER; }
    break;

  case 909:
#line 3073 "sql_yacc.yy"
    { Lex->type|= REFRESH_QUERY_CACHE;}
    break;

  case 910:
#line 3077 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_PURGE;
	  lex->type=0;
	}
    break;

  case 911:
#line 3083 "sql_yacc.yy"
    {
	   Lex->to_log = yyvsp[0].lex_str.str;
         }
    break;

  case 912:
#line 3091 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (yyvsp[0].item->fix_fields(lex->thd,0))
	  { 
	    send_error(&lex->thd->net, ER_SET_CONSTANTS_ONLY);
	    YYABORT;
	  }
          lex->sql_command=SQLCOM_KILL;
	  lex->thread_id= (ulong) yyvsp[0].item->val_int();
	}
    break;

  case 913:
#line 3105 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command=SQLCOM_CHANGE_DB; lex->select->db= yyvsp[0].lex_str.str;
	}
    break;

  case 914:
#line 3113 "sql_yacc.yy"
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

  case 915:
#line 3124 "sql_yacc.yy"
    {
	  if (!add_table_to_list(yyvsp[-4].table, NULL, TL_OPTION_UPDATING))
	    YYABORT;
	}
    break;

  case 916:
#line 3130 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_LOAD_MASTER_TABLE;
	  if (!add_table_to_list(yyvsp[-2].table, NULL, TL_OPTION_UPDATING))
	    YYABORT;

        }
    break;

  case 917:
#line 3138 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_LOAD_MASTER_DATA;
        }
    break;

  case 918:
#line 3143 "sql_yacc.yy"
    { yyval.num=0;}
    break;

  case 919:
#line 3144 "sql_yacc.yy"
    { yyval.num=1;}
    break;

  case 920:
#line 3147 "sql_yacc.yy"
    { yyval.lock_type= current_thd->update_lock_default; }
    break;

  case 921:
#line 3148 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_CONCURRENT_INSERT ; }
    break;

  case 922:
#line 3149 "sql_yacc.yy"
    { yyval.lock_type= TL_WRITE_LOW_PRIORITY; }
    break;

  case 923:
#line 3153 "sql_yacc.yy"
    { Lex->duplicates=DUP_ERROR; }
    break;

  case 924:
#line 3154 "sql_yacc.yy"
    { Lex->duplicates=DUP_REPLACE; }
    break;

  case 925:
#line 3155 "sql_yacc.yy"
    { Lex->duplicates=DUP_IGNORE; }
    break;

  case 930:
#line 3166 "sql_yacc.yy"
    { Lex->exchange->field_term= yyvsp[0].string;}
    break;

  case 931:
#line 3168 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->exchange->enclosed= yyvsp[0].string;
	    lex->exchange->opt_enclosed=1;
	  }
    break;

  case 932:
#line 3173 "sql_yacc.yy"
    { Lex->exchange->enclosed= yyvsp[0].string;}
    break;

  case 933:
#line 3174 "sql_yacc.yy"
    { Lex->exchange->escaped= yyvsp[0].string;}
    break;

  case 938:
#line 3185 "sql_yacc.yy"
    { Lex->exchange->line_term= yyvsp[0].string;}
    break;

  case 939:
#line 3186 "sql_yacc.yy"
    { Lex->exchange->line_start= yyvsp[0].string;}
    break;

  case 941:
#line 3191 "sql_yacc.yy"
    { Lex->exchange->skip_lines=atol(yyvsp[-1].lex_str.str); }
    break;

  case 942:
#line 3196 "sql_yacc.yy"
    { yyval.item = new Item_string(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length); }
    break;

  case 943:
#line 3198 "sql_yacc.yy"
    { ((Item_string*) yyvsp[-1].item)->append(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length); }
    break;

  case 944:
#line 3201 "sql_yacc.yy"
    { yyval.string=  new String(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length); }
    break;

  case 945:
#line 3203 "sql_yacc.yy"
    {
	    Item *tmp = new Item_varbinary(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length);
	    yyval.string= tmp ? tmp->val_str((String*) 0) : (String*) 0;
	  }
    break;

  case 946:
#line 3209 "sql_yacc.yy"
    { yyval.item =	yyvsp[0].item; }
    break;

  case 947:
#line 3210 "sql_yacc.yy"
    { yyval.item =	new Item_int(yyvsp[0].lex_str.str, (longlong) strtol(yyvsp[0].lex_str.str, NULL, 10),yyvsp[0].lex_str.length); }
    break;

  case 948:
#line 3211 "sql_yacc.yy"
    { yyval.item =	new Item_int(yyvsp[0].lex_str.str, (longlong) strtoll(yyvsp[0].lex_str.str,NULL,10), yyvsp[0].lex_str.length); }
    break;

  case 949:
#line 3212 "sql_yacc.yy"
    { yyval.item =	new Item_uint(yyvsp[0].lex_str.str, yyvsp[0].lex_str.length); }
    break;

  case 950:
#line 3213 "sql_yacc.yy"
    { yyval.item =	new Item_real(yyvsp[0].lex_str.str, yyvsp[0].lex_str.length); }
    break;

  case 951:
#line 3214 "sql_yacc.yy"
    { yyval.item =	new Item_float(yyvsp[0].lex_str.str, yyvsp[0].lex_str.length); }
    break;

  case 952:
#line 3215 "sql_yacc.yy"
    { yyval.item =	new Item_null();
			  Lex->next_state=STATE_OPERATOR_OR_IDENT;}
    break;

  case 953:
#line 3217 "sql_yacc.yy"
    { yyval.item =	new Item_varbinary(yyvsp[0].lex_str.str,yyvsp[0].lex_str.length);}
    break;

  case 954:
#line 3218 "sql_yacc.yy"
    { yyval.item = yyvsp[0].item; }
    break;

  case 955:
#line 3219 "sql_yacc.yy"
    { yyval.item = yyvsp[0].item; }
    break;

  case 956:
#line 3220 "sql_yacc.yy"
    { yyval.item = yyvsp[0].item; }
    break;

  case 957:
#line 3227 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 958:
#line 3228 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 959:
#line 3231 "sql_yacc.yy"
    { yyval.item = new Item_field(NullS,yyvsp[-2].lex_str.str,"*"); }
    break;

  case 960:
#line 3233 "sql_yacc.yy"
    { yyval.item = new Item_field((current_thd->client_capabilities &
   CLIENT_NO_SCHEMA ? NullS : yyvsp[-4].lex_str.str),yyvsp[-2].lex_str.str,"*"); }
    break;

  case 961:
#line 3237 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 962:
#line 3241 "sql_yacc.yy"
    {
	  SELECT_LEX *sel=Select;
	  yyval.item = !sel->create_refs || sel->in_sum_expr > 0 ? (Item*) new Item_field(NullS,NullS,yyvsp[0].lex_str.str) : (Item*) new Item_ref(NullS,NullS,yyvsp[0].lex_str.str);
	}
    break;

  case 963:
#line 3246 "sql_yacc.yy"
    {
	  SELECT_LEX *sel=Select;
	  yyval.item = !sel->create_refs || sel->in_sum_expr > 0 ? (Item*) new Item_field(NullS,yyvsp[-2].lex_str.str,yyvsp[0].lex_str.str) : (Item*) new Item_ref(NullS,yyvsp[-2].lex_str.str,yyvsp[0].lex_str.str);
	}
    break;

  case 964:
#line 3251 "sql_yacc.yy"
    {
	  SELECT_LEX *sel=Select;
	  yyval.item = !sel->create_refs || sel->in_sum_expr > 0 ? (Item*) new Item_field(NullS,yyvsp[-2].lex_str.str,yyvsp[0].lex_str.str) : (Item*) new Item_ref(NullS,yyvsp[-2].lex_str.str,yyvsp[0].lex_str.str);
	}
    break;

  case 965:
#line 3256 "sql_yacc.yy"
    {
	  SELECT_LEX *sel=Select;
	  yyval.item = !sel->create_refs || sel->in_sum_expr > 0 ? (Item*) new Item_field((current_thd->client_capabilities & CLIENT_NO_SCHEMA ? NullS :yyvsp[-4].lex_str.str),yyvsp[-2].lex_str.str,yyvsp[0].lex_str.str) : (Item*) new Item_ref((current_thd->client_capabilities & CLIENT_NO_SCHEMA ? NullS :yyvsp[-4].lex_str.str),yyvsp[-2].lex_str.str,yyvsp[0].lex_str.str);
	}
    break;

  case 966:
#line 3263 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 967:
#line 3264 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 968:
#line 3265 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 969:
#line 3268 "sql_yacc.yy"
    { yyval.table=new Table_ident(yyvsp[0].lex_str); }
    break;

  case 970:
#line 3269 "sql_yacc.yy"
    { yyval.table=new Table_ident(yyvsp[-2].lex_str,yyvsp[0].lex_str,0);}
    break;

  case 971:
#line 3270 "sql_yacc.yy"
    { yyval.table=new Table_ident(yyvsp[0].lex_str);}
    break;

  case 972:
#line 3274 "sql_yacc.yy"
    { LEX_STRING db={(char*) "",0}; yyval.table=new Table_ident(db,yyvsp[0].lex_str,0); }
    break;

  case 973:
#line 3275 "sql_yacc.yy"
    { yyval.table=new Table_ident(yyvsp[-2].lex_str,yyvsp[0].lex_str,0);}
    break;

  case 974:
#line 3279 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str; }
    break;

  case 975:
#line 3281 "sql_yacc.yy"
    {
	  LEX *lex= Lex;
	  yyval.lex_str.str= lex->thd->strmake(yyvsp[0].symbol.str,yyvsp[0].symbol.length);
	  yyval.lex_str.length=yyvsp[0].symbol.length;
	  if (lex->next_state != STATE_END)
	    lex->next_state=STATE_OPERATOR_OR_IDENT;
	}
    break;

  case 976:
#line 3291 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 977:
#line 3292 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 978:
#line 3293 "sql_yacc.yy"
    { yyval.lex_str=yyvsp[0].lex_str;}
    break;

  case 979:
#line 3297 "sql_yacc.yy"
    {
	  if (!(yyval.lex_user=(LEX_USER*) sql_alloc(sizeof(st_lex_user))))
	    YYABORT;
	  yyval.lex_user->user = yyvsp[0].lex_str; yyval.lex_user->host.str=NullS;
	  }
    break;

  case 980:
#line 3303 "sql_yacc.yy"
    {
	  if (!(yyval.lex_user=(LEX_USER*) sql_alloc(sizeof(st_lex_user))))
	      YYABORT;
	    yyval.lex_user->user = yyvsp[-2].lex_str; yyval.lex_user->host=yyvsp[0].lex_str;
	  }
    break;

  case 981:
#line 3312 "sql_yacc.yy"
    {}
    break;

  case 982:
#line 3313 "sql_yacc.yy"
    {}
    break;

  case 983:
#line 3314 "sql_yacc.yy"
    {}
    break;

  case 984:
#line 3315 "sql_yacc.yy"
    {}
    break;

  case 985:
#line 3316 "sql_yacc.yy"
    {}
    break;

  case 986:
#line 3317 "sql_yacc.yy"
    {}
    break;

  case 987:
#line 3318 "sql_yacc.yy"
    {}
    break;

  case 988:
#line 3319 "sql_yacc.yy"
    {}
    break;

  case 989:
#line 3320 "sql_yacc.yy"
    {}
    break;

  case 990:
#line 3321 "sql_yacc.yy"
    {}
    break;

  case 991:
#line 3322 "sql_yacc.yy"
    {}
    break;

  case 992:
#line 3323 "sql_yacc.yy"
    {}
    break;

  case 993:
#line 3324 "sql_yacc.yy"
    {}
    break;

  case 994:
#line 3325 "sql_yacc.yy"
    {}
    break;

  case 995:
#line 3326 "sql_yacc.yy"
    {}
    break;

  case 996:
#line 3327 "sql_yacc.yy"
    {}
    break;

  case 997:
#line 3328 "sql_yacc.yy"
    {}
    break;

  case 998:
#line 3329 "sql_yacc.yy"
    {}
    break;

  case 999:
#line 3330 "sql_yacc.yy"
    {}
    break;

  case 1000:
#line 3331 "sql_yacc.yy"
    {}
    break;

  case 1001:
#line 3332 "sql_yacc.yy"
    {}
    break;

  case 1002:
#line 3333 "sql_yacc.yy"
    {}
    break;

  case 1003:
#line 3334 "sql_yacc.yy"
    {}
    break;

  case 1004:
#line 3335 "sql_yacc.yy"
    {}
    break;

  case 1005:
#line 3336 "sql_yacc.yy"
    {}
    break;

  case 1006:
#line 3337 "sql_yacc.yy"
    {}
    break;

  case 1007:
#line 3338 "sql_yacc.yy"
    {}
    break;

  case 1008:
#line 3339 "sql_yacc.yy"
    {}
    break;

  case 1009:
#line 3340 "sql_yacc.yy"
    {}
    break;

  case 1010:
#line 3341 "sql_yacc.yy"
    {}
    break;

  case 1011:
#line 3342 "sql_yacc.yy"
    {}
    break;

  case 1012:
#line 3343 "sql_yacc.yy"
    {}
    break;

  case 1013:
#line 3344 "sql_yacc.yy"
    {}
    break;

  case 1014:
#line 3345 "sql_yacc.yy"
    {}
    break;

  case 1015:
#line 3346 "sql_yacc.yy"
    {}
    break;

  case 1016:
#line 3347 "sql_yacc.yy"
    {}
    break;

  case 1017:
#line 3348 "sql_yacc.yy"
    {}
    break;

  case 1018:
#line 3349 "sql_yacc.yy"
    {}
    break;

  case 1019:
#line 3350 "sql_yacc.yy"
    {}
    break;

  case 1020:
#line 3351 "sql_yacc.yy"
    {}
    break;

  case 1021:
#line 3352 "sql_yacc.yy"
    {}
    break;

  case 1022:
#line 3353 "sql_yacc.yy"
    {}
    break;

  case 1023:
#line 3354 "sql_yacc.yy"
    {}
    break;

  case 1024:
#line 3355 "sql_yacc.yy"
    {}
    break;

  case 1025:
#line 3356 "sql_yacc.yy"
    {}
    break;

  case 1026:
#line 3357 "sql_yacc.yy"
    {}
    break;

  case 1027:
#line 3358 "sql_yacc.yy"
    {}
    break;

  case 1028:
#line 3359 "sql_yacc.yy"
    {}
    break;

  case 1029:
#line 3360 "sql_yacc.yy"
    {}
    break;

  case 1030:
#line 3361 "sql_yacc.yy"
    {}
    break;

  case 1031:
#line 3362 "sql_yacc.yy"
    {}
    break;

  case 1032:
#line 3363 "sql_yacc.yy"
    {}
    break;

  case 1033:
#line 3364 "sql_yacc.yy"
    {}
    break;

  case 1034:
#line 3365 "sql_yacc.yy"
    {}
    break;

  case 1035:
#line 3366 "sql_yacc.yy"
    {}
    break;

  case 1036:
#line 3367 "sql_yacc.yy"
    {}
    break;

  case 1037:
#line 3368 "sql_yacc.yy"
    {}
    break;

  case 1038:
#line 3369 "sql_yacc.yy"
    {}
    break;

  case 1039:
#line 3370 "sql_yacc.yy"
    {}
    break;

  case 1040:
#line 3371 "sql_yacc.yy"
    {}
    break;

  case 1041:
#line 3372 "sql_yacc.yy"
    {}
    break;

  case 1042:
#line 3373 "sql_yacc.yy"
    {}
    break;

  case 1043:
#line 3374 "sql_yacc.yy"
    {}
    break;

  case 1044:
#line 3375 "sql_yacc.yy"
    {}
    break;

  case 1045:
#line 3376 "sql_yacc.yy"
    {}
    break;

  case 1046:
#line 3377 "sql_yacc.yy"
    {}
    break;

  case 1047:
#line 3378 "sql_yacc.yy"
    {}
    break;

  case 1048:
#line 3379 "sql_yacc.yy"
    {}
    break;

  case 1049:
#line 3380 "sql_yacc.yy"
    {}
    break;

  case 1050:
#line 3381 "sql_yacc.yy"
    {}
    break;

  case 1051:
#line 3382 "sql_yacc.yy"
    {}
    break;

  case 1052:
#line 3383 "sql_yacc.yy"
    {}
    break;

  case 1053:
#line 3384 "sql_yacc.yy"
    {}
    break;

  case 1054:
#line 3385 "sql_yacc.yy"
    {}
    break;

  case 1055:
#line 3386 "sql_yacc.yy"
    {}
    break;

  case 1056:
#line 3387 "sql_yacc.yy"
    {}
    break;

  case 1057:
#line 3388 "sql_yacc.yy"
    {}
    break;

  case 1058:
#line 3389 "sql_yacc.yy"
    {}
    break;

  case 1059:
#line 3390 "sql_yacc.yy"
    {}
    break;

  case 1060:
#line 3391 "sql_yacc.yy"
    {}
    break;

  case 1061:
#line 3392 "sql_yacc.yy"
    {}
    break;

  case 1062:
#line 3393 "sql_yacc.yy"
    {}
    break;

  case 1063:
#line 3394 "sql_yacc.yy"
    {}
    break;

  case 1064:
#line 3395 "sql_yacc.yy"
    {}
    break;

  case 1065:
#line 3396 "sql_yacc.yy"
    {}
    break;

  case 1066:
#line 3397 "sql_yacc.yy"
    {}
    break;

  case 1067:
#line 3398 "sql_yacc.yy"
    {}
    break;

  case 1068:
#line 3399 "sql_yacc.yy"
    {}
    break;

  case 1069:
#line 3400 "sql_yacc.yy"
    {}
    break;

  case 1070:
#line 3401 "sql_yacc.yy"
    {}
    break;

  case 1071:
#line 3402 "sql_yacc.yy"
    {}
    break;

  case 1072:
#line 3403 "sql_yacc.yy"
    {}
    break;

  case 1073:
#line 3404 "sql_yacc.yy"
    {}
    break;

  case 1074:
#line 3405 "sql_yacc.yy"
    {}
    break;

  case 1075:
#line 3406 "sql_yacc.yy"
    {}
    break;

  case 1076:
#line 3407 "sql_yacc.yy"
    {}
    break;

  case 1077:
#line 3408 "sql_yacc.yy"
    {}
    break;

  case 1078:
#line 3409 "sql_yacc.yy"
    {}
    break;

  case 1079:
#line 3410 "sql_yacc.yy"
    {}
    break;

  case 1080:
#line 3411 "sql_yacc.yy"
    {}
    break;

  case 1081:
#line 3412 "sql_yacc.yy"
    {}
    break;

  case 1082:
#line 3413 "sql_yacc.yy"
    {}
    break;

  case 1083:
#line 3414 "sql_yacc.yy"
    {}
    break;

  case 1084:
#line 3415 "sql_yacc.yy"
    {}
    break;

  case 1085:
#line 3416 "sql_yacc.yy"
    {}
    break;

  case 1086:
#line 3417 "sql_yacc.yy"
    {}
    break;

  case 1087:
#line 3418 "sql_yacc.yy"
    {}
    break;

  case 1088:
#line 3419 "sql_yacc.yy"
    {}
    break;

  case 1089:
#line 3420 "sql_yacc.yy"
    {}
    break;

  case 1090:
#line 3421 "sql_yacc.yy"
    {}
    break;

  case 1091:
#line 3422 "sql_yacc.yy"
    {}
    break;

  case 1092:
#line 3423 "sql_yacc.yy"
    {}
    break;

  case 1093:
#line 3424 "sql_yacc.yy"
    {}
    break;

  case 1094:
#line 3425 "sql_yacc.yy"
    {}
    break;

  case 1095:
#line 3426 "sql_yacc.yy"
    {}
    break;

  case 1096:
#line 3427 "sql_yacc.yy"
    {}
    break;

  case 1097:
#line 3428 "sql_yacc.yy"
    {}
    break;

  case 1098:
#line 3429 "sql_yacc.yy"
    {}
    break;

  case 1099:
#line 3430 "sql_yacc.yy"
    {}
    break;

  case 1100:
#line 3431 "sql_yacc.yy"
    {}
    break;

  case 1101:
#line 3432 "sql_yacc.yy"
    {}
    break;

  case 1102:
#line 3433 "sql_yacc.yy"
    {}
    break;

  case 1103:
#line 3434 "sql_yacc.yy"
    {}
    break;

  case 1104:
#line 3435 "sql_yacc.yy"
    {}
    break;

  case 1105:
#line 3436 "sql_yacc.yy"
    {}
    break;

  case 1106:
#line 3437 "sql_yacc.yy"
    {}
    break;

  case 1107:
#line 3438 "sql_yacc.yy"
    {}
    break;

  case 1108:
#line 3439 "sql_yacc.yy"
    {}
    break;

  case 1109:
#line 3440 "sql_yacc.yy"
    {}
    break;

  case 1110:
#line 3441 "sql_yacc.yy"
    {}
    break;

  case 1111:
#line 3442 "sql_yacc.yy"
    {}
    break;

  case 1112:
#line 3443 "sql_yacc.yy"
    {}
    break;

  case 1113:
#line 3444 "sql_yacc.yy"
    {}
    break;

  case 1114:
#line 3445 "sql_yacc.yy"
    {}
    break;

  case 1115:
#line 3446 "sql_yacc.yy"
    {}
    break;

  case 1116:
#line 3447 "sql_yacc.yy"
    {}
    break;

  case 1117:
#line 3448 "sql_yacc.yy"
    {}
    break;

  case 1118:
#line 3449 "sql_yacc.yy"
    {}
    break;

  case 1119:
#line 3450 "sql_yacc.yy"
    {}
    break;

  case 1120:
#line 3451 "sql_yacc.yy"
    {}
    break;

  case 1121:
#line 3452 "sql_yacc.yy"
    {}
    break;

  case 1122:
#line 3453 "sql_yacc.yy"
    {}
    break;

  case 1123:
#line 3454 "sql_yacc.yy"
    {}
    break;

  case 1124:
#line 3455 "sql_yacc.yy"
    {}
    break;

  case 1125:
#line 3456 "sql_yacc.yy"
    {}
    break;

  case 1126:
#line 3457 "sql_yacc.yy"
    {}
    break;

  case 1127:
#line 3458 "sql_yacc.yy"
    {}
    break;

  case 1128:
#line 3459 "sql_yacc.yy"
    {}
    break;

  case 1129:
#line 3460 "sql_yacc.yy"
    {}
    break;

  case 1130:
#line 3461 "sql_yacc.yy"
    {}
    break;

  case 1131:
#line 3462 "sql_yacc.yy"
    {}
    break;

  case 1132:
#line 3463 "sql_yacc.yy"
    {}
    break;

  case 1133:
#line 3464 "sql_yacc.yy"
    {}
    break;

  case 1134:
#line 3465 "sql_yacc.yy"
    {}
    break;

  case 1135:
#line 3466 "sql_yacc.yy"
    {}
    break;

  case 1136:
#line 3467 "sql_yacc.yy"
    {}
    break;

  case 1137:
#line 3468 "sql_yacc.yy"
    {}
    break;

  case 1138:
#line 3469 "sql_yacc.yy"
    {}
    break;

  case 1139:
#line 3475 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command= SQLCOM_SET_OPTION;
	  lex->option_type=OPT_DEFAULT;
	  lex->var_list.empty();
	}
    break;

  case 1140:
#line 3482 "sql_yacc.yy"
    {}
    break;

  case 1141:
#line 3486 "sql_yacc.yy"
    {}
    break;

  case 1142:
#line 3487 "sql_yacc.yy"
    {}
    break;

  case 1145:
#line 3494 "sql_yacc.yy"
    {}
    break;

  case 1146:
#line 3495 "sql_yacc.yy"
    { Lex->option_type= OPT_GLOBAL; }
    break;

  case 1147:
#line 3496 "sql_yacc.yy"
    { Lex->option_type= OPT_SESSION; }
    break;

  case 1148:
#line 3497 "sql_yacc.yy"
    { Lex->option_type= OPT_SESSION; }
    break;

  case 1149:
#line 3501 "sql_yacc.yy"
    { yyval.num=OPT_SESSION; }
    break;

  case 1150:
#line 3502 "sql_yacc.yy"
    { yyval.num=OPT_SESSION; }
    break;

  case 1151:
#line 3503 "sql_yacc.yy"
    { yyval.num=OPT_SESSION; }
    break;

  case 1152:
#line 3504 "sql_yacc.yy"
    { yyval.num=OPT_GLOBAL; }
    break;

  case 1153:
#line 3508 "sql_yacc.yy"
    { yyval.num=OPT_DEFAULT; }
    break;

  case 1154:
#line 3509 "sql_yacc.yy"
    { yyval.num=OPT_SESSION; }
    break;

  case 1155:
#line 3510 "sql_yacc.yy"
    { yyval.num=OPT_SESSION; }
    break;

  case 1156:
#line 3511 "sql_yacc.yy"
    { yyval.num=OPT_GLOBAL; }
    break;

  case 1157:
#line 3516 "sql_yacc.yy"
    {
	  Lex->var_list.push_back(new set_var_user(new Item_func_set_user_var(yyvsp[-2].lex_str,yyvsp[0].item)));
	}
    break;

  case 1158:
#line 3520 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->var_list.push_back(new set_var(lex->option_type, yyvsp[-2].variable, yyvsp[0].item));
	  }
    break;

  case 1159:
#line 3525 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->var_list.push_back(new set_var((enum_var_type) yyvsp[-3].num, yyvsp[-2].variable, yyvsp[0].item));
	  }
    break;

  case 1160:
#line 3530 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->var_list.push_back(new set_var(lex->option_type,
						find_sys_var("tx_isolation"),
						new Item_int((int32) yyvsp[0].tx_isolation)));
	  }
    break;

  case 1161:
#line 3537 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->var_list.push_back(new set_var(lex->option_type,
					      find_sys_var("convert_character_set"),
					      yyvsp[0].item));
	}
    break;

  case 1162:
#line 3544 "sql_yacc.yy"
    {
	    THD *thd=current_thd;
	    LEX_USER *user;
	    if (!(user=(LEX_USER*) sql_alloc(sizeof(LEX_USER))))
	      YYABORT;
	    user->host.str=0;
	    user->user.str=thd->priv_user;
	    thd->lex.var_list.push_back(new set_var_password(user, yyvsp[0].simple_string));
	  }
    break;

  case 1163:
#line 3554 "sql_yacc.yy"
    {
	    Lex->var_list.push_back(new set_var_password(yyvsp[-2].lex_user,yyvsp[0].simple_string));
	  }
    break;

  case 1164:
#line 3561 "sql_yacc.yy"
    {
	  sys_var *tmp=find_sys_var(yyvsp[0].lex_str.str, yyvsp[0].lex_str.length);
	  if (!tmp)
	    YYABORT;
	  yyval.variable=tmp;
	}
    break;

  case 1165:
#line 3570 "sql_yacc.yy"
    { yyval.tx_isolation= ISO_READ_UNCOMMITTED; }
    break;

  case 1166:
#line 3571 "sql_yacc.yy"
    { yyval.tx_isolation= ISO_READ_COMMITTED; }
    break;

  case 1167:
#line 3572 "sql_yacc.yy"
    { yyval.tx_isolation= ISO_REPEATABLE_READ; }
    break;

  case 1168:
#line 3573 "sql_yacc.yy"
    { yyval.tx_isolation= ISO_SERIALIZABLE; }
    break;

  case 1169:
#line 3577 "sql_yacc.yy"
    { yyval.simple_string=yyvsp[0].lex_str.str;}
    break;

  case 1170:
#line 3579 "sql_yacc.yy"
    {
	    if (!yyvsp[-1].lex_str.length)
	      yyval.simple_string=yyvsp[-1].lex_str.str;
	    else
	    {
	      char *buff=(char*) sql_alloc(HASH_PASSWORD_LENGTH+1);
	      make_scrambled_password(buff,yyvsp[-1].lex_str.str);
	      yyval.simple_string=buff;
	    }
	  }
    break;

  case 1171:
#line 3592 "sql_yacc.yy"
    { yyval.item=yyvsp[0].item; }
    break;

  case 1172:
#line 3593 "sql_yacc.yy"
    { yyval.item=0; }
    break;

  case 1173:
#line 3594 "sql_yacc.yy"
    { yyval.item=new Item_string("ON",2); }
    break;

  case 1174:
#line 3595 "sql_yacc.yy"
    { yyval.item=new Item_string("ALL",3); }
    break;

  case 1175:
#line 3603 "sql_yacc.yy"
    {
	  Lex->sql_command=SQLCOM_LOCK_TABLES;
	}
    break;

  case 1176:
#line 3607 "sql_yacc.yy"
    {}
    break;

  case 1181:
#line 3620 "sql_yacc.yy"
    { if (!add_table_to_list(yyvsp[-2].table,yyvsp[-1].lex_str_ptr,0,(thr_lock_type) yyvsp[0].num)) YYABORT; }
    break;

  case 1182:
#line 3623 "sql_yacc.yy"
    { yyval.num=TL_READ_NO_INSERT; }
    break;

  case 1183:
#line 3624 "sql_yacc.yy"
    { yyval.num=current_thd->update_lock_default; }
    break;

  case 1184:
#line 3625 "sql_yacc.yy"
    { yyval.num=TL_WRITE_LOW_PRIORITY; }
    break;

  case 1185:
#line 3626 "sql_yacc.yy"
    { yyval.num= TL_READ; }
    break;

  case 1186:
#line 3629 "sql_yacc.yy"
    { Lex->sql_command=SQLCOM_UNLOCK_TABLES; }
    break;

  case 1187:
#line 3638 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_HA_OPEN;
	  if (!add_table_to_list(yyvsp[-2].table,yyvsp[0].lex_str_ptr,0))
	    YYABORT;
	}
    break;

  case 1188:
#line 3644 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_HA_CLOSE;
	  if (!add_table_to_list(yyvsp[-1].table,0,0))
	    YYABORT;
	}
    break;

  case 1189:
#line 3650 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_HA_READ;
	  lex->ha_rkey_mode= HA_READ_KEY_EXACT;	/* Avoid purify warnings */
	  lex->select->select_limit= 1;
	  lex->select->offset_limit= 0L;
	  if (!add_table_to_list(yyvsp[-1].table,0,0))
	    YYABORT;
        }
    break;

  case 1190:
#line 3659 "sql_yacc.yy"
    { }
    break;

  case 1191:
#line 3662 "sql_yacc.yy"
    { Lex->backup_dir= 0; }
    break;

  case 1192:
#line 3663 "sql_yacc.yy"
    { Lex->backup_dir= yyvsp[-1].lex_str.str; }
    break;

  case 1193:
#line 3666 "sql_yacc.yy"
    { Lex->ha_read_mode = RFIRST; }
    break;

  case 1194:
#line 3667 "sql_yacc.yy"
    { Lex->ha_read_mode = RNEXT;  }
    break;

  case 1195:
#line 3670 "sql_yacc.yy"
    { Lex->ha_read_mode = RFIRST; }
    break;

  case 1196:
#line 3671 "sql_yacc.yy"
    { Lex->ha_read_mode = RNEXT;  }
    break;

  case 1197:
#line 3672 "sql_yacc.yy"
    { Lex->ha_read_mode = RPREV;  }
    break;

  case 1198:
#line 3673 "sql_yacc.yy"
    { Lex->ha_read_mode = RLAST;  }
    break;

  case 1199:
#line 3675 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->ha_read_mode = RKEY;
	  lex->ha_rkey_mode=yyvsp[0].ha_rkey_mode;
	  if (!(lex->insert_list = new List_item))
	    YYABORT;
	}
    break;

  case 1200:
#line 3681 "sql_yacc.yy"
    { }
    break;

  case 1201:
#line 3684 "sql_yacc.yy"
    { yyval.ha_rkey_mode=HA_READ_KEY_EXACT;   }
    break;

  case 1202:
#line 3685 "sql_yacc.yy"
    { yyval.ha_rkey_mode=HA_READ_KEY_OR_NEXT; }
    break;

  case 1203:
#line 3686 "sql_yacc.yy"
    { yyval.ha_rkey_mode=HA_READ_KEY_OR_PREV; }
    break;

  case 1204:
#line 3687 "sql_yacc.yy"
    { yyval.ha_rkey_mode=HA_READ_AFTER_KEY;   }
    break;

  case 1205:
#line 3688 "sql_yacc.yy"
    { yyval.ha_rkey_mode=HA_READ_BEFORE_KEY;  }
    break;

  case 1206:
#line 3694 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->sql_command = SQLCOM_REVOKE;
	  lex->users_list.empty();
	  lex->columns.empty();
	  lex->grant= lex->grant_tot_col=0;
	  lex->select->db=0;
	  lex->ssl_type= SSL_TYPE_NOT_SPECIFIED;
	  lex->ssl_cipher= lex->x509_subject= lex->x509_issuer= 0;
	  bzero((char*) &lex->mqh, sizeof(lex->mqh));
	}
    break;

  case 1207:
#line 3706 "sql_yacc.yy"
    {}
    break;

  case 1208:
#line 3711 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->users_list.empty();
	  lex->columns.empty();
	  lex->sql_command = SQLCOM_GRANT;
	  lex->grant= lex->grant_tot_col= 0;
	  lex->select->db= 0;
	  lex->ssl_type= SSL_TYPE_NOT_SPECIFIED;
	  lex->ssl_cipher= lex->x509_subject= lex->x509_issuer= 0;
	  bzero((char *)&(lex->mqh),sizeof(lex->mqh));
	}
    break;

  case 1209:
#line 3724 "sql_yacc.yy"
    {}
    break;

  case 1210:
#line 3728 "sql_yacc.yy"
    {}
    break;

  case 1211:
#line 3729 "sql_yacc.yy"
    { Lex->grant = GLOBAL_ACLS;}
    break;

  case 1212:
#line 3730 "sql_yacc.yy"
    { Lex->grant = GLOBAL_ACLS;}
    break;

  case 1215:
#line 3737 "sql_yacc.yy"
    { Lex->which_columns = SELECT_ACL;}
    break;

  case 1216:
#line 3737 "sql_yacc.yy"
    {}
    break;

  case 1217:
#line 3738 "sql_yacc.yy"
    { Lex->which_columns = INSERT_ACL;}
    break;

  case 1218:
#line 3738 "sql_yacc.yy"
    {}
    break;

  case 1219:
#line 3739 "sql_yacc.yy"
    { Lex->which_columns = UPDATE_ACL; }
    break;

  case 1220:
#line 3739 "sql_yacc.yy"
    {}
    break;

  case 1221:
#line 3740 "sql_yacc.yy"
    { Lex->which_columns = REFERENCES_ACL;}
    break;

  case 1222:
#line 3740 "sql_yacc.yy"
    {}
    break;

  case 1223:
#line 3741 "sql_yacc.yy"
    { Lex->grant |= DELETE_ACL;}
    break;

  case 1224:
#line 3742 "sql_yacc.yy"
    {}
    break;

  case 1225:
#line 3743 "sql_yacc.yy"
    { Lex->grant |= INDEX_ACL;}
    break;

  case 1226:
#line 3744 "sql_yacc.yy"
    { Lex->grant |= ALTER_ACL;}
    break;

  case 1227:
#line 3745 "sql_yacc.yy"
    { Lex->grant |= CREATE_ACL;}
    break;

  case 1228:
#line 3746 "sql_yacc.yy"
    { Lex->grant |= DROP_ACL;}
    break;

  case 1229:
#line 3747 "sql_yacc.yy"
    { Lex->grant |= EXECUTE_ACL;}
    break;

  case 1230:
#line 3748 "sql_yacc.yy"
    { Lex->grant |= RELOAD_ACL;}
    break;

  case 1231:
#line 3749 "sql_yacc.yy"
    { Lex->grant |= SHUTDOWN_ACL;}
    break;

  case 1232:
#line 3750 "sql_yacc.yy"
    { Lex->grant |= PROCESS_ACL;}
    break;

  case 1233:
#line 3751 "sql_yacc.yy"
    { Lex->grant |= FILE_ACL;}
    break;

  case 1234:
#line 3752 "sql_yacc.yy"
    { Lex->grant |= GRANT_ACL;}
    break;

  case 1235:
#line 3753 "sql_yacc.yy"
    { Lex->grant |= SHOW_DB_ACL;}
    break;

  case 1236:
#line 3754 "sql_yacc.yy"
    { Lex->grant |= SUPER_ACL;}
    break;

  case 1237:
#line 3755 "sql_yacc.yy"
    { Lex->grant |= CREATE_TMP_ACL;}
    break;

  case 1238:
#line 3756 "sql_yacc.yy"
    { Lex->grant |= LOCK_TABLES_ACL; }
    break;

  case 1239:
#line 3757 "sql_yacc.yy"
    { Lex->grant |= REPL_SLAVE_ACL;}
    break;

  case 1240:
#line 3758 "sql_yacc.yy"
    { Lex->grant |= REPL_CLIENT_ACL;}
    break;

  case 1241:
#line 3763 "sql_yacc.yy"
    {}
    break;

  case 1242:
#line 3764 "sql_yacc.yy"
    {}
    break;

  case 1245:
#line 3774 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->x509_subject)
	  {
	    net_printf(&lex->thd->net,ER_DUP_ARGUMENT, "SUBJECT");
	    YYABORT;
	  }
	  lex->x509_subject=yyvsp[0].lex_str.str;
	}
    break;

  case 1246:
#line 3784 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->x509_issuer)
	  {
	    net_printf(&lex->thd->net,ER_DUP_ARGUMENT, "ISSUER");
	    YYABORT;
	  }
	  lex->x509_issuer=yyvsp[0].lex_str.str;
	}
    break;

  case 1247:
#line 3794 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->ssl_cipher)
	  {
	    net_printf(&lex->thd->net,ER_DUP_ARGUMENT, "CIPHER");
	    YYABORT;
	  }
	  lex->ssl_cipher=yyvsp[0].lex_str.str;
	}
    break;

  case 1248:
#line 3807 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->select->db=lex->thd->db;
	    if (lex->grant == GLOBAL_ACLS)
	      lex->grant = DB_ACLS & ~GRANT_ACL;
	    else if (lex->columns.elements)
	    {
	      send_error(&lex->thd->net,ER_ILLEGAL_GRANT_FOR_TABLE);
	      YYABORT;
	    }
	  }
    break;

  case 1249:
#line 3819 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->select->db = yyvsp[-2].lex_str.str;
	    if (lex->grant == GLOBAL_ACLS)
	      lex->grant = DB_ACLS & ~GRANT_ACL;
	    else if (lex->columns.elements)
	    {
	      send_error(&lex->thd->net,ER_ILLEGAL_GRANT_FOR_TABLE);
	      YYABORT;
	    }
	  }
    break;

  case 1250:
#line 3831 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    lex->select->db = NULL;
	    if (lex->grant == GLOBAL_ACLS)
	      lex->grant= GLOBAL_ACLS & ~GRANT_ACL;
	    else if (lex->columns.elements)
	    {
	      send_error(&lex->thd->net,ER_ILLEGAL_GRANT_FOR_TABLE);
	      YYABORT;
	    }
	  }
    break;

  case 1251:
#line 3843 "sql_yacc.yy"
    {
	    LEX *lex=Lex;
	    if (!add_table_to_list(yyvsp[0].table,NULL,0))
	      YYABORT;
	    if (lex->grant == GLOBAL_ACLS)
	      lex->grant =  TABLE_ACLS & ~GRANT_ACL;
	  }
    break;

  case 1252:
#line 3853 "sql_yacc.yy"
    { if (Lex->users_list.push_back(yyvsp[0].lex_user)) YYABORT;}
    break;

  case 1253:
#line 3855 "sql_yacc.yy"
    {
	    if (Lex->users_list.push_back(yyvsp[0].lex_user))
	      YYABORT;
	  }
    break;

  case 1254:
#line 3864 "sql_yacc.yy"
    {
	   yyval.lex_user=yyvsp[-3].lex_user; yyvsp[-3].lex_user->password=yyvsp[0].lex_str;
	   if (yyvsp[0].lex_str.length)
	   {
	     char *buff=(char*) sql_alloc(HASH_PASSWORD_LENGTH+1);
	     if (buff)
	     {
	       make_scrambled_password(buff,yyvsp[0].lex_str.str);
	       yyvsp[-3].lex_user->password.str=buff;
	       yyvsp[-3].lex_user->password.length=HASH_PASSWORD_LENGTH;
	     }
	  }
	}
    break;

  case 1255:
#line 3878 "sql_yacc.yy"
    { yyval.lex_user=yyvsp[-4].lex_user; yyvsp[-4].lex_user->password=yyvsp[0].lex_str ; }
    break;

  case 1256:
#line 3880 "sql_yacc.yy"
    { yyval.lex_user=yyvsp[0].lex_user; yyvsp[0].lex_user->password.str=NullS; }
    break;

  case 1257:
#line 3885 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  lex->grant |= lex->which_columns;
	}
    break;

  case 1261:
#line 3897 "sql_yacc.yy"
    {
	  String *new_str = new String((const char*) yyvsp[0].lex_str.str,yyvsp[0].lex_str.length);
	  List_iterator <LEX_COLUMN> iter(Lex->columns);
	  class LEX_COLUMN *point;
	  LEX *lex=Lex;
	  while ((point=iter++))
	  {
	    if (!my_strcasecmp(point->column.ptr(),new_str->ptr()))
		break;
	  }
	  lex->grant_tot_col|= lex->which_columns;
	  if (point)
	    point->rights |= lex->which_columns;
	  else
	    lex->columns.push_back(new LEX_COLUMN (*new_str,lex->which_columns));
	}
    break;

  case 1263:
#line 3917 "sql_yacc.yy"
    {
            Lex->ssl_type=SSL_TYPE_SPECIFIED;
          }
    break;

  case 1264:
#line 3921 "sql_yacc.yy"
    {
            Lex->ssl_type=SSL_TYPE_ANY;
          }
    break;

  case 1265:
#line 3925 "sql_yacc.yy"
    {
            Lex->ssl_type=SSL_TYPE_X509;
          }
    break;

  case 1266:
#line 3929 "sql_yacc.yy"
    {
	    Lex->ssl_type=SSL_TYPE_NONE;
	  }
    break;

  case 1267:
#line 3935 "sql_yacc.yy"
    {}
    break;

  case 1269:
#line 3939 "sql_yacc.yy"
    {}
    break;

  case 1270:
#line 3940 "sql_yacc.yy"
    {}
    break;

  case 1271:
#line 3943 "sql_yacc.yy"
    { Lex->grant |= GRANT_ACL;}
    break;

  case 1272:
#line 3945 "sql_yacc.yy"
    {
	  Lex->mqh.questions=yyvsp[0].ulong_num;
	  Lex->mqh.bits |= 1;
	}
    break;

  case 1273:
#line 3950 "sql_yacc.yy"
    {
	  Lex->mqh.updates=yyvsp[0].ulong_num;
	  Lex->mqh.bits |= 2;
	}
    break;

  case 1274:
#line 3955 "sql_yacc.yy"
    {
	  Lex->mqh.connections=yyvsp[0].ulong_num;
	  Lex->mqh.bits |= 4;
	}
    break;

  case 1275:
#line 3961 "sql_yacc.yy"
    { Lex->sql_command = SQLCOM_BEGIN;}
    break;

  case 1276:
#line 3961 "sql_yacc.yy"
    {}
    break;

  case 1277:
#line 3965 "sql_yacc.yy"
    {}
    break;

  case 1278:
#line 3966 "sql_yacc.yy"
    {;}
    break;

  case 1279:
#line 3969 "sql_yacc.yy"
    { Lex->sql_command = SQLCOM_COMMIT;}
    break;

  case 1280:
#line 3973 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_ROLLBACK;
	}
    break;

  case 1281:
#line 3977 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_ROLLBACK_TO_SAVEPOINT;
	  Lex->savepoint_name = yyvsp[0].lex_str.str;
	}
    break;

  case 1282:
#line 3983 "sql_yacc.yy"
    {
	  Lex->sql_command = SQLCOM_SAVEPOINT;
	  Lex->savepoint_name = yyvsp[0].lex_str.str;
	}
    break;

  case 1283:
#line 3994 "sql_yacc.yy"
    {}
    break;

  case 1285:
#line 3999 "sql_yacc.yy"
    {
	  LEX *lex=Lex;
	  if (lex->exchange)
	  {
	    /* Only the last SELECT can have  INTO...... */
	    net_printf(&lex->thd->net, ER_WRONG_USAGE,"UNION","INTO");
	    YYABORT;
	  }
	  if (lex->select->linkage == NOT_A_SELECT)
	  {
	    send_error(&lex->thd->net, ER_SYNTAX_ERROR);
	    YYABORT;
	  }
	  if (mysql_new_select(lex))
	    YYABORT;
	  lex->select->linkage=UNION_TYPE;
	}
    break;

  case 1286:
#line 4016 "sql_yacc.yy"
    {}
    break;

  case 1287:
#line 4020 "sql_yacc.yy"
    {}
    break;

  case 1288:
#line 4021 "sql_yacc.yy"
    {}
    break;

  case 1289:
#line 4027 "sql_yacc.yy"
    {}
    break;

  case 1290:
#line 4029 "sql_yacc.yy"
    {
    	    LEX *lex=Lex;
	    if (!lex->select->braces)
	    {
	      send_error(&lex->thd->net, ER_SYNTAX_ERROR);
	      YYABORT;
	    }
            if (lex->select != &lex->select_lex)
            {
	      if (mysql_new_select(lex))
	        YYABORT;
	      mysql_init_select(lex);
	      lex->select->linkage=NOT_A_SELECT;
	      lex->select->select_limit=lex->thd->variables.select_limit;
            }
	  }
    break;

  case 1292:
#line 4049 "sql_yacc.yy"
    {}
    break;

  case 1293:
#line 4050 "sql_yacc.yy"
    {}
    break;

  case 1294:
#line 4051 "sql_yacc.yy"
    { Lex->union_option=1; }
    break;


    }

/* Line 1000 of yacc.c.  */
#line 15709 "sql_yacc.cc"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

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
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
	  yychar = YYEMPTY;

	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

  yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
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



