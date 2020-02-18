#include <iostream>
#include <cmath>

using namespace std;

int main(){


 double x1 = 4 , x2 = 12.25 , x3 = 0.0121;
      cout << "number                    Squareroot"<<endl;
      cout << "\n    " << x1 << "   \t   "<< sqrt (x1)
           << "\n     " << x2 << "   \t  "<< sqrt (x2)
           << "\n     " << x3 << "    \t "<< sqrt (x3) <<endl;

      cout << "\n Type a number whose squareroot is to be "
                                    " computed. ";
      cin >> x1;
      cout << " \n Number   \t  Squareroot" << endl;
      cout << "\n  "<<x1<<"  \t " <<sqrt(x1) << endl;         

      return 0;
             
}