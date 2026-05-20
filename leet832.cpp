// Flipping the image

#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > flipAndInvertImage(vector<vector<int> > &image) {
    for(int i = 0; i < image.size(); ++i) {
        reverse(image[i].begin(), image[i].end());
        for(int j = 0; j < image.size(); ++j) {
            image[i][j] = image[i][j] ^ 1;
        }
    }
    return image;
}
int main() {
    vector<vector<int> > image = {{1,1,0}, {1,0,1}, {0,0,0}};
    vector<vector<int> > r = flipAndInvertImage(image);
    for(int i = 0; i < image.size(); ++i) {
        for(int j = 0; j < image.size(); ++j) {
            cout << image[i][j] << " ";
        }
        cout << "\n";
    }
}