#include <iostream>

using namespace std;

int main()
{
    int row, col;
    cout<<"Enter the row size:\n";
    cin>>row;
    cout<<"Enter the column size:\n";
    cin>>col;
    char ** twod = new char*[row];
    for(int i=0; i<row; i++)
    {
        twod[i] = new char[col];
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>twod[i][j];
        }

    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<twod[i][j]<<" ";
        }

        cout<<"\n";

    }

    for(int i=0; i<row; i++)
    {

        delete[] twod[i];

    }
    delete[]twod;



    return 0;
}
//#include <iostream>
//using namespace std;
//
//int main() {
//    int rows, cols;
//
//     Ask the user for the number of rows and columns
//    cout << "Enter the number of rows: ";
//    cin >> rows;
//    cout << "Enter the number of columns: ";
//    cin >> cols;
//
//     Dynamically allocate a 2D character array
//    char** arr = new char*[rows];
//    for (int i = 0; i < rows; i++) {
//        arr[i] = new char[cols];
//    }
//
//     Take input for each string
//    cout << "Enter the strings (one for each row):\n";
//    cin.ignore(); // Ignore any leftover newline from previous input
//    for (int i = 0; i < rows; i++) {
//        cin.getline(arr[i], cols);
//    }
//
//     Print the strings
//    cout << "The entered strings are:\n";
//    for (int i = 0; i < rows; i++) {
//        cout << arr[i] << endl;
//    }
//
//     Deallocate the memory
//    for (int i = 0; i < rows; i++) {
//        delete[] arr[i];
//    }
//    delete[] arr;
//
//    return 0;
//}
//
