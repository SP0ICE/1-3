#include <iostream>
class Road {
public:
double length;
int width;
};
int main() {
using namespace std;
Road road;
FILE *fIn;
fIn=fopen("input.txt", "r");
fscanf(fIn, "%lf", &road.length);
fscanf(fIn, "%d", &road.width);
fclose(fIn);
cout <<"road.length "<<road.length<<endl;
cout <<"road.width "<<road.width<<endl;
return 0;
}
