# ifndef PUSH_SWAP_DEF_TYPES_H
# define PUSH_SWAP_DEF_TYPES_H

# define uint unsigned int
# define size_t long uint
# define __RAND_MAX__ 100

union var
{
    long double ld;     // 10
    double d;           // 8
    float f;            // 4
    unsigned long ul;   // 8
    long l;             // 8x64;4x32
    unsigned int ui;    // 2;4
    int i;              // 4
    unsigned short us;  // 2
    short s;            // 2
    unsigned char uc;   // 1
    signed char sc;     // 1
    char c;             // 1
};

typedef struct  s_stack
{
    int             num;
    struct s_stack  *next;
}               t_stack;

typedef enum e_Boolean
{
    false = 0,
    true = 1
}   bool;

typedef enum e_ExceptionMessage
{
    DoesNotExists,
}   t_errmsg;

typedef enum e_ExceptionLevel
{
    NonCritical, 
    Critical
}   t_errlvl;

# endif