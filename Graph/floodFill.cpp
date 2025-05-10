class Solution {
public:

    void fillColor(vector<vector<int>>& image, int x, int y, int color, int oColor, int m, int n) {
        if(x<0 || x>=m || y<0 || y>=n) return;

        if(image[x][y] != oColor) return;

        image[x][y] = color;

        fillColor(image, x-1, y, color, oColor, m, n); // top
        fillColor(image, x+1, y, color, oColor, m, n); // bottom
        fillColor(image, x, y-1, color, oColor, m, n); // left
        fillColor(image, x, y+1, color, oColor, m, n); // right
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oColor = image[sr][sc];
        int m = image.size();
        int n = image[0].size();
        if(oColor != color)
            fillColor(image, sr, sc, color, oColor, m, n);
        return image;
    }
};