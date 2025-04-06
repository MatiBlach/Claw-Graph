#include <iostream>
#include <vector>

using namespace std;


bool czySzpon(vector<vector<int>>macierz, int v) {
    for (int firstV = 0; firstV < v; firstV++) {
        for (int secondV = 0; secondV < v; secondV++) {
            for (int thirdV = 0; thirdV < v; thirdV++) {
                for (int fourthV = 0; fourthV < v; fourthV++) {
                    if (firstV == secondV || firstV == thirdV || firstV == fourthV || secondV == thirdV || secondV == fourthV || thirdV == fourthV) {

                    }
                    else {
                        if (macierz[firstV][secondV] == 1 && macierz[firstV][thirdV] == 1 && macierz[firstV][fourthV] == 1 && macierz[secondV][fourthV] == 0 && macierz[secondV][thirdV] == 0 && macierz[thirdV][fourthV] == 0) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}

int main()
{
    int n, w;
    char x;
    cin >> n;
    for (int f = 0; f < n; f++) {
        cin >> w;
        getchar();
        vector<vector<int>>macierz(w, vector<int>(w));
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < w; j++) {
                cin.get(x);
                if (x == '0') {
                    macierz[i][j] = 0;
                }
                else {
                    macierz[i][j] = 1;
                }
            }
        }
        cout << czySzpon(macierz, w) << endl;
    }

    return 0;
}
