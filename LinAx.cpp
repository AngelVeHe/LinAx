#include "LinAx.hpp"

using namespace std;

// Matrix functions
template<class T> Matrix<T>::Matrix(uint64_t r, uint64_t c): rows(r), cols(c)
{
    data = vector<T> (rows * cols, (T) 0);
};


    
//Vector funcionts

template<class T> Vector<T>::Vector(uint64_t n): n(dim)
{
    data.resize(n, (T) 0);
}