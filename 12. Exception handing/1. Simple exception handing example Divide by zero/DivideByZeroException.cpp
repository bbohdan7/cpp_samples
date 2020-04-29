#include "DivideByZeroException.h"

DivideByZeroException::DivideByZeroException()
    :message("Trying to divide by zero") { }

const char *DivideByZeroException::what() const
{
    return message;
}
