#include<bits/stdc++.h>
using namespace std;
class FalsePosition{
private:
    double epsilone = 0.00001;
    double function(double x) {
        return x*x*x + x*x - 1;
    }
public:
    double root,upper,lower;
    void solve()
    {
        srand((int)time(0));
        while (true)
        {
           upper = rand() % 10;
           lower = -10 + rand() % 10;
           if(function(upper) * function(lower) <= 0){
               break;
           }
          
        }
         if(lower > upper){
               swap(upper,lower);
           }
           double  previous = 69;
           while (true)
           {
               root = upper - (function(upper) * (upper - lower) / (function(upper) - function(lower)));
               if(function(root) == 0) break;
               else if(function(lower) * function(root) <= 0){
                   upper = root;
               }
               else lower = root;
               if(abs((root - previous) / root) < epsilone){
                   break;
               }
               previous = root;

           }
           cout<<"The root is: "<<root;
           

        
        
    }
    


};
int main()
{
    FalsePosition  falsy;
    falsy.solve();
}