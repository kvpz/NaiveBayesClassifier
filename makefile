home    = /home/courses/cop4530p/LIB
tests   = $(home)/tests
proj    = .
includePath = -I$(proj)
CC      = g++ -std=c++11 -Wall -Wextra
#CC      = clang++ -std=c++11 -Wall -Wextra

NaiveBayes:   NaiveBayesDriver.o
	$(CC) -o NaiveBayes NaiveBayesDriver.o

NaiveBayesDriver.o: $(proj)/NaiveBayesDriver.cpp
	$(CC) $(includePath)  -c $(proj)/NaiveBayesDriver.cpp
