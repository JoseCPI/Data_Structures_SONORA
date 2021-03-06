#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <string>
#include <vector>
using std::string;
using std::vector;


/**
    \brief Function that assigns memory to a pointer (double) that will further represent a matrix.
    \param rows The number of rows.
    \param rows The number of columns.
    \return A pointer to a double that represents the assigned matrix.
*/
double * makeMatrix( int rows, int cols );

/**
    \brief Function that takes two pointers that represent matrices, and then adds them.
    \param mat A pointer to a double that represents the first matrix.
    \param mat2 A pointer to a double that represents the second matrix.
    \param rows The number of rows.
    \param rows The number of columns.
    \return A pointer to a double that represents the result matrix.
*/
double * sumMatrices( double * mat1, double * mat2, int rows, int cols );


/**
    \brief Function that takes two pointers that represent matrices, and then subtracts them.
    \param mat A pointer to a double that represents the first matrix.
    \param mat2 A pointer to a double that represents the second matrix.
    \param rows The number of rows.
    \param rows The number of columns.
    \return A pointer to a double that represents the result matrix.
*/
double * subtractMatrices( double * mat1, double * mat2, int rows, int cols );


/**
    \brief Function that takes a matrix and a scalar for scalar product.
    \param mat A pointer to a double that represents the matrix.
    \param scalar The scalar (const double).
    \param rows The number of rows.
    \param rows The number of columns.
    \return A pointer to a double that represents the result matrix.
*/
double * scalarProduct( double * mat, const double scalar, int rows, int cols );


/**
    \brief Function that takes two pointers that represent matrices, and then multiplies them.
            Note: Both of them need to be square matrices.
    \param mat A pointer to a double that represents the first matrix.
    \param mat2 A pointer to a double that represents the second matrix.
    \param rows The number of rows.
    \param cols The number of columns.
    \return A pointer to a double that represents the result matrix.
*/
double * squareMatMult( double * mat, double * mat2, int rows, int cols );


/**
    \brief Function that takes two pointers that represent matrices, and then multiplies them.
    \param mat A pointer to a double that represents the first matrix.
    \param mat2 A pointer to a double that represents the second matrix.
    \param m The number of rows.
    \param n The number of columns.
    \param k The number of columns of the second matrix.
    \return A pointer to a double that represents the result matrix.
*/
double * matMultiplication( double * mat, double * mat2, int m, int n, int k );


/**
    \brief Function that prints a matrix (pointer to a double that represents it).
    \param mat A pointer to a double that represents the first matrix.
    \param rows The number of rows.
    \param rows The number of columns.
*/
void printMatrix( double * mat, int rows, int cols );


/**
    \brief Function that calculates the norm of a vector.
    \param vec A pointer to a double that represents the vector.
    \param numEntries The number of entries of the vector.
    \return The value of the norm of the vector.
*/
double normVector( double * vec, const unsigned short numEntries );


/**
    \brief Takes two rows from a matrix (which are two pointers to double) and interchanges its values.
    \param firstRow A pointer to a double that holds the first row to be interchanged.
    \param secondRow A pointer to a double that holds the second row to be interchanged.
    \param m An integer that holds the number of rows of the matrix.
    \param n An integer that holds the number of columns of the matrix.
*/
void changeRows( double * firstRow, double * secondRow, int m, int n );

void changeRowsBVec( double * bVec, int position );


/**
    \brief Function that gets the greatest absolute value of a column of pivots.
    \param col A pointer to a double that holds the location of the column.
    \param numIt The number of iterations, i.e. the elements of the column to be worked upon.
    \param n The dimension of the matrix.
    \return An integer that holds the number of the row with the greatest index.
*/
int partialPivot( double * col, int numIt, int n );


/**
    \brief Function that modifies the B vector provided for the LES.
    \param bVec A pointer to a double that represents the bVector.
    \param value The value of the multiplier.
    \param position The entry to be modified.
*/
void modifyBVec( double * bVec, double value, int position );


/**
    \brief Function that aids the reduce function, for solving LES.
    \param row A pointer to a double that holds the starting value of the row to be modified.
    \param n An integer that represents the length of the row to be modified.
    \return The value of the multiplier that will modify the bVector too.
*/
double makePivotOne( double * row, int n );



/**
    \brief Function that modifies the B vector provided for the LES.
    \param bVec A pointer to a double that represents the bVector.
    \param value The value of the addition.
    \param position The entry to be modified.
*/
void reduceBVec( double * bVec, double value, int position );


/**
    \brief Function that reduces a matrix to reduced row echelon form. It only works with squared matrices.
    \param mat A pointer to a double that represents the matrix.
    \param bVec A pointer to a double that holds the bVector needed.
    \param n, the dimension of the square matrix.
*/
void reduce( double * mat, double * bVec, int n );

/**
    \brief Function that reduces a column to zeros, except the pivot.
    \param row A pointer that holds the first row to be added.
    \param row2 A pointer that holds the second row, which will be modified.
    \param n An integer that holds the dimension of the matrix.
*/
double reduceColumn( double * row, double * row2, int n );


/**
    \brief Function that reads matrix data from a file, and constructs one with it.
    \param filename The location of the file, needs to have extension of it too.
    \return A pointer to a double that represents the matrix read.
*/
double * readMatrixFromFile( const char * filename, int & rows, int & cols );


/**
    \brief Function that writes a matrix to a .txt file.
    \param mat A pointer to a double that represents the matrix.
    \param rows The number of rows in the matrix.
    \param cols The number of columns in the matrix.
    \param filename The name of the file to be overwritten.
*/
void writeMatrixToFile( double * mat, int rows, int cols, const char * filename );


/**
    \brief A function that splits a string and stores the tokens inside a string vector.
    \param str The string to be split.
    \param sep The separating character, or stopword.
    \return A string vector with the tokens found.
*/
vector<string> split( string str, char sep );


/**
    \brief A function that converts a string to a double.
    \param str The string to be converted to a double.
    \return The double retrieved.
*/
double string2double( string str );


#endif // MATRIX_H_INCLUDED
