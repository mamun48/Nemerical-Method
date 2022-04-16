#include<bits/stdc++.h>
using namespace std;
class Bisection
{
private:
   double epsilone = 0.0001;
   double function(double x){
       return  x*x + 5*x + 6;
   }
public:
   double root, upper, lower;
  void solve(){
       srand((int)time(0));
       while (true)
       {
          
           lower = -100 + (rand() % 100);
           upper = rand() % 100;
          if(function(upper)*function(lower) <= 0)
           {
               break;
           }
          
       }
       if(lower > upper){
           swap(lower,upper);
       }
      
        double previous = 100;
       while (true)
       {
           root = (upper + lower) / 2;
           if(function(root) == 0) break;
           if(abs((root - previous) / root) < epsilone){
               break;
           }
           if(function(lower) * function(root) <= 0)
                upper = root;
            else lower = root;
            
           previous = root;
        
       }
       cout<<" The root is : "<<root;
       
       
   }
   

};
int main()
{
    Bisection bisection;
    bisection.solve();
}


