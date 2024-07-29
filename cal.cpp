// cal.cpp
#include <pybind11/pybind11.h>

namespace py = pybind11;

int add(int x, int y)
{
    return x + y;
}

PYBIND11_MODULE(cal, m)
{
    m.def("add", &add, "A function which adds two numbers");
}