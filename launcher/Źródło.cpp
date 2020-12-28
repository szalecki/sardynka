#include <windows.h>
#include <iostream>
using namespace std;
int main()
{

    HINSTANCE result;
    result = ShellExecute(NULL, L"runas", L"jan.bat", NULL, NULL, SW_SHOWDEFAULT);//zamiast jan.bat będzie exe z wlasciwym programem(szyperbat)
    if ((int)result <= 32)
        std::cout << "Error!\nReturn value: " << (int)result << "\n";
    return 0;
}