#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Matrix
{
public:
	/**
	* Constructs a zero-matrix with given number of rows/columns
	* 
	* Default values for the # rows/cols are both 1, and the default values for the entries are 0.
	* 
	* @param nRows number of rows
	* @param nCols number of columns
	*/
	Matrix(int nRows = 1, int nCols = 1);
	/**
	* returns the size of the matrix (#Rows, #Cols) as a vector of length 2
	* 
	* @return {#Rows, #Cols}
	*/
	vector<int> size() const;
	/**
	* returns the copy of the entry at the position (i,j)
	* 
	* @return values[i][j]
	*/
	double at(int i, int j) const;
	/**
	* returns the reference to the entry at the position (i,j)
	* 
	* @return values[i][j] as a ref
	*/
	double& at(int i, int j);
	/**
	* checks if B has the same dimesion with A (implicit param)
	* 
	* @return true if the dimensions match
	*/
	bool isEqualDim(const Matrix& B) const;
	/**
	* returns a new matrix A+B
	* 
	* @param B a matrix to add
	* @return A+B
	*/
	Matrix add(const Matrix& B) const;
	/**
	* returns a new matrix A-B
	* 
	* @param B a matrix to subtract
	* @return A-B
	*/
	Matrix subtract(const Matrix& B) const;
	/**
	* returns a new matrix c*A
	* 
	* @param c a scalar to multiply to each entry of A
	* @return c*A
	*/
	Matrix scalarMultiplication(double c) const;
	/**
	* returns a new matrix A*B
	* 
	* @param B a matrix to multiply
	* @return A*B
	*/
	Matrix multiply(const Matrix& B) const;
	/**
	* Transposes the matrix
	* 
	* Internally, it just swaps the number of rows/columns, and changes the way "at" function works
	*/
	void transpose();
	/**
	* Prints the matrix to the console
	*/
	void print() const;
private:
	int num_rows, num_cols; // number of rows and columns
	vector<vector<double>> values; // stores the data as a 2-D matrix
	bool isTransposed; // true if A is transposed
};

int main() {
	int m = 4, n = 3; // num rows and num cols respectively
	Matrix A(m, n), B(n, n); // A*B is allowed, but A+B is not

	// B is a diagonal matrix, with 2's on the diagonal
	B.at(0, 0) = B.at(1, 1) = B.at(2, 2) = 2.0;

	// Initialize A with A[i][j] = i+j
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			A.at(i, j) = i + j;
		}
	}

	// Print both matrices
	cout << "A: " << endl;
	A.print();
	cout << "B: " << endl;
	B.print();


	Matrix C(m, n); // C has the same dimension with A
	// And values are initialized with C[i][j] = (i-1)*(j-1)
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			C.at(i, j) = (i-1) * (j-1);
		}
	}
	// Print C
	cout << "C: " << endl;
	C.print();

	// Print A+C, A+B, A*B, 1/4*A*B.
	// Some of them may print "Error: Dimensions must match!"

	cout << "A + C: " << endl;
	(A.add(C)).print();

	cout << "A + B: " << endl;
	(A.add(B)).print();

	cout << "A * B: " << endl;
	(A.multiply(B)).print();

	cout << "1/4 * A * B: " << endl;
	(A.scalarMultiplication(0.25).multiply(B)).print();

	// Transpose A (this changes A)
	cout << "A is now transposed: " << endl;
	A.transpose();
	A.print();

	// check the size of A
	vector<int> Asz = A.size();
	cout << "Size of A^T: (" << Asz[0] << ", " << Asz[1]  << ")" << endl << endl;


	cout << "B * A^T: " << endl;
	B.multiply(A).print();

	// Transpose A again (goes back to the original matrix)
	cout << "Transpose A again: " << endl;
	A.transpose();
	A.print();


	return 0;
}

Matrix::Matrix(int nRows, int nCols) : num_rows(nRows), num_cols(nCols), isTransposed(false) {
	values = vector<vector<double>>(nRows, vector<double>(nCols, 0));
}

vector<int> Matrix::size() const {
	return { num_rows, num_cols };
}
double& Matrix::at(int i, int j) {
	if (0 <= i && i < num_rows && 0 <= j && j < num_cols) {
		return  isTransposed ? values[j][i] : values[i][j];
	}
	else {
		cout << "Error: Enter a valid set of indices!" << endl;
		return values[0][0];
	}
}

double Matrix::at(int i, int j) const {
	if (0 <= i && i < num_rows && 0 <= j && j < num_cols) {
		return  isTransposed ? values[j][i] : values[i][j];
	}
	else {
		cout << "Error: Enter a valid set of indices!" << endl;
		return values[0][0];
	}
}
bool Matrix::isEqualDim(const Matrix& B) const {
	return (num_rows == B.num_rows) && (num_cols == B.num_cols);
}

Matrix Matrix::add(const Matrix& B) const {
	if (isEqualDim(B)) {
		Matrix C(num_rows, num_cols);
		for (int i = 0; i < num_rows; ++i) {
			for (int j = 0; j < num_cols; ++j) {
				C.at(i, j) = at(i, j) + B.at(i, j);
			}
		}
		return C;
	}
	else {
		cout << "Error: Dimensions must match!" << endl;
		return Matrix{};
	}
}

Matrix Matrix::subtract(const Matrix& B) const {
	if (isEqualDim(B)) {
		Matrix C(num_rows, num_cols);
		for (int i = 0; i < num_rows; ++i) {
			for (int j = 0; j < num_cols; ++j) {
				C.at(i, j) = at(i, j) - B.at(i, j);
			}
		}
		return C;
	}
	else {
		cout << "Error: Dimensions must match!" << endl;
		return Matrix{};
	}
}

Matrix Matrix::scalarMultiplication(double c) const {
	Matrix C(num_rows, num_cols);
	for (int i = 0; i < num_rows; ++i) {
		for (int j = 0; j < num_cols; ++j) {
			C.at(i, j) = c*at(i, j);
		}
	}
	return C;
}

Matrix Matrix::multiply(const Matrix& B) const {
	if (num_cols == B.num_rows) {
		Matrix C(num_rows, B.num_cols);
		for (int i = 0; i < num_rows; ++i) {
			for (int j = 0; j < B.num_cols; ++j) {
				for (int k = 0; k < num_cols; ++k) {
					C.at(i, j) += at(i, k) * B.at(k, j);
				}
			}
		}
		return C;
	}
	else {
		cout << "Error: Dimensions must match!" << endl;
		return Matrix{};
	}
}

void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}
void Matrix::transpose() {
	isTransposed = !isTransposed;
	swap(num_rows, num_cols);
}

void Matrix::print() const {
	int widthparam = 4;
	for (int i = 0; i < num_rows; ++i) {
		for (int j = 0; j < num_cols; ++j) {
			cout << setw(widthparam) << at(i, j) << " ";
		}
		cout << endl;
	}
	cout << endl;
}