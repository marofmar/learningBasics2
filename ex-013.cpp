#include <iostream>

using namespace std; 

namespace yujin 
{
    int year = 2020;
    void CentralArea()
    {
        //cout <<"Seoul"<< endl;
        cout<<"Seoul"<<endl;
    }
}

namespace mads
{
    int year = 2021;
    void CentralArea()
    {
        cout <<"Sinchon"<< endl;
    }
}

using namespace yujin;
using namespace mads;

int main()
{
    cout <<"Yujin's central area: ";
    yujin::CentralArea();
    cout <<"Mads will move to SF in "<<mads::year<<endl; 

    return 0; 
}