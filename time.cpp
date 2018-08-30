#include <iostream>
#include <ctime>

using namespace std;
string timeutc(time_t now )
{
   char* dt = ctime(&now);
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   std::string str(dt);
   return str;
}
int main() {
    time_t now=time(0);
    cout<<timeutc(now);
}
