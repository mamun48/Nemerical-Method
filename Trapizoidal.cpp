#include<bits/stdc++.h>
using namespace std;
class Trapizoidal
{
private:    
   double a,b,n;
public:
    Trapizoidal(double a, double b, double n){
        this->a = a;
        this->b = b;
        this->n = n;

    }
   double solve(){
        double ans = 0;
        double h = (b-a)/n;
        ans = function(a) + function(b);
       for(int i = 1; i < n; i++){
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
    Trapizoidal tr(a,b,n);
    cout<<tr.solve();
}