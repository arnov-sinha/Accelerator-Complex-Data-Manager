# Accelerator-Complex-Data-Manager
OpenACC classes for aid in data movement in heterogeneous architectures.

# AccPointer.H

This class implementation is for replacing multiple pointer indirection allocations which are not handled efficiently on heterogeneous memory systems. 

It can be used for up to 3 layers ( *** ) of pointer indirection and supports rectangular or jagged array implementation.

Data transfer is supported with OpenACC directives and API calls.
