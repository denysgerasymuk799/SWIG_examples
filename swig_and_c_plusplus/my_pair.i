// pair.i - SWIG interface
%module my_pair
%{
#include "my_pair.h"
%}

// Ignore the default constructor
%ignore std::pair::pair();

// Parse the original header file
%include "my_pair.h";

// Instantiate some templates

%template(pairii) std::my_pair<int,int>;
%template(pairdi) std::my_pair<double,int>;