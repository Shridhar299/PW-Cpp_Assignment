#include <iostream>
using namespace std;
int main() {
   int total_pupils = 45;
   int boys = 25;
   int girls = total_pupils - boys;
   int a_students = 0.8 * total_pupils; // 80% of students received grade "A"
   int a_boys = 17;
   int a_girls = a_students - a_boys;

   // Calculate how many girls received grade "A"
   int girls_a = a_girls > 0 ? a_girls : 0;

   cout << "Number of girls who received grade \"A\": " << girls_a << endl;

   return 0;
}

