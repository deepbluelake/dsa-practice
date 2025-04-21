#include <bits/stdc++.h>
using namespace std;

int main() {
    int orangeContainingItems;
    float volumeFraction[100], portion, orangeVolumeInFinal;
    float totalFinalVolume, volumeFractionInFinal;

    cin >> orangeContainingItems;

    for (int i = 0; i < orangeContainingItems; i++) {
        cin >> volumeFraction[i];
        volumeFraction[i] = volumeFraction[i] / 100;
    }

    float sumOfElements = 0;
    for (int i = 0; i < orangeContainingItems; i++) {
        sumOfElements += volumeFraction[i];
    }

    volumeFractionInFinal = (sumOfElements / orangeContainingItems) * 100;

    cout << fixed << setprecision(12) << volumeFractionInFinal << endl;

    return 0;
}
