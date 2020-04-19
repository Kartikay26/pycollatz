#include <pybind11/pybind11.h>
namespace py = pybind11;

#include "collatz.h"

PYBIND11_MODULE(pycollatz, m)
{
    m.doc() = "collatz c++ plugin";

    m.def("collatz", &collatz, "A function that returns the size of collatz sequence of n.");
}