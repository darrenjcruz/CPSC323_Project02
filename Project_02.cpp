/*
    Program: Project 02
    Class: CPSC 323:
    Team Members: ...
*/

//Parse Table
{
    {{"id", 5},     {'+', NULL},    {'*', NULL},    {'(', 4},       {')', NULL},    {'$', NULL},    {'E', 1},       {'T', 2},       {'F', 3}},
    {{"id", NULL},  {'+', 6},       {'*', NULL},    {'(', NULL},    {')', NULL},    {'$', "acc"},   {'E', NULL},    {'T', NULL},    {'F', NULL}},
    {{"id", NULL},  {'+', "R2"},    {'*', 7},       {'(', NULL},    {')', "R2"},    {'$', "R2"},    {'E', NULL},    {'T', NULL},    {'F', NULL}},
    {{"id", NULL},  {'+', "R4"},    {'*', "R4"},    {'(', NULL},    {')', "R4"},    {'$', "R4"},    {'E', NULL},    {'T', NULL},    {'F', NULL}},
    {{"id", 5},     {'+', NULL},    {'*', NULL},    {'(', 4},       {')', NULL},    {'$', NULL},    {'E', 8},       {'T', 2},       {'F', 3}},
    {{"id", NULL},  {'+', "R6"},    {'*', "R6"},    {'(', NULL},    {')', "R6"},    {'$', "R6"},    {'E', NULL},    {'T', NULL},    {'F', NULL}},
    {{"id", 5},     {'+', NULL},    {'*', NULL},    {'(', 4},       {')', NULL},    {'$', NULL},    {'E', NULL},    {'T', 9},       {'F', 3}},
    {{"id", 5},     {'+', NULL},    {'*', NULL},    {'(', 4},       {')', NULL},    {'$', NULL},    {'E', NULL},    {'T', NULL},    {'F', 10}},
    {{"id", NULL},  {'+', 6},       {'*', NULL},    {'(', NULL},    {')', 11},      {'$', NULL},    {'E', NULL},    {'T', NULL},    {'F', NULL}},
    {{"id", NULL},  {'+', "R1"},    {'*', 7},       {'(', NULL},    {')', "R1"},    {'$', "R1"},    {'E', NULL},    {'T', NULL},    {'F', NULL}},
    {{"id", NULL},  {'+', "R3"},    {'*', "R3"},    {'(', NULL},    {')', "R3"},    {'$', "R3"},    {'E', NULL},    {'T', NULL},    {'F', NULL}},
    {{"id", NULL},  {'+', "R5"},    {'*', "R5"},    {'(', NULL},    {')', "R5"},    {'$', "R5"},    {'E', NULL},    {'T', NULL},    {'F', NULL}}
}

//Reduce Rules
#define R1 "E=E+T"
#define R2 "E=T"
#define R3 "T=T*F"
#define R4 "T=F"
#define R5 "F=(E)"
#define R6 "F=id"

//Output Format
"Step           Stack           Input           Action"
