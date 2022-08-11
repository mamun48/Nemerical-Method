#include<bits/stdc++.h>
using namespace std;
double x[100],y[100];
class LagrangeInterpolation
{
private:
    
    
public:
   double solve(int n, double value){
       double ans = 0;
       for(int i = 0; i < n; i++){
           double var1 = 1,var2 = 1; 
           for(int j = 0; j < n; j++){
               if(j != i){
                   var1 *= (value - x[j]);
                   var2 *= (x[i] - x[j]);                
               }             
           }
          
           ans += (var1/var2)*y[i];         
       }
       return ans;
   }
};



int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }
    double value;
    cin>>value;
    LagrangeInterpolation lg;
    cout<<"The ans is: "<<lg.solve(n,value);
}