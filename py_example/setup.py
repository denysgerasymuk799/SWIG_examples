from distutils.core import setup, Extension


example_module = Extension('_py_example', sources=['py_example.c', 'py_example.i'])

setup(name='py_example', ext_modules=[example_module], py_modules=["py_example"])
