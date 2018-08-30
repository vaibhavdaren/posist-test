#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <iomanip> // setprecision
#include <sstream> // stringstream
#include <string>
string hashval(string name,float value,int id)
{
    stringstream stream,ss;
	stream << fixed << setprecision(2) << value;
	string valinstr = stream.str();
    ss << id;
    string idstr = ss.str();
	string hash=idstr+valinstr+name;
    return hash;
}
int main()
{
    int id=123;
	float value = 15.659265359;
	string name="vaibhav";
    cout <<hashval(name,value,id) << endl;
	return 0;
}
