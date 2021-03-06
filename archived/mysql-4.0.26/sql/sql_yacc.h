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
/* Line 1275 of yacc.c.  */
#line 854 "y.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif





