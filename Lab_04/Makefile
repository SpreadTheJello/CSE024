test: lab4.h lab4test.cpp
	g++ -w -std=c++11 -I../../ -o test lab4test.cpp

test_all: lab4.h  find_max.cpp find_max_pos.cpp search.cpp running_sum.cpp trimmed_average.cpp random_fill.cpp sum_unique.cpp autological.cpp
	g++ -w -std=c++11 -I../../ -o test1 find_max.cpp
	g++ -w -std=c++11 -I../../ -o test2 find_max_pos.cpp
	g++ -w -std=c++11 -I../../ -o test3 search.cpp
	g++ -w -std=c++11 -I../../ -o test4 running_sum.cpp
	g++ -w -std=c++11 -I../../ -o test5 trimmed_average.cpp
	g++ -w -std=c++11 -I../../ -o test6 random_fill.cpp   
	g++ -w -std=c++11 -I../../ -o test7 sum_unique.cpp
	g++ -w -std=c++11 -I../../ -o test8 autological.cpp



test1: lab4.h find_max.cpp
	g++ -w -std=c++11 -I../../ -o test1 find_max.cpp

test2: lab4.h find_max_pos.cpp
	g++ -w -std=c++11 -I../../ -o test2 find_max_pos.cpp

test3: lab4.h search.cpp
	g++ -w -std=c++11 -I../../ -o test3 search.cpp

test4: lab4.h running_sum.cpp
	g++ -w -std=c++11 -I../../ -o test4 running_sum.cpp

test5: lab4.h trimmed_average.cpp
	g++ -w -std=c++11 -I../../ -o test5 trimmed_average.cpp

test6: lab4.h random_fill.cpp
	g++ -w -std=c++11 -I../../ -o test6 random_fill.cpp   

test7: lab4.h sum_unique.cpp
	g++ -w -std=c++11 -I../../ -o test7 sum_unique.cpp

test8: lab4.h autological.cpp
	g++ -w -std=c++11 -I../../ -o test8 autological.cpp

clean:
	rm -rf test test_all test1 test2 test3 test4 test5 test6 test7 test8
