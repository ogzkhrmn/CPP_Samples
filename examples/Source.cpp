#include <iostream>

using namespace std;
/**
 * \brief 
 * \param a 
 * \param b 
 * \param c 
 * \return 
 */
int get_them(int a = 1, int b = 1, int c =1);

template <class T>
T maximum(T val1,T val2)
{
	T max = val1;
	return val1 + val2;
}


int mahhjkjin() {
	cout << maximum(1,2) << endl;
	cout << get_them(1) << endl;
	return 0;
}

/**
 * \brief 
 * \param a 
 * \param b 
 * \param c 
 * \return 
 */
int get_them(int a, int b, int c) {
	return a * b * c;
}
