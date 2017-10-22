#include <iostream>

// Function Prototypes=========================================================
// Do NOT change the signature of these function prototypes.
// If you do, your code will not compile with my altered main() function
// I suggest that you copy the prototypes below and then fill them in.
// ----------------------------------------------------------------------------
// Read in a line of text INCLUDING SPACES into a string.
// You may assume that the input will NOT exceed the maxLength available.
// Keep in mind that cin stops reading at a whitespace. See page 318.
void ReadString(char * c, int maxLength);

// Get the length of the string and store it in length
// Hint: How does C++ terminate a string? Look for that character!
void GetStringLength(char * c, int * length);

// PrintString - Just print the string in forward order using cout
void PrintString(char * const c);

// PrintStringBackwards - Print the string in reverse order using cout
void PrintStringBackwards(char * const c);

// Search the string for the test character. Return -1 if not found
int FindIndexOfCharacter(char * c, char testVal);

// Return a pointer to the character at the index given
char * GetValueAtIndex(char * const c, int index);

// Return the ascii integer value of the character at requested index
int GetIntegerValueOfIndex(char * c, int index);

// Print the hexadecimal value of the character at the requested index
void PrintHexValueAtIndex(char * c, int index);

// Make the entire string uppercase
void MakeUpperCase(char * c);

// Make the entire string lowercase
void MakeLowerCase(char * c);

// ============================================================================

// DO NOT REMOVE THESE COMMENTS -- comments that start with @ are actually
// commands to the assessment tool.
//@include(main)
//@addRule(commentAll)
int main()
{
  // Use these variables to test.
  // SIZE could change so make sure your code works with different sizes.
  const int SIZE = 80;
  char ca[SIZE];
  char * pc = ca;
  int fPrints = 0;
  int bPrints = 0;
  int lengthChecks = 0;
  
  // Your code below
  // =========================
  ReadString(pc, SIZE);
  std::cout << "\n=====================================\n";
  std::cout << "\nPrinting String\n";
  std::cout << "\n=====================================\n";
  PrintString(pc);
  std::cout << "\n";
  std::cout << "\n=====================================\n";
  std::cout << "\nString Length\n";
  std::cout << "\n=====================================\n";
  GetStringLength(pc, &lengthChecks);
  std::cout << "Length: " << lengthChecks << "\n";
  std::cout << "\n=====================================\n";
  std::cout << "\nPrinting String Backwards\n";
  std::cout << "\n=====================================\n";
  PrintStringBackwards(pc);
  std::cout << "\n";
  std::cout << "\n=====================================\n";
  std::cout << "\nFind Index Test\n";
  std::cout << "\n=====================================\n";
  std::cout << " Index of r: " << FindIndexOfCharacter(pc, 'r') << "\n";
  std::cout << " Index of c: " << FindIndexOfCharacter(pc, 'c') << "\n";
  std::cout << " Index of x: " << FindIndexOfCharacter(pc, 'x') << "\n";
  std::cout << "\n=====================================\n";
  std::cout << "\n GetValueAtIndex \n";
  std::cout << "\n=====================================\n";
  int index = 0;
  char oldChar = 'r';
  char newChar = 'R';
  char * cPtr;
  index = FindIndexOfCharacter(pc, oldChar);
  std::cout << oldChar << "-->" << newChar << "\n";
  cPtr = GetValueAtIndex(pc, index);
  *cPtr = newChar;
  PrintString(pc);
  std::cout << std::endl;
  std::cout << "\n=====================================\n";
  std::cout << "\n GetIntegerValueOfIndex \n";
  std::cout << "\n=====================================\n";
  int length = 0;
  GetStringLength(pc, &length);
  for(int i = 0; i < length; ++i)
  {
    int i_ascii = GetIntegerValueOfIndex(pc, i);
    std::cout << pc[i] << "=" << i_ascii << std::endl;
  }
  std::cout << std::endl;
  std::cout << "\n=====================================\n";
  std::cout << "\n HEX \n";
  std::cout << "\n=====================================\n";
  length = 0;
  GetStringLength(pc, &length);
  for(int i = 0; i < length; ++i)
  {
    std::cout << "HEX=";
    PrintHexValueAtIndex(pc, i);
    std::cout << std::endl;
  }
  std::cout << std::endl;
  std::cout << "\n=====================================\n";
  std::cout << "\n Uppercase \n";
  std::cout << "\n=====================================\n";
  MakeUpperCase(pc);
  PrintString(pc);
  std::cout << std::endl;
  std::cout << "\n=====================================\n";
  std::cout << "\n Lowercase \n";
  std::cout << "\n=====================================\n";
  MakeLowerCase(pc);
  PrintString(pc);
  std::cout << std::endl;
  // =========================
  // Your code above
  
  std::cout << "Press ENTER";
  std::cin.get();
  return 0;
}
// DO NOT REMOVE THESE COMMENTS -- these comments are actually
// commands to the assessment tool.
//@removeRule(commentAll)

/**
 * Function to read from input including white spaces.
 */
void ReadString(char * c, int maxLength)
{
  std::cout << "Enter a string less than " << maxLength << " characters." << std::endl;
  // Your code here
  // ==============================
  char l; // Character holder
  while((l = std::cin.get()) != '\n') // Keep getting characters from input until we get new line.
  {
    *c++ = l; // Assign character to pointer address and then increment by one.
  }
  // ==============================
}

/**
 * Function to get a strings length given the address of its head.
 */
void GetStringLength(char * c, int * length)
{
  *length = 0; // Assign Length to zero to start
  while(*c != '\0') // Loop till we see string end character
  {
    ++*length; // Increment length
    ++c; // Increment pointer address
  }
}

/**
 * Function to print a String given the address for the head.
 */
void PrintString(char * const c)
{
  char * d = c; // Creat pointer
  while(*d != '\0') // Loop while not string terminator
  {
    std::cout << *d; // Print value at pointer reference
    d++; // Increment pointer
  }
}

/**
 * Function to print string backwards.
 */
void PrintStringBackwards(char * const c)
{
  char * d = c; // Create pointer
  while(*d != '\0') // Determine where String ends
  {
    d++; // Get d to string terminator
  }
  // Loop back to starting point.
  while (d != c)
  {
    std::cout << *d; // print character
    --d; // decrement back towards starting point.
  }
  std::cout << *c; // We are one off so print start char
}

/**
 * Function to print the index of character given string pointer
 */
int FindIndexOfCharacter(char * c, char testVal)
{
  int result = -1; // Default result if not found is -1
  int index = 0; // Index to set to if we find the testVal
  while(*c != '\0') // Loop till we find end of string
  {
    if(*c == testVal) // If we find test value
    {
      result = index; // update result to index we found it at.
      break; // break out of forloop to decrease complexity.
    }
    ++c; // we havent found test value look at next pointer
    ++index; // we havent found test value so increment index
  }
  return result;
}

/**
 * Function to get pointer value for an index.
 */
char * GetValueAtIndex(char * const c, int index)
{
  char * d = c; // Create non const value
  return d + index; // Just add index amount to it
}

/**
 * Function to return the integer value for a char at an index
 */
int GetIntegerValueOfIndex(char * c, int index)
{
  char * d = GetValueAtIndex(c, index); // Use Above function to get pointer at index
  return int(*d); // Type cast char value at pointer to int to get integer value
}

/**
 * Function to print hex value of a char in a string
 */
void PrintHexValueAtIndex(char * c, int index)
{
  int decimal = GetIntegerValueOfIndex(c, index); // Get decimal int value at that index
  std::cout << std::hex << decimal; // Use Standard lib to convert to hex value
}

/**
 * Function to make String all caps
 */
void MakeUpperCase(char * c)
{
  // Constant for converting between upper and lower case.
  const char lowerUpperDifference = 'a' - 'A';
  // Index for getting decimal values
  while(*c != '\0') // Determine where String ends
  {
    if('a' <= *c && *c <= 'z') // is lowercase
    {
      *c = (*c - lowerUpperDifference); // substract amount needed to lowercase
    }
    c++; // Get c to string terminator
  }
}

/**
 * Function to make string lower case
 */
void MakeLowerCase(char * c)
{
  // Constant for converting between upper and lower case.
  const char lowerUpperDifference = 'a' - 'A';
  // Index for getting decimal values
  while(*c != '\0') // Determine where String ends
  {
    if('A' <= *c && *c <= 'Z') // is uppercase
    {
      *c = (*c + lowerUpperDifference); // add amount needed to uppercase
    }
    c++; // Get c to string terminator
  }
}
