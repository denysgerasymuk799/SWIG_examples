// target function:
//      double rms(double* seq, int n);
// Returns the root mean square

// To obtain the Python interface for rms(), your SWIG interface file would need the following
%{
#define SWIG_FILE_WITH_INIT
#include "rms.h"
%}

%include "numpy.i"

%init %{
import_array();
%}

// SWIG allows these types of conversions to be defined via a mechanism called typemaps.
// double* argument is an input array of one dimension and
// that the int represents the size of that dimension.
// This is precisely the pattern in the rms prototype.
%apply (double* IN_ARRAY1, int DIM1) {(double* seq, int n)}; // apply the typemap to the actual prototype used by rms.
%include "rms.h"