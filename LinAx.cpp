#include "LinAx.hpp"

using namespace std;

// Matrix functions
template<class T> Matrix<T>::Matrix(uint64_t r, uint64_t c): rows(r), cols(c), data (r * c)
{};


/**
 * @brief Matrix reading function assuming ColMajor and ColumnFormat with headers of Rows and Cols
 * @param path .txt file
 * 
 * @return A Matrix
 */
template<class T>  Matrix<T> readMatrix(const string& path)
{

    // Open file
    ifstream file(path);
    if (!file.is_open()) {
        throw runtime_error("Cannot read file " + path);
    }

    // Read cols and rows
    int r, c;
    if(!(file >> r >> c)) {
        throw runtime_error("Invalid header format");
    }

    //Matrix creation
    Matrix<T> M(r, c);

    for (uint64_t j = 0; j < c; ++j) {
        for (uint64_t i = 0; i < r; ++i) {
            T value;
            if (file >> value) {
                M(i, j) = value;
            } else {
                throw runtime_error("Unexpected end of file");
            }
        }
    }
    
    return M;
}




    
//Vector funcionts
template<class T> Vector<T>::Vector(uint64_t n): data(n, 0)
{}




template class Matrix<float>;
template class Matrix<double>;
template Matrix<float> readMatrix<float>(const string&);
template Matrix<double> readMatrix<double>(const string&);
