// Lab10GraphsDLL.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Lab10GraphsDLL.h"


// This is an example of an exported variable
LAB10GRAPHSDLL_API int nLab10GraphsDLL=0;

// This is an example of an exported function.
LAB10GRAPHSDLL_API int fnLab10GraphsDLL(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CLab10GraphsDLL::CLab10GraphsDLL()
{
    return;
}
