/*
 * NaiveBayesDriver.cpp
 * Kevin Perez
 * 4/1/16
 *
 */
#include <iostream>
#include <math.h>
#include <vector>
#include <ctime>
#include <fstream>
#include <string>

// Forward declarations of function prototypes
//double BayesClassifierTrainer();
//double BayesClassifierTester();

int main(int argc, char *argv[])
{
  std::vector<int> value, column, row;
  std::ifstream trainFile;
  std::ifstream testFile;
  std::istream *isptr = &std::cin;
  //std::string programName = argv[0];
  if(argc == 3)
  {

    trainFile.open(argv[1]);
    testFile.open(argv[2]);
    if(trainFile.fail())
    {
      std::cout << "Cannot open: " << argv[1] << std::endl;
      return 0;
    }
    if(testFile.fail())
    {
      std::cout << "Cannot open: " << argv[2] << std::endl;
      return 0;
    }
    isptr = &trainFile;
  }
  else
  {
    std::cout << "Implementation should be: ./NaiveBayes <trainFile> <testFile>" << std::endl;
    return 0;
  }


  std::clock_t start;
  double duration;
 // BayesClassifierTrainer();
 // BayesClassifierTester();
  duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
  std::cout << "Execution time: " << duration;
  trainFile.close();
  testFile.close();
  return 0;
}

/*
double BayesClassifierTrainer()
{

}

double BayesClassifierTester()
{

}
 */