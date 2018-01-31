#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>
#include <ctime>

#ifdef __cplusplus
extern "C" {
#endif

float f1(float x, int intensity);
float f2(float x, int intensity);
float f3(float x, int intensity);
float f4(float x, int intensity);

#ifdef __cplusplus
}
#endif

  
int main (int argc, char* argv[]) {

  if (argc < 6) {
    std::cerr<<"usage: "<<argv[0]<<" <functionid> <a> <b> <n> <intensity>"<<std::endl;
    return -1;
  }
  else {

    //Declare Variables
    int a, b, n, f, i;

    //auto start = std::chrono::system_clock::now();
    //Compute Integral

    //Integrate f function

    //auto end = std::chrono::system_clock::now();

    std::cout<<"Value: "<<std::endl;
 
    //std::chrono::duration<double> elapsed_seconds = end-start;
    //std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    //std::cerr<<"Time: "<< end - start <<std::endl;
 
    //std::cout << "elapsed time: " << elapsed_seconds.count();
  }
  
  return 0;
}
