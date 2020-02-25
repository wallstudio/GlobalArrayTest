
#include <iostream>

#pragma unmanaged
void _test()
{
    printf("cccc\n");
}

#pragma managed



ref class Class
{
public:
    void test()
    {
        _test();
        System::Console::WriteLine("aaa");
    }
};

//#pragma unmanaged

int main()
{
    printf("bbbbb\n");
    auto c = gcnew Class();
    c->test();

    char s[1];
    scanf_s(s, 1);
}
