#ifndef LINAX_HPP
#define LINAX_HPP


#include <vector>
#include <cinttypes>

using namespace std;


template <typename T> class Matrix
{
private:
    u_int64_t rows;
    u_int64_t cols;
    vector<T> data; 





public:
    Matrix(uint64_t r, uint64_t c); 



};

template <typename T> class Vector
{
private:
    u_int64_t n;
    vector<T> data;

private:
    Vector(uint64_t dim);
    
    Vector operator+(Vector<T> v)
    {
        Vector(dim) w;
    }


};



#endif