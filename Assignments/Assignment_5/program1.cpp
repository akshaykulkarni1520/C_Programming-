#include <iostream>
using namespace std;

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst >= iSecond && iFirst >= iThird)
    {
        cout << iFirst << " is Greatest" << endl;
    }
    else if(iSecond >= iFirst && iSecond >= iThird)
    {
        cout << iSecond << " is Greatest" << endl;
    }
    else
    {
        cout << iThird << " is Greatest" << endl;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    cout << "Enter three numbers: ";
    cin >> iValue1 >> iValue2 >> iValue3;

    FindGreatest(iValue1, iValue2, iValue3);

    return 0;
}