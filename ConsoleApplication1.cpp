#include <iostream>

using namespace std;

string treeArray(string str)
{
    string defangIP = "";
    
    for (char c : str)
        (c == '.') ? defangIP += "[.]" :
        defangIP += c;
    return defangIP;
}

int main()
{
    string str = "255.100.50.0";
    cout << treeArray(str) << "\n\n";

	return 0;
}