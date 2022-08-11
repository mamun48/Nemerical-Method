#include<bits/stdc++.h>
using namespace std;
double y[100][100];
class NewtonForward
{
private:
   
public:
 double u,sum;
void forwardDiff(int n){
    for(int i = 1; i<n; i++){
        for(int j = 0; j < n-i; j++){
            y[j][i] = y[j+1][i-1] - y[j][i-1];
        }
    }
}
void print(int n){
    for(int i = 0; i<n; i++)
    {
        for(int j = 0 ; j<n-i; j++)
        {
            cout<<y[i][j]<<"  ";
        }
        cout<<endl;
    }
}
    
void solve(double p, int n,double x[]){
     sum = y[0][0];
     u = (p - x[0]) / abs(x[1] - x[0]);
     for(int i = 1; i < n; i++)
     {
         sum += (u_cal(i,u)*y[0][i])/fact(i);
     }

}
double u_cal(int m, double u){
    double temp = u;
    for(int i = 1; i<m; i++)
    {
        temp = temp*(u-i); 
    }
    return temp;
}
double fact(int i){
     if(i == 0)
        return 1;
    return i * fact(i-1);
}
};



int main()
{
    int n;
    cin>>n;
    double x[n];
    for(int i = 0; i<n; i++){
        cin>>x[i];
        cin>>y[i][0];
    }
    double p;
    cin>>p;
    
    NewtonForward nf;
    nf.forwardDiff(n);
    nf.print(n);
    nf.solve(p,n,x);   
    cout<<"The ans is: "<<nf.sum<<endl; 

}