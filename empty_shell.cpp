/*
           Nothing is absolute.
     This is the only absolute truth.
*/

/*
       !!! Paka_Pepe_Pakhi_Khai !!!
*/
#include <iostream>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <set>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <iterator>
#include <map>
#include <iomanip>

using namespace std;

void solve()
{
    double n, sum=0.0;

    for(int i=1; i<=12; i++){
        cin>>n;
        sum+=n;
    }

    cout<<fixed<<setprecision(2)<<"$"<<sum/12.0<<endl;
}

int main()

{
    solve();

    return 0;
}
