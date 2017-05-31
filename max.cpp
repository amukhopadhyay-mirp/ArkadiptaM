#include<iostream>
using namespace std;
int main() {
  int a, b, c, max = -100, second_max = -1000;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c ;
  if (a > max)
max = a;
  if (b > max)
max = b;
  if (c > max)
max = c;

  cout << "Max value is: " << max << endl;
  if ((a > second_max) && (a < max))
second_max = a;
  if ((b > second_max) && (b < max))
second_max = b;
  if ((c > second_max) && (c < max))
second_max = c;
  cout << "Second max value is: " << second_max << endl;

return 0;

}
