// Author: Pierce Brooks

#include <Foo.hpp>
#include <You.hpp>
#include <string>
#include <iostream>
#include <cstdlib>

int main(int argc, char** argv)
{
    Foo* foo;
    std::string arg;
    int num;
    for (int i = 0; i != argc; ++i)
    {
        arg = std::string(argv[i]);
        num = atoi(arg.c_str());
        foo = new Foo(num);
        std::cout << i << ": \"" << arg << "\" -> " << num << " = ";
        std::cout << *foo;
        std::cout << std::endl;
        delete foo;
    }
    return 0;
}
