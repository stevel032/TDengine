/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TDENGINE_TSQLDEF_H
#define TDENGINE_TSQLDEF_H

#define TK_ID                               1
#define TK_BOOL                             2
#define TK_TINYINT                          3
#define TK_SMALLINT                         4
#define TK_INTEGER                          5
#define TK_BIGINT                           6
#define TK_FLOAT                            7
#define TK_DOUBLE                           8
#define TK_STRING                           9
#define TK_TIMESTAMP                       10
#define TK_BINARY                          11
#define TK_NCHAR                           12
#define TK_OR                              13
#define TK_AND                             14
#define TK_NOT                             15
#define TK_EQ                              16
#define TK_NE                              17
#define TK_ISNULL                          18
#define TK_NOTNULL                         19
#define TK_IS                              20
#define TK_LIKE                            21
#define TK_GLOB                            22
#define TK_BETWEEN                         23
#define TK_IN                              24
#define TK_GT                              25
#define TK_GE                              26
#define TK_LT                              27
#define TK_LE                              28
#define TK_BITAND                          29
#define TK_BITOR                           30
#define TK_LSHIFT                          31
#define TK_RSHIFT                          32
#define TK_PLUS                            33
#define TK_MINUS                           34
#define TK_DIVIDE                          35
#define TK_TIMES                           36
#define TK_STAR                            37
#define TK_SLASH                           38
#define TK_REM                             39
#define TK_CONCAT                          40
#define TK_UMINUS                          41
#define TK_UPLUS                           42
#define TK_BITNOT                          43
#define TK_SHOW                            44
#define TK_DATABASES                       45
#define TK_MNODES                          46
#define TK_DNODES                          47
#define TK_ACCOUNTS                        48
#define TK_USERS                           49
#define TK_MODULES                         50
#define TK_QUERIES                         51
#define TK_CONNECTIONS                     52
#define TK_STREAMS                         53
#define TK_CONFIGS                         54
#define TK_SCORES                          55
#define TK_GRANTS                          56
#define TK_DOT                             57
#define TK_TABLES                          58
#define TK_STABLES                         59
#define TK_VGROUPS                         60
#define TK_DROP                            61
#define TK_TABLE                           62
#define TK_DATABASE                        63
#define TK_DNODE                           64
#define TK_IPTOKEN                         65
#define TK_USER                            66
#define TK_ACCOUNT                         67
#define TK_USE                             68
#define TK_DESCRIBE                        69
#define TK_ALTER                           70
#define TK_PASS                            71
#define TK_PRIVILEGE                       72
#define TK_LOCAL                           73
#define TK_IF                              74
#define TK_EXISTS                          75
#define TK_CREATE                          76
#define TK_PPS                             77
#define TK_TSERIES                         78
#define TK_DBS                             79
#define TK_STORAGE                         80
#define TK_QTIME                           81
#define TK_CONNS                           82
#define TK_STATE                           83
#define TK_KEEP                            84
#define TK_CACHE                           85
#define TK_REPLICA                         86
#define TK_DAYS                            87
#define TK_ROWS                            88
#define TK_ABLOCKS                         89
#define TK_TBLOCKS                         90
#define TK_CTIME                           91
#define TK_CLOG                            92
#define TK_COMP                            93
#define TK_PRECISION                       94
#define TK_LP                              95
#define TK_RP                              96
#define TK_TAGS                            97
#define TK_USING                           98
#define TK_AS                              99
#define TK_COMMA                          100
#define TK_NULL                           101
#define TK_SELECT                         102
#define TK_FROM                           103
#define TK_VARIABLE                       104
#define TK_INTERVAL                       105
#define TK_FILL                           106
#define TK_SLIDING                        107
#define TK_ORDER                          108
#define TK_BY                             109
#define TK_ASC                            110
#define TK_DESC                           111
#define TK_GROUP                          112
#define TK_HAVING                         113
#define TK_LIMIT                          114
#define TK_OFFSET                         115
#define TK_SLIMIT                         116
#define TK_SOFFSET                        117
#define TK_WHERE                          118
#define TK_NOW                            119
#define TK_INSERT                         120
#define TK_INTO                           121
#define TK_VALUES                         122
#define TK_RESET                          123
#define TK_QUERY                          124
#define TK_ADD                            125
#define TK_COLUMN                         126
#define TK_TAG                            127
#define TK_CHANGE                         128
#define TK_SET                            129
#define TK_KILL                           130
#define TK_CONNECTION                     131
#define TK_COLON                          132
#define TK_STREAM                         133
#define TK_ABORT                          134
#define TK_AFTER                          135
#define TK_ATTACH                         136
#define TK_BEFORE                         137
#define TK_BEGIN                          138
#define TK_CASCADE                        139
#define TK_CLUSTER                        140
#define TK_CONFLICT                       141
#define TK_COPY                           142
#define TK_DEFERRED                       143
#define TK_DELIMITERS                     144
#define TK_DETACH                         145
#define TK_EACH                           146
#define TK_END                            147
#define TK_EXPLAIN                        148
#define TK_FAIL                           149
#define TK_FOR                            150
#define TK_IGNORE                         151
#define TK_IMMEDIATE                      152
#define TK_INITIALLY                      153
#define TK_INSTEAD                        154
#define TK_MATCH                          155
#define TK_KEY                            156
#define TK_OF                             157
#define TK_RAISE                          158
#define TK_REPLACE                        159
#define TK_RESTRICT                       160
#define TK_ROW                            161
#define TK_STATEMENT                      162
#define TK_TRIGGER                        163
#define TK_VIEW                           164
#define TK_ALL                            165
#define TK_COUNT                          166
#define TK_SUM                            167
#define TK_AVG                            168
#define TK_MIN                            169
#define TK_MAX                            170
#define TK_FIRST                          171
#define TK_LAST                           172
#define TK_TOP                            173
#define TK_BOTTOM                         174
#define TK_STDDEV                         175
#define TK_PERCENTILE                     176
#define TK_APERCENTILE                    177
#define TK_LEASTSQUARES                   178
#define TK_HISTOGRAM                      179
#define TK_DIFF                           180
#define TK_SPREAD                         181
#define TK_TWA                            182
#define TK_INTERP                         183
#define TK_LAST_ROW                       184
#define TK_SEMI                           185
#define TK_NONE                           186
#define TK_PREV                           187
#define TK_LINEAR                         188
#define TK_IMPORT                         189
#define TK_METRIC                         190
#define TK_TBNAME                         191
#define TK_JOIN                           192
#define TK_METRICS                        193
#define TK_STABLE                         194

#endif


