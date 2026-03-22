#ifndef LINAX_HPP
#define LINAX_HPP


#include <vector>
#include <cinttypes>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;


template <class T> class Matrix
{
private:
    u_int64_t rows;
    u_int64_t cols;
    vector<T> data; 

    


public:
    Matrix(uint64_t r, uint64_t c); 

    //Escritura
    inline T& operator()(uint64_t r, uint64_t c) {return data[rows * c + r];}
    inline const T& operator()(uint64_t r, uint64_t c) const {return data[rows * c + r];}
    
    friend ostream& operator<<(ostream& os, const Matrix<T>& M)
    {
        
        for (uint64_t i = 0; i < M.rows; ++i) {
            for (uint64_t j = 0; j < M.cols; ++j) {
                os << M(i, j) << " ";
            }
            os << "\n";
        }
        return os;
        }

    
};

template <typename T> class Vector
{
private:
    u_int64_t n;
    vector<T> data;

private:
    Vector(uint64_t dim);
    

};



template<class T>  Matrix<T> readMatrix(const string& path);



#endif