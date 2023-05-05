#include <iostream>
using namespace std;
class Matrix {
    private:
        int matrix[2][3];
    public:
        Matrix operator+(const Matrix &m) {
            Matrix sum;
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 3; j++) {
                    sum.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
                }
            }
            
            return sum;
        }
        
        int getElement(int row, int col) {
            return matrix[row][col];
        }
        
        void setElement(int row, int col, int value) {
            matrix[row][col] = value;
        }
};


Matrix operator+(const Matrix &m1, const Matrix &m2) {
    return m1 + m2;
}

int main(){
	Matrix mat1,mat2;
	int i;
	cout<<"Input Raw #1 of the Matrix #1:";
	for (i=0;i<=2;i++){
	    int value;
	    cin>>value;
	    mat1.setElement(0, i, value);
	}
	cout<<"Input Raw #2 of the Matrix #1:";
	for (i=0;i<=2;i++){
	    int value;
	    cin>>value;
	    mat1.setElement(1, i, value);
	}
	cout<<"Input Raw #1 of the Matrix #2:";
	for (i=0;i<=2;i++){
	    int value;
	    cin>>value;
	    mat2.setElement(0, i, value);
	}
	cout<<"Input Raw #2 of the Matrix #2:";
	for (i=0;i<=2;i++){
	    int value;
	    cin>>value;
	    mat2.setElement(1, i, value);
	}

	Matrix matSum = mat1 + mat2;
	cout<<"Result Matrix:"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<matSum.getElement(i, j)<<" ";
		}
		cout<<endl;
	}

	return 0;
}
