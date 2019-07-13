#include <iostream>
#include <boost/thread.hpp>

using namespace std;


void threadA(){
	for(int i = 0; i < 10; i++){
		printf("i %d", i);
	}
}

void threadB() {
  for(int i = 0; i != 100; ++i)
    cout << "World! " << i << endl;
}


void main(){

	boost::thread th(&threadA);
	boost::thread th2(&threadB);

	

	th.join();
	th2.join();
}
