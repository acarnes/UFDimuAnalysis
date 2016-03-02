// Cut.h
// The base class for analysis cuts

#ifndef ADD_CUT
#define ADD_CUT

#include "VarSet.h"
#include "TString.h"

// Define the Interface
class Cut
{
    public:
        virtual bool evaluate(VarSet& vars) = 0;  // see whether the set of variables passes the cut
        virtual TString string() = 0;             // represent the cut as a tstring, may be used in ttree->Draw("...", cut)
                                                  // if possible
};

#endif