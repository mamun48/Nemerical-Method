#include<bits/stdc++.h>
using namespace std;
class Trapizoidal
{
private:
    /* data */
public:
   double solve(double a,double b,double n){
        double ans = 0;
        double h = (b-a)/n;
       ans = function(a) + function(b);
       for(int i = 1; i< n; i++){
           ans += 2*function(a + i*h);
       }
       return ans*(h/2);
      

   }
   double function(double x){
       return 1/(1 + x*x);
   }
};



int main()
{
    double a,b;
    cin>>a>>b;
    double n;
    cin>>n;
    Trapizoidal tr;
    cout<<tr.solve(a,b,n);
}