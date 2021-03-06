#pragma once
#include "main.h"

typedef bool(*pCallback) (char * key, char * value, void * userdata);

char* strlower(char str[]);

bool parseCallback(char *key, char *value, void *userData);

bool checkValues(char * key, char * value, void * parameters);

bool charChecker(char * value);