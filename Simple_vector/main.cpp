//
//  main.cpp
//  HW_1_Vectors
//
//  Created by bryce soto on 2/18/17.
//  Copyright © 2017 Bryce soto. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void readData(vector<int>& input);
void printVector(vector<int> V);
void selectionSort(vector<int>& V);

int main() {
    vector<int> test;
    
    readData(test);
    selectionSort(test);
    printVector(test);
    
    return 0;
}

void readData(vector<int>& input){
    
    int number;
    
    cout << "Hello, please enter some numbers(press '*' and then enter to stop):";
    while(cin >> number && number != '*'){
        cout << number << "is being put into the vector\n";
        input.push_back(number);
    }
    cout << " everything is in vector \n";
    // selectionSort(input);
    //printVector(input);
    
    
}

void printVector(vector<int> V){
    
    // vector<int> Vector = V;
    for (int i =0; i<V.size(); i++){
        cout <<V[i]<< endl;
    }
    
}

void selectionSort(vector<int>& input){
    //vector<int> input= V;
    int first, temp;
    int size = input.size();
    for(int i =size-1; i >0; --i){
        first = 0;
        for(int j=1; j<=i; ++j){
            if (input[j] > input[first]){
                first = j;
            }
            temp = input[first];
            input[first] =input[i];
            input[i] = temp;
        }
    }
    
}
