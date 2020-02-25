// GlobalArrayTest.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include "GlobalArrayTest.h"
#include <iostream>

#pragma managed



ref class Class
{
public:
    void test()
    {
        System::Console::WriteLine("aaa");
    }
}

#pragma unmanaged

int main()
{
    g_thread = std::this_thread::get_id();
    auto t0 = std::this_thread::get_id();
    auto t1 = std::this_thread::get_id();
    auto b0 = &t0 == &t1;
    auto b1 = t0 == t1;
    //int id = (int)(g_thread);
    g_array[1] = (char*)"nyan";
    printf("%s\n", g_array[0]);
    printf("%s\n", g_array[1]);
    printf("%s\n", g_array[2]);
}
