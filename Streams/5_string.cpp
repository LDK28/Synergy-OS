#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main() {
    string cordinates("(54.847830, 83.094392)");

    stringstream ss(cordinates);
    double lat, lon;
    ss.ignore(1);  // skip '('
    ss >> lat;
    ss.ignore(2);  // skip ", "
    ss >> lon;
    cout << lat << ", " << lon << endl;

    return 0;
}
