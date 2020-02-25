#include "GlobalArrayTest.h"

char* g_array[ARRAY_COUNT] = { (char*)"First", (char*)"Second", (char*)"Third" };
int g_cursor = 0;
std::thread::id g_thread = {};