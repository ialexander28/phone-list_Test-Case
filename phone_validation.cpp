#include <iostream>

int main()

{
double x;
double y;
double n;  

std::cout << "Enter the first 7 digits of a phone number " << '\n'; 
std::cin >> n; 



    int findMaxPosition(int array[], int arraySize){
    int maxPosition = 0;     //assume the first element is maximum
    for(int i = 1; i < arraySize; i++)
        if(array[i] > array[maxPosition]) //compare the current element with the known max
            maxPosition = i;   //update maxPosition
    return maxPosition;
}

}