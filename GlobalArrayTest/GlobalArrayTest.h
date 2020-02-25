#pragma once

#define ARRAY_COUNT 50
extern "C" char* g_array[ARRAY_COUNT];
extern "C" int g_cursor;

#include<thread>
extern "C" std::thread::id g_thread;