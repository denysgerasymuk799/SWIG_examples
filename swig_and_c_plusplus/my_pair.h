// pair.h.  A pair like the STL
namespace std {
	template<class T1, class T2> struct my_pair {
		T1 first;
		T2 second;
		my_pair() : first(T1()), second(T2()) { };
		my_pair(const T1 &f, const T2 &s) : first(f), second(s) { }
	};
}