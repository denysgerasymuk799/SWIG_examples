# SWIG_examples

## How to create python wrapper for c functions (./py_example)

### Approach 1

```
swig -python py_example.i
gcc -c -fpic *.c -I/usr/include/python3.8
gcc -shared *.o -o _py_example.so
```

### Approach 2

```
python setup.py build_ext --inplace
```

**Results for both approaches**
```
>>> import py_example
>>> res = py_example.fact(5)
>>> res
120
```


## How to create python wrapper for POC lab 2. C strings (./POC_lab2/my_string_lib)

```
swig -python my_str_lib.i
gcc -c -fpic *.c -I/usr/include/python3.8
gcc -shared *.o -o _my_str_lib.so
```

**Results**
```
>>> import my_str_lib
>>> a = my_str_lib.my_str_t
>>> my_str_lib.get_str_length("hello world!")
```


## How to create python wrapper for C++ functions (./swig_and_c_plus_plus)

```
swig -python -c++ my_pair.i
g++ -c -fpic my_pair_wrap.cxx -I/usr/include/python3.8
g++ -shared my_pair_wrap.o -o _my_pair.so
```

**Results**

```
>>> import my_pair
>>> a = my_pair.pairii(3,4)
>>> a.first
3
```