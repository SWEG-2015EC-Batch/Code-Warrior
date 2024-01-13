#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "How many Data do you want? n*m = ";
    cin >> n >>m;
    
    int data[n][m];
    cout << "Enter the data for " << n << " rows and " << m << " columns:\n";
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Row " << i + 1 << ", Column " << j + 1 << ": ";
            cin >> data[i][j];
        }
    }
    
    cout << "\nThe enterred Datas" << "\t\t" << "The ROWS Product\n";
    int totalProduct = 1;
    for (int i = 0; i < n; i++) {
        int rowProduct = 1;
        for (int j = 0; j < m; j++) {
            cout << data[i][j] << "\t";
            rowProduct *= data[i][j];
        }
        cout <<"\t\t" <<rowProduct << endl;
        totalProduct *= rowProduct;
    } 
    cout << "\nThe Total product of the ROWS: ";
    cout << totalProduct << endl;
    
    cout << "The Sum of the COLUMNS: ";
    int columnSum = 0;
    for (int j = 0; j < m; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += data[i][j];
        }
        cout << colSum << " + ";
        columnSum += colSum;
    }
    cout << "0 = " << columnSum << endl;
    
    return 0;
}
