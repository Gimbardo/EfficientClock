#include<iostream>
#include<time.h>

using namespace std;

int main()
{

    const char* printable = "one second has passed\n";
    srand(time(NULL));
    int timeprec = rand();
    while(true)
    {
        for(int i=0;i<1000;i++)
            int s=i+1;
        srand(time(NULL));
        if(timeprec!=rand())
        {
            srand(time(NULL));
            timeprec=rand();
            cout<<printable;
        }
        srand(time(NULL));
        timeprec = rand();

        
    }
}