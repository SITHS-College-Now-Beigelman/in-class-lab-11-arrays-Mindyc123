//Mindy Chen
//11.12.24
//Lab 11

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 50;
   	double alpha[ARRAY_SIZE];
    int i;
    int index;
    int sum;
    double average;
    int element;
    //variable names

    for (i=0; i <25; i++)
    {
    alpha [i];
    alpha [i]= i*i;
    }
    //In the array, numbers 0-49 is equal to the component squared 

    for (i=25; i < 50; i++)
    {
    alpha [i];
    alpha [i]= 3 * i;
    }
    //In the array, numbers 0-49 is equal to the component times 3

    
    for (i = 0 ; i < 50; i++)
        {
        cout << alpha [i] << " ";
    if (((i == 9) || (i == 19) || (i == 29) || (i == 39) || (i == 49)))
        cout <<endl;
        }

    srand(time(0));
    int direct;
    direct = rand() % 100 + 1;

    for (index = 0; index < 50; index++)
    { 
        alpha [index] = rand() % 100 + 1;
        sum = sum + alpha[index];
        
        if ( alpha [index] == 100 )
            element = element + 1;
    }

    for (index = 0 ; index < 50; index++)
        {
        cout << alpha [index] << " ";
    if (((index == 9) || (index == 19) || (index == 29) || (index == 39) || (index == 49)))
        cout <<endl;
        }

        average = sum / 50;

        cout << "The average is " << fixed << setprecision(2) << average <<endl;
        cout << "There are " << element << " elements equal to 100" <<endl;


    return 0;
}
/*
0 1 4 9 16 25 36 49 64 81 
100 121 144 169 196 225 256 289 324 361
400 441 484 529 576 75 78 81 84 87
90 93 96 99 102 105 108 111 114 117
120 123 126 129 132 135 138 141 144 147
99 88 67 2 20 57 87 35 27 58
42 67 28 72 8 44 17 35 51 47
100 3 75 84 45 96 35 37 11 91
12 10 28 31 12 20 90 12 46 60
84 59 88 15 65 90 45 84 11 65
The average is 49.00
There are 1 elements equal to 100
*/