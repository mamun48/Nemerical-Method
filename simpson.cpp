#include<bits/stdc++.h>
using namespace std;
class Simpson
{
private:
    /* data */
public:
    double function(double x){
        return 1 / (1 + x*x);
    }
    double solve(double a, double b, double n){
        double h = (b - a)/n;
        double ans = 0;
        ans = function(a) + function(b);
        for(int i = 1; i<n; i++){
            if(i%2 == 0){
                ans += 2*function(a + i*h);
            }
            else{
                ans += 4*function(a + i*h);
            }
        }
        ans *= h/3;
        return ans;
    }
};



int main()
{
    double a,b;
    cin>>a>>b;
    double n;
    cin>>n;
    Simpson simpson;
    cout<<simpson.solve(a,b,n);
}