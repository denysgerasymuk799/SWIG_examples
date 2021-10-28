PyObject *_wrap_rms(PyObject *args) {
    PyObject *resultobj = 0;
    double *arg1 = (double *) 0 ;
    int arg2 ;
    double result;
    PyArrayObject *array1 = NULL ;
    int is_new_object1 = 0 ;
    PyObject * obj0 = 0 ;

    // Line 13 parses the input to the rms function.
    // From the format string "O:rms", we can see that the argument list is expected to be a single Python object
    // (specified by the O before the colon) and whose pointer is stored in obj0.
    if (!PyArg_ParseTuple(args,(char *)"O:rms",&obj0)) SWIG_fail;
    {
        // The typemaps from numpy.i are responsible for the following lines of code: 17–25, 30 and 35
        // Line 17: use obj0 to construct a NumPy array
        array1 = obj_to_array_contiguous_allow_conversion(
                             obj0, NPY_DOUBLE, &is_new_object1);
        npy_intp size[1] = {
          -1
        };
        // we check the validity of the result: that it is non-null and that it has a single dimension of arbitrary length.
        if (!array1 || !require_dimensions(array1, 1) ||
                       !require_size(array1, size, 1)) SWIG_fail;

        // extract the data buffer and length
        arg1 = (double*) array1->data;
        arg2 = (int) array1->dimensions[0];
    }
    // call the underlying C function
    result = (double)rms(arg1,arg2);
    resultobj = SWIG_From_double((double)(result));
    {
        // performs memory management for the case where we have created a new array that is no longer needed
        if (is_new_object1 && array1) Py_DECREF(array1);
    }
    return resultobj;
    fail:
      {
        // for SWIG_fail memory is still managed correctly
        if (is_new_object1 && array1) Py_DECREF(array1);
      }
    return NULL;
}