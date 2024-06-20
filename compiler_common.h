#ifndef COMPILER_COMMON_H
#define COMPILER_COMMON_H

#include <stdbool.h>
#include <stdint.h>

#define getBool(val) (*(int8_t*)&((val)->value))
#define getByte(val) (*(int8_t*)&((val)->value))
#define getChar(val) (*(int8_t*)&((val)->value))
#define getShort(val) (*(int16_t*)&((val)->value))
#define getInt(val) (*(int32_t*)&((val)->value))
#define getLong(val) (*(int64_t*)&((val)->value))
#define getFloat(val) (*(float*)&((val)->value))
#define getDouble(val) (*(double*)&((val)->value))
#define getString(val) (*(char**)&((val)->value))

#define asVal(val) (*(int64_t*)&(val))

typedef enum _objectType {
    OBJECT_TYPE_UNDEFINED = 0,
    OBJECT_TYPE_AUTO = 1,
    OBJECT_TYPE_VOID = 2,
    OBJECT_TYPE_CHAR = 3,
    OBJECT_TYPE_INT = 4,
    OBJECT_TYPE_LONG = 5,
    OBJECT_TYPE_FLOAT = 6,
    OBJECT_TYPE_DOUBLE = 7,
    OBJECT_TYPE_BOOL = 8,
    OBJECT_TYPE_STR = 9,
    OBJECT_TYPE_FUNCTION = 10,
    OBJECT_TYPE_BYTE = 11,
    OBJECT_TYPE_SHORT = 12,
} ObjectType;

typedef struct _symbolData {
    char* name;
    int32_t index;
    int64_t addr;
    int32_t lineno;
    char func_sig[30];
    uint8_t func_var;   // int 是因為直接丟enum進來，enum以int方式呈現
} SymbolData;

// TODO:finish the linkedlist 
typedef struct _linkedlist {
    ObjectType type;
    uint64_t value;
    SymbolData* symbol;
} LinkedList;

typedef struct _object {
    ObjectType type;
    uint32_t array;
    uint64_t value;
    uint8_t flag;
    SymbolData* symbol;
    LinkedList* arraySubscript;
    char* name;
} Object;




extern int yylineno;
extern int funcLineNo;

#endif /* COMPILER_COMMON_H */