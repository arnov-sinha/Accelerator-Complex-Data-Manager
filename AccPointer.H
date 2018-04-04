#ifndef _ACCPOINTER_H
#define _ACCPOINTER_H

#include "Precond.H" 
#include <vector>
#include <cstddef>
#if defined(_OPENACC)
#include <accel.h>
#endif

template <typename T, int nbDim>
class AccPointer
{
    AccPointer()
    {
        PRECOND(0);
    }
};
