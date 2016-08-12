#include "LET.h"


using namespace Eigen;
using namespace std;


int main() {

    vector<Point> location;

    int n = 64;
    int np = 10;
    int rnk = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            Point p((1.0 + 2*i)/(2*n), (1.0+2*j)/(2*n));
            location.push_back(p);

        }
    }

    scalar_t charge[n * n];

    for (int i = 0; i < n*n; i++) {
        charge[i] = 1.0/(n * n);
    }



    LET let(np , location,charge, location.size(), rnk);

    VectorXd potentialMatrix;
    potentialMatrix = VectorXd::Zero(let.N);
    let.resetPotential(let.root);
    let.downPass(let.root, potentialMatrix);

    cout << potentialMatrix << endl;

    return 0;
}