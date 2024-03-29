#include <iostream>
#include <vector>
#include <algorithm>

bool regula( int a, int b )
{
     int ca=a , cb=b;
    int mina=a%10, minb=b%10;
    int maxa=a%10, maxb=b%10;
    while( ca ){

        if( mina > ca%10)mina=ca%10;
        if( maxa < ca%10)maxa=ca%10;
        ca=(ca-ca%10)/10;

    }
       while( cb ){

        if( minb > cb%10)minb=cb%10;
        if( maxb < cb%10)maxb=cb%10;
        cb=(cb-cb%10)/10;

    }

    if( mina == minb && maxa==maxb)return a<b;
    else if( mina==minb)return maxa<maxb;
         else return mina<minb;



}

int main(){

    int n;
    std::vector<int>numere;
    while(std::cin>>n){
        numere.push_back(n);
    }

    sort( numere.begin() , numere.end() , regula);

    for( auto x:numere)std::cout<<x<<" ";

    return 0;
}