#include <iostream>

using namespace std;



void calculate_time(int time){
  int hours, minutes, seconds, total_seconds, formatted;
  
   hours = time/3600;
   total_seconds = time % 3600;
   minutes = total_seconds / 60;
   seconds = total_seconds % 60;
   cout << "hr: "<<hours << " mins: " <<minutes<< " seconds: "<<seconds<<endl;
   
}

int main() {
  calculate_time(3870);
  std::cout << "Hello World!\n";
}