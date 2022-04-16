#include<bits/stdc++.h>
using namespace std;
class Secant
{
private:
    double epsilone = 0.0001;
    double function(double x){
        return x * x  + 5 * x + 6;
    }
public:
    double root;
    void solve(){
        double now , old;
        srand((int)time(0));
        now = -99 + rand() % 100;
        old = now + 1;
       
        while (true)
        {
            root = now - (function(now)*(now - old)) / (function(now) - function(old));
            if(abs((root - now) / root) < epsilone){
                break;
            }
            old = now;
            now = root;
        }
        
         cout<<"The root is: "<<root;

    }
};



int main()
{
    Secant secant;
    secant.solve();
}