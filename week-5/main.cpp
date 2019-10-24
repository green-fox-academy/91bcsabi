#include <iostream>
#include<vector>
using namespace std;



//looking for second max (Part 1)
int searchMax(vector<int> input){
    int maxSoFar = input[0];
    for (int i = 0; i < input.size(); ++i) {
        if(input[i] > maxSoFar) {
            maxSoFar = input[i];
        }
    }
    return maxSoFar;
}


//looking for maximumIndex (Part 2)
int searchMaxIndex(vector<int> input){
    int maxSoFar = input[0];
    int maxIndexSoFar = 0;

    for (int i = 0; i < input.size(); ++i) {
        if(input[i] > maxSoFar) {
            maxSoFar = input[i];
            maxIndexSoFar = i;
        }
    }
    return maxIndexSoFar;
}


/*
// Define is_palindrome() here:
bool is_palindrome(string text) {

    string reversed_text = "";

    for (int i = text.size() - 1; i >= 0; i--) {
        reversed_text += text[i];
    }

    if (reversed_text == text) {
        cout << "True \n";
        return true;
    }
    cout << "False \n";
    return false;

}
*/
int main() {

    //looking for max
    vector<int> maxSearchInput = { 2, 11, 5, 23, 7 };
    int max = searchMax(maxSearchInput);
    cout << "max: " << max << endl;

    //looking for maxnumber index
    int maxIndex = searchMaxIndex(maxSearchInput);
    cout << "max index: " << maxIndex << endl;

    //looking for second max ( Part 2)
    maxSearchInput.erase(maxSearchInput.begin() + maxIndex);
    int secondMax = searchMax(maxSearchInput);
    cout << "second max: " << secondMax << endl;


/*


    //BUBBLE SORT

    vector<int> toSort = {1, 5, 42, 3, 4, 2};

    bool ready = false;
    while(! ready){
        ready = true;
        for (int i = 0; i <toSort.size()-1 ; ++i) { // IMPORTANT -1 Eggyel kevesebb ha megvan a legmagasabb
            if( toSort[i] > toSort[i+1]){
                int temp = toSort[i+1];
                toSort[i+1] = toSort[i];
                toSort[i] = temp;
                ready = false;
            }
        }
    }
    for (int j = 0; j < toSort.size(); ++j) {
        cout << toSort[j] << ",";
    }


    //PALINDROME CASE
        is_palindrome("madam");
        is_palindrome("ada") ;
        is_palindrome("lovelace") ;

        //BONUS EXCERCICE

std::vector<std::vector<int>> transposeMatrix(std::vector<std::vector<int>> input){
    std::vector<std::vector<int>> output(3, std::vector<int>(3, 0));
    for (int i = 0; i < input.size(); ++i) {
        for (int j = 0; j < input.size(); ++j) {
            output[i][j] = input[j][i];
        }
    }
    return output;
}

void outputMatrix(std::vector<std::vector<int>> matrix){
    for (int i = 0; i < matrix.size(); ++i) {
        std::cout << "[ ";
        for (int j = 0; j < matrix.size(); ++j) {
            std::cout << matrix[i][j];
            if(j < matrix.size()-1) std::cout << ", ";
        }
        std::cout << " ]" << std::endl;
    }
}


int main() {

    std::vector<std::vector<int>> matrix(3, std::vector<int>(3, 0));

    matrix[0][0] = 1;
    matrix[0][1] = 3;
    matrix[2][1] = 8;
    matrix[1][2] = -5;

    outputMatrix(matrix);

    std::cout << std::endl;

    outputMatrix(transposeMatrix(matrix));

    int size = 3;
    std::vector<std::vector<int>> test;
    std::vector<int> row;
    for (int i = 0; i < size; ++i) {
        row.push_back(0);
    }
    for (int i = 0; i < size; ++i) {
        test.push_back(row);
    }


*/
    return 0;
}