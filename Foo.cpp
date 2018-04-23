// Author: Pierce Brooks

#include <Foo.hpp>

Foo::Foo(int bar) :
    bar(bar)
{

}

int Foo::getBar() const
{
    return this->bar;
}
