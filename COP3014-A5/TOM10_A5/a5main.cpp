// a5main.cpp
// Tyler O. Moses
// 10/18/17
// 1.123581321
// File to prove that Arrays are cool. Which they are but not as cool as Red Black BST's!

// THIS CODE COMPILES AS IS - I RECOMMEND SAVING YOUR PROGRESS REGULARLY.
// EVEN IF YOU DO NOT COMPLETE A FUNCTION BEFORE TURNING IT IN IT WILL
//  STILL COMPILE. IF YOU COMPLETE 99% OF THE FUNCTIONALITY AND THEN
//  CREATE AN ERROR THAT WON'T COMPILE YOU WILL GET A 0% GRADE.

#include <iostream>

// Function Prototypes
// ancillary functions
void SeedRand(int x);
int getRand(int min, int max);
double fToC(double f);

// Array testing
void InitializeArray(int a[], int arraySize);
void PrintArray(int a[], int arraySize);
bool Contains(int a[], int arraySize, int testVal);
void BubbleSort(int a[], int arraySize);
int SumArray(int a[], int arraySize);
int Largest(int a[], int arraySize);
int Smallest(int a[], int arraySize);
double Average(int a[], int arraySize);
void ReverseArray(int a[], int arraySize);

// multi-dimensional arrays
void InitializeTemperatures(double ma[][2], int xSize);
void PrintArray(double ma[][2], int xSize);

// DO NOT REMOVE THESE COMMENTS -- comments that start with @ are actually
// commands to the assessment tool.
//@include(main)
//@addRule(commentAll)
int main()
{
  // This entire main() function will be deleted
  // during the assessment and replaced with
  // another main() function that tests your code.
  
  // Develop code here to test your functions
  // You may use std::cout in any tests you develop
  // DO NOT put std::cout statements in any of the
  // provided function skeletons unless specificaly asked for
  
  // Here is a quick array to get you started.
  // This size may change!
  // Make sure your functions work for any array size.
  const int ARRAY_SIZE = 20;
  int a[ARRAY_SIZE];
  // Start here
  // Call your functions and test their output
  // Here is an example
  SeedRand(0); // Only call this ONCE
  InitializeArray(a, ARRAY_SIZE);
  std::cout << "My array=";
  PrintArray(a, ARRAY_SIZE);
  std::cout << "\n";
  // Did it work?
  std::cout << "\n==============================\n";
  std::cout << "\nSUM Test\n";
  std::cout << "\n==============================\n";
  std::cout << "\nSum: " << SumArray(a, ARRAY_SIZE);
  
  std::cout << "\n==============================\n";
  std::cout << "\nContains Test\n";
  std::cout << "\n==============================\n";
  std::cout << "\nContains a[n - 1] (true): " << Contains(a, ARRAY_SIZE, a[ARRAY_SIZE - 1]) << "\n";
  std::cout << "\nContains sum (false) " << Contains(a, ARRAY_SIZE, SumArray(a, ARRAY_SIZE)) << "\n";
  
  std::cout << "\n==============================\n";
  std::cout << "\nMin and Max Test\n";
  std::cout << "\n==============================\n";
  std::cout << "\nMin: " << Smallest(a, ARRAY_SIZE) << "\n";
  std::cout << "\nMax: " << Largest(a, ARRAY_SIZE) << "\n";
  
  std::cout << "\n==============================\n";
  std::cout << "\nAverage Test\n";
  std::cout << "\n==============================\n";
  std::cout << "\nMin: " << Average(a, ARRAY_SIZE) << "\n";
  
  std::cout << "\n==============================\n";
  std::cout << "\nBubble Sort Test\n";
  std::cout << "\n==============================\n";
  BubbleSort(a, ARRAY_SIZE);
  PrintArray(a, ARRAY_SIZE);
  std::cout << "\n";
  
  std::cout << "\n==============================\n";
  std::cout << "\nReverse Test\n";
  std::cout << "\n==============================\n";
  ReverseArray(a, ARRAY_SIZE);
  PrintArray(a, ARRAY_SIZE);
  std::cout << "\n";
  
  std::cout << "\n==============================\n";
  std::cout << "\nMatrix Test\n";
  std::cout << "\n==============================\n";
  double ma[ARRAY_SIZE][2];
  InitializeTemperatures(ma, ARRAY_SIZE);
  PrintArray(ma, ARRAY_SIZE);
  std::cout << "\n\n\n";
  
  std::cout << "Press ENTER";
  std::cin.ignore();
  std::cin.get();
  return 0;
}
// DO NOT REMOVE THESE COMMENTS -- these comments are actually
// commands to the assessment tool.
//@removeRule(commentAll)



// Implement all of the following functions
// DO NOT put any std::cout statements unless directly specified
// DO NOT change their signatures

void SeedRand(int x)
{
  // Seed the random number generator with x
  srand(x);
}

int getRand(int min, int max)
{
  return ( rand() % (max - min + 1) ) + min;
}

double fToC(double f)
{
  return (f - 32) / 1.8;
}

void InitializeArray(int a[], int arraySize)
{
  // Develop an algorithm that inserts random numbers
  // between 1 and 100 into a[]
  // hint: use rand()
  int random;
  for(int  i = 0; i < arraySize; i++)
  {
    random = getRand(0, 100);
    a[i] = random;
  }
}

void PrintArray(int a[], int arraySize)
{
  // print the array using cout
  // leave 1 space in-between each integer
  // Example: if the array holds { 1, 2, 3 }
  // This function should print: 1 2 3
  // It is ok to have a dangling space at the end
  for(int i = 0; i < arraySize; i++)
  {
    std::cout << a[i];
    if(i < arraySize - 1)
    {
      std::cout << " ";
    }
  }
}

bool Contains(int a[], int arraySize, int testVal)
{
  bool contains = false;
  // Develop a linear search algorithm that tests
  // whether the array contains testVal
  for(int i = 0; i < arraySize; i++)
  {
    if(a[i] == testVal)
    {
      contains = true;
      break;
    }
  }
  return contains;
}

void BubbleSort(int a[], int arraySize)
{
  // Develop an algorithm that performs the bubble sort
  int i = arraySize;
  while(--i >= 0)
  {
    for(int j = 0; j < i; j++)
    {
      if(a[j] > a[j + 1])
      {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}

int SumArray(int a[], int arraySize)
{
  int sum = 0;
  // Develop an algorithm that sums the entire array
  // and RETURNS the result
  for(int i = 0; i < arraySize; i++)
  {
    sum += a[i];
  }
  return sum;
}

int Largest(int a[], int arraySize)
{
  int largest = a[0];
  // Develop an algorithm to figure out the largest value
  for(int i = 0; i < arraySize; i++)
  {
    largest = (a[i] > largest) ? a[i] : largest;
  }
  return largest;
}

int Smallest(int a[], int arraySize)
{
  int smallest = a[0];
  // Develop an algorithm to figure out the smallest value
  for(int i = 0; i < arraySize; i++)
  {
    smallest = (a[i] < smallest) ? a[i] : smallest;
  }
  return smallest;
}

double Average(int a[], int arraySize)
{
  double average = 0;
  // Develop an algorithm to figure out the average INCLUDING decimals
  // You might find your previous SumArray function useful
  average = (double) SumArray(a, arraySize) / arraySize;
  return average;
}

void ReverseArray(int a[], int arraySize)
{
  // Develop an algorithm to flip the array backwards
  // You might need some temporary storage
  // I wonder if you could just copy the array into a new one
  // and then copy over the old values 1 by 1 from the back
  int reverse[arraySize];
  for(int i = 0; i < arraySize; i++)
  {
    reverse[arraySize - i - 1] = a[i];
  }
  for(int i = 0; i < arraySize; i++)
  {
    a[i] = reverse[i];
  }
}

void InitializeTemperatures(double ma[][2], int xSize)
{
  // Develop an algorithm that inserts random numbers
  // between 1 and 100 into a[i][0]
  // hint: use rand()
  // These random numbers represent a temperature in Fahrenheit
  // Then, store the Celsius equivalents into a[i][1]
  for(int i = 0; i < xSize; i++)
  {
    ma[i][0] = (double) getRand(0, 100);
    ma[i][1] = fToC(ma[i][0]);
  }
}

void PrintArray(double ma[][2], int xSize)
{
  // print the multi-dimensional array using cout
  // Each x-y pair should be printed like so: [x,y]
  // All pairs should be printed on one line with no spaces
  // Example: [x0,y0][x1,y1][x2,y2] ...
  for(int  i = 0; i < xSize; i++)
  {
    std::cout << "[" << ma[i][0] << "," << ma[i][1] << "]";
  }
}
